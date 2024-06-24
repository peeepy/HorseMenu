#pragma once

#include "game/features/Features.hpp"
#include "game/rdr/Natives.hpp"
#include "util/Ped.hpp"

#include <fstream>
#include <iterator>
#include <ranges>
#include <string>
#include <vector>
#include <optional>

namespace YimMenu
{
	struct CompanionInfo
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
		Ped current_handle;
	};

	struct SpawnedPedInfo
	{
		std::string model_name;
		Vector3 coords;
		float heading;
		bool blockNewPedMovement;
		bool spawnDead;
		bool invincible;
		bool invisible;
		int scale;
		Ped currentHandle;
	};

	class PersistentCompanion
	{
	public:
		void SpawnSavedCompanions();

		void PersistCompanion(const CompanionInfo& CompanionInfo);
		void PushPedsToTrackingList(const SpawnedPedInfo& SpawnedPedInfo);

		const std::vector<CompanionInfo>& GetCompanionList() const
		{
			return pedList;
		}

		std::vector<CompanionInfo>& GetCompanionListForModification()
		{
			return pedList;
		}

		static void SetSelected(const YimMenu::CompanionInfo& ped)
		{
			selectedPed = ped;
		}

		static std::optional<YimMenu::CompanionInfo> GetSelected()
		{
			return selectedPed;
		}

		static void ClearSelected()
		{
			selectedPed.reset();
		}

		static PersistentCompanion& SharedInstance()
		{
			static PersistentCompanion instance;
			return instance;
		}

		//Normal spawned peds
		std::vector<SpawnedPedInfo>& GetSpawnedPedList()
		{
			return spawnedPedList;
		}

	private:
		std::vector<CompanionInfo> pedList;
		std::vector<SpawnedPedInfo> spawnedPedList;
		static inline std::optional<YimMenu::CompanionInfo> selectedPed;
		PersistentCompanion() = default;
	};
}
