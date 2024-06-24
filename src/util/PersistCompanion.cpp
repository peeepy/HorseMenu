#include "PersistCompanion.hpp"

#include "core/frontend/Notifications.hpp"
#include "game/backend/ScriptMgr.hpp"
#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include <vector>

namespace YimMenu
{

		void PersistentCompanion::PersistCompanion(const CompanionInfo& CompanionInfo)
		{
			pedList.push_back(CompanionInfo); // Add CompanionInfo to the pedList vector
		}

		void PersistentCompanion::PushPedsToTrackingList(const SpawnedPedInfo& SpawnedPedInfo)
	    {
		    spawnedPedList.push_back(SpawnedPedInfo); // Add spawnedCompanionInfo to the spawnedPedList vector
	    }
};
