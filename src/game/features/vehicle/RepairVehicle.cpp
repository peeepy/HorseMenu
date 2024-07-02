#include "core/commands/Command.hpp"
#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"

namespace RDONatives::Features
{
	class RepairVehicle : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			VEHICLE::SET_VEHICLE_FIXED(Self::Veh);
		}
	};

	static RepairVehicle _RepairVehicle{"repairvehicle", "Repair Vehicle", "Fixes any damage to your current vehicle"};
}