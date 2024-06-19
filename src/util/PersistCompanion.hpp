#pragma once

#include "core/commands/LoopedCommand.hpp"
#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include "util/Ped.hpp"

#include <vector>

namespace YimMenu
{
	struct PedInfo
	{
		int pedHandle;
		std::string model;
		Vector3 coords;
		float heading;
		bool blockNewPedMovement;
		bool spawnDead;
		bool invincible;
		bool invisible;
		int scale;
		bool persistent;
	};

	class PersistentCompanion : public LoopedCommand
	{
		using LoopedCommand::LoopedCommand;

	public:
		virtual void OnTick() override;

		const std::vector<PedInfo>& GetPedList() const
		{
			return pedList;
		}

		static PersistentCompanion& Instance()
		{
			static PersistentCompanion instance;
			return instance;
		}

	private:
		std::vector<PedInfo> pedList;
	};
	
}
