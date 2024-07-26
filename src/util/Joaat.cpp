#include "Joaat.hpp"

namespace YimMenu
{
	constexpr joaat_t Joaat(const std::string_view str)
	{
		joaat_t hash = 0;
		for (auto c : str)
		{
			hash += ToLower(c);
			hash += (hash << 10);
			hash ^= (hash >> 6);
		}
		hash += (hash << 3);
		hash ^= (hash >> 11);
		hash += (hash << 15);
		return hash;
	}
};

extern "C"
{
	EXPORT uint32_t CalculateJoaat(const char* str)
	{
		uint32_t hash = 0;
		char c;

		while ((c = *str++))
		{
			char lowered = (c >= 'A' && c <= 'Z') ? (c | (1 << 5)) : c;

			hash += lowered;
			hash += (hash << 10);
			hash ^= (hash >> 6);
		}
		hash += (hash << 3);
		hash ^= (hash >> 11);
		hash += (hash << 15);

		return hash;
	}
}