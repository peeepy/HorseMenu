#include "World.hpp"

#include "util/PedListMgr.hpp"
#include "util/PersistCompanion.hpp"
#include "game/backend/FiberPool.hpp"
#include "game/frontend/items/Items.hpp"
#include "util/Ped.hpp"
#include "util/libraries/PedModels.hpp"
#include "game/features/Features.hpp"
#include "core/commands/BoolCommand.hpp"
#include "core/commands/Commands.hpp"


namespace YimMenu::Submenus
{

#include <algorithm>
#include <imgui.h>
#include <vector>

	struct DeleteRequest
	{
		std::string CompanionName;
	};

	struct DeleteSpawnedPeds
	{
		std::string pedName;
	};


	void drawCompanionList(float offset = 15.0f)
	{
		static DeleteRequest deleteRequest;

		// Get a reference to the original list
		auto& pedList = PersistentCompanion::SharedInstance().GetCompanionListForModification();

		// Comparator for sorting CompanionInfo by pedHandle
		auto comparePedModels = [](const CompanionInfo& a, const CompanionInfo& b) {
			return a.model_name < b.model_name;
		};

		PedListMgr Mgr;

		// Sort the pedList using the comparator
		std::sort(pedList.begin(), pedList.end(), comparePedModels);

		// Set up the external window
		ImGui::SetNextWindowPos(
		    ImVec2(ImGui::GetWindowPos().x + ImGui::GetWindowSize().x + offset, ImGui::GetWindowPos().y));
		ImGui::SetNextWindowSize(ImVec2(150, ImGui::GetWindowSize().y));
		ImGui::Begin("Ped List", nullptr, ImGuiWindowFlags_NoDecoration);

		if (ImGui::Button("Save"))
		{
			Mgr.Save(pedList);
		}
		ImGui::SameLine();
		if (ImGui::Button("Load"))
		{
			Mgr.Load();
		}
		ImGui::SameLine();
		if (ImGui::Button("Spawn"))
		{
			Mgr.Spawn();
		}
		ImGui::Text("Companion List"); // Add a title

		// Iterate over sorted pedList and display their handles
		for (const auto& ped : pedList)
		{
			ImGui::PushID(&ped);
			if (ImGui::Selectable(ped.model_name.c_str(), false))
			{
				YimMenu::PersistentCompanion::SharedInstance().SetSelected(ped);
			}
			if (ImGui::IsItemHovered())
			{
				if (GetAsyncKeyState(VK_BACK) & 0x8000)
				{
					deleteRequest.CompanionName = ped.model_name;
				}
			}
			ImGui::PopID();
		}

		// Handle popup outside the loop
		if (!deleteRequest.CompanionName.empty())
		{
			ImGui::OpenPopup("DeleteConfirmation");
		}

		if (ImGui::BeginPopupModal("DeleteConfirmation", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove))
		{
			ImGui::Text("Are you sure you want to delete %s?", deleteRequest.CompanionName.c_str());
			ImGui::Spacing();
			if (ImGui::Button("Yes", ImVec2(120, 0)))
			{
				// Find the exact ped to delete
				auto it = std::find_if(pedList.begin(), pedList.end(), [&](const CompanionInfo& p) {
					return p.model_name == deleteRequest.CompanionName;
				});

				if (it != pedList.end())
				{
					// Only erase this specific ped
					// Delete the entity in-game if it exists
					if (ENTITY::DOES_ENTITY_EXIST(it->current_handle))
					{
						LOG(INFO) << "Selected ped exists. Ped ID: " << it->current_handle;

						// Edge of the Universe (Unfinished Map with Endless Ocean) 
						ENTITY::SET_ENTITY_COORDS(it->current_handle, 898.1358, 4093.001, 286.8478, 0, 0, 0, 0);
						LOG(INFO) << "Ped " << it->model_name << "(ID " << it->current_handle << ") has been teleported to the edge of the universe.";
						// Deletes it after being teleported away otherwise it won't disappear from the game when deleted
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&it->current_handle);
						PED::DELETE_PED(&it->current_handle);
						LOG(INFO) << "Ped " << it->model_name << "(ID " << it->current_handle << ") has been deleted.";
					}
					else
					{
						LOG(INFO) << "Selected ped doesn't exist/cannot be found. Ped ID: " << it->current_handle;
					}
					pedList.erase(it);
					
				}
				deleteRequest = DeleteRequest{}; // Reset the request
				ImGui::CloseCurrentPopup();
			}
			ImGui::SameLine();
			if (ImGui::Button("No", ImVec2(120, 0)))
			{
				deleteRequest = DeleteRequest{}; // Reset the request
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}

		ImGui::End();
	}


