#include "core/commands/Command.hpp"
#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include "game/backend/ScriptMgr.hpp"
#include "util/teleport.hpp"
#include "core/frontend/Notifications.hpp"

namespace RDONatives::Features
{

	class TpToWaypoint : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			if (MAP::IS_WAYPOINT_ACTIVE())
			{
				auto waypointCoords = RDONatives::Teleport::GetWaypointCoords();
				RDONatives::Teleport::TeleportEntity(Self::PlayerPed, {waypointCoords.x, waypointCoords.y, 0.0f}, true);
			}
			else
			{
				Notifications::Show("Waypoint", "You don't have a waypoint set", NotificationType::Error);
			}
		}
	};

	static TpToWaypoint _TpToWaypoint{"tptowaypoint", "Teleport To Waypoint", "Teleport to your waypoint"};
}