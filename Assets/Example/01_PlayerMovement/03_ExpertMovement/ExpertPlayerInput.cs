namespace Example.ExpertMovement
{
	using System;
	using UnityEngine;
	using UnityEngine.InputSystem;
	using Fusion;
	using Fusion.Addons.KCC;

	/// <summary>
	/// Tracks player input for fixed and render updates.
	/// </summary>
	[DefaultExecutionOrder(-10)]
	public sealed class ExpertPlayerInput : NetworkBehaviour, IBeforeAllTicks, IBeforeTick, IAfterTick
	{
		// PUBLIC MEMBERS

		/// <summary>
		/// Holds input for fixed update.
		/// </summary>
		public ExpertInput FixedInput { get { CheckFixedAccess(false); return _fixedInput; } }

		/// <summary>
		/// Holds input for current frame render update.
		/// </summary>
		public ExpertInput RenderInput { get { CheckRenderAccess(false); return _renderInput; } }

		/// <summary>
		/// Holds accumulated inputs from all render frames since last fixed update. Used when Fusion input poll is triggered.
		/// </summary>
		public ExpertInput AccumulatedInput { get { CheckRenderAccess(false); return _accumulatedInput; } }

		/// <summary>
		/// Indicates the input is ignored after resuming app to prevent glitches until the simulation is stable.
		/// </summary>
		public bool IsIgnoringInput => _ignoreTime > 0.0f;

		/// <summary>
		/// Set custom look responsivity (mouse input smoothing).
		/// </summary>
		public float LookResponsivity { get { return _lookResponsivity; } set { _lookResponsivity = value; } }

		// PRIVATE MEMBERS

		[SerializeField][Tooltip("Mouse delta multiplier.")]
		private Vector2 _standaloneLookSensitivity = Vector2.one;
		[SerializeField][Tooltip("Touch delta multiplier.")]
		private Vector2 _mobileLookSensitivity = Vector2.one;
		[SerializeField][Tooltip("Gamepad stick multiplier.")]
		private Vector2 _gamepadLookSensitivity = Vector2.one;
		[SerializeField][Range(0.0f, 0.1f)][Tooltip("Look rotation delta for a render frame is calculated as average from all frames within responsivity time.")]
		private float   _lookResponsivity = 0.020f;
		[SerializeField][Range(0.0f, 1.0f)][Tooltip("How long the last known input is repeated before using default.")]
		private float   _maxRepeatTime = 0.25f;
		[SerializeField][Range(0.0f, 5.0f)][Tooltip("Ignores input for [X] seconds after resuming app.")]
		private float   _ignoreInputOnPause = 2.0f;
		[SerializeField][Range(0.0f, 5.0f)][Tooltip("Maximum extension of ignore input window if a simulation instability is detected after resuming app.")]
		private float   _maxIgnoreInputExtension = 5.0f;
		[SerializeField][Tooltip("Outputs missing inputs to console.")]
		private bool    _logMissingInputs;

		// We need to store current input to compare against previous input (to track actions activation/deactivation). It is also reused if the input for current tick is not available.
		// This is not needed on proxies and will be replicated to input authority only.
		[Networked]
		private ExpertInput   _fixedInput { get; set; }

		private ExpertInput   _renderInput;
		private ExpertInput   _accumulatedInput;
		private ExpertInput   _previousFixedInput;
		private ExpertInput   _previousRenderInput;
		private Vector2       _lastPartialMoveDirection;
		private float         _lastPartialMoveDirectionSize;
		private Vector2       _accumulatedMoveDirection;
		private float         _accumulatedMoveDirectionSize;
		private bool          _resetAccumulatedInput;
		private bool          _delayAccumulatedActions;
		private bool          _restoreAccumulatedActions;
		private SmoothVector2 _smoothLookRotationDelta = new SmoothVector2(256);
		private InputTouches  _inputTouches = new InputTouches();
		private InputTouch    _moveTouch;
		private InputTouch    _lookTouch;
		private bool          _jumpTouch;
		private float         _jumpTime;
		private float         _repeatTime;
		private float         _ignoreTime;
		private float         _ignoreExtension;
		private float         _ignoreRenderTime;
		private float         _lastRenderAlpha;
		private float         _inputPollDeltaTime;
		private int           _lastInputPollFrame;
		private int           _processInputFrame;
		private int           _missingInputsInRow;
		private int           _missingInputsTotal;
		private int           _logMissingInputFromTick;

		// PUBLIC METHODS

		/// <summary>
		/// Check if an action is active in current input. FUN/Render input is resolved automatically.
		/// </summary>
		public bool HasActive(EExpertInputAction action)
		{
			if (Runner.Stage != default)
			{
				CheckFixedAccess(false);
				return action.IsActive(_fixedInput);
			}
			else
			{
				CheckRenderAccess(false);
				return action.IsActive(_renderInput);
			}
		}

		/// <summary>
		/// Check if an action was activated in current input.
		/// In FUN this method compares current fixed input agains previous fixed input.
		/// In Render this method compares current render input against previous render input OR current fixed input (first Render call after FUN).
		/// </summary>
		public bool WasActivated(EExpertInputAction action)
		{
			if (Runner.Stage != default)
			{
				CheckFixedAccess(false);
				return action.WasActivated(_fixedInput, _previousFixedInput);
			}
			else
			{
				CheckRenderAccess(false);
				return action.WasActivated(_renderInput, _previousRenderInput);
			}
		}

		/// <summary>
		/// Check if an action was deactivated in current input.
		/// In FUN this method compares current fixed input agains previous fixed input.
		/// In Render this method compares current render input against previous render input OR current fixed input (first Render call after FUN).
		/// </summary>
		public bool WasDeactivated(EExpertInputAction action)
		{
			if (Runner.Stage != default)
			{
				CheckFixedAccess(false);
				return action.WasDeactivated(_fixedInput, _previousFixedInput);
			}
			else
			{
				CheckRenderAccess(false);
				return action.WasDeactivated(_renderInput, _previousRenderInput);
			}
		}

		/// <summary>
		/// Updates fixed input. Use after manipulating with fixed input outside.
		/// </summary>
		/// <param name="fixedInput">Input used in fixed update.</param>
		/// <param name="setPreviousInputs">Updates previous fixed input and previous render input.</param>
		public void SetFixedInput(ExpertInput fixedInput, bool setPreviousInputs)
		{
			CheckFixedAccess(true);

			_fixedInput = fixedInput;

			if (setPreviousInputs == true)
			{
				_previousFixedInput  = fixedInput;
				_previousRenderInput = fixedInput;
			}
		}

		/// <summary>
		/// Updates render input. Use after manipulating with render input outside.
		/// </summary>
		/// <param name="renderInput">Input used in render update.</param>
		/// <param name="setPreviousInput">Updates previous render input.</param>
		public void SetRenderInput(ExpertInput renderInput, bool setPreviousInput)
		{
			CheckRenderAccess(false);

			_renderInput = renderInput;

			if (setPreviousInput == true)
			{
				_previousRenderInput = renderInput;
			}
		}

		/// <summary>
		/// Updates accumulated input. Use after manipulating with render/accumulated input outside.
		/// </summary>
		/// <param name="accumulatedInput">Accumulated input from multiple render updates.</param>
		public void SetAccumulatedInput(ExpertInput accumulatedInput)
		{
			CheckRenderAccess(false);

			_accumulatedInput = accumulatedInput;
		}

		// NetworkBehaviour INTERFACE

		public override void Spawned()
		{
			// Reset to default state.
			_fixedInput                = default;
			_renderInput               = default;
			_accumulatedInput          = default;
			_previousFixedInput        = default;
			_previousRenderInput       = default;
			_resetAccumulatedInput     = default;
			_delayAccumulatedActions   = default;
			_restoreAccumulatedActions = default;
			_moveTouch                 = default;
			_lookTouch                 = default;
			_repeatTime                = default;
			_ignoreTime                = default;
			_ignoreExtension           = default;
			_ignoreRenderTime          = default;
			_lastRenderAlpha           = default;
			_inputPollDeltaTime        = default;
			_lastInputPollFrame        = default;
			_processInputFrame         = default;
			_missingInputsTotal        = default;
			_missingInputsInRow        = default;

			// Wait few seconds before the connection is stable to start tracking missing inputs.
			_logMissingInputFromTick = Runner.Tick + TickRate.Resolve(Runner.Config.Simulation.TickRateSelection).Client * 5;

			_inputTouches.TouchStarted  = OnTouchStarted;
			_inputTouches.TouchFinished = OnTouchFinished;

			if (HasInputAuthority == true)
			{
				// Register local player input polling.
				NetworkEvents networkEvents = Runner.GetComponent<NetworkEvents>();
				networkEvents.OnInput.RemoveListener(OnInput);
				networkEvents.OnInput.AddListener(OnInput);

				if (Application.isMobilePlatform == false || Application.isEditor == true)
				{
					// Hide cursor
					Cursor.lockState = CursorLockMode.Locked;
					Cursor.visible   = false;
				}
			}
		}

		public override void Despawned(NetworkRunner runner, bool hasState)
		{
			_inputTouches.TouchStarted  = null;
			_inputTouches.TouchFinished = null;

			_smoothLookRotationDelta.ClearValues();

			if (runner == null)
				return;

			NetworkEvents networkEvents = runner.GetComponent<NetworkEvents>();
			if (networkEvents != null)
			{
				// Unregister local player input polling.
				networkEvents.OnInput.RemoveListener(OnInput);
			}
		}

		public override void Render()
		{
			ProcessFrameInput(false);

			if (IsIgnoringInput == true)
			{
				float renderTime = Runner.LocalRenderTime;
				if (renderTime < _ignoreRenderTime)
				{
					// Current render time is lower than previous render time, still adjusting clock after resuming app...
					TryExtendIgnoreInputWindow($"Negative render delta time ({(renderTime - _ignoreRenderTime):F3}s)");
				}

				_ignoreRenderTime = renderTime;
			}

			_lastRenderAlpha = Runner.LocalAlpha;
		}

		protected override bool ReplicateTo(PlayerRef player)
		{
			// Only local player needs networked properties (current input).
			// This saves network traffic by not synchronizing networked properties to other clients except local player.
			return player == Object.InputAuthority;
		}

		// IBeforeAllTicks INTERFACE

		void IBeforeAllTicks.BeforeAllTicks(bool resimulation, int tickCount)
		{
			if (resimulation == false && tickCount >= 10 && IsIgnoringInput == true)
			{
				TryExtendIgnoreInputWindow($"Too many forward ticks ({tickCount})");
			}
		}

		/// <summary>
		/// 2. Read input from Fusion. On input authority the FixedInput will match AccumulatedInput.
		/// </summary>
		void IBeforeTick.BeforeTick()
		{
			if (Object == null)
				return;

			Trace(nameof(IBeforeTick.BeforeTick));

			// Store previous fixed input as a base. This will be compared agaisnt new fixed input.
			_previousFixedInput = _fixedInput;

			// Clear all properties which should not propagate from last known input in case of missing input. As an example, following lines will reset look rotation delta.
			// This results to the player not being incorrectly rotated (by using rotation from last known input) in case of missing input on state authority, followed by a correction on the input authority.
			/*
			ExpertInput fixedInput = _fixedInput;
			fixedInput.LookRotationDelta = default;
			_fixedInput = fixedInput;
			*/

			if (Object.InputAuthority == PlayerRef.None)
				return;

			// If this fails, fallback (last known) input will be used as current.
			if (Runner.TryGetInputForPlayer(Object.InputAuthority, out ExpertInput input) == true)
			{
				// New input received, we can store it.
				_fixedInput = input;

				if (Runner.Stage == SimulationStages.Forward)
				{
					// Reset statistics.
					_missingInputsInRow = 0;

					// Reset threshold for repeating inputs.
					_repeatTime = 0.0f;
				}
			}
			else
			{
				if (_ignoreTime > 0.0f)
				{
					// Don't repeat last known input if the ignore time is active (after app resume).
					_fixedInput = default;
				}
				else
				{
					if (Runner.Stage == SimulationStages.Forward)
					{
						// Update statistics.
						++_missingInputsInRow;
						++_missingInputsTotal;

						// Update threshold for repeating inputs.
						_repeatTime += Runner.DeltaTime;

						if (_logMissingInputs == true && Runner.Tick >= _logMissingInputFromTick)
						{
							Debug.LogWarning($"Missing input for {Object.InputAuthority} {Runner.Tick}. In Row: {_missingInputsInRow} Total: {_missingInputsTotal} Repeating Last Known Input: {_repeatTime <= _maxRepeatTime}", gameObject);
						}
					}

					if (_repeatTime > _maxRepeatTime)
					{
						_fixedInput = default;
					}
				}
			}
		}

		/// <summary>
		/// 3. Update base inputs.
		/// </summary>
		void IAfterTick.AfterTick()
		{
			// The current fixed input will be used as a base to first Render after FixedUpdateNetwork.
			_previousRenderInput = _fixedInput;
		}

		// MonoBehaviour INTERFACE

		private void LateUpdate()
		{
			ProcessFrameInput(false);

			// Update ignore time, skip if delta is too big (typically after resuming app).
			if (_ignoreTime > 0.0f)
			{
				float deltaTime = Time.unscaledDeltaTime;
				if (deltaTime < 1.0f)
				{
					_ignoreTime -= deltaTime;
				}
			}
		}

		private void OnApplicationFocus(bool hasFocus)
		{
			if (Application.isMobilePlatform == false)
				return;

			ActivateIgnoreInputWindow();
		}

		// PRIVATE METHODS

		private void ActivateIgnoreInputWindow()
		{
			if (HasInputAuthority == false)
				return;

			// Reset inputs on application pause/resume.
			_renderInput      = default;
			_accumulatedInput = default;

			// Set timeout for ignoring input (polling will be ignored during this period).
			_ignoreTime = _ignoreInputOnPause;

			// Reset ignore input window extension.
			_ignoreExtension = _maxIgnoreInputExtension;

			Debug.LogWarning($"Activating {_ignoreTime:F3}s input ignore window with {_ignoreExtension:F3}s extension.", gameObject);
		}

		private void TryExtendIgnoreInputWindow(string reason)
		{
			float refillTime = 1.0f;

			if (_ignoreExtension <= 0.0f || _ignoreTime <= 0.0f || _ignoreTime > refillTime)
				return;
			if (HasInputAuthority == false)
				return;

			// Detected simulation instability after resuming app, we will extend ignore input window to prevent glitches.

			float consumeExtension = refillTime - _ignoreTime;
			if (consumeExtension > _ignoreExtension)
			{
				consumeExtension = _ignoreExtension;
			}

			_ignoreTime      += consumeExtension;
			_ignoreExtension -= consumeExtension;

			if (consumeExtension > 0.0f)
			{
				Debug.LogWarning($"Detected simulation instability after resuming app. Extending ignore input window by {consumeExtension:F3}s to {_ignoreTime:F3}s with remaining extension {_ignoreExtension:F3}s. Reason:{reason}", gameObject);
			}
		}

		/// <summary>
		/// 1. Push accumulated input and reset properties, can be executed multiple times within single Unity frame if the rendering speed is slower than Fusion simulation (or there is a performance spike).
		/// </summary>
		private void OnInput(NetworkRunner runner, NetworkInput networkInput)
		{
			Trace(nameof(OnInput));

			int frame = Time.frameCount;

			bool isFirstPoll = _lastInputPollFrame != frame;
			if (isFirstPoll == true)
			{
				_lastInputPollFrame = frame;
				_inputPollDeltaTime = Time.unscaledDeltaTime;
			}

			ExpertInput previousAccumulatedInput = _accumulatedInput;

			ProcessFrameInput(true);

			ExpertInput polledInput = _accumulatedInput;

			// Input is polled for single fixed update, but at this time we don't know how many times in a row OnInput() will be executed.
			// This is the reason for having a reset flag instead of resetting input immediately, otherwise we could lose input for next fixed updates (for example move direction).
			_resetAccumulatedInput = true;

			if (_inputPollDeltaTime > 0.0001f)
			{
				// At this moment the accumulated input has render input already accumulated.
				// This "reverts" the accumulated input to a state before last render input accumulation.
				_accumulatedInput.LookRotationDelta -= _renderInput.LookRotationDelta;

				// In the first input poll (within single Unity frame) we want to accumulate only "missing" part to align timing with fixed tick (last Runner.LocalAlpha => 1.0).
				// All subsequent input polls return remaining input which is not yet consumed, but again within alignment limits of fixed ticks (0.0 => 1.0 = current => next).
				float baseRenderAlpha = isFirstPoll == true ? _lastRenderAlpha : 0.0f;

				// Here we calculate delta time between last render time (or last input poll simulation time) and time of the pending simulation tick.
				float pendingTickAlignedDeltaTime = (1.0f - baseRenderAlpha) * Runner.DeltaTime;

				// The full render input look rotation delta is not aligned with ticks, we need to remove delta which is ahead of fixed tick time.
				Vector2 pendingTickAlignedLookRotationDelta = _renderInput.LookRotationDelta * Mathf.Clamp01(pendingTickAlignedDeltaTime / _inputPollDeltaTime);

				// Accumulate look rotation delta up to aligned tick time.
				_accumulatedInput.LookRotationDelta += pendingTickAlignedLookRotationDelta;

				// Consume same look rotation delta from render input.
				_renderInput.LookRotationDelta -= pendingTickAlignedLookRotationDelta;

				// Decrease remaining input poll delta time by the partial delta time consumed by accumulation.
				_inputPollDeltaTime -= pendingTickAlignedDeltaTime;

				// Update input look rotation to match accumulated look rotation delta.
				polledInput.LookRotationDelta = _accumulatedInput.LookRotationDelta;

				// Accumulated input is consumed above and should equal to remaining render input. This will be fully/partially consumed by following OnInput call(s) or next frame.
				_accumulatedInput.LookRotationDelta = _renderInput.LookRotationDelta;
			}
			else
			{
				// Input poll delta time is too small, we consume whole input.
				_accumulatedInput.LookRotationDelta = default;
				_renderInput.LookRotationDelta      = default;
			}

			if (_delayAccumulatedActions == true)
			{
				// An action was triggered while processing device input from OnInput callback.
				// Let's consume the delay.
				_delayAccumulatedActions = false;

				// Accumulated input is pending reset. We need to prevent reseting actions once.
				_restoreAccumulatedActions = true;

				float deltaTime = Runner.DeltaTime;

				// Recalculating render alpha to match next Render() execution time.
				_renderInput.RenderAlpha = ((_lastRenderAlpha * deltaTime + Time.unscaledDeltaTime) % deltaTime) / deltaTime;

				// Accumulated actions stays the same for now, only updating render alpha.
				_accumulatedInput.RenderAlpha = _renderInput.RenderAlpha;

				// Use previous accumulated input actions and render delta. Delayed actions didn't happen yet.
				polledInput.Actions     = previousAccumulatedInput.Actions;
				polledInput.RenderAlpha = previousAccumulatedInput.RenderAlpha;
			}
			else
			{
				// Second OnInput callback consumes delayed actions, we don't need to restore them.
				_restoreAccumulatedActions = false;
			}

			// Don't set the input if the ignore time is active.
			if (_ignoreTime > 0.0f)
				return;

			networkInput.Set(polledInput);
		}

		private void ProcessFrameInput(bool isInputPoll)
		{
			// Collect input from devices.
			// Can be executed multiple times between FixedUpdateNetwork() calls because of faster rendering speed.
			// However the input is processed only once per frame.

			int currentFrame = Time.frameCount;
			if (currentFrame == _processInputFrame)
				return;

			_processInputFrame = currentFrame;

			// Store last render input as a base to current render input.
			_previousRenderInput = _renderInput;

			// Reset input for current frame to default.
			_renderInput = default;

			// Only input authority is tracking render input.
			if (HasInputAuthority == false)
				return;

			Trace(nameof(ProcessFrameInput));

			// Accumulated input was polled and explicit reset requested.
			if (_resetAccumulatedInput == true)
			{
				_resetAccumulatedInput = false;

				NetworkButtons accumulatedActions           = _accumulatedInput.Actions;
				float          accumulatedRenderAlpha       = _accumulatedInput.RenderAlpha;
				Vector2        accumulatedLookRotationDelta = _accumulatedInput.LookRotationDelta;

				_accumulatedInput = default;

				// There might be some remaining look rotation delta not consumed by input poll to ensure look rotation tick alignment.
				// Look rotation delta must always be restored.
				_accumulatedInput.LookRotationDelta = accumulatedLookRotationDelta;

				if (_restoreAccumulatedActions == true)
				{
					_restoreAccumulatedActions = false;

					// Actions are restored on demand.
					_accumulatedInput.Actions     = accumulatedActions;
					_accumulatedInput.RenderAlpha = accumulatedRenderAlpha;
				}

				// Crucial step - resetting accumulated move direction values to values from previous frame.
				// When movement is active, the MoveDirection is set in both - render input and accumulated input.
				// When the accumulated input is consumed, it propagates into fixed input and KCC moves in fixed update.
				// But KCC also moves in render update because MoveDirection is still set in render input.
				// This must propagate to next fixed update as well.
				_accumulatedMoveDirection     = _lastPartialMoveDirection;
				_accumulatedMoveDirectionSize = _lastPartialMoveDirectionSize;

				// Now we can reset last frame render input to defaults.
				_lastPartialMoveDirection     = default;
				_lastPartialMoveDirectionSize = default;
			}

			if (Application.isMobilePlatform == false || Application.isEditor == true)
			{
				// Input is tracked only if the cursor is locked.
				if (Cursor.lockState != CursorLockMode.Locked)
					return;
			}

			// Don't process the input if the ignore time is active.
			if (_ignoreTime > 0.0f)
				return;

			// We need to store the value for reset in next frame.
			_lastPartialMoveDirectionSize = Time.unscaledDeltaTime;

			// Accumulate size of all time-based accumulated properties.
			_accumulatedMoveDirectionSize += _lastPartialMoveDirectionSize;

			if (Application.isMobilePlatform == true && Application.isEditor == false)
			{
				ProcessMobileInput(isInputPoll);
			}
			else
			{
				ProcessStandaloneInput(isInputPoll);
			}

			ProcessGamepadInput(isInputPoll);
		}

		private void ProcessStandaloneInput(bool isInputPoll)
		{
			// Always use KeyControl.isPressed, Input.GetMouseButton() and Input.GetKey().
			// Never use KeyControl.wasPressedThisFrame, Input.GetMouseButtonDown() or Input.GetKeyDown() otherwise the action might be lost.

			Vector2 moveDirection     = Vector2.zero;
			Vector2 lookRotationDelta = Vector2.zero;

			Mouse mouse = Mouse.current;
			if (mouse != null)
			{
				Vector2 mouseDelta = mouse.delta.ReadValue();

				lookRotationDelta = GetSmoothLookRotationDelta(new Vector2(-mouseDelta.y, mouseDelta.x), _standaloneLookSensitivity);

				_renderInput.LMB = mouse.leftButton.isPressed;
				_renderInput.RMB = mouse.rightButton.isPressed;
				_renderInput.MMB = mouse.middleButton.isPressed;

				if (mouse.leftButton.wasPressedThisFrame == true || mouse.middleButton.wasPressedThisFrame == true || mouse.rightButton.wasPressedThisFrame == true)
				{
					// RenderAlpha value is used to identify render time of an action. Valid range is 0.0 - 1.0 and represents position of the time between 2 ticks.
					_renderInput.RenderAlpha = Runner.LocalAlpha;

					if (isInputPoll == true)
					{
						// Actions can be triggered right before polling input, but they should be processed at the time of Render().
						// Delaying actions by 1 tick keeps render prediction more consistent with fixed simulation.
						_delayAccumulatedActions = true;
					}
				}
			}

			Keyboard keyboard = Keyboard.current;
			if (keyboard != null)
			{
				if (keyboard.mKey.isPressed == true && keyboard.leftCtrlKey.isPressed == true && keyboard.leftShiftKey.isPressed == true)
				{
					// Simulate application pause/resume.
					ActivateIgnoreInputWindow();
				}

				if (keyboard.wKey.isPressed == true) { moveDirection += Vector2.up;    }
				if (keyboard.sKey.isPressed == true) { moveDirection += Vector2.down;  }
				if (keyboard.aKey.isPressed == true) { moveDirection += Vector2.left;  }
				if (keyboard.dKey.isPressed == true) { moveDirection += Vector2.right; }

				if (moveDirection.IsZero() == false)
				{
					moveDirection.Normalize();
				}

				// Camera smoothness testing => side walk + rotation with constant speed. You can safely remove it.
				if (keyboard.qKey.isPressed == true)
				{
					moveDirection = Vector2.left;
					lookRotationDelta = new Vector2(0.0f, 60.0f * Time.deltaTime);
				}

				// Camera smoothness testing => side walk + rotation with constant speed. You can safely remove it.
				if (keyboard.eKey.isPressed == true)
				{
					moveDirection = Vector2.right;
					lookRotationDelta = new Vector2(0.0f, -60.0f * Time.deltaTime);
				}

				_renderInput.Jump   = keyboard.spaceKey.isPressed;
				_renderInput.Dash   = keyboard.tabKey.isPressed;
				_renderInput.Sprint = keyboard.leftShiftKey.isPressed;

				if (keyboard.spaceKey.wasPressedThisFrame == true || keyboard.tabKey.wasPressedThisFrame == true)
				{
					if (isInputPoll == true)
					{
						// Actions can be triggered right before polling input, but they should be processed at the time of Render().
						// Delaying actions by 1 tick keeps render prediction more consistent with fixed simulation.
						_delayAccumulatedActions = true;
					}
				}

				if (HasInputAuthority == true)
				{
					// Here we can use KeyControl.wasPressedThisFrame / Input.GetKeyDown() because it is not part of input structure and we send actions through RPC.
					if (keyboard.numpadPlusKey.wasPressedThisFrame  == true) { GetComponent<ExpertPlayer>().ToggleSpeedRPC(1);  }
					if (keyboard.numpadMinusKey.wasPressedThisFrame == true) { GetComponent<ExpertPlayer>().ToggleSpeedRPC(-1); }
				}
			}

			_renderInput.MoveDirection     = moveDirection;
			_renderInput.LookRotationDelta = lookRotationDelta;

			// Process accumulated input for next OnInput() call, represents accumulated inputs for all render frames since last fixed update.

			// Move direction accumulation is a special case. Let's say simulation runs 30Hz (33.333ms delta time) and render runs 300Hz (3.333ms delta time).
			// If the player hits W key in last frame before fixed update, the KCC will move in render update by (velocity * 0.003333f).
			// Treating this input the same way for next fixed update results in KCC moving by (velocity * 0.03333f) - 10x more.
			// Following accumulation proportionally scales move direction so it reflects frames in which input was active.
			// This way the next fixed update will correspond more accurately to what happened in render frames.

			_lastPartialMoveDirection = moveDirection * _lastPartialMoveDirectionSize;
			_accumulatedMoveDirection += _lastPartialMoveDirection;

			_accumulatedInput.Actions            = new NetworkButtons(_accumulatedInput.Actions.Bits | _renderInput.Actions.Bits);
			_accumulatedInput.MoveDirection      = _accumulatedMoveDirection / _accumulatedMoveDirectionSize;
			_accumulatedInput.LookRotationDelta += _renderInput.LookRotationDelta;

			if (_renderInput.RenderAlpha != default)
			{
				_accumulatedInput.RenderAlpha = _renderInput.RenderAlpha;
			}
		}

		private void ProcessMobileInput(bool isInputPoll)
		{
			_inputTouches.Update();

			bool    sprint            = false;
			Vector2 moveDirection     = Vector2.zero;
			Vector2 lookRotationDelta = Vector2.zero;

			if (_lookTouch != null && _lookTouch.IsActive == true)
			{
				lookRotationDelta = new Vector2(-_lookTouch.Delta.Position.y, _lookTouch.Delta.Position.x);
			}

			lookRotationDelta = GetSmoothLookRotationDelta(lookRotationDelta, _mobileLookSensitivity);

			if (_moveTouch != null && _moveTouch.IsActive == true && _moveTouch.GetDelta().Position.IsZero() == false)
			{
				float screenSizeFactor = 8.0f / Mathf.Min(Screen.width, Screen.height);

				moveDirection = new Vector2(_moveTouch.GetDelta().Position.x, _moveTouch.GetDelta().Position.y) * screenSizeFactor;
				if (moveDirection.sqrMagnitude > 1.0f)
				{
					moveDirection.Normalize();
				}

				if (_moveTouch.GetDelta().Position.magnitude > Screen.height * 0.1f)
				{
					sprint = true;
				}
			}

			// Process input for render, represents current device state.

			_renderInput.Jump              = _jumpTouch;
			_renderInput.Sprint            = sprint;
			_renderInput.MoveDirection     = moveDirection;
			_renderInput.LookRotationDelta = lookRotationDelta;

			// Process accumulated input for next OnInput() call, represents accumulated inputs for all render frames since last fixed update.

			// Move direction accumulation is a special case. Let's say simulation runs 30Hz (33.333ms delta time) and render runs 300Hz (3.333ms delta time).
			// If the player hits W key in last frame before fixed update, the KCC will move in render update by (velocity * 0.003333f).
			// Treating this input the same way for next fixed update results in KCC moving by (velocity * 0.03333f) - 10x more.
			// Following accumulation proportionally scales move direction so it reflects frames in which input was active.
			// This way the next fixed update will correspond more accurately to what happened in render frames.

			_lastPartialMoveDirection = moveDirection * _lastPartialMoveDirectionSize;
			_accumulatedMoveDirection += _lastPartialMoveDirection;

			_accumulatedInput.Actions            = new NetworkButtons(_accumulatedInput.Actions.Bits | _renderInput.Actions.Bits);
			_accumulatedInput.MoveDirection      = _accumulatedMoveDirection / _accumulatedMoveDirectionSize;
			_accumulatedInput.LookRotationDelta += _renderInput.LookRotationDelta;
		}

		private void ProcessGamepadInput(bool isInputPoll)
		{
			Gamepad gamepad = Gamepad.current;
			if (gamepad == null)
				return;

			Vector2 moveDirection = gamepad.leftStick.ReadValue();
			if (moveDirection.IsAlmostZero(0.1f) == false)
			{
				_renderInput.MoveDirection = moveDirection;

				_lastPartialMoveDirection = moveDirection * _lastPartialMoveDirectionSize;
				_accumulatedMoveDirection += _lastPartialMoveDirection;

				_accumulatedInput.MoveDirection = _accumulatedMoveDirection / _accumulatedMoveDirectionSize;
			}

			Vector2 lookRotationDelta = gamepad.rightStick.ReadValue();
			if (lookRotationDelta.IsAlmostZero() == false)
			{
				lookRotationDelta = new Vector2(-lookRotationDelta.y, lookRotationDelta.x);
				lookRotationDelta = GetSmoothLookRotationDelta(lookRotationDelta, _gamepadLookSensitivity);

				_renderInput.LookRotationDelta = lookRotationDelta;

				_accumulatedInput.LookRotationDelta += _renderInput.LookRotationDelta;
			}

			_renderInput.Jump   |= gamepad.rightTrigger.wasPressedThisFrame;
			_renderInput.Sprint |= gamepad.leftTrigger.isPressed;
			_renderInput.Dash   |= gamepad.aButton.wasPressedThisFrame;

			_accumulatedInput.Actions = new NetworkButtons(_accumulatedInput.Actions.Bits | _renderInput.Actions.Bits);
		}

		private Vector2 GetSmoothLookRotationDelta(Vector2 lookRotationDelta, Vector2 lookRotationSensitivity)
		{
			lookRotationDelta *= lookRotationSensitivity;

			// If the look rotation responsivity is enabled, calculate average delta instead.
			if (_lookResponsivity > 0.0f)
			{
				// Kill any rotation in opposite direction for instant direction flip.
				_smoothLookRotationDelta.FilterValues(lookRotationDelta.x < 0.0f, lookRotationDelta.x > 0.0f, lookRotationDelta.y < 0.0f, lookRotationDelta.y > 0.0f);

				// Add or update value for current frame.
				_smoothLookRotationDelta.AddValue(Time.frameCount, Time.unscaledDeltaTime, lookRotationDelta);

				// Calculate smooth look rotation delta.
				lookRotationDelta = _smoothLookRotationDelta.CalculateSmoothValue(_lookResponsivity, Time.unscaledDeltaTime);
			}

			return lookRotationDelta;
		}

		private void OnTouchStarted(InputTouch touch)
		{
			if (_moveTouch == null && touch.Start.Position.x < Screen.width * 0.5f)
			{
				_moveTouch = touch;
			}

			if (_lookTouch == null && touch.Start.Position.x > Screen.width * 0.5f)
			{
				_lookTouch = touch;
				_jumpTouch = default;

				if (_jumpTime > Time.realtimeSinceStartup - 0.25f)
				{
					_jumpTouch = true;
				}

				_jumpTime = Time.realtimeSinceStartup;
			}
		}

		private void OnTouchFinished(InputTouch touch)
		{
			if (_moveTouch == touch) { _moveTouch = default; }
			if (_lookTouch == touch) { _lookTouch = default; _jumpTouch = default; }
		}

		[System.Diagnostics.Conditional("UNITY_EDITOR")]
		[System.Diagnostics.Conditional("DEVELOPMENT_BUILD")]
		private void CheckFixedAccess(bool checkStage)
		{
			if (checkStage == true && Runner.Stage == default)
			{
				throw new InvalidOperationException("This call should be executed from FixedUpdateNetwork!");
			}

			if (Runner.Stage != default && IsProxy == true)
			{
				throw new InvalidOperationException("Fixed input is available only on State & Input authority!");
			}
		}

		[System.Diagnostics.Conditional("UNITY_EDITOR")]
		[System.Diagnostics.Conditional("DEVELOPMENT_BUILD")]
		private void CheckRenderAccess(bool checkStage)
		{
			if (checkStage == true && Runner.Stage != default)
			{
				throw new InvalidOperationException("This call should be executed outside of FixedUpdateNetwork!");
			}

			if (Runner.Stage == default && HasInputAuthority == false)
			{
				throw new InvalidOperationException("Render and accumulated inputs are available only on Input authority!");
			}
		}

		[HideInCallstack]
		[System.Diagnostics.Conditional(KCC.TRACING_SCRIPT_DEFINE)]
		private void Trace(params object[] messages)
		{
			KCCUtility.Trace<PlayerInput>(this, messages);
		}
	}
}
