namespace Example.ExpertMovement
{
	using UnityEngine;
	using Fusion;
	using Fusion.Addons.KCC;

	/// <summary>
	/// Base class for expert player implementations.
	/// Provides references to components and basic setup.
	/// Player itself is a KCC processor and modifies speed based on its state.
	/// Derived classes implement the most accurate render predicted movement + look and solve various edge cases to provide super smooth gaming experience.
	/// </summary>
	public abstract class ExpertPlayer : NetworkKCCProcessor, ISetKinematicSpeed
	{
		// PUBLIC MEMBERS

		public KCC                   KCC       => _kcc;
		public ExpertPlayerInput     Input     => _input;
		public ExpertPlayerAbilities Abilities => _abilities;
		public SceneCamera           Camera    => _camera;

		public float SpeedMultiplier { get { return _speedMultiplier; } set { _speedMultiplier = value; } }

		// PROTECTED MEMBERS

		protected Transform CameraPivot    => _cameraPivot;
		protected Transform CameraHandle   => _cameraHandle;
		protected float     MaxCameraAngle => _maxCameraAngle;
		protected Vector3   JumpImpulse    => _jumpImpulse;

		// PRIVATE MEMBERS

		[SerializeField]
		private Transform _cameraPivot;
		[SerializeField]
		private Transform _cameraHandle;
		[SerializeField]
		private float     _maxCameraAngle = 85.0f;
		[SerializeField]
		private float     _areasOfInterestRadius = 100.0f;
		[SerializeField]
		private Vector3   _jumpImpulse = Vector3.up * 5.0f;

		[Networked]
		private float _speedMultiplier { get; set; } = 1.0f;

		private KCC                   _kcc;
		private ExpertPlayerInput     _input;
		private ExpertPlayerAbilities _abilities;
		private SceneCamera           _camera;

		// ExpertPlayer INTERFACE

		protected virtual void OnAwake()        {}
		protected virtual void OnSpawned()      {}
		protected virtual void OnDespawned()    {}
		protected virtual void OnFixedUpdate()  {}
		protected virtual void OnRenderUpdate() {}

		// PUBLIC METHODS

		/// <summary>
		/// Warning! This method is only for example purposes. Don't do this in your games.
		/// Called from menu to speed up character for faster navigation through example levels.
		/// Players should not be able to define their speed unless this is a game design decision.
		/// </summary>
		[Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
		public void ToggleSpeedRPC(int direction)
		{
			if (direction > 0)
			{
				_speedMultiplier *= 2.0f;
				if (_speedMultiplier >= 10.0f)
				{
					_speedMultiplier = 0.25f;
				}
			}
			else
			{
				_speedMultiplier *= 0.5f;
				if (_speedMultiplier <= 0.2f)
				{
					_speedMultiplier = 8.0f;
				}
			}
		}

		// NetworkBehaviour INTERFACE

		public override void Spawned()
		{
			name = Object.InputAuthority.ToString();

			if (HasInputAuthority == true)
			{
				// Only local player needs reference to the SceneCamera component.
				_camera = Runner.SimulationUnityScene.FindComponent<SceneCamera>(false);
			}

			// We don't know if the KCC has already been spawned at this point.
			// KCC.InvokeOnSpawn() ensures the callback is executed after KCC.Spawned() and its API called in proper order.
			// If the KCC is already spawned the callback is executed immediately.
			_kcc.InvokeOnSpawn(OnKCCSpawn);

			OnSpawned();
		}

		public override void Despawned(NetworkRunner runner, bool hasState)
		{
			OnDespawned();

			_camera = null;
		}

		public override sealed void FixedUpdateNetwork()
		{
			OnFixedUpdate();

			// Update area of interest.
			if (Runner.IsLastTick == true && HasStateAuthority == true)
			{
				PlayerRef inputAuthority = Object.InputAuthority;
				if (Runner.IsPlayerValid(inputAuthority) == true)
				{
					Runner.ClearPlayerAreaOfInterest(inputAuthority);
					Runner.AddPlayerAreaOfInterest(inputAuthority, _kcc.FixedData.TargetPosition, _areasOfInterestRadius);
				}
			}
		}

		public override sealed void Render()
		{
			OnRenderUpdate();
		}

		// ISetKinematicSpeed INTERFACE

		public void Execute(ISetKinematicSpeed stage, KCC kcc, KCCData data)
		{
			// ISetKinematicSpeed is a KCC stage defined by EnvironmentProcessor and is dedicated for calculation of KCCData.KinematicSpeed.
			// The speed multiplier is only for demonstration purposes and faster navigation in example levels.
			data.KinematicSpeed *= _speedMultiplier;
		}

		// MonoBehaviour INTERFACE

		private void Awake()
		{
			_kcc       = GetComponent<KCC>();
			_input     = GetComponent<ExpertPlayerInput>();
			_abilities = GetComponent<ExpertPlayerAbilities>();

			OnAwake();
		}

		// PRIVATE METHODS

		private void OnKCCSpawn(KCC kcc)
		{
			// The KCC.Spawned() has been already called and we can safely use its API.

			// Player itself can modify kinematic speed, registering to KCC as modifier.
			kcc.AddModifier(this);
		}
	}
}
