#pragma once

extern "C"
{
	__declspec(dllexport) void ScriptMgr_Init();
	__declspec(dllexport) void ScriptMgr_Destroy();
	__declspec(dllexport) void ScriptMgr_Tick();
	__declspec(dllexport) void ScriptMgr_Yield(long long duration);
	__declspec(dllexport) bool ScriptMgr_CanTick();
	__declspec(dllexport) void ScriptMgr_AddScript(void (*callback)());
	__declspec(dllexport) void ScriptMgr_RegisterCallback(const char* eventName, void (*callback)());
	__declspec(dllexport) void ScriptMgr_TriggerCallback(const char* eventName);
}
