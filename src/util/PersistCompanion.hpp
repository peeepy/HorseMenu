#pragma once

#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include "util/Ped.hpp"

#include <string>
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

	class PersistentCompanion
	{

	public:
		void OnTick();

		void PersistCompanion(const YimMenu::PedInfo& pedInfo);

		const std::vector<PedInfo>& GetPedList() const
		{
			return pedList;
		}

		static PersistentCompanion& SharedInstance()
		{
			static PersistentCompanion instance;
			return instance;
		}

	private:
		std::vector<PedInfo> pedList;
		PersistentCompanion() = default;
	};
}