	void drawPedList(float offset = 15.0f)
	{
		static DeleteSpawnedPeds deleteSpawnedPeds;

		// Get a reference to the original list
		auto& spawnedPedList = PersistentCompanion::SharedInstance().GetSpawnedPedList();

		// Comparator for sorting CompanionInfo by pedHandle
		auto comparePedModels = [](const SpawnedPedInfo& a, const SpawnedPedInfo& b) {
			return a.model_name < b.model_name;
		};

		// Sort the pedList using the comparator
		std::sort(spawnedPedList.begin(), spawnedPedList.end(), comparePedModels);

		// Set up the external window
		ImGui::SetNextWindowPos(
		    ImVec2(ImGui::GetWindowPos().x + ImGui::GetWindowSize().x + offset, ImGui::GetWindowPos().y));
		ImGui::SetNextWindowSize(ImVec2(150, ImGui::GetWindowSize().y));
		ImGui::Begin("Ped List", nullptr, ImGuiWindowFlags_NoDecoration);

		ImGui::Text("Ped List"); // Add a title

		// Iterate over sorted pedList and display their handles
		for (const auto& ped : spawnedPedList)
		{
			ImGui::PushID(&ped);
			if (ImGui::Selectable(ped.model_name.c_str(), false))
			{
				// Left-click behavior if needed
			}
			if (ImGui::IsItemHovered())
			{
				if (GetAsyncKeyState(VK_BACK) & 0x8000)
				{
					deleteSpawnedPeds.pedName = ped.model_name;
				}
			}
			ImGui::PopID();
		}

		// Handle popup outside the loop
		if (!deleteSpawnedPeds.pedName.empty())
		{
			ImGui::OpenPopup("DeleteConfirmation");
		}

		if (ImGui::BeginPopupModal("DeleteConfirmation", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove))
		{
			ImGui::Text("Are you sure you want to delete %s?", deleteSpawnedPeds.pedName.c_str());
			ImGui::Spacing();
			if (ImGui::Button("Yes", ImVec2(120, 0)))
			{
				// Find the exact ped to delete
				auto it = std::find_if(spawnedPedList.begin(), spawnedPedList.end(), [&](const SpawnedPedInfo& p) {
					return p.model_name == deleteSpawnedPeds.pedName;
				});

				if (it != spawnedPedList.end())
				{
					// Only erase this specific ped
					// Delete the entity in-game if it exists
					if (ENTITY::DOES_ENTITY_EXIST(it->currentHandle))
					{
						LOG(INFO) << "Selected ped exists. Ped ID: " << it->currentHandle;

						// Edge of the Universe (Unfinished Map with Endless Ocean)
						ENTITY::SET_ENTITY_COORDS(it->currentHandle, 898.1358, 4093.001, 286.8478, 0, 0, 0, 0);
						LOG(INFO) << "Ped " << it->model_name << "(ID " << it->currentHandle << ") has been teleported to the edge of the universe.";
						// Deletes it after being teleported away otherwise it won't disappear from the game when deleted
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&it->currentHandle);
						PED::DELETE_PED(&it->currentHandle);
						LOG(INFO) << "Ped " << it->model_name << "(ID " << it->currentHandle << ") has been deleted.";
					}
					else
					{
						LOG(INFO) << "Selected ped doesn't exist/cannot be found. Ped ID: " << it->currentHandle;
					}
					spawnedPedList.erase(it);
				}
				deleteSpawnedPeds = DeleteSpawnedPeds{}; // Reset the request
				ImGui::CloseCurrentPopup();
			}
			ImGui::SameLine();
			if (ImGui::Button("No", ImVec2(120, 0)))
			{
				deleteSpawnedPeds = DeleteSpawnedPeds{}; // Reset the request
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}

		ImGui::End();
	}



	bool is_ped_model_in_ped_model_list(std::string model)
	{
		for (const auto& pedModel : pedModels)
		{
			if (pedModel.model == model)
				return true;
		}

		return false;
	}



	int PedSpawnerInputCallback(ImGuiInputTextCallbackData* data)
	{
		if (data->EventFlag == ImGuiInputTextFlags_CallbackCompletion)
		{
			std::string newText{};
			std::string inputLower = data->Buf;
			std::transform(inputLower.begin(), inputLower.end(), inputLower.begin(), ::tolower);
			for (const auto& pedModel : pedModels)
			{
				std::string modelLower = pedModel.model;
				std::transform(modelLower.begin(), modelLower.end(), modelLower.begin(), ::tolower);
				if (modelLower.find(inputLower) != std::string::npos)
				{
					newText = pedModel.model;
				}
			}

			if (!newText.empty())
			{
				data->DeleteChars(0, data->BufTextLen);
				data->InsertChars(0, newText.c_str());
			}

			return 1;
		}
		return 0;
	}

