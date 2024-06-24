#include "util/Ped.hpp" // Include your existing Ped.hpp header
#include "util/PersistCompanion.hpp"

#include <iostream> // For std::ostream and std::istream
#include <vector>

namespace YimMenu
{
	class PedListMgr
	{
	public:
		void Save(const std::vector<CompanionInfo>& pedList);
		void Load();
		void Spawn();
	};

	// Declare stream operators for CompanionInfo
	std::ostream& operator<<(std::ostream& strm, const CompanionInfo& ped);
	std::istream& operator>>(std::istream& strm, CompanionInfo& ped);
}
