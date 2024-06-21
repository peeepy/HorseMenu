#pragma once

#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include "util/Ped.hpp"

#include <fstream>
#include <iterator>
#include <ranges>
#include <string>
#include <vector>

namespace YimMenu
{
	struct PedInfo
	{
		std::string model_name;
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
		void SpawnSavedCompanions();

		void PersistCompanion(const PedInfo& pedInfo);

		const std::vector<PedInfo>& GetPedList() const
		{
			return pedList;
		}

		std::vector<PedInfo>& GetPedListForModification()
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
