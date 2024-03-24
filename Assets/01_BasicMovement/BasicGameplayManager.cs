using Example;
using Example.BasicMovement;
using UnityEngine;
using UnityEngine.Serialization;

namespace Fusion.Addons.KCC.Example._01_PlayerMovement._01_BasicMovement
{
    /// <summary>
    /// Main entry point for gameplay logic and spawning players.
    /// There exists only ONE instance spawned in the scene.
    /// </summary>
    public sealed class BasicGameplayManager : NetworkBehaviour
    {
        [FormerlySerializedAs("PlayerPrefab")] public NetworkObject playerPrefab;

        public override void Spawned()
        {
            if (Runner.GameMode == GameMode.Shared)
            {
                Debug.Log(Runner.GameMode);
                // In Shared mode every player spawn the player object on their own.
                SpawnPlayer(Runner.LocalPlayer);
            }
        }

        public override void FixedUpdateNetwork()
        {
            if (Runner.IsServer == true)
            {
                // With Client-Server topology only the Server spawn player objects.
                // PlayerManager is a special helper class which iterates over list of active players (NetworkRunner.ActivePlayers) and call spawn/despawn callbacks on demand.
                PlayerManager<BasicPlayer>.UpdatePlayerConnections(Runner, SpawnPlayer, DespawnPlayer);
            }
        }

        private void SpawnPlayer(PlayerRef playerRef)
        {
            // Get all spawn points in the scene.
            SpawnPoint[] spawnPoints = Runner.SimulationUnityScene.GetComponents<SpawnPoint>(false);

            // Select random spawn point.
            Transform spawnPoint = spawnPoints[UnityEngine.Random.Range(0, spawnPoints.Length)].transform;

            // Spawn the player object with correct input authority.
            NetworkObject player = Runner.Spawn(playerPrefab, spawnPoint.position, spawnPoint.rotation, playerRef);

            // Set the spawned instance as player object so we can easily get it from other locations using Runner.GetPlayerObject(playerRef).
            // This is optional, but it is a good practice as there is usually 1 main object spawned for each player.
            Runner.SetPlayerObject(playerRef, player);

            // Every player should be always interested to his player object to prevent accidentally getting out of Area of Interest.
            // This is valid only if the Interest Management is enabled in Network Project Config.
            Runner.SetPlayerAlwaysInterested(playerRef, player, true);




        }

        private void DespawnPlayer(PlayerRef playerRef, BasicPlayer player)
        {
            // We simply despawn the player object. No other cleanup is needed here.
            Runner.Despawn(player.Object);
        }
    }
}