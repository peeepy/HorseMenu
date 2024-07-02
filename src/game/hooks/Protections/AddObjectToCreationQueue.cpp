#include "core/hooking/DetourHook.hpp"
#include "game/backend/Protections.hpp"
#include "game/hooks/Hooks.hpp"
#include "game/pointers/Pointers.hpp"
#include "game/rdr/Nodes.hpp"
#include "util/Joaat.hpp"

#include <network/netObject.hpp>

namespace RDONatives::Hooks
{
	int Protections::AddObjectToCreationQueue(void* mgr, eNetObjType type, CNetGamePlayer* src, CNetGamePlayer* dst)
	{
		RDONatives::Protections::SetSyncingPlayer(src);

		if (ShouldBlockSync(Pointers.GetSyncTreeForType(nullptr, (uint16_t)type), type, nullptr))
			return -1;

		RDONatives::Protections::SetSyncingPlayer(nullptr);

		return BaseHook::Get<Protections::AddObjectToCreationQueue, DetourHook<decltype(&Protections::AddObjectToCreationQueue)>>()
		    ->Original()(mgr, type, src, dst);
	}
}