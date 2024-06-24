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
		std::string pedName;
	};

	void drawPedList(float offset = 15.0f)
	{
		static DeleteRequest deleteRequest;

		// Get a reference to the original list
		auto& pedList = PersistentCompanion::SharedInstance().GetPedListForModification();

		// Comparator for sorting PedInfo by pedHandle
		auto comparePedModels = [](const PedInfo& a, const PedInfo& b) {
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
		ImGui::Text("Ped List"); // Add a title

		// Iterate over sorted pedList and display their handles
		for (const auto& ped : pedList)
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
					deleteRequest.pedName = ped.model_name;
				}
			}
			ImGui::PopID();
		}

		// Handle popup outside the loop
		if (!deleteRequest.pedName.empty())
		{
			ImGui::OpenPopup("DeleteConfirmation");
		}

		if (ImGui::BeginPopupModal("DeleteConfirmation", nullptr, ImGuiWindowFlags_AlwaysAutoResize))
		{
			ImGui::Text("Are you sure you want to delete %s?", deleteRequest.pedName.c_str());
			ImGui::Spacing();
			if (ImGui::Button("Yes", ImVec2(120, 0)))
			{
				// Find the exact ped to delete
				auto it = std::find_if(pedList.begin(), pedList.end(), [&](const PedInfo& p) {
					return p.model_name == deleteRequest.pedName;
				});

				if (it != pedList.end())
				{
					// Only erase this specific ped
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
	    Submenu::Submenu("World")
	{
		auto spawners        = std::make_shared<Category>("Spawners");
		auto pedSpawnerGroup = std::make_shared<Group>("Ped Spawner", GetListBoxDimensions());
		auto companionSpawnerGroup = std::make_shared<Group>("Companion Spawner", GetListBoxDimensions());

		pedSpawnerGroup->AddItem(std::make_shared<ImGuiItem>([] {
			PedSpawnerGroup();
		}));

		companionSpawnerGroup->AddItem(std::make_shared<ImGuiItem>([] {
			CompanionSpawnerGroup();
		}));
		//companionSpawnerGroup->AddItem(std::make_shared<BoolCommandItem>("persistped"_J));
		
		spawners->AddItem(std::make_shared<ImGuiItem>([] {
			drawPedList();
		}));
		spawners->AddItem(pedSpawnerGroup);
		spawners->AddItem(companionSpawnerGroup);

		AddCategory(std::move(spawners));
	}
}