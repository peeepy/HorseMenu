#include "common.hpp"
#include "core/byte_patch_manager/byte_patch_manager.hpp"
#include "core/commands/HotkeySystem.hpp"
#include "core/filemgr/FileMgr.hpp"
#include "core/frontend/Notifications.hpp"
#include "core/hooking/Hooking.hpp"
#include "core/logger/LogHelper.hpp"
#include "core/memory/ModuleMgr.hpp"
#include "core/renderer/Renderer.hpp"
#include "core/settings/Settings.hpp"
#include "game/backend/FiberPool.hpp"
#include "game/backend/ScriptMgr.hpp"
#include "game/bigfeatures/CustomTeleport.hpp"
#include "game/features/Features.hpp"
#include "game/frontend/GUI.hpp"
#include "game/pointers/Pointers.hpp"

#ifdef _WIN32
	#define EXPORT_API extern "C" __declspec(dllexport)
#else
	#define EXPORT_API extern "C"
#endif

// Forward declarations with C linkage
extern "C"
{
	EXPORT_API DWORD Main(void* param);
	EXPORT_API void DllInit();
}

namespace RDONatives
{
	DWORD MainInternal(void* param)
	{
		const auto documents = std::filesystem::path(std::getenv("appdata")) / "HorseMenu";
		FileMgr::Init(documents); // TODO
		LogHelper::Init("RDONatives", FileMgr::GetProjectFile("./cout.log"));
		g_HotkeySystem.RegisterCommands();
		CustomTeleport::FetchSavedLocations();
		Settings::Initialize(FileMgr::GetProjectFile("./settings.json"));
		if (!ModuleMgr.LoadModules())
			goto unload;
		if (!Pointers.Init())
			goto unload;
		if (!Renderer::Init())
			goto unload;
		Byte_Patch_Manager::Init();
		Hooking::Init();
		ScriptMgr::Init();
		LOG(INFO) << "ScriptMgr Initialized";
		FiberPool::Init(5);
		LOG(INFO) << "FiberPool Initialized";
		GUI::Init();
		ScriptMgr::AddScript(std::make_unique<Script>(&FeatureLoop));
		ScriptMgr::AddScript(std::make_unique<Script>(&BlockControlsForUI));
		ScriptMgr::AddScript(std::make_unique<Script>(&ContextMenuTick));
		Notifications::Show("HorseMenu", "Loaded successfully", NotificationType::Success);
		while (g_Running)
		{
			if (GetAsyncKeyState(VK_DELETE) & 0x8000 && !Pointers.IsSessionStarted)
			{
				g_Running = false;
			}
			std::this_thread::sleep_for(3000ms);
			Settings::Save();
		}
		LOG(INFO) << "Unloading";
		ScriptMgr::Destroy();
		LOG(INFO) << "ScriptMgr Uninitialized";
		FiberPool::Destroy();
		LOG(INFO) << "FiberPool Uninitialized";
	unload:
		Hooking::Destroy();
		Renderer::Destroy();
		Pointers.Restore();
		LogHelper::Destroy();
		CloseHandle(g_MainThread);
		FreeLibraryAndExitThread(g_DllInstance, EXIT_SUCCESS);
		return EXIT_SUCCESS;
	}
}

// Implementations of exported functions
EXPORT_API DWORD Main(void* param)
{
	return RDONatives::MainInternal(param);
}

EXPORT_API void DllInit()
{
	Main(nullptr);
}

BOOL WINAPI DllMain(HINSTANCE dllInstance, DWORD reason, void*)
{
	DisableThreadLibraryCalls(dllInstance);
	if (reason == DLL_PROCESS_ATTACH)
	{
		RDONatives::g_DllInstance = dllInstance;
		RDONatives::g_MainThread  = CreateThread(nullptr, 0, Main, nullptr, 0, &RDONatives::g_MainThreadId);
	}
	return true;
};