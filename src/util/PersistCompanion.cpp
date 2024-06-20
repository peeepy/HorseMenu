#include "PersistCompanion.hpp"

#include "core/frontend/Notifications.hpp"
#include "game/backend/ScriptMgr.hpp"
#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include <vector>

namespace YimMenu
{

		void PersistentCompanion::OnTick()
		{
			std::vector<PedInfo> pedList;
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

		void PersistentCompanion::PersistCompanion(const PedInfo& pedInfo)
		{
			std::vector<PedInfo> pedList;
			pedList.push_back(pedInfo); // Add pedInfo to the pedList vector
		}
};
