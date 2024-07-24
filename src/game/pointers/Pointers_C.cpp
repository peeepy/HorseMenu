#include "Pointers.hpp"
#include "Pointers_C.hpp"

EXPORT bool InitPointers()
{
	return YimMenu::Pointers.Init();
}

EXPORT void RestorePointers()
{
	YimMenu::Pointers.Restore();
}

EXPORT BOOL IsVulkanPointers()
{
	return YimMenu::Pointers.IsVulkan;
}

EXPORT void* GetHwndPointer()
{
	return YimMenu::Pointers.Hwnd;
}

EXPORT void* GetSwapChainPointer()
{
	return YimMenu::Pointers.SwapChain;
}

EXPORT void* GetCommandQueuePointer()
{
	return YimMenu::Pointers.CommandQueue;
}

EXPORT void* GetQueuePresentKHRPointer()
{
	return YimMenu::Pointers.QueuePresentKHR;
}

EXPORT void* GetCreateSwapchainKHRPointer()
{
	return YimMenu::Pointers.CreateSwapchainKHR;
}

EXPORT void* GetAcquireNextImageKHRPointer()
{
	return YimMenu::Pointers.AcquireNextImageKHR;
}

EXPORT void* GetAcquireNextImage2KHRPointer()
{
	return YimMenu::Pointers.AcquireNextImage2KHR;
}