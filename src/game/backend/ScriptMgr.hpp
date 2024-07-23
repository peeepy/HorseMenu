#pragma once

namespace YimMenu
{
	class Script
	{
	public:
		std::function<void()> m_Callback;
		bool m_Done;
		HANDLE m_ChildFiber;
		HANDLE m_MainFiber;
		std::optional<std::chrono::high_resolution_clock::time_point> m_WakeTime;

		public:
		explicit Script(std::function<void()> callback);
		~Script();

		void Tick();
		void Yield(std::optional<std::chrono::high_resolution_clock::duration> time = std::nullopt);
	};

	class ScriptMgr
	{
	private:
		ScriptMgr(){};

	public:
		virtual ~ScriptMgr()
		{
			DestroyImpl();
		};

		ScriptMgr(const ScriptMgr&)            = delete;
		ScriptMgr(ScriptMgr&&) noexcept        = delete;
		ScriptMgr& operator=(const ScriptMgr&) = delete;
		ScriptMgr& operator=(ScriptMgr&&) noexcept = delete;

		static void Init()
		{
			GetInstance().InitImpl();
		}

		static void Destroy()
		{
			GetInstance().DestroyImpl();
		}

		static void Tick()
		{
			GetInstance().TickImpl();
		}

		static void Yield(std::optional<std::chrono::high_resolution_clock::duration> time = std::nullopt)
		{
			GetInstance().YieldImpl(time);
		}

		static void AddScript(std::unique_ptr<Script> script)
		{
			GetInstance().AddScriptImpl(std::move(script));
		}

		static void RegisterCallback(const char* eventName, std::function<void()> callback)
		{
			ScriptMgr::GetInstance().RegisterCallbackImpl(eventName, [callback]() {
				callback();
			});
		}

		static void TriggerCallback(const std::string& eventName)
		{
			GetInstance().TriggerCallbackImpl(eventName);
		}

		static bool CanTick()
		{
			return GetInstance().m_CanTick;
		}

	private:
		std::mutex m_ScriptMutex;
		std::mutex m_CallbackMutex;
		std::vector<std::unique_ptr<Script>> m_Scripts;
		std::unordered_map<std::string, std::vector<std::function<void()>>> m_Callbacks;
		bool m_CanTick = false;

		void InitImpl();
		void DestroyImpl();
		void TickImpl();
		void YieldImpl(std::optional<std::chrono::high_resolution_clock::duration> time = std::nullopt);
		void AddScriptImpl(std::unique_ptr<Script> script);
		void RegisterCallbackImpl(const std::string& eventName, std::function<void()> callback);
		void TriggerCallbackImpl(const std::string& eventName);

		static ScriptMgr& GetInstance()
		{
			static ScriptMgr i{};
			return i;
		}
	};
}