#include "PersistCompanion.hpp"

#include "core/frontend/Notifications.hpp"
#include "game/backend/ScriptMgr.hpp"
#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include <vector>

namespace YimMenu
{

		void PersistentCompanion::PersistCompanion(const PedInfo& pedInfo)
		{
			pedList.push_back(pedInfo); // Add pedInfo to the pedList vector
		}
};
