#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef _WIN32
	#define EXPORT __declspec(dllexport)
#else
	#define EXPORT __attribute__((visibility("default")))
#endif

	EXPORT bool InitPointers();
	EXPORT void RestorePointers();
	EXPORT BOOL IsVulkanPointers();

	EXPORT void* GetHwndPointer();
	EXPORT void* GetSwapChainPointer();
	EXPORT void* GetCommandQueuePointer();
	EXPORT void* GetQueuePresentKHRPointer();
	EXPORT void* GetCreateSwapchainKHRPointer();
	EXPORT void* GetAcquireNextImageKHRPointer();
	EXPORT void* GetAcquireNextImage2KHRPointer();

#ifdef __cplusplus
}
#endif