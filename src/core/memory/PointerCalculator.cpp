#include "PointerCalculator.hpp"

extern "C"
{
	__declspec(dllexport) void* PointerCalculator_Add(void* ptr, intptr_t offset)
	{
		return YimMenu::PointerCalculator(ptr).Add(offset).As<void*>();
	}

	__declspec(dllexport) void* PointerCalculator_Rip(void* ptr)
	{
		return YimMenu::PointerCalculator(ptr).Rip().As<void*>();
	}
}