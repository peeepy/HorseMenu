// #pragma once
// #include "core/settings/IStateSerializer.hpp"
//
// namespace RDONatives
// {
// 	struct CommandLink
// 	{
// 	public:
// 		std::vector<int> Hotkey{};
// 		bool Listening = false;
//
// 		CommandLink(){};
// 	};
//
// 	class HotkeySystem : 
// 		private IStateSerializer
// 	{
// 		std::chrono::system_clock::time_point m_LastHotkeyTriggerTime;
//
// 	public:
// 		HotkeySystem();
//
// 		std::map<uint32_t, CommandLink> m_CommandHotkeys;
// 		void RegisterCommands();
// 		bool ListenAndApply(int& Hotkey, std::vector<int> blacklist = {0});
// 		std::string GetHotkeyLabel(int hotkey_modifiers);
// 		void CreateHotkey(std::vector<int>& Hotkey);
//
// 		void FeatureCommandsHotkeyLoop();
//
// 		virtual void SaveStateImpl(nlohmann::json& state) override;
// 		virtual void LoadStateImpl(nlohmann::json& state) override;
// 	};
//
// 	inline HotkeySystem g_HotkeySystem;
// }

// TODO: HotkeySystem.cpp
// #include "HotkeySystem.hpp"
//
// //#include "game/rdr/Natives.hpp" // TODO: game import in core
// #include "game/backend/ScriptMgr.hpp"
// #include "Commands.hpp"
// #include "LoopedCommand.hpp"
//
// // TODO: serialization isn't stable
//
// namespace RDONatives
// {
// 	HotkeySystem::HotkeySystem() :
// 		IStateSerializer("hotkeys")
// 	{
// 	}
//
// 	void HotkeySystem::RegisterCommands()
// 	{
// 		auto Commands        = Commands::GetCommands();
//
// 		for (auto [Hash, Command] : Commands)
// 		{
// 			CommandLink link;
// 			m_CommandHotkeys.insert(std::make_pair(Command->GetHash(), link));
// 		}
//
// 		LOG(INFO) << "Registered " << m_CommandHotkeys.size() << " commands";
// 	}
//
// 	bool HotkeySystem::ListenAndApply(int& Hotkey, std::vector<int> Blacklist)
// 	{
// 		static auto IsKeyBlacklisted = [Blacklist](int Key) -> bool {
// 			for (auto Key_ : Blacklist)
// 				if (Key_ == Key)
// 					return true;
//
// 			return false;
// 		};
//
// 		// VK_OEM_CLEAR Is about the limit in terms of virtual key codes
// 		for (int i = 0; i < VK_OEM_CLEAR; i++)
// 		{
// 			if ((GetKeyState(i) & 0x8000) && i != 1 && !IsKeyBlacklisted(i))
// 			{
// 				Hotkey = i;
//
// 				return true;
// 			}
// 		}
//
// 		return false;
// 	}
//
// 	// Will return the keycode if there are no labels
// 	std::string HotkeySystem::GetHotkeyLabel(int HotkeyModifier)
// 	{
// 		char KeyName[32];
// 		GetKeyNameTextA(MapVirtualKey(HotkeyModifier, MAPVK_VK_TO_VSC) << 16, KeyName, 32);
//
// 		if (std::string(KeyName).empty())
// 			strcpy(KeyName, std::to_string(HotkeyModifier).data());
//
// 		return KeyName;
// 	}
//
// 	// Meant to be called in a loop
// 	void HotkeySystem::CreateHotkey(std::vector<int>& Hotkey)
// 	{
// 		static auto IsKeyUnique = [this](int Key, std::vector<int> List) -> bool {
// 			for (auto& Key_ : List)
// 				if (GetHotkeyLabel(Key_) == GetHotkeyLabel(Key))
// 					return false;
//
// 			return true;
// 		};
//
// 		int PressedKey = 0;
// 		ListenAndApply(PressedKey, Hotkey);
//
//
// 		if (PressedKey > 1)
// 		{
// 			if (IsKeyUnique(PressedKey, Hotkey))
// 			{
// 				Hotkey.push_back(PressedKey);
// 			}
// 		}
//
// 		MarkStateDirty();
// 	}
//
// 	void HotkeySystem::FeatureCommandsHotkeyLoop()
// 	{
// 		for (auto& [Hash, Link] : m_CommandHotkeys)
// 		{
// 			if (Link.Hotkey.empty() || Link.Listening)
// 				continue;
//
// 			bool AllKeysPressed = true;
//
// 			for (auto HotkeyModifier : Link.Hotkey)
// 			{
// 				if (!(GetAsyncKeyState(HotkeyModifier) & 0x8000))
// 				{
// 					AllKeysPressed = false;
// 				}
// 			}
//
// 			if (AllKeysPressed && GetForegroundWindow() == Pointers.Hwnd && std::chrono::system_clock::now() - m_LastHotkeyTriggerTime > 100ms)
// 			{
// 				auto Command = Commands::GetCommand(Hash);
// 				if (Command)
// 				{
// 					Command->Call();
// 				}
// 				m_LastHotkeyTriggerTime = std::chrono::system_clock::now();
// 			}
// 		}
// 	}
//
// 	void HotkeySystem::SaveStateImpl(nlohmann::json& state)
// 	{
// 		for (auto& hotkey : m_CommandHotkeys)
// 		{
// 			if (!hotkey.second.Hotkey.empty())
// 			{
// 				state[std::to_string(hotkey.first).data()] = hotkey.second.Hotkey;
// 			}
// 		}
// 	}
//
// 	void HotkeySystem::LoadStateImpl(nlohmann::json& state)
// 	{
// 		for (auto& [key, value] : state.items())
// 		{
// 			if (m_CommandHotkeys.contains(std::atoi(key.data())))
// 				m_CommandHotkeys[std::atoi(key.data())].Hotkey = value.get<std::vector<int>>();
// 		}
// 	}
// }