	void PedSpawnerGroup()
	{
		static std::string pedModelBuffer;
		static float scale = 1;
		static bool dead, invis, godmode, freeze;
		InputTextWithHint("##pedmodel", "Ped Model", &pedModelBuffer, ImGuiInputTextFlags_CallbackCompletion, nullptr, PedSpawnerInputCallback)
		    .Draw();
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("Press Tab to auto fill");
		if (!pedModelBuffer.empty() && !is_ped_model_in_ped_model_list(pedModelBuffer))
		{
			ImGui::BeginListBox("##pedmodels", ImVec2(250, 100));

			std::string bufferLower = pedModelBuffer;
			std::transform(bufferLower.begin(), bufferLower.end(), bufferLower.begin(), ::tolower);
			for (const auto& pedModel : pedModels)
			{
				std::string pedModelLower = pedModel.model;
				std::transform(pedModelLower.begin(), pedModelLower.end(), pedModelLower.begin(), ::tolower);
				if (pedModelLower.find(bufferLower) != std::string::npos && ImGui::Selectable(pedModel.model.data()))
				{
					pedModelBuffer = pedModel.model;
				}
			}

			ImGui::EndListBox();
		}

		ImGui::Checkbox("Spawn Dead", &dead);
		ImGui::Checkbox("Invisible", &invis);
		ImGui::Checkbox("GodMode", &godmode);
		ImGui::Checkbox("Frozen", &freeze);
		ImGui::SliderFloat("Scale", &scale, 0.1, 10);
		if (ImGui::Button("Spawn"))
		{
			FiberPool::Push([] {
				Peds::SpawnPed(pedModelBuffer, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Self::PlayerPed, 0, 3, 0), 0, freeze, dead, godmode, invis, scale);
			});
		}
	}


	void CompanionSpawnerGroup()
	{
		static std::string pedModelBuffer;
		static float scale = 1;
		static bool dead, invis, godmode, freeze, persistent;
		InputTextWithHint("##pedmodel", "Ped Model", &pedModelBuffer, ImGuiInputTextFlags_CallbackCompletion, nullptr, PedSpawnerInputCallback)
		    .Draw();
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("Press Tab to auto fill");
		if (!pedModelBuffer.empty() && !is_ped_model_in_ped_model_list(pedModelBuffer))
		{
			ImGui::BeginListBox("##pedmodels", ImVec2(250, 100));

			std::string bufferLower = pedModelBuffer;
			std::transform(bufferLower.begin(), bufferLower.end(), bufferLower.begin(), ::tolower);
			for (const auto& pedModel : pedModels)
			{
				std::string pedModelLower = pedModel.model;
				std::transform(pedModelLower.begin(), pedModelLower.end(), pedModelLower.begin(), ::tolower);
				if (pedModelLower.find(bufferLower) != std::string::npos && ImGui::Selectable(pedModel.model.data()))
				{
					pedModelBuffer = pedModel.model;
				}
			}

			ImGui::EndListBox();
		}

		ImGui::Checkbox("Spawn Dead", &dead);
		ImGui::Checkbox("Invisible", &invis);
		ImGui::Checkbox("GodMode", &godmode);
		ImGui::Checkbox("Frozen", &freeze);
		ImGui::SliderFloat("Scale", &scale, 0.1, 10);
		ImGui::Checkbox("Persistent", &persistent);
		if (ImGui::Button("Spawn"))
		{
			FiberPool::Push([] {
				Peds::SpawnCompanion(pedModelBuffer, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Self::PlayerPed, 0, 3, 0), 0, freeze, dead, godmode, invis, scale, persistent);
			});

		}
	}

	


	World::World() :
	    Submenu::Submenu("Spawn")
	{
		auto pedspawner       = std::make_shared<Category>("Peds");
		auto companionspawner              = std::make_shared<Category>("Companions");
		auto pedSpawnerGroup = std::make_shared<Group>("Ped Spawner", GetListBoxDimensions());
		auto companionSpawnerGroup = std::make_shared<Group>("Companion Spawner", GetListBoxDimensions());
		auto companionOptions         = std::make_shared<Group>("Fun", GetListBoxDimensions());

		pedSpawnerGroup->AddItem(std::make_shared<ImGuiItem>([] {
			PedSpawnerGroup();
		}));

		companionSpawnerGroup->AddItem(std::make_shared<ImGuiItem>([] {
			CompanionSpawnerGroup();
		}));
		//companionSpawnerGroup->AddItem(std::make_shared<BoolCommandItem>("persistped"_J));
		
		companionspawner->AddItem(std::make_shared<ImGuiItem>([] {
			drawCompanionList();
		}));
		pedspawner->AddItem(std::make_shared<ImGuiItem>([] {
			drawPedList();
		}));

		pedspawner->AddItem(pedSpawnerGroup);
		companionspawner->AddItem(companionSpawnerGroup);
		companionspawner->AddItem(companionOptions);

		// companion fun options
		// TODO: Make an option to spawn them their own horse
		companionOptions->AddItem(std::make_shared<ImGuiItem>([] {
			if (ImGui::Button("Make Drunk"))
			{
				if (auto selectedPed = YimMenu::PersistentCompanion::GetSelected())
				{
					AUDIO::SET_PED_IS_DRUNK(selectedPed->current_handle, true);
					PED::_SET_PED_DRUNKNESS(selectedPed->current_handle, true, 1.0f);
				}
			}
		}));

		AddCategory(std::move(pedspawner));
		AddCategory(std::move(companionspawner));
	}
}