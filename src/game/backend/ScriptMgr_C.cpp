#include "ScriptMgr_C.hpp"

#include "ScriptMgr.hpp"

#include <chrono>
#include <functional>
#include <iostream>
#include <memory>
#include <optional>

namespace YimMenu
{
	class ManagedScriptCallback
	{
	public:
		using CallbackType = std::function<void()>;

		ManagedScriptCallback(CallbackType callback) :
		    managedCallback(std::move(callback))
		{
		}

		void Invoke()
		{
			if (managedCallback)
			{
				try
				{
					managedCallback();
				}
				catch (const std::exception& e)
				{
					// Log exceptions
					std::cerr << "Exception in ManagedScriptCallback: " << e.what() << std::endl;
				}
			}
		}

	private:
		CallbackType managedCallback;
	};
}

extern "C"
{
	void ScriptMgr_Init()
	{
		YimMenu::ScriptMgr::Init();
	}

	void ScriptMgr_Destroy()
	{
		YimMenu::ScriptMgr::Destroy();
	}

	void ScriptMgr_Tick()
	{
		YimMenu::ScriptMgr::Tick();
	}

	void ScriptMgr_Yield(long long duration)
	{
		if (duration < 0)
		{
			YimMenu::ScriptMgr::Yield(std::nullopt);
		}
		else
		{
			YimMenu::ScriptMgr::Yield(std::chrono::nanoseconds(duration));
		}
	}

	bool ScriptMgr_CanTick()
	{
		return YimMenu::ScriptMgr::CanTick();
	}

	void ScriptMgr_AddScript(void (*callback)())
	{
		auto script = std::make_unique<YimMenu::Script>([callback]() {
			callback();
		});
		YimMenu::ScriptMgr::AddScript(std::move(script));
	}

	void ScriptMgr_RegisterCallback(const char* eventName, void (*callback)())
	{
		YimMenu::ScriptMgr::RegisterCallback(eventName, [callback]() {
			callback();
		});
	}

	void ScriptMgr_TriggerCallback(const char* eventName)
	{
		YimMenu::ScriptMgr::TriggerCallback(eventName);
	}
}
