#include "util/Ped.hpp" // Include your existing Ped.hpp header
#include "util/PersistCompanion.hpp"

#include <iostream> // For std::ostream and std::istream
#include <vector>

namespace YimMenu
{
	class PedListMgr
	{
	public:
		void Save(const std::vector<PedInfo>& pedList);
		void Load();
		void Spawn();
	};

	// Declare stream operators for PedInfo
	std::ostream& operator<<(std::ostream& strm, const PedInfo& ped);
	std::istream& operator>>(std::istream& strm, PedInfo& ped);
}
