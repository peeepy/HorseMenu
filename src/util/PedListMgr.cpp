#include "PedListMgr.hpp"

#include <fstream>
#include <shlobj.h> // For SHGetFolderPath
#include <shlwapi.h>
#include <sstream> // For std::ostringstream
#include <windows.h>
#include "game/backend/FiberPool.hpp"
#pragma comment(lib, "shlwapi.lib")

namespace YimMenu
{
	// Define stream operators for CompanionInfo
	std::ostream& operator<<(std::ostream& strm, const CompanionInfo& ped)
	{
		strm << ped.model_name << " " << ped.coords.x << " " << ped.coords.y << " " << ped.coords.z << " " << ped.heading << " " << ped.blockNewPedMovement << " " << ped.spawnDead << " " << ped.invincible << " " << ped.invisible << " " << ped.scale << " " << ped.persistent;
		return strm;
	}

	std::istream& operator>>(std::istream& strm, CompanionInfo& ped)
	{
		strm >> ped.model_name >> ped.coords.x >> ped.coords.y >> ped.coords.z >> ped.heading >> ped.blockNewPedMovement >> ped.spawnDead >> ped.invincible >> ped.invisible >> ped.scale >> ped.persistent;
		return strm;
	}

	std::string GetExecutableDirectory()
	{
		char buffer[MAX_PATH];
		GetModuleFileNameA(NULL, buffer, MAX_PATH);
		PathRemoveFileSpecA(buffer);
		return std::string(buffer);
	}

	std::string GetWritableDirectory()
	{
		char path[MAX_PATH];
		if (SUCCEEDED(SHGetFolderPathA(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, path)))
		{
			return std::string(path);
		}
		else
		{
			// Fallback to the executable directory if unable to get the Documents folder
			return GetExecutableDirectory();
		}
	}

	std::string GetFilePath()
	{
		std::string writableDir = GetWritableDirectory();
		std::string filePath    = writableDir + "\\pedlist.txt";
		return filePath;
	}

	void PedListMgr::Save(const std::vector<CompanionInfo>& pedList)
	{
		std::string filePath = GetFilePath();
		std::ofstream out(filePath);

		if (out.is_open())
		{
			for (const auto& ped : pedList)
			{
				out << ped << "\n"; // This will call the operator<< for CompanionInfo
			}
			out.close();
		}
		else
		{
			// Handle error opening file
			LOG(INFO) << "Failed to open file for saving: " << filePath;
		}
	}

	void PedListMgr::Load()
	{
		std::string filePath = GetFilePath();

		// Obtain the central pedList vector for modification
		std::vector<CompanionInfo>& pedList = PersistentCompanion::SharedInstance().GetCompanionListForModification();
		pedList.clear(); // Clear existing content if needed

		std::ifstream in(filePath);

		if (in.is_open())
		{
			CompanionInfo ped;
			while (in >> ped)
			{
				pedList.push_back(ped);
			}
			in.close();
		}
		else
		{
			// Handle error opening file
			LOG(INFO) << "Failed to open file for loading: " << filePath;
		}
	}

	void PedListMgr::Spawn()
	{
		for (auto& CompanionInfo : PersistentCompanion::SharedInstance().GetCompanionListForModification())
		{
			// Respawn ped
			FiberPool::Push([&CompanionInfo] {
				CompanionInfo.current_handle = YimMenu::Peds::SpawnCompanion(CompanionInfo.model_name,
				    ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Self::PlayerPed, 0, 3, 0),
				    CompanionInfo.heading,
				    CompanionInfo.blockNewPedMovement,
				    CompanionInfo.spawnDead,
				    CompanionInfo.invincible,
				    CompanionInfo.invisible,
				    CompanionInfo.scale,
				    false);
				
			});
		}
	}
}
