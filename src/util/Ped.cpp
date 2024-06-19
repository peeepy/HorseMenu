#include "Ped.hpp"
#include "Joaat.hpp"
#include "PersistCompanion.hpp"

namespace YimMenu::Peds
{
	auto& companion = YimMenu::PersistentCompanion::Instance();


	// Returns 0 if it fails
	int SpawnPed(std::string model_name, Vector3 coords, float heading, bool blockNewPedMovement, bool spawnDead, bool invincible, bool invisible, int scale)
	{
		Hash model = Joaat(model_name.c_str());

		if (!STREAMING::IS_MODEL_IN_CDIMAGE(model) || !STREAMING::IS_MODEL_VALID(model))
		{
			Notifications::Show("Spawner", "Invalid ped model", NotificationType::Error);
			return 0;
		}

		for (int i = 0; i < 30 && !STREAMING::HAS_MODEL_LOADED(model); i++)
		{
			STREAMING::REQUEST_MODEL(model, false);
			ScriptMgr::Yield();
		}

		auto ped = PED::CREATE_PED(model, coords.x, coords.y, coords.z, heading, 1, 0, 0, 0);

		PED::_SET_RANDOM_OUTFIT_VARIATION(ped, true);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);

		ENTITY::FREEZE_ENTITY_POSITION(ped, blockNewPedMovement);
		ENTITY::SET_ENTITY_INVINCIBLE(ped, invincible);
		ENTITY::SET_ENTITY_VISIBLE(ped, !invisible);
		PED::_SET_PED_SCALE(ped, (float)scale);

		if (spawnDead)
			PED::APPLY_DAMAGE_TO_PED(ped, std::numeric_limits<int>::max(), 1, 0, YimMenu::Self::PlayerPed);


		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);

		return ped;
	}


	// Returns 0 if it fails
	int SpawnCompanion(std::string model_name, Vector3 coords, float heading, bool blockNewPedMovement, bool spawnDead, bool invincible, bool invisible, int scale, bool companionMode, bool persistent)
	{
		Hash model = Joaat(model_name.c_str());

		if (!STREAMING::IS_MODEL_IN_CDIMAGE(model) || !STREAMING::IS_MODEL_VALID(model))
		{
			Notifications::Show("Spawner", "Invalid ped model", NotificationType::Error);
			return 0;
		}

		for (int i = 0; i < 30 && !STREAMING::HAS_MODEL_LOADED(model); i++)
		{
			STREAMING::REQUEST_MODEL(model, false);
			ScriptMgr::Yield();
		}

		auto ped = PED::CREATE_PED(model, coords.x, coords.y, coords.z, heading, 1, 0, 0, 0);

		PED::_SET_RANDOM_OUTFIT_VARIATION(ped, true);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);

		ENTITY::FREEZE_ENTITY_POSITION(ped, blockNewPedMovement);
		ENTITY::SET_ENTITY_INVINCIBLE(ped, invincible);
		ENTITY::SET_ENTITY_VISIBLE(ped, !invisible);
		PED::_SET_PED_SCALE(ped, (float)scale);

		if (spawnDead) {
			PED::APPLY_DAMAGE_TO_PED(ped, std::numeric_limits<int>::max(), 1, 0, YimMenu::Self::PlayerPed);
	}

		PED::SET_PED_ACCURACY(ped, 80);

		// Create a group and set the player as the leader
		int groupID = PLAYER::GET_PLAYER_GROUP(YimMenu::Self::PlayerPed);
		PED::SET_PED_AS_GROUP_LEADER(YimMenu::Self::PlayerPed, groupID, 0);
		PED::SET_PED_AS_GROUP_MEMBER(ped, groupID);
		PED::SET_PED_CONFIG_FLAG(ped, 152 /*PCF_0x79114A20*/, true);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(ped, groupID, true);
		PED::SET_GROUP_SEPARATION_RANGE(groupID, 999999.9f); // Very high range to prevent separation
		PED::SET_PED_CONFIG_FLAG(ped, 156 /*PCF_EnableCompanionAISupport*/, true);
		PED::SET_PED_CONFIG_FLAG(ped, 279 /*PCF_NeverLeavesGroup*/, true);


		// Create a custom relationship group for the player and the companion
		Hash companionGroup;
		Hash playerGroup = 0x6F0783F5;
		Hash hatesPlayer = 0x84DCFAAD;

		PED::ADD_RELATIONSHIP_GROUP("COMPANION_GROUP", &companionGroup);

		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, companionGroup, playerGroup);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, playerGroup, companionGroup);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, companionGroup, hatesPlayer); // hates player group

		PED::SET_PED_RELATIONSHIP_GROUP_HASH(YimMenu::Self::PlayerPed, playerGroup);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(ped, companionGroup);

		PED::SET_PED_AS_GROUP_MEMBER(ped, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));

		// Set combat attributes
		PED::SET_PED_COMBAT_ATTRIBUTES(ped, 5, true);  // BF_CanFightArmedPedsWhenNotArmed
		PED::SET_PED_COMBAT_ATTRIBUTES(ped, 46, true); // BF_AlwaysFight
		PED::SET_PED_COMBAT_RANGE(ped, 1);             // Medium combat range
		PED::SET_PED_SEEING_RANGE(ped, 50.0f);         // Increase seeing range

		// Allow talking
		PED::SET_PED_CONFIG_FLAG(ped, 130, true);

		// Make the ped follow the player and engage in combat
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(ped, YimMenu::Self::PlayerPed, 0.0f, 0.0f, 0.0f, 1.0f, -1, 1.0f, true, false, false, true, false, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);

		// Add a blip to the ped
		Blip blip = MAP::BLIP_ADD_FOR_ENTITY(Joaat("BLIP_STYLE_FRIENDLY"), ped);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(blip, "Companion");

		// Give the ped a weapon if they're a human
		if (PED::IS_PED_HUMAN(ped))
		{
			WEAPON::GIVE_WEAPON_TO_PED(ped, Joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 999, true, true, 0, false, 0.5f, 1.0f, Joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
		}

		// Have the companion mount a horse with you
		if (ENTITY::DOES_ENTITY_EXIST(Self::Mount))
		{
			if (PED::GET_MOUNT(Self::PlayerPed) == Self::Mount)
			{
				TASK::TASK_MOUNT_ANIMAL(ped, Self::Mount, -1, -1, 1.0f, 1, 0, 0);
			}
		}

		// Make animals not flee
		if (!PED::IS_PED_HUMAN(ped))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, true);
		}

		if (persistent)
		{
			PedInfo pedInfo = {ped, model_name, coords, heading, blockNewPedMovement, spawnDead, invincible, invisible, scale, persistent};
			companion::PersistCompanion(pedInfo);
		}

		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);


		return ped;
	}
}