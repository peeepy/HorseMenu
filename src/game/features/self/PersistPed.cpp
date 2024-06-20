#include "core/commands/LoopedCommand.hpp"
#include "game/features/Features.hpp"
#include "game/rdr/Enums.hpp"
#include "game/rdr/Natives.hpp"

namespace YimMenu::Features
{
	// TODO: this should be moved out of self
	class PersistPed : public LoopedCommand
	{
		using LoopedCommand::LoopedCommand;

		virtual void OnTick() override
		{
			for (auto& pedInfo : pedList)
			{
				// Example operation: check if ped is still valid
				if (!ENTITY::DOES_ENTITY_EXIST(pedInfo.pedHandle))
					// Respawn ped if it doesn't exist
					pedInfo.pedHandle = YimMenu::Peds::SpawnCompanion(pedInfo.model_name,
					    pedInfo.coords,
					    pedInfo.heading,
					    pedInfo.blockNewPedMovement,
					    pedInfo.spawnDead,
					    pedInfo.invincible,
					    pedInfo.invisible,
					    pedInfo.scale,
					    pedInfo.persistent);
			}
		}
	};

	static PersistPed _PersistPed{"persistped", "Persist Companion", "Keeps your companion spawned at all times"};
}
