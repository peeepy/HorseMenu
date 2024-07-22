#include "game/rdr/Natives.hpp"

// Exported functions for P/Invoke
extern "C"
{
	void WAIT_Export(int ms)
	{
		return BUILTIN::WAIT(ms);
	}
	int TIMERA_Export()
	{
		return BUILTIN::TIMERA();
	}
	int TIMERB_Export()
	{
		return BUILTIN::TIMERB();
	}
	void SETTIMERA_Export(int value)
	{
		return BUILTIN::SETTIMERA(value);
	}
	void SETTIMERB_Export(int value)
	{
		return BUILTIN::SETTIMERB(value);
	}
	float TIMESTEP_Export()
	{
		return BUILTIN::TIMESTEP();
	}
	float SIN_Export(float value)
	{
		return BUILTIN::SIN(value);
	}
	float COS_Export(float value)
	{
		return BUILTIN::COS(value);
	}
	float SQRT_Export(float value)
	{
		return BUILTIN::SQRT(value);
	}
	float POW_Export(float base, float exponent)
	{
		return BUILTIN::POW(base, exponent);
	}
	float LOG10_Export(float value)
	{
		return BUILTIN::LOG10(value);
	}
	float VMAG_Export(float VecDirectionX, float VecDirectionY, float VecDirectionZ)
	{
		return BUILTIN::VMAG(VecDirectionX, VecDirectionY, VecDirectionZ);
	}
	float VMAG2_Export(float VecDirectionX, float VecDirectionY, float VecDirectionZ)
	{
		return BUILTIN::VMAG2(VecDirectionX, VecDirectionY, VecDirectionZ);
	}
	float VDIST_Export(float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z)
	{
		return BUILTIN::VDIST(VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z);
	}
	float VDIST2_Export(float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z)
	{
		return BUILTIN::VDIST2(VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z);
	}
	int SHIFT_LEFT_Export(int value, int bitShift)
	{
		return BUILTIN::SHIFT_LEFT(value, bitShift);
	}
	int SHIFT_RIGHT_Export(int value, int bitShift)
	{
		return BUILTIN::SHIFT_RIGHT(value, bitShift);
	}
	int FLOOR_Export(float value)
	{
		return BUILTIN::FLOOR(value);
	}
	int CEIL_Export(float value)
	{
		return BUILTIN::CEIL(value);
	}
	int ROUND_Export(float value)
	{
		return BUILTIN::ROUND(value);
	}
	float TO_FLOAT_Export(int value)
	{
		return BUILTIN::TO_FLOAT(value);
	}
	void SET_THIS_THREAD_PRIORITY_Export(int priority)
	{
		return BUILTIN::SET_THIS_THREAD_PRIORITY(priority);
	}
	Entity _0x53E4D0C079CA6855_Export(ScrHandle handle)
	{
		return AICOVERPOINT::_0x53E4D0C079CA6855(handle);
	}
	BOOL _DOES_COVER_POINT_EXIST_Export(ScrHandle handle)
	{
		return AICOVERPOINT::_DOES_COVER_POINT_EXIST(handle);
	}
	int _GET_COVER_POINT_STATE_FROM_PED_Export(Ped ped)
	{
		return AICOVERPOINT::_GET_COVER_POINT_STATE_FROM_PED(ped);
	}
	void TASK_ENTER_COVER_Export(Ped ped)
	{
		return AICOVERPOINT::TASK_ENTER_COVER(ped);
	}
	void TASK_EXIT_COVER_Export(Ped ped)
	{
		return AICOVERPOINT::TASK_EXIT_COVER(ped);
	}
	int _0x957D7E750216D74B_Export(Ped ped)
	{
		return AICOVERPOINT::_0x957D7E750216D74B(ped);
	}
	void _TASK_AI_SEEK_COVER_TO_COVER_POINT_Export(void* args)
	{
		return AICOVERPOINT::_TASK_AI_SEEK_COVER_TO_COVER_POINT(args);
	}
	void _0x64340DC208D671D5_Export(const char* coverLayer)
	{
		return AICOVERPOINT::_0x64340DC208D671D5(coverLayer);
	}
	void _0x7A1FDCF35EAA140F_Export(const char* coverLayer)
	{
		return AICOVERPOINT::_0x7A1FDCF35EAA140F(coverLayer);
	}
	void _REQUEST_FLINCH_COVER_ANIM_Export(Ped ped)
	{
		return AICOVERPOINT::_REQUEST_FLINCH_COVER_ANIM(ped);
	}
	void _0x3C7A9C2C953128FE_Export(Ped ped)
	{
		return AICOVERPOINT::_0x3C7A9C2C953128FE(ped);
	}
	void _0xEBA51A294C73292E_Export(void* args)
	{
		return AICOVERPOINT::_0xEBA51A294C73292E(args);
	}
	void _0x140B3CB1D424A945_Export(Ped ped, Hash weaponHash)
	{
		return AICOVERPOINT::_0x140B3CB1D424A945(ped, weaponHash);
	}
	BOOL _ARE_LOAD_COVER_ANIMS_LOADED_Export(Ped ped)
	{
		return AICOVERPOINT::_ARE_LOAD_COVER_ANIMS_LOADED(ped);
	}
	void _STOP_RUNNING_COVER_ANIMS_Export(Ped ped)
	{
		return AICOVERPOINT::_STOP_RUNNING_COVER_ANIMS(ped);
	}
	void _0x733077295AB51304_Export(void* args)
	{
		return AICOVERPOINT::_0x733077295AB51304(args);
	}
	ScrHandle _ADD_SCRIPTED_COVER_POINT_Export(void* data)
	{
		return AICOVERPOINT::_ADD_SCRIPTED_COVER_POINT(data);
	}
	void TASK_ENTER_TRANSPORT_Export(void* args)
	{
		return AITRANSPORT::TASK_ENTER_TRANSPORT(args);
	}
	void TASK_EXIT_TRANSPORT_Export(void* args)
	{
		return AITRANSPORT::TASK_EXIT_TRANSPORT(args);
	}
	void SET_PED_ON_TRANSPORT_SEAT_Export(Ped ped, Entity transportEntity, int seat, int flags)
	{
		return AITRANSPORT::SET_PED_ON_TRANSPORT_SEAT(ped, transportEntity, seat, flags);
	}
	void SET_PED_OFF_TRANSPORT_SEAT_Export(Ped ped, int flags)
	{
		return AITRANSPORT::SET_PED_OFF_TRANSPORT_SEAT(ped, flags);
	}
	void SET_TRANSPORT_CONFIG_FLAG_Export(Entity transportEntity, int flagId, BOOL value)
	{
		return AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(transportEntity, flagId, value);
	}
	BOOL GET_TRANSPORT_CONFIG_FLAG_Export(Entity transportEntity, int flagId, BOOL p2)
	{
		return AITRANSPORT::GET_TRANSPORT_CONFIG_FLAG(transportEntity, flagId, p2);
	}
	Any _GET_TRANSPORT_USAGE_FLAGS_Export(Entity transportEntity, int* flags)
	{
		return AITRANSPORT::_GET_TRANSPORT_USAGE_FLAGS(transportEntity, flags);
	}
	void _SET_TRANSPORT_USAGE_FLAGS_Export(Entity transportEntity, int flags)
	{
		return AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(transportEntity, flags);
	}
	void SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS_Export(Entity transportEntity, int flags)
	{
		return AITRANSPORT::SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS(transportEntity, flags);
	}
	void _0x4B6C9A43F7D9109B_Export(Any p0, Any p1)
	{
		return AITRANSPORT::_0x4B6C9A43F7D9109B(p0, p1);
	}
	BOOL _IS_PED_ON_TRANSPORT_ENTITY_Export(Ped ped, Entity transportEntity)
	{
		return AITRANSPORT::_IS_PED_ON_TRANSPORT_ENTITY(ped, transportEntity);
	}
	BOOL _IS_PED_ON_TRANSPORT_SEAT_Export(Ped ped, BOOL p1)
	{
		return AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(ped, p1);
	}
	BOOL _IS_TRANSPORT_SEAT_OCCUPIED_Export(Entity transportEntity, int seatIndex)
	{
		return AITRANSPORT::_IS_TRANSPORT_SEAT_OCCUPIED(transportEntity, seatIndex);
	}
	BOOL _IS_TRANSPORT_SEAT_FREE_Export(Entity transportEntity, int seatIndex)
	{
		return AITRANSPORT::_IS_TRANSPORT_SEAT_FREE(transportEntity, seatIndex);
	}
	Ped _GET_PED_IN_TRANSPORT_SEAT_Export(Entity transportEntity, int seatIndex)
	{
		return AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(transportEntity, seatIndex);
	}
	BOOL IS_PED_ENTERING_TRANSPORT_Export(Ped ped, Entity transportEntity, BOOL p2)
	{
		return AITRANSPORT::IS_PED_ENTERING_TRANSPORT(ped, transportEntity, p2);
	}
	BOOL IS_PED_EXITING_TRANSPORT_Export(Ped ped, Entity transportEntity)
	{
		return AITRANSPORT::IS_PED_EXITING_TRANSPORT(ped, transportEntity);
	}
	void _0x4248AB2EEB3C75AD_Export(Entity transportEntity, Ped ped, BOOL p2)
	{
		return AITRANSPORT::_0x4248AB2EEB3C75AD(transportEntity, ped, p2);
	}
	void _SET_PED_USE_TRANSPORT_SEAT_PREFERENCE_Export(Ped ped, Entity transportEntity, int preferenceSlot, int p3, int seatIndex)
	{
		return AITRANSPORT::_SET_PED_USE_TRANSPORT_SEAT_PREFERENCE(ped, transportEntity, preferenceSlot, p3, seatIndex);
	}
	void _0x5639FBEA922788DA_Export(Entity transportEntity)
	{
		return AITRANSPORT::_0x5639FBEA922788DA(transportEntity);
	}
	void _SET_AI_CAN_USE_TRANSPORT_Export(Entity transportEntity, BOOL state)
	{
		return AITRANSPORT::_SET_AI_CAN_USE_TRANSPORT(transportEntity, state);
	}
	void _0x8C8371EDFAF014A0_Export(Ped ped, float p1)
	{
		return AITRANSPORT::_0x8C8371EDFAF014A0(ped, p1);
	}
	void _0xF8C20282B237E3F7_Export(Ped ped)
	{
		return AITRANSPORT::_0xF8C20282B237E3F7(ped);
	}
	void _SET_TRANSPORT_PRIORITY_SEAT_Export(Entity transportEntity, int seatIndex)
	{
		return AITRANSPORT::_SET_TRANSPORT_PRIORITY_SEAT(transportEntity, seatIndex);
	}
	AnimScene _CREATE_ANIM_SCENE_Export(const char* animDict, int flags, const char* playbackListName, BOOL p3, BOOL p4)
	{
		return ANIMSCENE::_CREATE_ANIM_SCENE(animDict, flags, playbackListName, p3, p4);
	}
	void _DELETE_ANIM_SCENE_Export(AnimScene animScene)
	{
		return ANIMSCENE::_DELETE_ANIM_SCENE(animScene);
	}
	void TRIGGER_ANIM_SCENE_SKIP_Export(AnimScene animScene)
	{
		return ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(animScene);
	}
	BOOL _0x4B85B3CF91972222_Export(AnimScene animScene)
	{
		return ANIMSCENE::_0x4B85B3CF91972222(animScene);
	}
	void _CLEAR_ANIM_SCENE_WAS_SKIPPED_Export(AnimScene animScene)
	{
		return ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(animScene);
	}
	BOOL DOES_ANIM_SCENE_EXIST_Export(AnimScene animScene)
	{
		return ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene);
	}
	BOOL _DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE_Export(AnimScene animScene, const char* entityId)
	{
		return ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(animScene, entityId);
	}
	BOOL _DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST_Export(AnimScene animScene, const char* entityName)
	{
		return ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(animScene, entityName);
	}
	void LOAD_ANIM_SCENE_Export(AnimScene animScene)
	{
		return ANIMSCENE::LOAD_ANIM_SCENE(animScene);
	}
	BOOL IS_ANIM_SCENE_LOADED_Export(AnimScene animScene, BOOL p1, BOOL p2)
	{
		return ANIMSCENE::IS_ANIM_SCENE_LOADED(animScene, p1, p2);
	}
	BOOL _IS_ANIM_SCENE_LOADING_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_LOADING(animScene, p1);
	}
	BOOL _IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING(animScene, p1);
	}
	BOOL IS_ANIM_SCENE_METADATA_LOADED_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(animScene, p1);
	}
	int _GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS_Export(AnimScene animScene, const char* phaseName)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS(animScene, phaseName);
	}
	void START_ANIM_SCENE_Export(AnimScene animScene)
	{
		return ANIMSCENE::START_ANIM_SCENE(animScene);
	}
	void RESET_ANIM_SCENE_Export(AnimScene animScene, const char* playbackListName)
	{
		return ANIMSCENE::RESET_ANIM_SCENE(animScene, playbackListName);
	}
	void ABORT_ANIM_SCENE_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::ABORT_ANIM_SCENE(animScene, p1);
	}
	void RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT_Export(AnimScene animScene)
	{
		return ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(animScene);
	}
	BOOL IS_ANIM_SCENE_RUNNING_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::IS_ANIM_SCENE_RUNNING(animScene, p1);
	}
	BOOL IS_ANIM_SCENE_FINISHED_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::IS_ANIM_SCENE_FINISHED(animScene, p1);
	}
	BOOL IS_ANIM_SCENE_EXITING_THIS_FRAME_Export(AnimScene animScene)
	{
		return ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(animScene);
	}
	BOOL HAS_ANIM_SCENE_EXITED_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::HAS_ANIM_SCENE_EXITED(animScene, p1);
	}
	BOOL _0x73616E64696C132E_Export(AnimScene animScene, BOOL p1)
	{
		return ANIMSCENE::_0x73616E64696C132E(animScene, p1);
	}
	BOOL IS_ANIM_SCENE_IN_SECTION_Export(AnimScene animScene, const char* sectionName, BOOL p2)
	{
		return ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(animScene, sectionName, p2);
	}
	BOOL _IS_ANIM_SCENE_SKIPPABLE_Export(AnimScene animScene)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(animScene);
	}
	BOOL _IS_ANIM_SCENE_ABORTED_Export(AnimScene animScene)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_ABORTED(animScene);
	}
	BOOL _0xD70C7A30412F8FA0_Export(AnimScene animScene)
	{
		return ANIMSCENE::_0xD70C7A30412F8FA0(animScene);
	}
	BOOL _0x9AAE3C1148A09BCA_Export(AnimScene animScene)
	{
		return ANIMSCENE::_0x9AAE3C1148A09BCA(animScene);
	}
	BOOL _0xA96619FE85159ED2_Export(AnimScene animScene)
	{
		return ANIMSCENE::_0xA96619FE85159ED2(animScene);
	}
	void FADE_ANIM_SCENE_AUDIO_IN_Export(AnimScene animScene, float p1)
	{
		return ANIMSCENE::FADE_ANIM_SCENE_AUDIO_IN(animScene, p1);
	}
	void FADE_ANIM_SCENE_AUDIO_OUT_Export(AnimScene animScene, float p1)
	{
		return ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(animScene, p1);
	}
	void BLOCK_ANIM_SCENE_FADING_NEXT_FRAME_Export(BOOL p0, BOOL p1)
	{
		return ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(p0, p1);
	}
	void SET_ANIM_SCENE_ORIGIN_Export(AnimScene animScene, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int order)
	{
		return ANIMSCENE::SET_ANIM_SCENE_ORIGIN(animScene, posX, posY, posZ, rotX, rotY, rotZ, order);
	}
	void GET_ANIM_SCENE_ORIGIN_Export(AnimScene animScene, scrVector* position, scrVector* rotation, int order)
	{
		return ANIMSCENE::GET_ANIM_SCENE_ORIGIN(animScene, position, rotation, order);
	}
	void SET_ANIM_SCENE_PAUSED_Export(AnimScene animScene, BOOL toggle)
	{
		return ANIMSCENE::SET_ANIM_SCENE_PAUSED(animScene, toggle);
	}
	BOOL _IS_ANIM_SCENE_PAUSED_Export(AnimScene animScene)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_PAUSED(animScene);
	}
	void SET_ANIM_SCENE_RATE_Export(AnimScene animScene, float rate)
	{
		return ANIMSCENE::SET_ANIM_SCENE_RATE(animScene, rate);
	}
	float _GET_ANIM_SCENE_RATE_Export(AnimScene animScene)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_RATE(animScene);
	}
	float GET_ANIM_SCENE_PHASE_Export(AnimScene animScene)
	{
		return ANIMSCENE::GET_ANIM_SCENE_PHASE(animScene);
	}
	float _GET_ANIM_SCENE_TIME_Export(AnimScene animScene)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_TIME(animScene);
	}
	float _GET_ANIM_SCENE_DURATION_Export(AnimScene animScene)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_DURATION(animScene);
	}
	void SET_ANIM_SCENE_ENTITY_Export(AnimScene animScene, const char* entityName, Entity entity, int flags)
	{
		return ANIMSCENE::SET_ANIM_SCENE_ENTITY(animScene, entityName, entity, flags);
	}
	void REMOVE_ANIM_SCENE_ENTITY_Export(AnimScene animScene, const char* entityName, Entity entity)
	{
		return ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene, entityName, entity);
	}
	BOOL IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME_Export(AnimScene animScene, const char* entityName)
	{
		return ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(animScene, entityName);
	}
	BOOL COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME_Export(AnimScene animScene, const char* entityName, Any p2, Any p3)
	{
		return ANIMSCENE::COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(animScene, entityName, p2, p3);
	}
	BOOL HAS_ENTITY_EXITED_ANIM_SCENE_Export(AnimScene animScene, const char* entityName)
	{
		return ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(animScene, entityName);
	}
	BOOL _HAS_ENTITY_ENTERED_ANIM_SCENE_Export(AnimScene animScene, const char* entityName)
	{
		return ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(animScene, entityName);
	}
	Ped _GET_ANIM_SCENE_PED_Export(AnimScene animScene, const char* name, BOOL isNetwork)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_PED(animScene, name, isNetwork);
	}
	Object _GET_ANIM_SCENE_OBJECT_Export(AnimScene animScene, const char* name, BOOL isNetwork)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_OBJECT(animScene, name, isNetwork);
	}
	Vehicle _GET_ANIM_SCENE_VEHICLE_Export(AnimScene animScene, const char* name, BOOL isNetwork)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(animScene, name, isNetwork);
	}
	void SET_ANIM_SCENE_BOOL_Export(AnimScene animScene, const char* name, BOOL value, BOOL p3)
	{
		return ANIMSCENE::SET_ANIM_SCENE_BOOL(animScene, name, value, p3);
	}
	BOOL GET_ANIM_SCENE_BOOL_Export(AnimScene animScene, const char* name)
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(animScene, name);
	}
	void SET_ANIM_SCENE_FLOAT_Export(AnimScene animScene, const char* name, float value, BOOL p3, BOOL p4)
	{
		return ANIMSCENE::SET_ANIM_SCENE_FLOAT(animScene, name, value, p3, p4);
	}
	float GET_ANIM_SCENE_FLOAT_Export(AnimScene animScene, const char* name)
	{
		return ANIMSCENE::GET_ANIM_SCENE_FLOAT(animScene, name);
	}
	void SET_ANIM_SCENE_INT_Export(AnimScene animScene, const char* name, int value, BOOL p3)
	{
		return ANIMSCENE::SET_ANIM_SCENE_INT(animScene, name, value, p3);
	}
	int GET_ANIM_SCENE_INT_Export(AnimScene animScene, const char* name)
	{
		return ANIMSCENE::GET_ANIM_SCENE_INT(animScene, name);
	}
	BOOL GET_ANIM_SCENE_ENTITY_LOCATION_DATA_Export(AnimScene animScene, const char* entityName, scrVector* matrix, BOOL p3, const char* playbackListName, int p5)
	{
		return ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(animScene, entityName, matrix, p3, playbackListName, p5);
	}
	BOOL IS_ENTITY_PLAYING_ANIM_SCENE_Export(Entity entity, AnimScene animScene)
	{
		return ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(entity, animScene);
	}
	void ATTACH_ANIM_SCENE_TO_ENTITY_Export(AnimScene animScene, Entity entity, int p2)
	{
		return ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(animScene, entity, p2);
	}
	void ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION_Export(AnimScene animScene, Entity entity, int p2)
	{
		return ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(animScene, entity, p2);
	}
	void DETACH_ANIM_SCENE_Export(AnimScene animScene)
	{
		return ANIMSCENE::DETACH_ANIM_SCENE(animScene);
	}
	void DETACH_ANIM_SCENE_PRESERVING_LOCATION_Export(AnimScene animScene)
	{
		return ANIMSCENE::DETACH_ANIM_SCENE_PRESERVING_LOCATION(animScene);
	}
	void TAKE_OWNERSHIP_OF_ANIM_SCENE_Export(AnimScene animScene)
	{
		return ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(animScene);
	}
	BOOL CHECK_OWNERSHIP_OF_ANIM_SCENE_Export(AnimScene animScene)
	{
		return ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(animScene);
	}
	void SET_ANIM_SCENE_PLAYBACK_LIST_Export(AnimScene animScene, const char* playbackListName)
	{
		return ANIMSCENE::SET_ANIM_SCENE_PLAYBACK_LIST(animScene, playbackListName);
	}
	BOOL _0x1C5D33A4293E6DDE_Export(AnimScene animScene, const char* phaseName)
	{
		return ANIMSCENE::_0x1C5D33A4293E6DDE(animScene, phaseName);
	}
	BOOL _DOES_ANIM_SCENE_PLAY_LIST_EXIST_Export(AnimScene animScene, const char* playbackListName)
	{
		return ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(animScene, playbackListName);
	}
	void SET_ANIM_SCENE_PLAY_LIST_Export(AnimScene animScene, const char* playlistName, BOOL p2)
	{
		return ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(animScene, playlistName, p2);
	}
	BOOL _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE_Export(AnimScene animScene, const char* phaseName)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(animScene, phaseName);
	}
	BOOL REQUEST_ANIM_SCENE_PLAY_LIST_Export(AnimScene animScene, const char* playlistName)
	{
		return ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(animScene, playlistName);
	}
	BOOL _RELEASE_ANIM_SCENE_PLAY_LIST_Export(AnimScene animScene, const char* playlistName)
	{
		return ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(animScene, playlistName);
	}
	Hash _GET_ANIM_SCENE_DICT_Export(AnimScene animScene)
	{
		return ANIMSCENE::_GET_ANIM_SCENE_DICT(animScene);
	}
	BOOL _0x1407F5115FB9583E_Export(AnimScene animScene, const char* p1)
	{
		return ANIMSCENE::_0x1407F5115FB9583E(animScene, p1);
	}
	BOOL _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED_Export(AnimScene animScene, const char* phaseName)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(animScene, phaseName);
	}
	BOOL _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING_Export(AnimScene animScene, const char* phaseName)
	{
		return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(animScene, phaseName);
	}
	void _0x1AD896BF43619551_Export()
	{
		return ANIMSCENE::_0x1AD896BF43619551();
	}
	int GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT_Export(AnimScene animScene)
	{
		return ANIMSCENE::GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT(animScene);
	}
	BOOL _0x5D7BFDA2290B4E39_Export(const char* p0)
	{
		return ANIMSCENE::_0x5D7BFDA2290B4E39(p0);
	}
	BOOL _IS_MGM_SYSTEM_LOADED_Export(const char* mgmFilename)
	{
		return ANIMSCENE::_IS_MGM_SYSTEM_LOADED(mgmFilename);
	}
	BOOL _LOAD_MGM_ASSETS_Export(const char* mgmFilename)
	{
		return ANIMSCENE::_LOAD_MGM_ASSETS(mgmFilename);
	}
	int _CREATE_MGM_SYSTEM_Export(const char* mgmFilename)
	{
		return ANIMSCENE::_CREATE_MGM_SYSTEM(mgmFilename);
	}
	void _DELETE_MGM_SYSTEM_Export(int mgmHandle)
	{
		return ANIMSCENE::_DELETE_MGM_SYSTEM(mgmHandle);
	}
	void _0xB1A196BAFE650402_Export(int mgmHandle, Ped ped)
	{
		return ANIMSCENE::_0xB1A196BAFE650402(mgmHandle, ped);
	}
	void _0xAE6DE22DE0ED4554_Export(int mgmHandle, Ped ped)
	{
		return ANIMSCENE::_0xAE6DE22DE0ED4554(mgmHandle, ped);
	}
	BOOL _0x61B2AAEF645DDAF0_Export(int mgmEventHandle, const char* p1, int seatId, int p3, BOOL p4)
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(mgmEventHandle, p1, seatId, p3, p4);
	}
	void _SET_MGM_EVENT_Export(int mgmEventHandle, const char* p1, Any seatId, int p3, float p4)
	{
		return ANIMSCENE::_SET_MGM_EVENT(mgmEventHandle, p1, seatId, p3, p4);
	}
	void _0x3641FCD53E59B335_Export(int mgmHandle, Ped ped, const char* secondaryVoiceString)
	{
		return ANIMSCENE::_0x3641FCD53E59B335(mgmHandle, ped, secondaryVoiceString);
	}
	void _SET_BREAKOUT_ARCHETYPE_Export(Ped ped, const char* archetype)
	{
		return ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(ped, archetype);
	}
	void _CLEAR_BREAKOUT_ARCHETYPE_Export(Ped ped)
	{
		return ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(ped);
	}
	BOOL _0x3B393716C3FD8237_Export(Ped ped)
	{
		return ANIMSCENE::_0x3B393716C3FD8237(ped);
	}
	void _0xE12D7B4B959644CD_Export()
	{
		return ANIMSCENE::_0xE12D7B4B959644CD();
	}
	void _0xC1193521E3B9FADD_Export(Entity entity, BOOL p1)
	{
		return ANIMSCENE::_0xC1193521E3B9FADD(entity, p1);
	}
	void _REQUEST_PHOTO_MODE_FREEZE_Export()
	{
		return ANIMSCENE::_REQUEST_PHOTO_MODE_FREEZE();
	}
	void _REQUEST_PHOTO_MODE_DEFREEZE_Export()
	{
		return ANIMSCENE::_REQUEST_PHOTO_MODE_DEFREEZE();
	}
	BOOL _0x2DB524750DC41ED4_Export()
	{
		return ANIMSCENE::_0x2DB524750DC41ED4();
	}
	BOOL _0xEA41D44A8D42057B_Export()
	{
		return ANIMSCENE::_0xEA41D44A8D42057B();
	}
	void _PAUSE_SCRIPT_THREADS_Export(BOOL toggle)
	{
		return ANIMSCENE::_PAUSE_SCRIPT_THREADS(toggle);
	}
	void _0xCDCD7B2D49AEE73A_Export(BOOL p0)
	{
		return ANIMSCENE::_0xCDCD7B2D49AEE73A(p0);
	}
	BOOL WAS_ANIM_SCENE_SKIPPED_Export(AnimScene animScene)
	{
		return ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(animScene);
	}
	void _REPORT_PLAYER_BAD_SPORT_BEHAVIOR_Export(void* gamerHandle, int badSportBehaviorType)
	{
		return _NAMESPACE4::_REPORT_PLAYER_BAD_SPORT_BEHAVIOR(gamerHandle, badSportBehaviorType);
	}
	void SET_ATTRIBUTE_BASE_RANK_Export(Ped ped, int attributeIndex, int newValue)
	{
		return ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(ped, attributeIndex, newValue);
	}
	int GET_ATTRIBUTE_RANK_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, attributeIndex);
	}
	int GET_ATTRIBUTE_BASE_RANK_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(ped, attributeIndex);
	}
	int GET_ATTRIBUTE_BONUS_RANK_Export(Ped ped, int coreIndex)
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(ped, coreIndex);
	}
	int GET_MAX_ATTRIBUTE_RANK_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(ped, attributeIndex);
	}
	void SET_ATTRIBUTE_BONUS_RANK_Export(Ped ped, int attributeIndex, int newValue)
	{
		return ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(ped, attributeIndex, newValue);
	}
	int GET_DEFAULT_ATTRIBUTE_RANK_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(ped, attributeIndex);
	}
	int GET_DEFAULT_MAX_ATTRIBUTE_RANK_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ped, attributeIndex);
	}
	void ADD_ATTRIBUTE_POINTS_Export(Ped ped, int attributeIndex, int p2)
	{
		return ATTRIBUTE::ADD_ATTRIBUTE_POINTS(ped, attributeIndex, p2);
	}
	void SET_ATTRIBUTE_POINTS_Export(Ped ped, int attributeIndex, int p2)
	{
		return ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, attributeIndex, p2);
	}
	int GET_ATTRIBUTE_POINTS_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::GET_ATTRIBUTE_POINTS(ped, attributeIndex);
	}
	int GET_MAX_ATTRIBUTE_POINTS_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(ped, attributeIndex);
	}
	void _SET_ATTRIBUTE_CORE_VALUE_Export(Ped ped, int coreIndex, int value)
	{
		return ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, coreIndex, value);
	}
	int _GET_ATTRIBUTE_CORE_VALUE_Export(Ped ped, int coreIndex)
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(ped, coreIndex);
	}
	int GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK_Export(Hash modelHash, int attributeIndex, int rank)
	{
		return ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(modelHash, attributeIndex, rank);
	}
	void ENABLE_ATTRIBUTE_OVERPOWER_Export(Ped ped, int attributeIndex, float value, BOOL makeSound)
	{
		return ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, attributeIndex, value, makeSound);
	}
	void _ENABLE_ATTRIBUTE_CORE_OVERPOWER_Export(Ped ped, int coreIndex, float value, BOOL makeSound)
	{
		return ATTRIBUTE::_ENABLE_ATTRIBUTE_CORE_OVERPOWER(ped, coreIndex, value, makeSound);
	}
	void DISABLE_ATTRIBUTE_OVERPOWER_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, attributeIndex);
	}
	BOOL _IS_ATTRIBUTE_OVERPOWERED_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(ped, attributeIndex);
	}
	BOOL _IS_ATTRIBUTE_CORE_OVERPOWERED_Export(Ped ped, int coreIndex)
	{
		return ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(ped, coreIndex);
	}
	float _GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT_Export(Ped ped, int attributeIndex)
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(ped, attributeIndex);
	}
	float _GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT_Export(Ped ped, int coreIndex)
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(ped, coreIndex);
	}
	void _START_ITEM_PREVIEW_Export(Any p0, int p1)
	{
		return ATTRIBUTE::_START_ITEM_PREVIEW(p0, p1);
	}
	void STOP_ITEM_PREVIEW_Export()
	{
		return ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	void _SET_STATUS_EFFECT_CORE_ICON_Export(int statusEffectType)
	{
		return ATTRIBUTE::_SET_STATUS_EFFECT_CORE_ICON(statusEffectType);
	}
	void _SET_STATUS_EFFECT_PERIODIC_ICON_Export(int statusEffectType)
	{
		return ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(statusEffectType);
	}
	void _STOP_STATUS_EFFECT_PERIODIC_ICON_Export(int statusEffectType)
	{
		return ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(statusEffectType);
	}
	void _0x7455CD705F7E933E_Export()
	{
		return AUDIO::_0x7455CD705F7E933E();
	}
	void CLEAR_CONVERSATION_HISTORY_Export()
	{
		return AUDIO::CLEAR_CONVERSATION_HISTORY();
	}
	void _CLEAR_CONVERSATION_HISTORY_FOR_SCRIPTED_CONVERSATION_Export(const char* convoRoot)
	{
		return AUDIO::_CLEAR_CONVERSATION_HISTORY_FOR_SCRIPTED_CONVERSATION(convoRoot);
	}
	BOOL CREATE_NEW_SCRIPTED_CONVERSATION_Export(const char* convoRoot)
	{
		return AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(convoRoot);
	}
	BOOL _0xDF947FE0D551684E_Export(Ped ped, const char* p1)
	{
		return AUDIO::_0xDF947FE0D551684E(ped, p1);
	}
	void ADD_PED_TO_CONVERSATION_Export(const char* convoRoot, Ped SpeakerPedIndex, const char* characterName)
	{
		return AUDIO::ADD_PED_TO_CONVERSATION(convoRoot, SpeakerPedIndex, characterName);
	}
	void _0xA2323A2EAE32A290_Export(Ped listeningToPed, Ped ped, const char* listenerName)
	{
		return AUDIO::_0xA2323A2EAE32A290(listeningToPed, ped, listenerName);
	}
	BOOL _0x79F9C57B8D0DFE90_Export(const char* convoRoot, AnimScene animScene)
	{
		return AUDIO::_0x79F9C57B8D0DFE90(convoRoot, animScene);
	}
	void START_SCRIPT_CONVERSATION_Export(const char* convoRoot, BOOL p1, BOOL p2, BOOL cloneConversation)
	{
		return AUDIO::START_SCRIPT_CONVERSATION(convoRoot, p1, p2, cloneConversation);
	}
	void PRELOAD_SCRIPT_CONVERSATION_Export(const char* convoRoot, BOOL p1, BOOL p2, BOOL cloneConversation)
	{
		return AUDIO::PRELOAD_SCRIPT_CONVERSATION(convoRoot, p1, p2, cloneConversation);
	}
	void START_PRELOADED_CONVERSATION_Export(const char* convoRoot)
	{
		return AUDIO::START_PRELOADED_CONVERSATION(convoRoot);
	}
	BOOL _0x0CB3D1919E8D7CBA_Export(const char* convoRoot)
	{
		return AUDIO::_0x0CB3D1919E8D7CBA(convoRoot);
	}
	BOOL _0xFE5C6177064BD390_Export(BOOL p0)
	{
		return AUDIO::_0xFE5C6177064BD390(p0);
	}
	BOOL _IS_SCRIPTED_CONVERSATION_CREATED_Export(const char* convoRoot)
	{
		return AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(convoRoot);
	}
	BOOL _0x5A13586A9447931F_Export(BOOL p0)
	{
		return AUDIO::_0x5A13586A9447931F(p0);
	}
	BOOL IS_SCRIPTED_CONVERSATION_LOADED_Export(const char* convoRoot)
	{
		return AUDIO::IS_SCRIPTED_CONVERSATION_LOADED(convoRoot);
	}
	BOOL _IS_ANY_CONVERSATION_PLAYING_Export(BOOL p0)
	{
		return AUDIO::_IS_ANY_CONVERSATION_PLAYING(p0);
	}
	BOOL IS_SCRIPTED_CONVERSATION_PLAYING_Export(const char* p0)
	{
		return AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(p0);
	}
	BOOL _IS_SCRIPTED_CONVERSION_ONGOING_Export(const char* p0)
	{
		return AUDIO::_IS_SCRIPTED_CONVERSION_ONGOING(p0);
	}
	BOOL _0x847748AE5D7B1071_Export(BOOL p0)
	{
		return AUDIO::_0x847748AE5D7B1071(p0);
	}
	BOOL _0xD0730C1FA40348D9_Export(const char* convoRoot)
	{
		return AUDIO::_0xD0730C1FA40348D9(convoRoot);
	}
	int GET_CURRENT_SCRIPTED_CONVERSATION_LINE_Export(const char* p0)
	{
		return AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(p0);
	}
	void PAUSE_SCRIPTED_CONVERSATION_Export(const char* p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4)
	{
		return AUDIO::PAUSE_SCRIPTED_CONVERSATION(p0, p1, p2, p3, p4);
	}
	void RESTART_SCRIPTED_CONVERSATION_Export(const char* p0)
	{
		return AUDIO::RESTART_SCRIPTED_CONVERSATION(p0);
	}
	void _STOP_ALL_SCRIPTED_CONVERSIONS_Export(BOOL p0, BOOL p1, BOOL p2)
	{
		return AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(p0, p1, p2);
	}
	int STOP_SCRIPTED_CONVERSATION_Export(const char* p0, BOOL p1, BOOL p2)
	{
		return AUDIO::STOP_SCRIPTED_CONVERSATION(p0, p1, p2);
	}
	void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE_Export(const char* p0)
	{
		return AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(p0);
	}
	int _0xF336E9F989B3518F_Export(const char* p0)
	{
		return AUDIO::_0xF336E9F989B3518F(p0);
	}
	Ped _0x254B0241E964B450_Export(const char* p0, int currentScriptedConvoLine)
	{
		return AUDIO::_0x254B0241E964B450(p0, currentScriptedConvoLine);
	}
	Ped _0x152ED1B56E8F1F50_Export(const char* p0, int currentScriptedConvoLine)
	{
		return AUDIO::_0x152ED1B56E8F1F50(p0, currentScriptedConvoLine);
	}
	int _0x935DBD96D4A3DA1F_Export(const char* p0, int currentScriptedConvoLine)
	{
		return AUDIO::_0x935DBD96D4A3DA1F(p0, currentScriptedConvoLine);
	}
	int _0x295859EB18F48D82_Export(const char* p0)
	{
		return AUDIO::_0x295859EB18F48D82(p0);
	}
	void _0x40CA665AB9D8D505_Export(const char* convoRoot, int singleLineIndex)
	{
		return AUDIO::_0x40CA665AB9D8D505(convoRoot, singleLineIndex);
	}
	void _0xF232C2C546AC16D0_Export(const char* p0)
	{
		return AUDIO::_0xF232C2C546AC16D0(p0);
	}
	void _0x1E6F9A9FE1A99F36_Export(const char* audSpeechEvent)
	{
		return AUDIO::_0x1E6F9A9FE1A99F36(audSpeechEvent);
	}
	void REGISTER_SCRIPT_WITH_AUDIO_Export(BOOL InChargeOfAudio)
	{
		return AUDIO::REGISTER_SCRIPT_WITH_AUDIO(InChargeOfAudio);
	}
	void UNREGISTER_SCRIPT_WITH_AUDIO_Export()
	{
		return AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	}
	BOOL REQUEST_SCRIPT_AUDIO_BANK_Export(const char* BankName)
	{
		return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(BankName);
	}
	void RELEASE_NAMED_SCRIPT_AUDIO_BANK_Export(const char* BankName)
	{
		return AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(BankName);
	}
	void RELEASE_SCRIPT_AUDIO_BANK_Export()
	{
		return AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
	int GET_SOUND_ID_Export()
	{
		return AUDIO::GET_SOUND_ID();
	}
	void RELEASE_SOUND_ID_Export(int SoundId)
	{
		return AUDIO::RELEASE_SOUND_ID(SoundId);
	}
	void PLAY_SOUND_Export(const char* SoundName, const char* SetName, BOOL p2, Any p3, BOOL p4, Any p5)
	{
		return AUDIO::PLAY_SOUND(SoundName, SetName, p2, p3, p4, p5);
	}
	void PLAY_SOUND_FRONTEND_Export(const char* SoundName, const char* SetName, BOOL p2, Any p3)
	{
		return AUDIO::PLAY_SOUND_FRONTEND(SoundName, SetName, p2, p3);
	}
	void _PLAY_SOUND_FROM_ITEM_Export(Hash item, Hash soundSet, Any p2)
	{
		return AUDIO::_PLAY_SOUND_FROM_ITEM(item, soundSet, p2);
	}
	void PLAY_SOUND_FROM_ENTITY_Export(const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p4, Any p5)
	{
		return AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, entity, audioRef, isNetwork, p4, p5);
	}
	void _PLAY_SOUND_FROM_POSITION_Export(const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, Any p6, BOOL p7, Any p8)
	{
		return AUDIO::_PLAY_SOUND_FROM_POSITION(audioName, x, y, z, audioRef, isNetwork, p6, p7, p8);
	}
	void _STOP_SOUND_WITH_NAME_Export(const char* audioName, const char* audioRef)
	{
		return AUDIO::_STOP_SOUND_WITH_NAME(audioName, audioRef);
	}
	BOOL _0x580D71DFE0088E34_Export(const char* audioName, const char* audioRef)
	{
		return AUDIO::_0x580D71DFE0088E34(audioName, audioRef);
	}
	BOOL _IS_SCRIPTED_AUDIO_CUSTOM_Export(Hash item, Hash soundSet)
	{
		return AUDIO::_IS_SCRIPTED_AUDIO_CUSTOM(item, soundSet);
	}
	void _SET_VARIABLE_ON_SOUND_WITH_NAME_Export(const char* variableName, float variableValue, const char* audioName, const char* audioRef)
	{
		return AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME(variableName, variableValue, audioName, audioRef);
	}
	void _SET_WHISTLE_CONFIG_FOR_PED_Export(Ped ped, const char* whistleConfig, float value)
	{
		return AUDIO::_SET_WHISTLE_CONFIG_FOR_PED(ped, whistleConfig, value);
	}
	void _SET_SOUND_RELATIONSHIP_ON_PED_Export(Ped ped, const char* p1, const char* p2)
	{
		return AUDIO::_SET_SOUND_RELATIONSHIP_ON_PED(ped, p1, p2);
	}
	void _PLAY_SOUND_FRONTEND_WITH_SOUND_ID_Export(int soundId, const char* name, const char* soundSet, BOOL p3)
	{
		return AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, name, soundSet, p3);
	}
	void _PLAY_SOUND_FROM_ENTITY_WITH_SET_Export(int soundId, const char* soundName, Entity entity, const char* soundsetName, BOOL p4, Any p5)
	{
		return AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(soundId, soundName, entity, soundsetName, p4, p5);
	}
	void _PLAY_SOUND_FROM_POSITION_WITH_ID_Export(int soundId, const char* soundName, float x, float y, float z, const char* soundsetName, BOOL p6, int p7, BOOL p8)
	{
		return AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(soundId, soundName, x, y, z, soundsetName, p6, p7, p8);
	}
	void _UPDATE_SOUND_POSITION_Export(int soundId, float x, float y, float z)
	{
		return AUDIO::_UPDATE_SOUND_POSITION(soundId, x, y, z);
	}
	void _STOP_SOUND_WITH_ID_Export(int soundId)
	{
		return AUDIO::_STOP_SOUND_WITH_ID(soundId);
	}
	void _SET_VARIABLE_ON_SOUND_WITH_ID_Export(int soundId, const char* variableName, float variableValue)
	{
		return AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(soundId, variableName, variableValue);
	}
	BOOL PREPARE_SOUND_Export(const char* soundName, const char* soundsetName, int soundId)
	{
		return AUDIO::PREPARE_SOUND(soundName, soundsetName, soundId);
	}
	void _RELEASE_SHARD_SOUNDS_Export(const char* soundName, const char* soundsetName)
	{
		return AUDIO::_RELEASE_SHARD_SOUNDS(soundName, soundsetName);
	}
	BOOL PREPARE_SOUNDSET_Export(const char* soundsetName, BOOL p1)
	{
		return AUDIO::PREPARE_SOUNDSET(soundsetName, p1);
	}
	void _RELEASE_SOUNDSET_Export(const char* soundsetName)
	{
		return AUDIO::_RELEASE_SOUNDSET(soundsetName);
	}
	BOOL PREPARE_SOUND_WITH_ENTITY_Export(const char* soundName, Entity entity, const char* soundsetName, int soundId)
	{
		return AUDIO::PREPARE_SOUND_WITH_ENTITY(soundName, entity, soundsetName, soundId);
	}
	void _0x3E93DDDCBB6111E4_Export(const char* p0, float p1)
	{
		return AUDIO::_0x3E93DDDCBB6111E4(p0, p1);
	}
	BOOL _HAS_SOUND_AUDIO_NAME_FINISHED_Export(const char* audioName, const char* soundsetName)
	{
		return AUDIO::_HAS_SOUND_AUDIO_NAME_FINISHED(audioName, soundsetName);
	}
	BOOL _HAS_SOUND_ID_FINISHED_Export(int soundId)
	{
		return AUDIO::_HAS_SOUND_ID_FINISHED(soundId);
	}
	BOOL PLAY_PED_AMBIENT_SPEECH_NATIVE_Export(Ped PedIndex, void* params)
	{
		return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PedIndex, params);
	}
	BOOL PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE_Export(float PositionX, float PositionY, float PositionZ, void* params)
	{
		return AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(PositionX, PositionY, PositionZ, params);
	}
	Any _0x72E4D1C4639BC465_Export(Entity p0, Any p1)
	{
		return AUDIO::_0x72E4D1C4639BC465(p0, p1);
	}
	Any _0xB18FEC133C7C6C69_Export(Any p0)
	{
		return AUDIO::_0xB18FEC133C7C6C69(p0);
	}
	void _0xDC93F0948F2C28F4_Export(Any p0)
	{
		return AUDIO::_0xDC93F0948F2C28F4(p0);
	}
	void _0x0D7FD6A55FD63AEF_Export(int speechEventType, int p1, BOOL p2)
	{
		return AUDIO::_0x0D7FD6A55FD63AEF(speechEventType, p1, p2);
	}
	void _0x660A8F876DF1D4F8_Export(int speechEventType)
	{
		return AUDIO::_0x660A8F876DF1D4F8(speechEventType);
	}
	void _0x380A2E353AD30917_Export(Any p0, Any p1, Any p2)
	{
		return AUDIO::_0x380A2E353AD30917(p0, p1, p2);
	}
	void _0x0FAF7171BF613B80_Export(Any p0)
	{
		return AUDIO::_0x0FAF7171BF613B80(p0);
	}
	void PLAY_PAIN_Export(Ped PedIndex, int DamageReason, float RawDamage, BOOL p3, BOOL SyncOverNetwork)
	{
		return AUDIO::PLAY_PAIN(PedIndex, DamageReason, RawDamage, p3, SyncOverNetwork);
	}
	void _0x6652B0C8F3D414D0_Export(Any p0)
	{
		return AUDIO::_0x6652B0C8F3D414D0(p0);
	}
	void _0xF092B6030D6FD49C_Export(int ropeId, const char* name)
	{
		return AUDIO::_0xF092B6030D6FD49C(ropeId, name);
	}
	void _0x2651DDC0EA269073_Export(int ropeId, float p1)
	{
		return AUDIO::_0x2651DDC0EA269073(ropeId, p1);
	}
	void SET_AMBIENT_VOICE_NAME_Export(Ped PedIndex, const char* VoiceName)
	{
		return AUDIO::SET_AMBIENT_VOICE_NAME(PedIndex, VoiceName);
	}
	void _SET_VOFX_PED_VOICE_Export(Ped ped, Hash voice)
	{
		return AUDIO::_SET_VOFX_PED_VOICE(ped, voice);
	}
	void STOP_CURRENT_PLAYING_SPEECH_Export(Ped PedIndex, Any p1)
	{
		return AUDIO::STOP_CURRENT_PLAYING_SPEECH(PedIndex, p1);
	}
	void STOP_CURRENT_PLAYING_AMBIENT_SPEECH_Export(Ped PedIndex, Any p1)
	{
		return AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PedIndex, p1);
	}
	BOOL IS_AMBIENT_SPEECH_PLAYING_Export(Ped PedIndex)
	{
		return AUDIO::IS_AMBIENT_SPEECH_PLAYING(PedIndex);
	}
	BOOL IS_SCRIPTED_SPEECH_PLAYING_Export(Ped PedIndex)
	{
		return AUDIO::IS_SCRIPTED_SPEECH_PLAYING(PedIndex);
	}
	BOOL IS_ANY_SPEECH_PLAYING_Export(Ped PedIndex)
	{
		return AUDIO::IS_ANY_SPEECH_PLAYING(PedIndex);
	}
	Any _0x2B101AD9F651243A_Export()
	{
		return AUDIO::_0x2B101AD9F651243A();
	}
	Any _0x4A98E228A936DBCC_Export(Any p0)
	{
		return AUDIO::_0x4A98E228A936DBCC(p0);
	}
	Any _0x6BFFB7C276866996_Export(Any p0)
	{
		return AUDIO::_0x6BFFB7C276866996(p0);
	}
	BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED_Export(Ped PedIndex, const char* context, BOOL allowBackupPVG)
	{
		return AUDIO::DOES_CONTEXT_EXIST_FOR_THIS_PED(PedIndex, context, allowBackupPVG);
	}
	Any _0xF0EE69F500952FA5_Export(Any p0)
	{
		return AUDIO::_0xF0EE69F500952FA5(p0);
	}
	Any _0x9D6DEC9791A4E501_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return AUDIO::_0x9D6DEC9791A4E501(p0, p1, p2, p3);
	}
	void _0x864A842B86993851_Export(Ped ped)
	{
		return AUDIO::_0x864A842B86993851(ped);
	}
	BOOL IS_PED_IN_CURRENT_CONVERSATION_Export(const char* p0, Ped PedIndex, Any p2)
	{
		return AUDIO::IS_PED_IN_CURRENT_CONVERSATION(p0, PedIndex, p2);
	}
	BOOL _IS_PED_IN_ANY_CONVERSATION_Export(Ped ped, BOOL p1)
	{
		return AUDIO::_IS_PED_IN_ANY_CONVERSATION(ped, p1);
	}
	void SET_PED_IS_DRUNK_Export(Ped PedIndex, BOOL IsDrunk)
	{
		return AUDIO::SET_PED_IS_DRUNK(PedIndex, IsDrunk);
	}
	void _0x3A00D87B20A2A5E4_Export(Any p0, Any p1)
	{
		return AUDIO::_0x3A00D87B20A2A5E4(p0, p1);
	}
	void _0xD47D47EFBF103FB8_Export(Any p0, Any p1)
	{
		return AUDIO::_0xD47D47EFBF103FB8(p0, p1);
	}
	void PLAY_ANIMAL_VOCALIZATION_Export(Ped PedIndex, const char* vocalizationName, BOOL p2)
	{
		return AUDIO::PLAY_ANIMAL_VOCALIZATION(PedIndex, vocalizationName, p2);
	}
	void _PLAY_ANIMAL_VOCALIZATION_PHEROMONE_VIAL_RESPONSE_Export(Ped ped, Hash p1, BOOL p2)
	{
		return AUDIO::_PLAY_ANIMAL_VOCALIZATION_PHEROMONE_VIAL_RESPONSE(ped, p1, p2);
	}
	BOOL IS_ANIMAL_VOCALIZATION_PLAYING_Export(Ped PedIndex)
	{
		return AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(PedIndex);
	}
	void SET_ANIMAL_MOOD_Export(Ped PedIndex, int Mood)
	{
		return AUDIO::SET_ANIMAL_MOOD(PedIndex, Mood);
	}
	void _0xFCDEC42B1C78B7F8_Export(Any p0, Any p1)
	{
		return AUDIO::_0xFCDEC42B1C78B7F8(p0, p1);
	}
	void _0xEB4D592620B8C209_Export(Any p0)
	{
		return AUDIO::_0xEB4D592620B8C209(p0);
	}
	void _0xA6847BBA4FCDD13F_Export(Any p0, Any p1)
	{
		return AUDIO::_0xA6847BBA4FCDD13F(p0, p1);
	}
	void SET_STATIC_EMITTER_ENABLED_Export(const char* EmitterName, BOOL enabled)
	{
		return AUDIO::SET_STATIC_EMITTER_ENABLED(EmitterName, enabled);
	}
	void PLAY_END_CREDITS_MUSIC_Export(BOOL bActive)
	{
		return AUDIO::PLAY_END_CREDITS_MUSIC(bActive);
	}
	Any _0x7678FE0455ED1145_Export(Any p0, Any p1, Any p2)
	{
		return AUDIO::_0x7678FE0455ED1145(p0, p1, p2);
	}
	Any _0xFFE9C53DEEA3DB0B_Export(Any p0, Any p1, float x, float y, float z, BOOL isSrlLoaded, Any p6)
	{
		return AUDIO::_0xFFE9C53DEEA3DB0B(p0, p1, x, y, z, isSrlLoaded, p6);
	}
	void _0x5E3CCF03995388B5_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return AUDIO::_0x5E3CCF03995388B5(p0, p1, p2, p3);
	}
	void _0x43037ABFE214A851_Export()
	{
		return AUDIO::_0x43037ABFE214A851();
	}
	void SET_AMBIENT_ZONE_STATE_Export(const char* zoneName, BOOL enabled, BOOL forceUpdate)
	{
		return AUDIO::SET_AMBIENT_ZONE_STATE(zoneName, enabled, forceUpdate);
	}
	void CLEAR_AMBIENT_ZONE_STATE_Export(const char* zoneName, BOOL forceUpdate)
	{
		return AUDIO::CLEAR_AMBIENT_ZONE_STATE(zoneName, forceUpdate);
	}
	void SET_AMBIENT_ZONE_LIST_STATE_Export(const char* zoneListName, BOOL enabled, BOOL forceUpdate)
	{
		return AUDIO::SET_AMBIENT_ZONE_LIST_STATE(zoneListName, enabled, forceUpdate);
	}
	void CLEAR_AMBIENT_ZONE_LIST_STATE_Export(const char* zoneListName, BOOL forceUpdate)
	{
		return AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE(zoneListName, forceUpdate);
	}
	void SET_AMBIENT_ZONE_STATE_PERSISTENT_Export(const char* zoneName, BOOL enabled, BOOL forceUpdate)
	{
		return AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(zoneName, enabled, forceUpdate);
	}
	void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT_Export(const char* zoneListName, BOOL enabled, BOOL forceUpdate)
	{
		return AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(zoneListName, enabled, forceUpdate);
	}
	void _SET_AMBIENT_ZONE_POSITION_Export(const char* ambientZone, float x, float y, float z, float heading)
	{
		return AUDIO::_SET_AMBIENT_ZONE_POSITION(ambientZone, x, y, z, heading);
	}
	BOOL IS_HORN_ACTIVE_Export(Vehicle VehIndex)
	{
		return AUDIO::IS_HORN_ACTIVE(VehIndex);
	}
	void _0xFD461D0ABA5559B1_Export(Any p0, Any p1)
	{
		return AUDIO::_0xFD461D0ABA5559B1(p0, p1);
	}
	BOOL IS_STREAM_PLAYING_Export(int streamId)
	{
		return AUDIO::IS_STREAM_PLAYING(streamId);
	}
	BOOL LOAD_STREAM_Export(const char* streamName, const char* SetName)
	{
		return AUDIO::LOAD_STREAM(streamName, SetName);
	}
	void PLAY_STREAM_FROM_PED_Export(Ped PedIndex, int streamId)
	{
		return AUDIO::PLAY_STREAM_FROM_PED(PedIndex, streamId);
	}
	void PLAY_STREAM_FRONTEND_Export(int streamId)
	{
		return AUDIO::PLAY_STREAM_FRONTEND(streamId);
	}
	void PLAY_STREAM_FROM_POSITION_Export(float positionX, float positionY, float positionZ, int streamId)
	{
		return AUDIO::PLAY_STREAM_FROM_POSITION(positionX, positionY, positionZ, streamId);
	}
	void _0x3A3BE6B920525237_Export(Any p0, Any p1)
	{
		return AUDIO::_0x3A3BE6B920525237(p0, p1);
	}
	void STOP_STREAM_Export(int streamId)
	{
		return AUDIO::STOP_STREAM(streamId);
	}
	void STOP_PED_SPEAKING_Export(Ped PedIndex, BOOL ShouldDisable)
	{
		return AUDIO::STOP_PED_SPEAKING(PedIndex, ShouldDisable);
	}
	void DISABLE_PED_PAIN_AUDIO_Export(Ped PedIndex, BOOL ShouldDisable)
	{
		return AUDIO::DISABLE_PED_PAIN_AUDIO(PedIndex, ShouldDisable);
	}
	BOOL IS_AMBIENT_SPEECH_DISABLED_Export(Ped PedIndex)
	{
		return AUDIO::IS_AMBIENT_SPEECH_DISABLED(PedIndex);
	}
	Any SET_IS_SCRIPTED_SPEECH_DISABLED_Export(Ped ped, BOOL disabled)
	{
		return AUDIO::SET_IS_SCRIPTED_SPEECH_DISABLED(ped, disabled);
	}
	void _BLOCK_SPEECH_CONTEXT_Export(const char* context, BOOL block)
	{
		return AUDIO::_BLOCK_SPEECH_CONTEXT(context, block);
	}
	void _UNLOAD_SPEECH_CONTEXT_Export(const char* speechContext)
	{
		return AUDIO::_UNLOAD_SPEECH_CONTEXT(speechContext);
	}
	void SET_HORN_ENABLED_Export(Vehicle VehicleIndex, BOOL Enable)
	{
		return AUDIO::SET_HORN_ENABLED(VehicleIndex, Enable);
	}
	void SET_AUDIO_VEHICLE_PRIORITY_Export(Vehicle VehicleIndex, int priority)
	{
		return AUDIO::SET_AUDIO_VEHICLE_PRIORITY(VehicleIndex, priority);
	}
	void _0x259ACC5B52A2B2D9_Export(Any p0, Any p1)
	{
		return AUDIO::_0x259ACC5B52A2B2D9(p0, p1);
	}
	void FORCE_USE_AUDIO_GAME_OBJECT_Export(Vehicle VehicleIndex, const char* GameObjectName)
	{
		return AUDIO::FORCE_USE_AUDIO_GAME_OBJECT(VehicleIndex, GameObjectName);
	}
	void SET_GPS_ACTIVE_Export(BOOL DisableGps)
	{
		return AUDIO::SET_GPS_ACTIVE(DisableGps);
	}
	BOOL _START_AUDIO_SCENESET_Export(const char* audioName, const char* sceneset)
	{
		return AUDIO::_START_AUDIO_SCENESET(audioName, sceneset);
	}
	void _STOP_AUDIO_SCENESET_Export(const char* sceneset)
	{
		return AUDIO::_STOP_AUDIO_SCENESET(sceneset);
	}
	BOOL _SET_AUDIO_SCENESET_Export(const char* audioName, const char* sceneset)
	{
		return AUDIO::_SET_AUDIO_SCENESET(audioName, sceneset);
	}
	BOOL START_AUDIO_SCENE_Export(const char* SceneName)
	{
		return AUDIO::START_AUDIO_SCENE(SceneName);
	}
	Any _0xDC2F83A0612CA34D_Export(Any p0)
	{
		return AUDIO::_0xDC2F83A0612CA34D(p0);
	}
	void STOP_AUDIO_SCENE_Export(const char* SceneName)
	{
		return AUDIO::STOP_AUDIO_SCENE(SceneName);
	}
	void _0x6AB944DF68B512D3_Export(Any p0)
	{
		return AUDIO::_0x6AB944DF68B512D3(p0);
	}
	void STOP_AUDIO_SCENES_Export()
	{
		return AUDIO::STOP_AUDIO_SCENES();
	}
	BOOL IS_AUDIO_SCENE_ACTIVE_Export(const char* SceneName)
	{
		return AUDIO::IS_AUDIO_SCENE_ACTIVE(SceneName);
	}
	void SET_AUDIO_SCENE_VARIABLE_Export(const char* SceneName, const char* VariableName, float Value)
	{
		return AUDIO::SET_AUDIO_SCENE_VARIABLE(SceneName, VariableName, Value);
	}
	Hash _GET_ENTITY_AUDIO_MIX_GROUP_Export(Entity entity)
	{
		return AUDIO::_GET_ENTITY_AUDIO_MIX_GROUP(entity);
	}
	void ADD_ENTITY_TO_AUDIO_MIX_GROUP_Export(Entity EntityIndex, const char* groupName, float fadeIn)
	{
		return AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(EntityIndex, groupName, fadeIn);
	}
	Any _0x131EC9247E7A2903_Export(Any p0)
	{
		return AUDIO::_0x131EC9247E7A2903(p0);
	}
	void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP_Export(Entity EntityIndex, float fadeOut)
	{
		return AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(EntityIndex, fadeOut);
	}
	Any _0xE600F61F54A444A6_Export()
	{
		return AUDIO::_0xE600F61F54A444A6();
	}
	BOOL AUDIO_IS_MUSIC_PLAYING_Export()
	{
		return AUDIO::AUDIO_IS_MUSIC_PLAYING();
	}
	Hash _0xBE28DB99556FF8D9_Export(Entity entity)
	{
		return AUDIO::_0xBE28DB99556FF8D9(entity);
	}
	void _0x8E901B65206C2D3E_Export(Ped ped)
	{
		return AUDIO::_0x8E901B65206C2D3E(ped);
	}
	void _0xC4CFCE4C656EF480_Export(Ped ped)
	{
		return AUDIO::_0xC4CFCE4C656EF480(ped);
	}
	void _0xABDB4863D3D72021_Export(Entity entity, Any p1, Any p2, float p3, Any p4)
	{
		return AUDIO::_0xABDB4863D3D72021(entity, p1, p2, p3, p4);
	}
	void _0xB93A769B8B726950_Export(Ped ped, Hash p1)
	{
		return AUDIO::_0xB93A769B8B726950(ped, p1);
	}
	void _0xE891504B2F0E2DBA_Export(Any p0, Any p1)
	{
		return AUDIO::_0xE891504B2F0E2DBA(p0, p1);
	}
	void _0x9EB779765E68C52E_Export(Any p0, Any p1)
	{
		return AUDIO::_0x9EB779765E68C52E(p0, p1);
	}
	void _0xE9694B2D6CB87B06_Export(Entity entity, Any p1)
	{
		return AUDIO::_0xE9694B2D6CB87B06(entity, p1);
	}
	Any _0x886657C5B3D8EDE3_Export(Entity entity)
	{
		return AUDIO::_0x886657C5B3D8EDE3(entity);
	}
	Any _0xC68C02DE259C927C_Export(Any p0)
	{
		return AUDIO::_0xC68C02DE259C927C(p0);
	}
	Any _0x2FFF4A78384AFFDF_Export(Entity entity)
	{
		return AUDIO::_0x2FFF4A78384AFFDF(entity);
	}
	AnimScene _0x62377977E4F08668_Export(Entity entity)
	{
		return AUDIO::_0x62377977E4F08668(entity);
	}
	Any _GET_PED_SONG_INDEX_HOST_Export(Ped ped)
	{
		return AUDIO::_GET_PED_SONG_INDEX_HOST(ped);
	}
	Any _0xD05A460328560477_Export(Any p0)
	{
		return AUDIO::_0xD05A460328560477(p0);
	}
	void _0x8D29FDF565DED9AE_Export(Any p0, Any p1, Any p2)
	{
		return AUDIO::_0x8D29FDF565DED9AE(p0, p1, p2);
	}
	void _0x448F2647DD6F2E27_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return AUDIO::_0x448F2647DD6F2E27(p0, p1, p2, p3, p4);
	}
	void _0x139A4B9DF2D26CBF_Export(Any p0, Any p1)
	{
		return AUDIO::_0x139A4B9DF2D26CBF(p0, p1);
	}
	void _0x018ABE833CA64D2A_Export(Any p0, Any p1)
	{
		return AUDIO::_0x018ABE833CA64D2A(p0, p1);
	}
	void _0xBC07CA8FD710E7FD_Export(Any p0, Any p1)
	{
		return AUDIO::_0xBC07CA8FD710E7FD(p0, p1);
	}
	BOOL PREPARE_MUSIC_EVENT_Export(const char* eventName)
	{
		return AUDIO::PREPARE_MUSIC_EVENT(eventName);
	}
	BOOL CANCEL_MUSIC_EVENT_Export(const char* eventName)
	{
		return AUDIO::CANCEL_MUSIC_EVENT(eventName);
	}
	BOOL TRIGGER_MUSIC_EVENT_Export(const char* eventName)
	{
		return AUDIO::TRIGGER_MUSIC_EVENT(eventName);
	}
	Any _TRIGGER_MUSIC_EVENT_WITH_HASH_Export(Hash eventName)
	{
		return AUDIO::_TRIGGER_MUSIC_EVENT_WITH_HASH(eventName);
	}
	int GET_MUSIC_PLAYTIME_Export()
	{
		return AUDIO::GET_MUSIC_PLAYTIME();
	}
	void _0xF64034D533CE8AAC_Export(Any p0, Any p1, Any p2)
	{
		return AUDIO::_0xF64034D533CE8AAC(p0, p1, p2);
	}
	void SET_PED_WALLA_DENSITY_Export(float density, float applyValue)
	{
		return AUDIO::SET_PED_WALLA_DENSITY(density, applyValue);
	}
	void _0xDAD6CD07CAA4F382_Export()
	{
		return AUDIO::_0xDAD6CD07CAA4F382();
	}
	void SET_PED_INTERIOR_WALLA_DENSITY_Export(float density, float applyValue)
	{
		return AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(density, applyValue);
	}
	void FORCE_PED_PANIC_WALLA_Export()
	{
		return AUDIO::FORCE_PED_PANIC_WALLA();
	}
	void _0x138ADB94F8B90616_Export()
	{
		return AUDIO::_0x138ADB94F8B90616();
	}
	void USE_FOOTSTEP_SCRIPT_SWEETENERS_Export(Ped PedIndex, BOOL use, Hash soundSetHash)
	{
		return AUDIO::USE_FOOTSTEP_SCRIPT_SWEETENERS(PedIndex, use, soundSetHash);
	}
	void SET_AUDIO_FLAG_Export(const char* flagName, BOOL enabled)
	{
		return AUDIO::SET_AUDIO_FLAG(flagName, enabled);
	}
	void _0x6DA15746D5CC1A92_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return AUDIO::_0x6DA15746D5CC1A92(p0, p1, p2, p3, p4, p5);
	}
	void _0x078F77FD1A43EAB3_Export(Any p0, Any p1)
	{
		return AUDIO::_0x078F77FD1A43EAB3(p0, p1);
	}
	void _0x3D0BBCCF401B5FDB_Export()
	{
		return AUDIO::_0x3D0BBCCF401B5FDB();
	}
	void SET_PORTAL_SETTINGS_OVERRIDE_Export(const char* OldPortalSettingsName, const char* NewPortalSettingsName)
	{
		return AUDIO::SET_PORTAL_SETTINGS_OVERRIDE(OldPortalSettingsName, NewPortalSettingsName);
	}
	void REMOVE_PORTAL_SETTINGS_OVERRIDE_Export(const char* PortalSettingsName)
	{
		return AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE(PortalSettingsName);
	}
	void _0xEA546C31FD45F8CD_Export(Any p0)
	{
		return AUDIO::_0xEA546C31FD45F8CD(p0);
	}
	Any _0x44A5EEF54F62E823_Export(Any p0)
	{
		return AUDIO::_0x44A5EEF54F62E823(p0);
	}
	void _0x017492B2201E3428_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return AUDIO::_0x017492B2201E3428(p0, p1, p2, p3);
	}
	void _0xC886CD666ADD42E1_Export(Any p0, Any p1)
	{
		return AUDIO::_0xC886CD666ADD42E1(p0, p1);
	}
	void _0x5AE0CB5F35F034FD_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return AUDIO::_0x5AE0CB5F35F034FD(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0x821C32C728B24477_Export(Any p0, Any p1, Any p2)
	{
		return AUDIO::_0x821C32C728B24477(p0, p1, p2);
	}
	void _0x06C5DF5EE444BC6B_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return AUDIO::_0x06C5DF5EE444BC6B(p0, p1, p2, p3, p4);
	}
	void _0x341CDD17EFC2472E_Export(Any p0, Any p1)
	{
		return AUDIO::_0x341CDD17EFC2472E(p0, p1);
	}
	void _0x7E176C676F8652A9_Export(Any p0)
	{
		return AUDIO::_0x7E176C676F8652A9(p0);
	}
	Any _0x2B9C37C01BF25EDB_Export(Any p0)
	{
		return AUDIO::_0x2B9C37C01BF25EDB(p0);
	}
	Any _0xA6A3A3F96B8B030E_Export()
	{
		return AUDIO::_0xA6A3A3F96B8B030E();
	}
	int _GET_LOADED_STREAM_ID_FROM_CREATION_Export(const char* streamName, const char* soundSet)
	{
		return AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(streamName, soundSet);
	}
	Any _0xC369E2234E34A0CA_Export(Any p0, Any p1)
	{
		return AUDIO::_0xC369E2234E34A0CA(p0, p1);
	}
	void _0x35B8C070E0C16E2F_Export(Any p0, Any p1)
	{
		return AUDIO::_0x35B8C070E0C16E2F(p0, p1);
	}
	void _0xE7E6CB8B713ED190_Export()
	{
		return AUDIO::_0xE7E6CB8B713ED190();
	}
	void _0x569ABC36E28DDEAA_Export()
	{
		return AUDIO::_0x569ABC36E28DDEAA();
	}
	void _0x839C9F124BE74D94_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return AUDIO::_0x839C9F124BE74D94(p0, p1, p2, p3, p4);
	}
	void AUDIO_TRIGGER_EXPLOSION_Export(const char* name, float x, float y, float z)
	{
		return AUDIO::AUDIO_TRIGGER_EXPLOSION(name, x, y, z);
	}
	void _0x3E98AC9D8C56C62C_Export(Any p0)
	{
		return AUDIO::_0x3E98AC9D8C56C62C(p0);
	}
	void _0xCBF2BEBB468A34F3_Export(Any p0)
	{
		return AUDIO::_0xCBF2BEBB468A34F3(p0);
	}
	void _0xA2B851605748AD0E_Export()
	{
		return AUDIO::_0xA2B851605748AD0E();
	}
	void _0xCFAD2C8CD1054523_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return AUDIO::_0xCFAD2C8CD1054523(p0, p1, p2, p3);
	}
	void _0xD733528B6C35647A_Export(Any p0, Any p1)
	{
		return AUDIO::_0xD733528B6C35647A(p0, p1);
	}
	void _0x5BC885EBD75FAA7D_Export(Any p0, Any p1)
	{
		return AUDIO::_0x5BC885EBD75FAA7D(p0, p1);
	}
	void _0x6B7A88A61B41E589_Export(Any p0)
	{
		return AUDIO::_0x6B7A88A61B41E589(p0);
	}
	void _0x4BE3EC91C01F0FE8_Export()
	{
		return AUDIO::_0x4BE3EC91C01F0FE8();
	}
	void SET_AUDIO_ONLINE_TRANSITION_STAGE_Export(const char* p0)
	{
		return AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE(p0);
	}
	void _STOP_ALL_SCRIPTED_AUDIO_SOUNDS_Export()
	{
		return AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	}
	void _0x64B956F4E761DF5C_Export(Any p0)
	{
		return AUDIO::_0x64B956F4E761DF5C(p0);
	}
	BOOL _BOUNTY_REQUEST_PAY_OFF_BOUNTY_Export(void* outRpcGuid)
	{
		return BOUNTY::_BOUNTY_REQUEST_PAY_OFF_BOUNTY(outRpcGuid);
	}
	BOOL _BOUNTY_REQUEST_PAY_OFF_BOUNTY_EX_Export(void* outRpcGuid, Hash p1, Hash costType)
	{
		return BOUNTY::_BOUNTY_REQUEST_PAY_OFF_BOUNTY_EX(outRpcGuid, p1, costType);
	}
	BOOL _BOUNTY_REQUEST_SELF_REPORT_CRIME_Export(void* outRpcGuid, Hash crimeType, BOOL p2)
	{
		return BOUNTY::_BOUNTY_REQUEST_SELF_REPORT_CRIME(outRpcGuid, crimeType, p2);
	}
	BOOL _BOUNTY_REQUEST_SELF_REPORT_KILLED_BY_BOUNTY_HUNTER_Export(void* outRpcGuid)
	{
		return BOUNTY::_BOUNTY_REQUEST_SELF_REPORT_KILLED_BY_BOUNTY_HUNTER(outRpcGuid);
	}
	BOOL BOUNTY_GET_BOUNTY_ON_PLAYER_Export(void* gamerHandle, void* bountyData)
	{
		return BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(gamerHandle, bountyData);
	}
	BOOL _BOUNTY_IS_REQUEST_PENDING_Export(void* rpcGuid)
	{
		return BOUNTY::_BOUNTY_IS_REQUEST_PENDING(rpcGuid);
	}
	BOOL _BOUNTY_REQUEST_BEGIN_WANTED_POSTER_Export(void* outRpcGuid, int p1)
	{
		return BOUNTY::_BOUNTY_REQUEST_BEGIN_WANTED_POSTER(outRpcGuid, p1);
	}
	BOOL _0x81847C2134039BDC_Export(void* p0)
	{
		return BOUNTY::_0x81847C2134039BDC(p0);
	}
	BOOL _BOUNTY_REQUEST_COMPLETE_WANTED_POSTER_Export(void* outRpcGuid, void* p1)
	{
		return BOUNTY::_BOUNTY_REQUEST_COMPLETE_WANTED_POSTER(outRpcGuid, p1);
	}
	BOOL _BOUNTY_REQUEST_COMPLETE_SPLIT_WANTED_POSTER_Export(void* outRpcGuid, void* p1)
	{
		return BOUNTY::_BOUNTY_REQUEST_COMPLETE_SPLIT_WANTED_POSTER(outRpcGuid, p1);
	}
	void _BOUNTY_CANCEL_WANTED_POSTER_Export()
	{
		return BOUNTY::_BOUNTY_CANCEL_WANTED_POSTER();
	}
	BOOL BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_Export(void* outRpcGuid, int p1, int p2)
	{
		return BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION(outRpcGuid, p1, p2);
	}
	BOOL BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE_Export(void* outRpcGuid, int p1, int p2)
	{
		return BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE(outRpcGuid, p1, p2);
	}
	BOOL _BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION_Export(void* outRpcGuid, void* p1)
	{
		return BOUNTY::_BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION(outRpcGuid, p1);
	}
	void _BOUNTY_CANCEL_LEGENDARY_MISSION_Export()
	{
		return BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
	}
	BOOL BOUNTY_GET_WANTED_POSTER_SLOT_Export(Hash p0, Hash p1, void* p2)
	{
		return BOUNTY::BOUNTY_GET_WANTED_POSTER_SLOT(p0, p1, p2);
	}
	BOOL BOUNTY_GET_LEGENDARY_TARGET_Export(Any p0, void* p1)
	{
		return BOUNTY::BOUNTY_GET_LEGENDARY_TARGET(p0, p1);
	}
	BOOL _0x86EC5F83867C4B70_Export(void* p0)
	{
		return BOUNTY::_0x86EC5F83867C4B70(p0);
	}
	BOOL BOUNTY_GET_COOLDOWN_COLLECTION_Export(void* p0)
	{
		return BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(p0);
	}
	BOOL _BOUNTY_REQUEST_BECOME_TARGET_OF_CHARACTER_BOUNTY_HUNT_Export(void* outRpcGuid)
	{
		return BOUNTY::_BOUNTY_REQUEST_BECOME_TARGET_OF_CHARACTER_BOUNTY_HUNT(outRpcGuid);
	}
	BOOL _0x27D3A0E1FE090A43_Export(void* p0)
	{
		return BOUNTY::_0x27D3A0E1FE090A43(p0);
	}
	BOOL _BOUNTY_REQUEST_CLAIM_CHARACTER_BOUNTY_Export(void* outRpcGuid, int p1, void* p2)
	{
		return BOUNTY::_BOUNTY_REQUEST_CLAIM_CHARACTER_BOUNTY(outRpcGuid, p1, p2);
	}
	BOOL _BOUNTY_REQUEST_POSSE_LEADER_CLAIM_CHARACTER_BOUNTY_Export(void* outRpcGuid, int p1, void* p2)
	{
		return BOUNTY::_BOUNTY_REQUEST_POSSE_LEADER_CLAIM_CHARACTER_BOUNTY(outRpcGuid, p1, p2);
	}
	BOOL _BOUNTY_REQUEST_POSSE_MEMBER_CLAIM_CHARACTER_BOUNTY_SHARE_Export(void* outRpcGuid, void* p1)
	{
		return BOUNTY::_BOUNTY_REQUEST_POSSE_MEMBER_CLAIM_CHARACTER_BOUNTY_SHARE(outRpcGuid, p1);
	}
	void _BOUNTY_CLEAR_BEING_BOUNTY_HUNTER_Export()
	{
		return BOUNTY::_BOUNTY_CLEAR_BEING_BOUNTY_HUNTER();
	}
	BOOL _BOUNTY_REQUEST_ESCAPED_CHARACTER_BOUNTY_HUNT_Export(void* outRpcGuid)
	{
		return BOUNTY::_BOUNTY_REQUEST_ESCAPED_CHARACTER_BOUNTY_HUNT(outRpcGuid);
	}
	BOOL _BOUNTY_REQUEST_POSSE_LEADER_ESCAPED_CHARACTER_BOUNTY_HUNT_Export(void* outRpcGuid)
	{
		return BOUNTY::_BOUNTY_REQUEST_POSSE_LEADER_ESCAPED_CHARACTER_BOUNTY_HUNT(outRpcGuid);
	}
	BOOL _BOUNTY_REQUEST_POSSE_MEMBER_ESCAPED_CHARACTER_BOUNTY_HUNT_Export(void* outRpcGuid)
	{
		return BOUNTY::_BOUNTY_REQUEST_POSSE_MEMBER_ESCAPED_CHARACTER_BOUNTY_HUNT(outRpcGuid);
	}
	void _BOUNTY_CLEAR_BEING_TARGET_Export()
	{
		return BOUNTY::_BOUNTY_CLEAR_BEING_TARGET();
	}
	BOOL _BOUNTY_REQUEST_SERVED_FULL_JAIL_SENTENCE_Export(void* outRpcGuid)
	{
		return BOUNTY::_BOUNTY_REQUEST_SERVED_FULL_JAIL_SENTENCE(outRpcGuid);
	}
	BOOL _BOUNTY_REQUEST_BRIBE_JAIL_GUARD_Export(void* outRpcGuid, int p1)
	{
		return BOUNTY::_BOUNTY_REQUEST_BRIBE_JAIL_GUARD(outRpcGuid, p1);
	}
	int _0xF8BCC5ECA33AC9C1_Export()
	{
		return BOUNTY::_0xF8BCC5ECA33AC9C1();
	}
	int _0xD6A67E2FF373D0E3_Export(int p0)
	{
		return BOUNTY::_0xD6A67E2FF373D0E3(p0);
	}
	void REGISTER_OBJECT_SCRIPT_BRAIN_Export(const char* pScriptName, Hash ObjectModelHashKey, int PercentageChance, float fActivationRange, int ObjectGroupingID, int SetToWhichThisBrainBelongs)
	{
		return BRAIN::REGISTER_OBJECT_SCRIPT_BRAIN(pScriptName, ObjectModelHashKey, PercentageChance, fActivationRange, ObjectGroupingID, SetToWhichThisBrainBelongs);
	}
	int _START_PRELOADED_SCRIPT_BRAIN_Export(Entity entity, const char* scriptName, int scriptStackSize, BOOL p3)
	{
		return BRAIN::_START_PRELOADED_SCRIPT_BRAIN(entity, scriptName, scriptStackSize, p3);
	}
	int _START_SCRIPT_BRAIN_Export(Entity entity, const char* scriptName, int p2, void* p3, int p4, BOOL p5)
	{
		return BRAIN::_START_SCRIPT_BRAIN(entity, scriptName, p2, p3, p4, p5);
	}
	void _REMOVE_SCRIPT_BRAIN_ENTITY_Export(Entity entity)
	{
		return BRAIN::_REMOVE_SCRIPT_BRAIN_ENTITY(entity);
	}
	Entity _GET_SCRIPT_BRAIN_ENTITY_Export()
	{
		return BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	}
	void _0xA6AC35DB4A7957A8_Export(int flag)
	{
		return BRAIN::_0xA6AC35DB4A7957A8(flag);
	}
	void _0x4AA5EA1EDFB25786_Export(int flag)
	{
		return BRAIN::_0x4AA5EA1EDFB25786(flag);
	}
	void ENABLE_SCRIPT_BRAIN_SET_Export(int set)
	{
		return BRAIN::ENABLE_SCRIPT_BRAIN_SET(set);
	}
	void DISABLE_SCRIPT_BRAIN_SET_Export(int set)
	{
		return BRAIN::DISABLE_SCRIPT_BRAIN_SET(set);
	}
	void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE_Export()
	{
		return BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	}
	void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE_Export(const char* pScriptName)
	{
		return BRAIN::REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(pScriptName);
	}
	void RENDER_SCRIPT_CAMS_Export(BOOL bSetActive, BOOL DoGameCamInterp, int Duration, BOOL bShouldLockInterpolationSourceFrame, BOOL bShouldApplyAcrossAllThreads, int RenderingOptions)
	{
		return CAM::RENDER_SCRIPT_CAMS(bSetActive, DoGameCamInterp, Duration, bShouldLockInterpolationSourceFrame, bShouldApplyAcrossAllThreads, RenderingOptions);
	}
	void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP_Export(BOOL bShouldApplyAcrossAllThreads, float DistanceToBlend, int BlendType, BOOL p3, BOOL p4, BOOL p5)
	{
		return CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(bShouldApplyAcrossAllThreads, DistanceToBlend, BlendType, p3, p4, p5);
	}
	Cam CREATE_CAM_Export(const char* CameraName, BOOL StartActivated)
	{
		return CAM::CREATE_CAM(CameraName, StartActivated);
	}
	Cam CREATE_CAM_WITH_PARAMS_Export(const char* CameraName, float vecPosX, float vecPosY, float vecPosZ, float vecRotX, float vecRotY, float vecRotZ, float FOV, BOOL StartActivated, int RotOrder)
	{
		return CAM::CREATE_CAM_WITH_PARAMS(CameraName, vecPosX, vecPosY, vecPosZ, vecRotX, vecRotY, vecRotZ, FOV, StartActivated, RotOrder);
	}
	Cam CREATE_CAMERA_Export(Hash Camera, BOOL StartActivated)
	{
		return CAM::CREATE_CAMERA(Camera, StartActivated);
	}
	Cam CREATE_CAMERA_WITH_PARAMS_Export(Hash Camera, float vecPosX, float vecPosY, float vecPosZ, float vecRotX, float vecRotY, float vecRotZ, float FOV, BOOL StartActivated, int RotOrder)
	{
		return CAM::CREATE_CAMERA_WITH_PARAMS(Camera, vecPosX, vecPosY, vecPosZ, vecRotX, vecRotY, vecRotZ, FOV, StartActivated, RotOrder);
	}
	void DESTROY_CAM_Export(Cam CameraIndex, BOOL bShouldApplyAcrossAllThreads)
	{
		return CAM::DESTROY_CAM(CameraIndex, bShouldApplyAcrossAllThreads);
	}
	void DESTROY_ALL_CAMS_Export(BOOL bShouldApplyAcrossAllThreads)
	{
		return CAM::DESTROY_ALL_CAMS(bShouldApplyAcrossAllThreads);
	}
	BOOL DOES_CAM_EXIST_Export(Cam CameraIndex)
	{
		return CAM::DOES_CAM_EXIST(CameraIndex);
	}
	void SET_CAM_ACTIVE_Export(Cam CameraIndex, BOOL bActiveState)
	{
		return CAM::SET_CAM_ACTIVE(CameraIndex, bActiveState);
	}
	BOOL IS_CAM_ACTIVE_Export(Cam CameraIndex)
	{
		return CAM::IS_CAM_ACTIVE(CameraIndex);
	}
	BOOL IS_CAM_RENDERING_Export(Cam CamIndex)
	{
		return CAM::IS_CAM_RENDERING(CamIndex);
	}
	Cam GET_RENDERING_CAM_Export()
	{
		return CAM::GET_RENDERING_CAM();
	}
	scrVector GET_CAM_COORD_Export(Cam CameraIndex)
	{
		return CAM::GET_CAM_COORD(CameraIndex);
	}
	scrVector GET_CAM_ROT_Export(Cam CameraIndex, int RotOrder)
	{
		return CAM::GET_CAM_ROT(CameraIndex, RotOrder);
	}
	float GET_CAM_FOV_Export(Cam CameraIndex)
	{
		return CAM::GET_CAM_FOV(CameraIndex);
	}
	void SET_CAM_PARAMS_Export(Cam CameraIndex, float vPosX, float vPosY, float vPosZ, float vRotX, float vRotY, float vRotZ, float FOV, int Duration, int GraphTypePos, int GraphTypeRot, int RotOrder, BOOL p12, BOOL p13)
	{
		return CAM::SET_CAM_PARAMS(CameraIndex, vPosX, vPosY, vPosZ, vRotX, vRotY, vRotZ, FOV, Duration, GraphTypePos, GraphTypeRot, RotOrder, p12, p13);
	}
	void SET_CAM_COORD_Export(Cam CameraIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ)
	{
		return CAM::SET_CAM_COORD(CameraIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ);
	}
	void SET_CAM_ROT_Export(Cam CameraIndex, float VecNewRotX, float VecNewRotY, float VecNewRotZ, int RotOrder)
	{
		return CAM::SET_CAM_ROT(CameraIndex, VecNewRotX, VecNewRotY, VecNewRotZ, RotOrder);
	}
	void SET_CAM_FOV_Export(Cam CameraIndex, float FOV)
	{
		return CAM::SET_CAM_FOV(CameraIndex, FOV);
	}
	void SET_CAM_NEAR_CLIP_Export(Cam CameraIndex, float NearClip)
	{
		return CAM::SET_CAM_NEAR_CLIP(CameraIndex, NearClip);
	}
	void SET_CAM_FAR_CLIP_Export(Cam CameraIndex, float FarClip)
	{
		return CAM::SET_CAM_FAR_CLIP(CameraIndex, FarClip);
	}
	void SET_CAM_MOTION_BLUR_STRENGTH_Export(Cam CameraIndex, float Strength)
	{
		return CAM::SET_CAM_MOTION_BLUR_STRENGTH(CameraIndex, Strength);
	}
	void _0xFC3F638BE2B6BB02_Export()
	{
		return CAM::_0xFC3F638BE2B6BB02();
	}
	void _0xE4B7945EF4F1BFB2_Export(Cam cam, void* args)
	{
		return CAM::_0xE4B7945EF4F1BFB2(cam, args);
	}
	void _0x1FC6C727D30FFDDE_Export(Any p0)
	{
		return CAM::_0x1FC6C727D30FFDDE(p0);
	}
	void ATTACH_CAM_TO_ENTITY_Export(Cam CameraIndex, Entity EntityIndex, float vecOffsetX, float vecOffsetY, float vecOffsetZ, BOOL bOffsetIsRelative)
	{
		return CAM::ATTACH_CAM_TO_ENTITY(CameraIndex, EntityIndex, vecOffsetX, vecOffsetY, vecOffsetZ, bOffsetIsRelative);
	}
	void ATTACH_CAM_TO_PED_BONE_Export(Cam CameraIndex, Ped PedIndex, int BoneTag, float vecOffsetX, float vecOffsetY, float vecOffsetZ, BOOL bOffsetIsRelative)
	{
		return CAM::ATTACH_CAM_TO_PED_BONE(CameraIndex, PedIndex, BoneTag, vecOffsetX, vecOffsetY, vecOffsetZ, bOffsetIsRelative);
	}
	void DETACH_CAM_Export(Cam CameraIndex)
	{
		return CAM::DETACH_CAM(CameraIndex);
	}
	void POINT_CAM_AT_COORD_Export(Cam CameraIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		return CAM::POINT_CAM_AT_COORD(CameraIndex, VecCoorsX, VecCoorsY, VecCoorsZ);
	}
	void POINT_CAM_AT_ENTITY_Export(Cam CameraIndex, Entity EntityIndex, float vecOffsetX, float vecOffsetY, float vecOffsetZ, BOOL bOffsetIsRelative)
	{
		return CAM::POINT_CAM_AT_ENTITY(CameraIndex, EntityIndex, vecOffsetX, vecOffsetY, vecOffsetZ, bOffsetIsRelative);
	}
	void STOP_CAM_POINTING_Export(Cam CameraIndex)
	{
		return CAM::STOP_CAM_POINTING(CameraIndex);
	}
	void _SET_CAM_FOCUS_DISTANCE_Export(Cam cam, float distance)
	{
		return CAM::_SET_CAM_FOCUS_DISTANCE(cam, distance);
	}
	void _PAUSE_CAMERA_FOCUS_Export(Cam cam, BOOL pause)
	{
		return CAM::_PAUSE_CAMERA_FOCUS(cam, pause);
	}
	void SET_CAM_AFFECTS_AIMING_Export(Cam CameraIndex, BOOL bState)
	{
		return CAM::SET_CAM_AFFECTS_AIMING(CameraIndex, bState);
	}
	void SET_CAM_CONTROLS_MINI_MAP_HEADING_Export(Cam CameraIndex, BOOL bState)
	{
		return CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(CameraIndex, bState);
	}
	void ALLOW_MOTION_BLUR_DECAY_Export(Cam CameraIndex, BOOL enable)
	{
		return CAM::ALLOW_MOTION_BLUR_DECAY(CameraIndex, enable);
	}
	void ADD_CAM_SPLINE_NODE_Export(Cam CameraIndex, float vPosX, float vPosY, float vPosZ, float vRotX, float vRotY, float vRotZ, int iDuration, int Flags, int RotOrder)
	{
		return CAM::ADD_CAM_SPLINE_NODE(CameraIndex, vPosX, vPosY, vPosZ, vRotX, vRotY, vRotZ, iDuration, Flags, RotOrder);
	}
	void SET_CAM_SPLINE_PHASE_Export(Cam CameraIndex, float phase)
	{
		return CAM::SET_CAM_SPLINE_PHASE(CameraIndex, phase);
	}
	float GET_CAM_SPLINE_PHASE_Export(Cam CameraIndex)
	{
		return CAM::GET_CAM_SPLINE_PHASE(CameraIndex);
	}
	void SET_CAM_SPLINE_DURATION_Export(Cam CameraIndex, int Duration)
	{
		return CAM::SET_CAM_SPLINE_DURATION(CameraIndex, Duration);
	}
	void SET_CAM_SPLINE_SMOOTHING_STYLE_Export(Cam CameraIndex, int SmoothingStyle)
	{
		return CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(CameraIndex, SmoothingStyle);
	}
	void SET_CAM_ACTIVE_WITH_INTERP_Export(Cam DestinationCam, Cam OriginCam, int Duration, int GraphTypePos, int GraphTypeRot)
	{
		return CAM::SET_CAM_ACTIVE_WITH_INTERP(DestinationCam, OriginCam, Duration, GraphTypePos, GraphTypeRot);
	}
	BOOL IS_CAM_INTERPOLATING_Export(Cam CameraIndex)
	{
		return CAM::IS_CAM_INTERPOLATING(CameraIndex);
	}
	void SHAKE_CAM_Export(Cam CameraIndex, const char* ShakeName, float fAmplitudeScalar)
	{
		return CAM::SHAKE_CAM(CameraIndex, ShakeName, fAmplitudeScalar);
	}
	BOOL IS_CAM_SHAKING_Export(Cam CameraIndex)
	{
		return CAM::IS_CAM_SHAKING(CameraIndex);
	}
	void STOP_CAM_SHAKING_Export(Cam CameraIndex, BOOL bStopImmediately)
	{
		return CAM::STOP_CAM_SHAKING(CameraIndex, bStopImmediately);
	}
	BOOL PLAY_CAM_ANIM_Export(Cam CameraIndex, const char* AnimName, const char* AnimDictName, float vOriginPositionX, float vOriginPositionY, float vOriginPositionZ, float vOriginRotationX, float vOriginRotationY, float vOriginRotationZ, int AnimFlags, int RotOrder)
	{
		return CAM::PLAY_CAM_ANIM(CameraIndex, AnimName, AnimDictName, vOriginPositionX, vOriginPositionY, vOriginPositionZ, vOriginRotationX, vOriginRotationY, vOriginRotationZ, AnimFlags, RotOrder);
	}
	void _0xCF69EA05CD9C33C9_Export()
	{
		return CAM::_0xCF69EA05CD9C33C9();
	}
	BOOL _IS_ANIM_SCENE_CAM_ACTIVE_Export()
	{
		return CAM::_IS_ANIM_SCENE_CAM_ACTIVE();
	}
	BOOL IS_SCREEN_FADED_OUT_Export()
	{
		return CAM::IS_SCREEN_FADED_OUT();
	}
	BOOL IS_SCREEN_FADED_IN_Export()
	{
		return CAM::IS_SCREEN_FADED_IN();
	}
	BOOL IS_SCREEN_FADING_OUT_Export()
	{
		return CAM::IS_SCREEN_FADING_OUT();
	}
	BOOL IS_SCREEN_FADING_IN_Export()
	{
		return CAM::IS_SCREEN_FADING_IN();
	}
	void DO_SCREEN_FADE_IN_Export(int time)
	{
		return CAM::DO_SCREEN_FADE_IN(time);
	}
	void DO_SCREEN_FADE_OUT_Export(int time)
	{
		return CAM::DO_SCREEN_FADE_OUT(time);
	}
	BOOL HAS_LETTER_BOX_Export()
	{
		return CAM::HAS_LETTER_BOX();
	}
	void _REQUEST_LETTER_BOX_NOW_Export(BOOL p0, BOOL p1)
	{
		return CAM::_REQUEST_LETTER_BOX_NOW(p0, p1);
	}
	void _REQUEST_LETTER_BOX_OVERTIME_Export(int p0, int p1, BOOL p2, int p3, BOOL p4, BOOL p5)
	{
		return CAM::_REQUEST_LETTER_BOX_OVERTIME(p0, p1, p2, p3, p4, p5);
	}
	void _FORCE_LETTER_BOX_THIS_UPDATE_Export()
	{
		return CAM::_FORCE_LETTER_BOX_THIS_UPDATE();
	}
	float GET_LETTER_BOX_RATIO_Export()
	{
		return CAM::GET_LETTER_BOX_RATIO();
	}
	Any _0x73FF6BE63DC18819_Export()
	{
		return CAM::_0x73FF6BE63DC18819();
	}
	Any _0x450769C833D58844_Export()
	{
		return CAM::_0x450769C833D58844();
	}
	void SET_WIDESCREEN_BORDERS_Export(BOOL bSet, int Duration)
	{
		return CAM::SET_WIDESCREEN_BORDERS(bSet, Duration);
	}
	scrVector GET_GAMEPLAY_CAM_COORD_Export()
	{
		return CAM::GET_GAMEPLAY_CAM_COORD();
	}
	scrVector GET_GAMEPLAY_CAM_ROT_Export(int RotOrder)
	{
		return CAM::GET_GAMEPLAY_CAM_ROT(RotOrder);
	}
	float GET_GAMEPLAY_CAM_FOV_Export()
	{
		return CAM::GET_GAMEPLAY_CAM_FOV();
	}
	void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE_Export(float maxStrength)
	{
		return CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(maxStrength);
	}
	float GET_GAMEPLAY_CAM_RELATIVE_HEADING_Export()
	{
		return CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
	}
	void SET_GAMEPLAY_CAM_RELATIVE_HEADING_Export(float heading, float p1)
	{
		return CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(heading, p1);
	}
	float GET_GAMEPLAY_CAM_RELATIVE_PITCH_Export()
	{
		return CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
	}
	void SET_GAMEPLAY_CAM_RELATIVE_PITCH_Export(float pitch, float smoothRate)
	{
		return CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(pitch, smoothRate);
	}
	void _0x0961B089947BA6D0_Export(Any p0)
	{
		return CAM::_0x0961B089947BA6D0(p0);
	}
	void _0x04084490CC302CFB_Export()
	{
		return CAM::_0x04084490CC302CFB();
	}
	void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME_Export(BOOL isFirstPersonThisFrame)
	{
		return CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(isFirstPersonThisFrame);
	}
	BOOL _IS_IN_FULL_FIRST_PERSON_MODE_Export()
	{
		return CAM::_IS_IN_FULL_FIRST_PERSON_MODE();
	}
	void SHAKE_GAMEPLAY_CAM_Export(const char* ShakeName, float fAmplitudeScalar)
	{
		return CAM::SHAKE_GAMEPLAY_CAM(ShakeName, fAmplitudeScalar);
	}
	void _0xC3E9E5D4F413B773_Export(const char* shakeName, float intensity)
	{
		return CAM::_0xC3E9E5D4F413B773(shakeName, intensity);
	}
	BOOL IS_GAMEPLAY_CAM_SHAKING_Export()
	{
		return CAM::IS_GAMEPLAY_CAM_SHAKING();
	}
	BOOL _0x0060B31968E60E41_Export(const char* shakeName)
	{
		return CAM::_0x0060B31968E60E41(shakeName);
	}
	void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE_Export(float fAmplitudeScalar)
	{
		return CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fAmplitudeScalar);
	}
	void _0xFEFDDC6E8FDF8A75_Export(const char* shakeName, float intensity)
	{
		return CAM::_0xFEFDDC6E8FDF8A75(shakeName, intensity);
	}
	void STOP_GAMEPLAY_CAM_SHAKING_Export(BOOL bStopImmediately)
	{
		return CAM::STOP_GAMEPLAY_CAM_SHAKING(bStopImmediately);
	}
	void _STOP_GAMEPLAY_CAM_SHAKING_WITH_NAME_Export(const char* shakeName, BOOL p1)
	{
		return CAM::_STOP_GAMEPLAY_CAM_SHAKING_WITH_NAME(shakeName, p1);
	}
	void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE_Export(Ped PedIndex)
	{
		return CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(PedIndex);
	}
	BOOL IS_GAMEPLAY_CAM_RENDERING_Export()
	{
		return CAM::IS_GAMEPLAY_CAM_RENDERING();
	}
	BOOL IS_INTERPOLATING_FROM_SCRIPT_CAMS_Export()
	{
		return CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
	}
	BOOL IS_INTERPOLATING_TO_SCRIPT_CAMS_Export()
	{
		return CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS();
	}
	BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND_Export()
	{
		return CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND();
	}
	void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE_Export(Entity Index)
	{
		return CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Index);
	}
	void DISABLE_CAM_COLLISION_FOR_OBJECT_Export(Object object)
	{
		return CAM::DISABLE_CAM_COLLISION_FOR_OBJECT(object);
	}
	void _0x39073DA4EDDBC91D_Export(Any p0)
	{
		return CAM::_0x39073DA4EDDBC91D(p0);
	}
	void _0x70A6658D476C6187_Export()
	{
		return CAM::_0x70A6658D476C6187();
	}
	void _0x18C3DFAC458783BB_Export()
	{
		return CAM::_0x18C3DFAC458783BB();
	}
	void _0xF1A6FEEDF3776EF9_Export()
	{
		return CAM::_0xF1A6FEEDF3776EF9();
	}
	void _0xE6F364DE6C2FDEFE_Export()
	{
		return CAM::_0xE6F364DE6C2FDEFE();
	}
	void _0x0F1FFEF5D54AE832_Export()
	{
		return CAM::_0x0F1FFEF5D54AE832();
	}
	void _0x3C8F74E8FE751614_Export()
	{
		return CAM::_0x3C8F74E8FE751614();
	}
	void _0x06557F6D96C86881_Export()
	{
		return CAM::_0x06557F6D96C86881();
	}
	BOOL IS_SPHERE_VISIBLE_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float radius)
	{
		return CAM::IS_SPHERE_VISIBLE(VecCoorsX, VecCoorsY, VecCoorsZ, radius);
	}
	Any _0x190F7DA1AC09A8EF_Export()
	{
		return CAM::_0x190F7DA1AC09A8EF();
	}
	void _SET_GAMEPLAY_CAM_INITIAL_ZOOM_Export(float camInitialZoom)
	{
		return CAM::_SET_GAMEPLAY_CAM_INITIAL_ZOOM(camInitialZoom);
	}
	void _SET_GAMEPLAY_CAM_INITIAL_HEADING_Export(float camInitialHeading)
	{
		return CAM::_SET_GAMEPLAY_CAM_INITIAL_HEADING(camInitialHeading);
	}
	void _SET_GAMEPLAY_CAM_INITIAL_PITCH_Export(float camInitialPitch)
	{
		return CAM::_SET_GAMEPLAY_CAM_INITIAL_PITCH(camInitialPitch);
	}
	void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE_Export(float minRelativeHeading, float maxRelativeHeading)
	{
		return CAM::SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(minRelativeHeading, maxRelativeHeading);
	}
	void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE_Export(float minRelativePitch, float maxRelativePitch)
	{
		return CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(minRelativePitch, maxRelativePitch);
	}
	void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE_Export(float minDistance, float maxDistance)
	{
		return CAM::SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(minDistance, maxDistance);
	}
	void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE_Export(Vehicle Vehicle, int InVehicleState)
	{
		return CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle, InVehicleState);
	}
	void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_Export()
	{
		return CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}
	void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE_Export()
	{
		return CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	}
	void _DISABLE_CINEMATIC_MODE_THIS_FRAME_Export()
	{
		return CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
	}
	BOOL _IS_IN_CINEMATIC_MODE_Export()
	{
		return CAM::_IS_IN_CINEMATIC_MODE();
	}
	void _0x718C6ECF5E8CBDD4_Export()
	{
		return CAM::_0x718C6ECF5E8CBDD4();
	}
	void _FORCE_THIRD_PERSON_CAM_THIS_FRAME_Export()
	{
		return CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
	}
	void _FORCE_THIRD_PERSON_CAM_FAR_THIS_FRAME_Export()
	{
		return CAM::_FORCE_THIRD_PERSON_CAM_FAR_THIS_FRAME();
	}
	BOOL _FORCE_FIRST_PERSON_CAM_THIS_FRAME_Export()
	{
		return CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	void _DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2_Export()
	{
		return CAM::_DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2();
	}
	void _0x632BE8D84846FA56_Export()
	{
		return CAM::_0x632BE8D84846FA56();
	}
	void _0x71D71E08A7ED5BD7_Export(Any p0)
	{
		return CAM::_0x71D71E08A7ED5BD7(p0);
	}
	BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE_Export()
	{
		return CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE();
	}
	void _0x7E40A01B11398FCB_Export()
	{
		return CAM::_0x7E40A01B11398FCB();
	}
	BOOL IS_AIM_CAM_ACTIVE_Export()
	{
		return CAM::IS_AIM_CAM_ACTIVE();
	}
	BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE_Export()
	{
		return CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE();
	}
	BOOL IS_FIRST_PERSON_CAMERA_ACTIVE_Export(Any p0, Any p1, Any p2)
	{
		return CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(p0, p1, p2);
	}
	Any _0xDC62CD70658E7A02_Export()
	{
		return CAM::_0xDC62CD70658E7A02();
	}
	Any _0x796085220ADCC847_Export()
	{
		return CAM::_0x796085220ADCC847();
	}
	Any _0xB6A80E1E3A5444F1_Export()
	{
		return CAM::_0xB6A80E1E3A5444F1();
	}
	Any _0x8B1A5FE7E41E52B2_Export()
	{
		return CAM::_0x8B1A5FE7E41E52B2();
	}
	float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR_Export()
	{
		return CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
	}
	void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE_Export(float MinRelativeHeading, float MaxRelativeHeading)
	{
		return CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(MinRelativeHeading, MaxRelativeHeading);
	}
	void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE_Export(float MinRelativePitch, float MaxRelativePitch)
	{
		return CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(MinRelativePitch, MaxRelativePitch);
	}
	void _0xC205B3C54C6A4E37_Export(Any p0)
	{
		return CAM::_0xC205B3C54C6A4E37(p0);
	}
	scrVector GET_FINAL_RENDERED_CAM_COORD_Export()
	{
		return CAM::GET_FINAL_RENDERED_CAM_COORD();
	}
	scrVector GET_FINAL_RENDERED_CAM_ROT_Export(int RotOrder)
	{
		return CAM::GET_FINAL_RENDERED_CAM_ROT(RotOrder);
	}
	float GET_FINAL_RENDERED_CAM_FOV_Export()
	{
		return CAM::GET_FINAL_RENDERED_CAM_FOV();
	}
	void SET_GAMEPLAY_COORD_HINT_Export(float vCoordX, float vCoordY, float vCoordZ, int iDwellTime, int iInterpTo, int iInterpFrom, Hash Type)
	{
		return CAM::SET_GAMEPLAY_COORD_HINT(vCoordX, vCoordY, vCoordZ, iDwellTime, iInterpTo, iInterpFrom, Type);
	}
	void SET_GAMEPLAY_PED_HINT_Export(Ped Ped, float OffsetX, float OffsetY, float OffsetZ, BOOL RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom)
	{
		return CAM::SET_GAMEPLAY_PED_HINT(Ped, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom);
	}
	void SET_GAMEPLAY_VEHICLE_HINT_Export(Vehicle Vehicle, float OffsetX, float OffsetY, float OffsetZ, BOOL RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom)
	{
		return CAM::SET_GAMEPLAY_VEHICLE_HINT(Vehicle, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom);
	}
	void SET_GAMEPLAY_OBJECT_HINT_Export(Object Obejct, float OffsetX, float OffsetY, float OffsetZ, BOOL RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom)
	{
		return CAM::SET_GAMEPLAY_OBJECT_HINT(Obejct, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom);
	}
	void SET_GAMEPLAY_ENTITY_HINT_Export(Entity Enttity, float OffsetX, float OffsetY, float OffsetZ, BOOL RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom, Hash Type)
	{
		return CAM::SET_GAMEPLAY_ENTITY_HINT(Enttity, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom, Type);
	}
	BOOL IS_GAMEPLAY_HINT_ACTIVE_Export()
	{
		return CAM::IS_GAMEPLAY_HINT_ACTIVE();
	}
	void STOP_GAMEPLAY_HINT_Export(BOOL bStopImmediately)
	{
		return CAM::STOP_GAMEPLAY_HINT(bStopImmediately);
	}
	void STOP_CODE_GAMEPLAY_HINT_Export(BOOL StopImmediately)
	{
		return CAM::STOP_CODE_GAMEPLAY_HINT(StopImmediately);
	}
	void _0x88544C0E3291DCAE_Export(BOOL p0)
	{
		return CAM::_0x88544C0E3291DCAE(p0);
	}
	void SET_GAMEPLAY_HINT_FOV_Export(float fov)
	{
		return CAM::SET_GAMEPLAY_HINT_FOV(fov);
	}
	void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR_Export(float DistanceScalar)
	{
		return CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(DistanceScalar);
	}
	void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET_Export(float BasePitchOffset)
	{
		return CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(BasePitchOffset);
	}
	void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET_Export(float SideOffset)
	{
		return CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(SideOffset);
	}
	void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET_Export(float VerticalOffset)
	{
		return CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(VerticalOffset);
	}
	void _0xF48664E9C83825E3_Export(Any p0, Any p1)
	{
		return CAM::_0xF48664E9C83825E3(p0, p1);
	}
	void _0x1F6EBD94680252CE_Export(Any p0, Any p1)
	{
		return CAM::_0x1F6EBD94680252CE(p0, p1);
	}
	void _0xE28F73212A813E82_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return CAM::_0xE28F73212A813E82(p0, p1, p2, p3);
	}
	void _0x4D2F46D1B28D90FB_Export(Any p0, Any p1)
	{
		return CAM::_0x4D2F46D1B28D90FB(p0, p1);
	}
	void _START_CAMERA_ORBIT_Export(void* p0)
	{
		return CAM::_START_CAMERA_ORBIT(p0);
	}
	void _0x641092322A8852AB_Export()
	{
		return CAM::_0x641092322A8852AB();
	}
	void _0xDB382FE20C2DA222_Export(Any p0)
	{
		return CAM::_0xDB382FE20C2DA222(p0);
	}
	void _0x2DD3149DC34A3F4C_Export(Any p0)
	{
		return CAM::_0x2DD3149DC34A3F4C(p0);
	}
	void _FREEZE_GAMEPLAY_CAM_THIS_FRAME_Export()
	{
		return CAM::_FREEZE_GAMEPLAY_CAM_THIS_FRAME();
	}
	void _0x3C486E334520579D_Export()
	{
		return CAM::_0x3C486E334520579D();
	}
	void _0x41E452A3C580D1A7_Export()
	{
		return CAM::_0x41E452A3C580D1A7();
	}
	void SET_CINEMATIC_BUTTON_ACTIVE_Export(BOOL bEnable)
	{
		return CAM::SET_CINEMATIC_BUTTON_ACTIVE(bEnable);
	}
	BOOL IS_CINEMATIC_CAM_RENDERING_Export()
	{
		return CAM::IS_CINEMATIC_CAM_RENDERING();
	}
	void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE_Export()
	{
		return CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	}
	void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE_Export()
	{
		return CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
	}
	void FORCE_CINEMATIC_RENDERING_THIS_UPDATE_Export(BOOL ActiveThisFrame)
	{
		return CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(ActiveThisFrame);
	}
	void _0x9AC65A36D3C0C189_Export(Any p0)
	{
		return CAM::_0x9AC65A36D3C0C189(p0);
	}
	BOOL _0x975F6EBB62632FE3_Export()
	{
		return CAM::_0x975F6EBB62632FE3();
	}
	void SET_CINEMATIC_MODE_ACTIVE_Export(BOOL Active)
	{
		return CAM::SET_CINEMATIC_MODE_ACTIVE(Active);
	}
	BOOL _0x1811A02277A9E49D_Export()
	{
		return CAM::_0x1811A02277A9E49D();
	}
	void _FORCE_CINEMATIC_DEATH_CAM_ON_PED_Export(Ped targetPed)
	{
		return CAM::_FORCE_CINEMATIC_DEATH_CAM_ON_PED(targetPed);
	}
	void _REACTIVATE_PED_HEADSHOT_EXECUTE_SLOWCAM_Export(Ped ped, int p1)
	{
		return CAM::_REACTIVATE_PED_HEADSHOT_EXECUTE_SLOWCAM(ped, p1);
	}
	void _0x5B637D6F3B67716A_Export(Any p0)
	{
		return CAM::_0x5B637D6F3B67716A(p0);
	}
	void _0xC252C0CC969AF79A_Export(Any p0)
	{
		return CAM::_0xC252C0CC969AF79A(p0);
	}
	void _0xE2BB2D6A9FE2ECDE_Export(Any p0)
	{
		return CAM::_0xE2BB2D6A9FE2ECDE(p0);
	}
	void _SET_START_CINEMATIC_DEATH_CAM_Export(BOOL p0)
	{
		return CAM::_SET_START_CINEMATIC_DEATH_CAM(p0);
	}
	Any _0x6072B7420A83A03F_Export()
	{
		return CAM::_0x6072B7420A83A03F();
	}
	BOOL _0x1204EB53A5FBC63D_Export()
	{
		return CAM::_0x1204EB53A5FBC63D();
	}
	void _0x6519238858AF5479_Export(Any p0)
	{
		return CAM::_0x6519238858AF5479(p0);
	}
	void _CREATE_KILL_CAM_Export(Ped ped)
	{
		return CAM::_CREATE_KILL_CAM(ped);
	}
	BOOL _IS_CAM_PHOTOFX_RUNNING_Export()
	{
		return CAM::_IS_CAM_PHOTOFX_RUNNING();
	}
	Any _0x6DFD37E586D4F44F_Export()
	{
		return CAM::_0x6DFD37E586D4F44F();
	}
	Any _0x80D7A3E39B120BC4_Export()
	{
		return CAM::_0x80D7A3E39B120BC4();
	}
	void _0x63E5841A9264D016_Export(BOOL toggle)
	{
		return CAM::_0x63E5841A9264D016(toggle);
	}
	void _TRIGGER_MISSION_FAILED_CAM_Export()
	{
		return CAM::_TRIGGER_MISSION_FAILED_CAM();
	}
	void _0x16E9ABDD34DDD931_Export()
	{
		return CAM::_0x16E9ABDD34DDD931();
	}
	BOOL IS_DEATH_FAIL_CAMERA_RUNNING_Export()
	{
		return CAM::IS_DEATH_FAIL_CAMERA_RUNNING();
	}
	Any _0x7CE9DC58E3E4755F_Export()
	{
		return CAM::_0x7CE9DC58E3E4755F();
	}
	void _0x3B8E3AD9677CE12B_Export(Any p0, Any p1, Any p2)
	{
		return CAM::_0x3B8E3AD9677CE12B(p0, p1, p2);
	}
	void _0xDF7F5BE9150E47E4_Export(Any p0)
	{
		return CAM::_0xDF7F5BE9150E47E4(p0);
	}
	void _0xB85C13E0BF1F2A1C_Export(Any p0)
	{
		return CAM::_0xB85C13E0BF1F2A1C(p0);
	}
	void _0x066167C63111D8CF_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return CAM::_0x066167C63111D8CF(p0, p1, p2, p3, p4);
	}
	void _0xA8BA2E0204D8486F_Export()
	{
		return CAM::_0xA8BA2E0204D8486F();
	}
	void _0xC3742F1FDF0A6824_Export()
	{
		return CAM::_0xC3742F1FDF0A6824();
	}
	void _0x0FF7125F07DEB84F_Export(Any p0, Any p1)
	{
		return CAM::_0x0FF7125F07DEB84F(p0, p1);
	}
	void _0x6CAB0BA160B168D2_Export()
	{
		return CAM::_0x6CAB0BA160B168D2();
	}
	void _LOAD_CINEMATIC_CAM_LOCATION_Export(const char* locationDictName)
	{
		return CAM::_LOAD_CINEMATIC_CAM_LOCATION(locationDictName);
	}
	void _UNLOAD_CINEMATIC_CAMERA_LOCATION_Export(const char* dictionaryName)
	{
		return CAM::_UNLOAD_CINEMATIC_CAMERA_LOCATION(dictionaryName);
	}
	BOOL _IS_CINEMATIC_CAM_LOCATION_LOADED_Export(const char* sLocationDictName)
	{
		return CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED(sLocationDictName);
	}
	BOOL _IS_CINEMATIC_CAM_LOCATION_LOADED_2_Export(const char* locationDictName)
	{
		return CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED_2(locationDictName);
	}
	Any _0x465F04F68AD38197_Export(const char* dictionary, const char* shotName, int duration)
	{
		return CAM::_0x465F04F68AD38197(dictionary, shotName, duration);
	}
	Any _0xEA113BF9B0C0C5D7_Export(const char* dictionary, const char* shotName, int duration)
	{
		return CAM::_0xEA113BF9B0C0C5D7(dictionary, shotName, duration);
	}
	void _CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2_Export(const char* dictionary, const char* shotName, int duration)
	{
		return CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(dictionary, shotName, duration);
	}
	void CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_Export(const char* dictionary, const char* shotName, const char* cameraName, Any p3)
	{
		return CAM::CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(dictionary, shotName, cameraName, p3);
	}
	void _0xA54D643D0773EB65_Export(const char* dictionary, const char* shotName, int duration)
	{
		return CAM::_0xA54D643D0773EB65(dictionary, shotName, duration);
	}
	void CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT_Export(Any p0, Any p1, Any p2)
	{
		return CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(p0, p1, p2);
	}
	BOOL _0xC3AEBB276825A359_Export(const char* dictionary, const char* shotName, int duration)
	{
		return CAM::_0xC3AEBB276825A359(dictionary, shotName, duration);
	}
	BOOL _0x1D931B7CC0EE3956_Export(const char* dictionary, const char* shotName, const char* cameraName)
	{
		return CAM::_0x1D931B7CC0EE3956(dictionary, shotName, cameraName);
	}
	void _CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION_Export(const char* name, float x, float y, float z, float rotX, float rotY, float rotZ)
	{
		return CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(name, x, y, z, rotX, rotY, rotZ);
	}
	void CINEMATIC_LOCATION_OVERRIDE_TARGET_ENTITY_THIS_UPDATE_Export(const char* name, Entity entity)
	{
		return CAM::CINEMATIC_LOCATION_OVERRIDE_TARGET_ENTITY_THIS_UPDATE(name, entity);
	}
	void _LOAD_CAMERA_DATA_DICT_Export(const char* cameraDictionary)
	{
		return CAM::_LOAD_CAMERA_DATA_DICT(cameraDictionary);
	}
	void _UNLOAD_CAMERA_DATA_DICT_Export(const char* cameraDictionary)
	{
		return CAM::_UNLOAD_CAMERA_DATA_DICT(cameraDictionary);
	}
	BOOL _IS_CAM_DATA_DICT_LOADED_Export(const char* cameraDictionary)
	{
		return CAM::_IS_CAM_DATA_DICT_LOADED(cameraDictionary);
	}
	BOOL _0xC285FD21294A1C49_Export(const char* cameraDictionary)
	{
		return CAM::_0xC285FD21294A1C49(cameraDictionary);
	}
	void _CAM_CREATE_Export(const char* cameraDictionary)
	{
		return CAM::_CAM_CREATE(cameraDictionary);
	}
	void _CAM_DESTROY_Export(const char* cameraDictionary)
	{
		return CAM::_CAM_DESTROY(cameraDictionary);
	}
	BOOL _IS_CAMERA_AVAILABLE_Export(const char* cameraDictionary)
	{
		return CAM::_IS_CAMERA_AVAILABLE(cameraDictionary);
	}
	Any _0x4138EE36BC3DC0A7_Export(Any p0, Any p1)
	{
		return CAM::_0x4138EE36BC3DC0A7(p0, p1);
	}
	void _0xFEB8646818294C75_Export(Any p0, Any p1)
	{
		return CAM::_0xFEB8646818294C75(p0, p1);
	}
	void _0x29E6655DF3590B0D_Export(Any p0)
	{
		return CAM::_0x29E6655DF3590B0D(p0);
	}
	void _0xAC77757C05DE9E5A_Export(const char* cameraDictionary)
	{
		return CAM::_0xAC77757C05DE9E5A(cameraDictionary);
	}
	void _0x8E036B41C37D0E5F_Export(Any p0)
	{
		return CAM::_0x8E036B41C37D0E5F(p0);
	}
	void _0x1D9F72DD4FD9A9D7_Export(Any p0)
	{
		return CAM::_0x1D9F72DD4FD9A9D7(p0);
	}
	void _CAM_CREATE_2_Export(const char* cameraDictionary)
	{
		return CAM::_CAM_CREATE_2(cameraDictionary);
	}
	void _0x728491FB3DFFEF99_Export(Any p0)
	{
		return CAM::_0x728491FB3DFFEF99(p0);
	}
	Any _0x14C4A49E36C29E49_Export()
	{
		return CAM::_0x14C4A49E36C29E49();
	}
	Any _0xF824530B612FE0CE_Export()
	{
		return CAM::_0xF824530B612FE0CE();
	}
	Any _0xEF9A3132A0AA6B19_Export()
	{
		return CAM::_0xEF9A3132A0AA6B19();
	}
	Any _0x5060FA977CEA4455_Export()
	{
		return CAM::_0x5060FA977CEA4455();
	}
	float _GET_PHOTO_MODE_FOCAL_LENGTH_Export()
	{
		return CAM::_GET_PHOTO_MODE_FOCAL_LENGTH();
	}
	float _GET_PHOTO_MODE_FOCUS_DISTANCE_Export()
	{
		return CAM::_GET_PHOTO_MODE_FOCUS_DISTANCE();
	}
	float _GET_PHOTO_MODE_DOF_Export()
	{
		return CAM::_GET_PHOTO_MODE_DOF();
	}
	Any _0x2AB7C81B3F70570C_Export()
	{
		return CAM::_0x2AB7C81B3F70570C();
	}
	void _0x8505E05FC8822843_Export(Any p0)
	{
		return CAM::_0x8505E05FC8822843(p0);
	}
	void SET_CLOCK_TIME_Export(int h, int m, int s)
	{
		return CLOCK::SET_CLOCK_TIME(h, m, s);
	}
	void PAUSE_CLOCK_Export(BOOL pause, Any unused)
	{
		return CLOCK::PAUSE_CLOCK(pause, unused);
	}
	void _PAUSE_CLOCK_THIS_FRAME_Export(BOOL toggle)
	{
		return CLOCK::_PAUSE_CLOCK_THIS_FRAME(toggle);
	}
	void ADVANCE_CLOCK_TIME_TO_Export(int h, int m, int s)
	{
		return CLOCK::ADVANCE_CLOCK_TIME_TO(h, m, s);
	}
	void ADD_TO_CLOCK_TIME_Export(int h, int m, int s)
	{
		return CLOCK::ADD_TO_CLOCK_TIME(h, m, s);
	}
	int GET_CLOCK_HOURS_Export()
	{
		return CLOCK::GET_CLOCK_HOURS();
	}
	int GET_CLOCK_MINUTES_Export()
	{
		return CLOCK::GET_CLOCK_MINUTES();
	}
	int GET_CLOCK_SECONDS_Export()
	{
		return CLOCK::GET_CLOCK_SECONDS();
	}
	void _SET_MILLISECONDS_PER_GAME_MINUTE_Export(int ms)
	{
		return CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(ms);
	}
	int _GET_SECONDS_SINCE_BASE_YEAR_Export()
	{
		return CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
	}
	void SET_CLOCK_DATE_Export(int d, int m, int y)
	{
		return CLOCK::SET_CLOCK_DATE(d, m, y);
	}
	int GET_CLOCK_DAY_OF_WEEK_Export()
	{
		return CLOCK::GET_CLOCK_DAY_OF_WEEK();
	}
	int GET_CLOCK_DAY_OF_MONTH_Export()
	{
		return CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	int GET_CLOCK_MONTH_Export()
	{
		return CLOCK::GET_CLOCK_MONTH();
	}
	int GET_CLOCK_YEAR_Export()
	{
		return CLOCK::GET_CLOCK_YEAR();
	}
	int GET_MILLISECONDS_PER_GAME_MINUTE_Export()
	{
		return CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE();
	}
	void GET_POSIX_TIME_Export(int* year, int* month, int* day, int* hour, int* min, int* sec)
	{
		return CLOCK::GET_POSIX_TIME(year, month, day, hour, min, sec);
	}
	void _GET_POSIX_TIME_STRUCT_Export(void* outTime)
	{
		return CLOCK::_GET_POSIX_TIME_STRUCT(outTime);
	}
	void _ADD_TIME_TO_DATE_TIME_Export(void* inDateTime, void* timeToAdd, void* outDateTime)
	{
		return CLOCK::_ADD_TIME_TO_DATE_TIME(inDateTime, timeToAdd, outDateTime);
	}
	Hash _COLLECTABLE_GET_CATEGORY_Export(Hash collectableItem)
	{
		return COLLECTION::_COLLECTABLE_GET_CATEGORY(collectableItem);
	}
	Hash _COLLECTABLE_GET_SUBCATEGORY_Export(Hash collectableItem)
	{
		return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(collectableItem);
	}
	Hash _COLLECTABLE_GET_IPL_Export(Hash collectableItem)
	{
		return COLLECTION::_COLLECTABLE_GET_IPL(collectableItem);
	}
	scrVector _COLLECTABLE_GET_PLACEMENT_LOCATION_Export(Hash collectableItem)
	{
		return COLLECTION::_COLLECTABLE_GET_PLACEMENT_LOCATION(collectableItem);
	}
	int _COLLECTABLE_GET_NUM_FOUND_Export(Hash collectableItem)
	{
		return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(collectableItem);
	}
	int _COLLECTABLE_GET_NUM_TURNED_IN_Export(Hash collectableItem)
	{
		return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(collectableItem);
	}
	void _COLLECTABLE_INCREMENT_NUM_FOUND_Export(Hash collectableItem, int amount)
	{
		return COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(collectableItem, amount);
	}
	void _COLLECTABLE_INCREMENT_NUM_TURNED_IN_Export(Hash collectableItem, int amount)
	{
		return COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(collectableItem, amount);
	}
	int _COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES_Export(Hash collectableCategory, Hash collectableSubcategory)
	{
		return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(collectableCategory, collectableSubcategory);
	}
	Hash _COLLECTABLE_GET_COLLECTABLE_ITEM_HASH_Export(int index, Hash collectableCategory, Hash collectableSubcategory)
	{
		return COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(index, collectableCategory, collectableSubcategory);
	}
	int _COLLECTABLE_CATEGORY_GET_NUM_FOUND_Export(Hash collectableCategory, Hash collectableSubcategory)
	{
		return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(collectableCategory, collectableSubcategory);
	}
	int _COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN_Export(Hash collectableCategory, Hash collectableSubcategory)
	{
		return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(collectableCategory, collectableSubcategory);
	}
	int _0x33825A7388A6B9F6_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0x33825A7388A6B9F6(collectableCategory, p1);
	}
	int _0x755901C7598B97BC_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0x755901C7598B97BC(collectableCategory, p1);
	}
	Any _0xB9020EC89C07DF04_Export(Hash collectableCategory, int p1, int index)
	{
		return COLLECTION::_0xB9020EC89C07DF04(collectableCategory, p1, index);
	}
	BOOL _0xFC832B06127D8E99_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0xFC832B06127D8E99(collectableCategory, p1);
	}
	void COLLECTABLE_CATEGORY_SET_HAS_RECEIVED_LIST_Export(Any p0, Any p1, Any p2)
	{
		return COLLECTION::COLLECTABLE_CATEGORY_SET_HAS_RECEIVED_LIST(p0, p1, p2);
	}
	BOOL _0x6BAB7ACED1017204_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0x6BAB7ACED1017204(collectableCategory, p1);
	}
	BOOL _0x61BEFBA3CE7A3BC8_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0x61BEFBA3CE7A3BC8(collectableCategory, p1);
	}
	Any _0xC4AC39719C1BB559_Export(Hash collectableCategory, Any p1)
	{
		return COLLECTION::_0xC4AC39719C1BB559(collectableCategory, p1);
	}
	Any _0x93F2E7B5DB85657B_Export(Any p0, Any p1)
	{
		return COLLECTION::_0x93F2E7B5DB85657B(p0, p1);
	}
	Hash COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD_Export(Hash collectableCategory, Hash p1)
	{
		return COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(collectableCategory, p1);
	}
	Hash _0x9ADEE485726025D4_Export(Hash collectableCategory)
	{
		return COLLECTION::_0x9ADEE485726025D4(collectableCategory);
	}
	Any _0xD1806FB3EDED6D11_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0xD1806FB3EDED6D11(collectableCategory, p1);
	}
	Any _0x3FD91F1A148A0468_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0x3FD91F1A148A0468(collectableCategory, p1);
	}
	Any _0xC3CA424E1F12ED0C_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0xC3CA424E1F12ED0C(collectableCategory, p1);
	}
	Hash _COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME_Export(Hash collectableCategory, Hash collectableSubcategory)
	{
		return COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(collectableCategory, collectableSubcategory);
	}
	Hash _COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY_Export(Hash collectableCategory, Hash collectableSubcategory)
	{
		return COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(collectableCategory, collectableSubcategory);
	}
	Any _0xD297F68928A58130_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0xD297F68928A58130(collectableCategory, p1);
	}
	Any _0x775FA1FC87666847_Export(Hash collectableCategory, int p1)
	{
		return COLLECTION::_0x775FA1FC87666847(collectableCategory, p1);
	}
	Any _0xEC3959E9950BF56B_Export(int p0)
	{
		return COLLECTION::_0xEC3959E9950BF56B(p0);
	}
	void _0xD730281E496621FB_Export(Ped ped, Hash p1)
	{
		return COMPANION::_0xD730281E496621FB(ped, p1);
	}
	void _0xBF6583E926D13890_Export(Any p0, Any p1)
	{
		return COMPANION::_0xBF6583E926D13890(p0, p1);
	}
	void _0x0A8FD91EDE7B328A_Export(Any p0, Any p1)
	{
		return COMPANION::_0x0A8FD91EDE7B328A(p0, p1);
	}
	void _0x991E3346D788F20F_Export(Any p0, Any p1)
	{
		return COMPANION::_0x991E3346D788F20F(p0, p1);
	}
	void _0xCE27824B5968B79A_Export(Any p0, Any p1)
	{
		return COMPANION::_0xCE27824B5968B79A(p0, p1);
	}
	void _0xF06CBB8CCCA823C0_Export(Any p0, Any p1)
	{
		return COMPANION::_0xF06CBB8CCCA823C0(p0, p1);
	}
	void _0x2917E634206B9E17_Export(Ped ped, int p1)
	{
		return COMPANION::_0x2917E634206B9E17(ped, p1);
	}
	void _0xD428C3F92FC3F6F8_Export(Ped ped, const char* p1)
	{
		return COMPANION::_0xD428C3F92FC3F6F8(ped, p1);
	}
	void _ADD_COMPANION_FLAG_Export(Ped ped, int p1)
	{
		return COMPANION::_ADD_COMPANION_FLAG(ped, p1);
	}
	void _REMOVE_COMPANION_FLAG_Export(Ped ped, int p1)
	{
		return COMPANION::_REMOVE_COMPANION_FLAG(ped, p1);
	}
	void _0x0DE02DA3C0F66955_Export(Ped ped, Hash p1)
	{
		return COMPANION::_0x0DE02DA3C0F66955(ped, p1);
	}
	void _SET_COMPANION_ACTIVITY_Export(int groupId, Hash activity)
	{
		return COMPANION::_SET_COMPANION_ACTIVITY(groupId, activity);
	}
	Hash _GET_COMPANION_ACTIVITY_Export(int groupId)
	{
		return COMPANION::_GET_COMPANION_ACTIVITY(groupId);
	}
	void _0xA079FF7CFB9AC8BD_Export(Any p0, Any p1)
	{
		return COMPANION::_0xA079FF7CFB9AC8BD(p0, p1);
	}
	void _0x61BDA07407754A5C_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return COMPANION::_0x61BDA07407754A5C(p0, p1, p2, p3);
	}
	void _0xD55A871E1CE3481B_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return COMPANION::_0xD55A871E1CE3481B(p0, p1, p2, p3);
	}
	void _0x0C6A00DAE896614C_Export(Any p0, Any p1)
	{
		return COMPANION::_0x0C6A00DAE896614C(p0, p1);
	}
	void _0x8FB98B719AA0075A_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return COMPANION::_0x8FB98B719AA0075A(p0, p1, p2, p3, p4);
	}
	void _0x9C902084F48D2E6C_Export(Any p0)
	{
		return COMPANION::_0x9C902084F48D2E6C(p0);
	}
	void _0xD747979C053EFA7A_Export(Any p0)
	{
		return COMPANION::_0xD747979C053EFA7A(p0);
	}
	void _0x3CAAD93FA5B9579A_Export(Volume volume, int p1, int p2)
	{
		return COMPANION::_0x3CAAD93FA5B9579A(volume, p1, p2);
	}
	void _0x7274F84B1501B523_Export(Any p0)
	{
		return COMPANION::_0x7274F84B1501B523(p0);
	}
	Any _0x722FBE08EF5B87BD_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return COMPANION::_0x722FBE08EF5B87BD(p0, p1, p2, p3, p4);
	}
	void _ACTIVATE_COMPANION_ANALYSIS_Export(int groupId)
	{
		return COMPANION::_ACTIVATE_COMPANION_ANALYSIS(groupId);
	}
	void _DEACTIVATE_COMPANION_ANALYSIS_Export(int groupId)
	{
		return COMPANION::_DEACTIVATE_COMPANION_ANALYSIS(groupId);
	}
	float _0x725D52F21A5E9E22_Export(Hash category)
	{
		return COMPENDIUM::_0x725D52F21A5E9E22(category);
	}
	int _COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY_Export(Hash category)
	{
		return COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(category);
	}
	int _0x729D52461AEA9E22_Export(Hash category)
	{
		return COMPENDIUM::_0x729D52461AEA9E22(category);
	}
	Hash COMPENDIUM_GET_SHORT_DESCRIPTION_FROM_PED_Export(Ped ped)
	{
		return COMPENDIUM::COMPENDIUM_GET_SHORT_DESCRIPTION_FROM_PED(ped);
	}
	Hash COMPENDIUM_GET_SUBCATEGORY_PED_IS_IN_Export(Hash category, Ped ped)
	{
		return COMPENDIUM::COMPENDIUM_GET_SUBCATEGORY_PED_IS_IN(category, ped);
	}
	Hash _COMPENDIUM_GET_SUBCATEGORY_HASH_FROM_ANIMAL_TYPE_Export(Hash category, Hash animalType)
	{
		return COMPENDIUM::_COMPENDIUM_GET_SUBCATEGORY_HASH_FROM_ANIMAL_TYPE(category, animalType);
	}
	int COMPENDIUM_GET_NUM_ENTRIES_IN_SUBCATEGORY_Export(Hash category, Hash subcategory)
	{
		return COMPENDIUM::COMPENDIUM_GET_NUM_ENTRIES_IN_SUBCATEGORY(category, subcategory);
	}
	int COMPENDIUM_GET_ENTRY_BY_INDEX_IN_SUBCATEGORY_Export(Hash category, Hash subcategory, int count)
	{
		return COMPENDIUM::COMPENDIUM_GET_ENTRY_BY_INDEX_IN_SUBCATEGORY(category, subcategory, count);
	}
	int COMPENDIUM_GET_ENTRY_BY_PED_INDEX_Export(Hash category, Ped ped)
	{
		return COMPENDIUM::COMPENDIUM_GET_ENTRY_BY_PED_INDEX(category, ped);
	}
	int COMPENDIUM_GET_ENTRY_BY_STAT_ITEM_Export(Hash category, Hash animalType)
	{
		return COMPENDIUM::COMPENDIUM_GET_ENTRY_BY_STAT_ITEM(category, animalType);
	}
	Any COMPENDIUM_GET_SUBCATEGORY_TOAST_APP_ID_Export(Hash category, Hash subcategory)
	{
		return COMPENDIUM::COMPENDIUM_GET_SUBCATEGORY_TOAST_APP_ID(category, subcategory);
	}
	Hash COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM_Export(Hash animalStatItem, float x, float y, float z)
	{
		return COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(animalStatItem, x, y, z);
	}
	void COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME_Export(Hash animalType, BOOL disableCompendiumToast)
	{
		return COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(animalType, disableCompendiumToast);
	}
	BOOL COMPENDIUM_WAS_ANIMAL_OBSERVED_Export(Ped ped)
	{
		return COMPENDIUM::COMPENDIUM_WAS_ANIMAL_OBSERVED(ped);
	}
	void COMPENDIUM_ANIMAL_SET_DISCOVERED_Export(int compendiumEntry)
	{
		return COMPENDIUM::COMPENDIUM_ANIMAL_SET_DISCOVERED(compendiumEntry);
	}
	Any COMPENDIUM_GET_STUDY_AWARD_ID_Export(Ped ped)
	{
		return COMPENDIUM::COMPENDIUM_GET_STUDY_AWARD_ID(ped);
	}
	Any COMPENDIUM_ANIMAL_GET_SAMPLE_INVENTORY_ITEM_Export(int compendiumEntry)
	{
		return COMPENDIUM::COMPENDIUM_ANIMAL_GET_SAMPLE_INVENTORY_ITEM(compendiumEntry);
	}
	BOOL COMPENDIUM_ANIMAL_HAS_SAMPLE_Export(int compendiumEntry)
	{
		return COMPENDIUM::COMPENDIUM_ANIMAL_HAS_SAMPLE(compendiumEntry);
	}
	BOOL COMPENDIUM_ANIMAL_HAS_STAMP_Export(int compendiumEntry)
	{
		return COMPENDIUM::COMPENDIUM_ANIMAL_HAS_STAMP(compendiumEntry);
	}
	const char* COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_TITLE_Export(Hash category, Hash subcategory)
	{
		return COMPENDIUM::COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_TITLE(category, subcategory);
	}
	const char* COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_PROGRESS_Export(Hash category, Hash subcategory)
	{
		return COMPENDIUM::COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_PROGRESS(category, subcategory);
	}
	const char* COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_COMPLETE_Export(Hash category, Hash subcategory)
	{
		return COMPENDIUM::COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_COMPLETE(category, subcategory);
	}
	void COMPENDIUM_FISH_CAUGHT_Export(Ped ped, Hash category)
	{
		return COMPENDIUM::COMPENDIUM_FISH_CAUGHT(ped, category);
	}
	int COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM_Export(Hash animalType, Hash baitType)
	{
		return COMPENDIUM::COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM(animalType, baitType);
	}
	void COMPENDIUM_GANG_CAMP_FOUND_Export(Any p0, Any p1)
	{
		return COMPENDIUM::COMPENDIUM_GANG_CAMP_FOUND(p0, p1);
	}
	void COMPENDIUM_GANG_AMBUSH_SURVIVED_Export(Any p0)
	{
		return COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(p0);
	}
	void COMPENDIUM_GANG_ENCOUNTERED_Export(Any p0)
	{
		return COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(p0);
	}
	void COMPENDIUM_GANG_BOUNTY_CAPTURED_Export(Any p0)
	{
		return COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(p0);
	}
	void COMPENDIUM_GANG_MEMBER_KILLED_Export(Any p0)
	{
		return COMPENDIUM::COMPENDIUM_GANG_MEMBER_KILLED(p0);
	}
	void COMPENDIUM_GANG_HIDEOUT_FOUND_Export(Any p0, Any p1)
	{
		return COMPENDIUM::COMPENDIUM_GANG_HIDEOUT_FOUND(p0, p1);
	}
	void COMPENDIUM_HERB_PICKED_Export(Hash herbType, float x, float y, float z)
	{
		return COMPENDIUM::COMPENDIUM_HERB_PICKED(herbType, x, y, z);
	}
	void COMPENDIUM_HORSE_BONDING_Export(Ped ped, int bondingLevel)
	{
		return COMPENDIUM::COMPENDIUM_HORSE_BONDING(ped, bondingLevel);
	}
	void COMPENDIUM_HORSE_WILD_BROKEN_Export(Ped ped)
	{
		return COMPENDIUM::COMPENDIUM_HORSE_WILD_BROKEN(ped);
	}
	void COMPENDIUM_HORSE_OBSERVED_Export(Ped ped, BOOL disableCompendiumToast)
	{
		return COMPENDIUM::COMPENDIUM_HORSE_OBSERVED(ped, disableCompendiumToast);
	}
	void _0x0FD3ECF9D0C8655F_Export(const char* p0)
	{
		return CRASHLOG::_0x0FD3ECF9D0C8655F(p0);
	}
	void _0xCA0BAC376C541978_Export(const char* p0)
	{
		return CRASHLOG::_0xCA0BAC376C541978(p0);
	}
	BOOL _0x3A66F1963B223F61_Export(const char* p0)
	{
		return CRASHLOG::_0x3A66F1963B223F61(p0);
	}
	BOOL _0x7C680FF55617F82F_Export()
	{
		return CRASHLOG::_0x7C680FF55617F82F();
	}
	BOOL _0xD8E3D22AA4F0E0A5_Export(const char* p0)
	{
		return CRASHLOG::_0xD8E3D22AA4F0E0A5(p0);
	}
	BOOL _0xA67F0B039D9CD513_Export(BOOL p0)
	{
		return CRASHLOG::_0xA67F0B039D9CD513(p0);
	}
	BOOL _0xE72E234B30DA7B7A_Export(int p0)
	{
		return CRASHLOG::_0xE72E234B30DA7B7A(p0);
	}
	BOOL _0x87F005C969EF1563_Export(float p0)
	{
		return CRASHLOG::_0x87F005C969EF1563(p0);
	}
	BOOL _0x23CCAB8F40B9CBEE_Export(float x, float y, float z)
	{
		return CRASHLOG::_0x23CCAB8F40B9CBEE(x, y, z);
	}
	BOOL _0xF0D545C1EEAD614A_Export()
	{
		return CRASHLOG::_0xF0D545C1EEAD614A();
	}
	BOOL _0x33C1D63E55FA4284_Export(const char* p0)
	{
		return CRASHLOG::_0x33C1D63E55FA4284(p0);
	}
	void _0x4E42CA5BCD45444A_Export()
	{
		return CRASHLOG::_0x4E42CA5BCD45444A();
	}
	void _0xDA05310EA94DC8C6_Export(const char* p0, const char* p1)
	{
		return CRASHLOG::_0xDA05310EA94DC8C6(p0, p1);
	}
	BOOL NETWORK_FIND_GAMERS_IN_CREW_Export(int crewId)
	{
		return CREW::NETWORK_FIND_GAMERS_IN_CREW(crewId);
	}
	BOOL NETWORK_CLAN_SERVICE_IS_VALID_Export()
	{
		return CREW::NETWORK_CLAN_SERVICE_IS_VALID();
	}
	BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE_Export(void* gamerHandle)
	{
		return CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(gamerHandle);
	}
	BOOL NETWORK_CLAN_PLAYER_GET_DESC_Export(void* memberInfo, int sizeOfData, void* gamerHandle)
	{
		return CREW::NETWORK_CLAN_PLAYER_GET_DESC(memberInfo, sizeOfData, gamerHandle);
	}
	int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT_Export()
	{
		return CREW::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
	}
	BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC_Export(void* memberInfo, int membershipIndex)
	{
		return CREW::NETWORK_CLAN_GET_MEMBERSHIP_DESC(memberInfo, membershipIndex);
	}
	BOOL _0x58D378AF2C8765B7_Export(Any p0)
	{
		return CREW::_0x58D378AF2C8765B7(p0);
	}
	BOOL _NETWORK_CLAN_INVITE_PLAYER_Export(Any p0)
	{
		return CREW::_NETWORK_CLAN_INVITE_PLAYER(p0);
	}
	BOOL _NETWORK_ACCEPT_CLAN_INVITE_Export(int crewInviteIndex)
	{
		return CREW::_NETWORK_ACCEPT_CLAN_INVITE(crewInviteIndex);
	}
	BOOL NETWORK_CLAN_REQUEST_EMBLEM_Export(int clanId)
	{
		return CREW::NETWORK_CLAN_REQUEST_EMBLEM(clanId);
	}
	BOOL NETWORK_CLAN_IS_EMBLEM_READY_Export(int clanId, void* outTXDName)
	{
		return CREW::NETWORK_CLAN_IS_EMBLEM_READY(clanId, outTXDName);
	}
	void NETWORK_CLAN_RELEASE_EMBLEM_Export(int clanId)
	{
		return CREW::NETWORK_CLAN_RELEASE_EMBLEM(clanId);
	}
	Any NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR_Export()
	{
		return CREW::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
	}
	BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START_Export(void* gamerHandleData, int nGamerHandles)
	{
		return CREW::NETWORK_GET_PRIMARY_CLAN_DATA_START(gamerHandleData, nGamerHandles);
	}
	BOOL NETWORK_GET_PRIMARY_CLAN_DATA_PENDING_Export()
	{
		return CREW::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING();
	}
	BOOL NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS_Export()
	{
		return CREW::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS();
	}
	BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW_Export(void* hGamer, void* memberInfo)
	{
		return CREW::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(hGamer, memberInfo);
	}
	Any _NETWORK_CLAN_SET_ACTIVE_Export(Any p0)
	{
		return CREW::_NETWORK_CLAN_SET_ACTIVE(p0);
	}
	Any _DATABINDING_GET_DATA_CONTAINER_FROM_PATH_Export(const char* p0)
	{
		return DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH(p0);
	}
	Any _DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX_Export(Hash entryId, int p1)
	{
		return DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(entryId, p1);
	}
	Any _0xD7DB94AB78E8EBE4_Export(const char* p0, Hash p1)
	{
		return DATABINDING::_0xD7DB94AB78E8EBE4(p0, p1);
	}
	Any _DATABINDING_ADD_DATA_CONTAINER_FROM_PATH_Export(const char* p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH(p0, p1);
	}
	Any _DATABINDING_ADD_DATA_CONTAINER_BY_HASH_Export(Any p0, Hash p1)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(p0, p1);
	}
	Hash _DATABINDING_ADD_DATA_CONTAINER_Export(Hash entryId, const char* p1)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, p1);
	}
	Any _DATABINDING_ADD_DATA_BOOL_FROM_PATH_Export(const char* p0, const char* p1, BOOL p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_BOOL_BY_HASH_Export(Any p0, Hash p1, BOOL p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_BOOL_Export(Any p0, const char* p1, BOOL p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_BOOL(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_INT_BY_HASH_Export(Any p0, Hash p1, int p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_INT_Export(Any p0, const char* p1, Hash p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_INT(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_FLOAT_Export(Any p0, const char* p1, float p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_FLOAT(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_HASH_BY_HASH_Export(Any p0, Hash p1, Hash p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_HASH_Export(Any p0, const char* p1, Hash p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_HASH(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_STRING_FROM_PATH_Export(const char* p0, const char* p1, const char* p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_STRING_FROM_PATH(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_STRING_BY_HASH_Export(Any p0, Hash p1, const char* p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_STRING_Export(Any p0, const char* p1, const char* p2)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_STRING(p0, p1, p2);
	}
	Any _DATABINDING_ADD_DATA_GANG_ID_Export(Any p0, const char* p1, Any gangId)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(p0, p1, gangId);
	}
	Any _DATABINDING_ADD_DATA_POSSE_ID_Export(Any p0, const char* p1, Any posseId)
	{
		return DATABINDING::_DATABINDING_ADD_DATA_POSSE_ID(p0, p1, posseId);
	}
	Any _0x294AF5323F44B053_Export(Any p0, const char* p1, Any p2)
	{
		return DATABINDING::_0x294AF5323F44B053(p0, p1, p2);
	}
	Any _DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH_Export(const char* p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH(p0, p1);
	}
	Any _DATABINDING_ADD_UI_ITEM_LIST_BY_HASH_Export(Any p0, Hash p1)
	{
		return DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(p0, p1);
	}
	Any _DATABINDING_ADD_UI_ITEM_LIST_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(p0, p1);
	}
	void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS_Export(Any p0, int index, const char* p2, Any p3)
	{
		return DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(p0, index, p2, p3);
	}
	void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS_Export(Any p0, int index, Hash p2, Any p3)
	{
		return DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(p0, index, p2, p3);
	}
	void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS_Export(Any p0, Any p1, const char* p2, Any p3)
	{
		return DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS(p0, p1, p2, p3);
	}
	void _0x6318FB3BE37E11B3_Export(Hash entryId, int index)
	{
		return DATABINDING::_0x6318FB3BE37E11B3(entryId, index);
	}
	void _DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID_Export(Any p0, Hash entryId)
	{
		return DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(p0, entryId);
	}
	void _DATABINDING_CLEAR_BINDING_ARRAY_Export(Hash entryId)
	{
		return DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(entryId);
	}
	Any _DATABINDING_GET_ITEM_CONTEXT_BY_INDEX_Export(Any p0, int index)
	{
		return DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(p0, index);
	}
	void _DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE_Export(Any p0, int p1)
	{
		return DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(p0, p1);
	}
	void _DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS_Export(Any p0, int p1, Hash p2)
	{
		return DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(p0, p1, p2);
	}
	Any _0xD48993A61938C64D_Export(Any p0, const char* p1)
	{
		return DATABINDING::_0xD48993A61938C64D(p0, p1);
	}
	Any _DATABINDING_ADD_HASH_ARRAY_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_ADD_HASH_ARRAY(p0, p1);
	}
	Any _DATABINDING_ADD_STRING_ARRAY_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_ADD_STRING_ARRAY(p0, p1);
	}
	void _0x1919D59E60FD516E_Export(Any p0, int p1, int p2)
	{
		return DATABINDING::_0x1919D59E60FD516E(p0, p1, p2);
	}
	void _0x7FC60C94C83C5CD7_Export(Any p0, Hash p1, int p2)
	{
		return DATABINDING::_0x7FC60C94C83C5CD7(p0, p1, p2);
	}
	void _0xC900CEC8A172375B_Export(Any p0, const char* p1, int p2)
	{
		return DATABINDING::_0xC900CEC8A172375B(p0, p1, p2);
	}
	Any _0x02B21B6BEEDD83CC_Export(Hash entryId, int p1)
	{
		return DATABINDING::_0x02B21B6BEEDD83CC(entryId, p1);
	}
	Any _0xF47E33F8D2523825_Export(Any p0, int p1)
	{
		return DATABINDING::_0xF47E33F8D2523825(p0, p1);
	}
	void _0x3BF0767CF33FCC88_Export(Hash entryId)
	{
		return DATABINDING::_0x3BF0767CF33FCC88(entryId);
	}
	Any _DATABINDING_GET_ARRAY_COUNT_Export(Hash entryId)
	{
		return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(entryId);
	}
	// void _DATABINDING_WRITE_DATA_SCRIPT_VARIABLES_Export(int p0, int p1, int argCount, IntPtr args) { return DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(p0, p1, argCount, args); }
	void _DATABINDING_WRITE_DATA_BOOL_Export(Any p0, BOOL p1)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_BOOL(p0, p1);
	}
	void _DATABINDING_WRITE_DATA_BOOL_FROM_PARENT_Export(Any p0, const char* p1, BOOL p2)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(p0, p1, p2);
	}
	void _0xBFC83DA249BEFCC9_Export(Any p0, Hash p1, Any p2)
	{
		return DATABINDING::_0xBFC83DA249BEFCC9(p0, p1, p2);
	}
	void _DATABINDING_WRITE_DATA_INT_Export(Any p0, int p1)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_INT(p0, p1);
	}
	void _DATABINDING_WRITE_DATA_INT_FROM_PARENT_Export(Any p0, const char* p1, int p2)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(p0, p1, p2);
	}
	void _DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH_Export(Any p0, Hash p1, Any p2)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(p0, p1, p2);
	}
	void _DATABINDING_WRITE_DATA_FLOAT_Export(Any p0, float p1)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(p0, p1);
	}
	void _0x05AC9E1E02975AFB_Export(Any p0, const char* p1, float p2)
	{
		return DATABINDING::_0x05AC9E1E02975AFB(p0, p1, p2);
	}
	void _DATABINDING_WRITE_DATA_HASH_STRING_Export(Any p0, Hash p1)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(p0, p1);
	}
	void _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_Export(Any p0, const char* p1, Hash p2)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(p0, p1, p2);
	}
	void _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH_Export(Any p0, Hash p1, Any p2)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(p0, p1, p2);
	}
	void _DATABINDING_WRITE_DATA_STRING_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_STRING(p0, p1);
	}
	void DATABINDING_WRITE_STRING_FROM_PARENT_Export(Any p0, const char* p1, const char* p2)
	{
		return DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(p0, p1, p2);
	}
	void _DATABINDING_WRITE_STRING_FROM_HASH_Export(Any p0, Hash p1, const char* p2)
	{
		return DATABINDING::_DATABINDING_WRITE_STRING_FROM_HASH(p0, p1, p2);
	}
	void _DATABINDING_WRITE_DATA_GANG_ID_Export(Any p0, const char* p1, Any gangId)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_GANG_ID(p0, p1, gangId);
	}
	void _DATABINDING_WRITE_DATA_POSSE_ID_Export(Any p0, const char* p1, Any posseId)
	{
		return DATABINDING::_DATABINDING_WRITE_DATA_POSSE_ID(p0, p1, posseId);
	}
	void _0x422179C7F6AD9304_Export(Any p0, void* gamerHandle)
	{
		return DATABINDING::_0x422179C7F6AD9304(p0, gamerHandle);
	}
	Any _DATABINDING_READ_DATA_BOOL_Export(Any p0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(p0);
	}
	Any _DATABINDING_READ_DATA_BOOL_FROM_PARENT_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(p0, p1);
	}
	Any _DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH_Export(Any p0, Hash p1)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(p0, p1);
	}
	int DATABINDING_READ_INT_Export(Any p0)
	{
		return DATABINDING::DATABINDING_READ_INT(p0);
	}
	Any _DATABINDING_READ_DATA_INT_FROM_PARENT_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(p0, p1);
	}
	Any _DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH_Export(Any p0, Hash p1)
	{
		return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(p0, p1);
	}
	float _DATABINDING_READ_FLOAT_Export(Hash entryId)
	{
		return DATABINDING::_DATABINDING_READ_FLOAT(entryId);
	}
	Hash _DATABINDING_READ_HASH_Export(Hash entryId)
	{
		return DATABINDING::_DATABINDING_READ_HASH(entryId);
	}
	Any _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(p0, p1);
	}
	Any _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH_Export(Any p0, Hash p1)
	{
		return DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(p0, p1);
	}
	Any _DATABINDING_READ_DATA_STRING_Export(Any p0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_STRING(p0);
	}
	Any _DATABINDING_READ_DATA_STRING_FROM_PARENT_Export(Any p0, const char* p1)
	{
		return DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(p0, p1);
	}
	Any _0x6329C34BEE5BFF4B_Export(Any p0, Hash p1)
	{
		return DATABINDING::_0x6329C34BEE5BFF4B(p0, p1);
	}
	Any _0xE6AAB897120492D6_Export(Any p0, const char* p1)
	{
		return DATABINDING::_0xE6AAB897120492D6(p0, p1);
	}
	void _0xE6AAB897120492D7_Export(Any p0, const char* p1, Any p2)
	{
		return DATABINDING::_0xE6AAB897120492D7(p0, p1, p2);
	}
	void _0xB138CA787F3DD858_Export(Any p0, const char* p1, Any p2)
	{
		return DATABINDING::_0xB138CA787F3DD858(p0, p1, p2);
	}
	BOOL DATABINDING_IS_ENTRY_VALID_Export(Hash entryId)
	{
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(entryId);
	}
	void _DATABINDING_REMOVE_DATA_ENTRY_Export(Hash entryId)
	{
		return DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(entryId);
	}
	void _VIRTUAL_COLLECTION_SET_SIZE_Export(Any p0, int size)
	{
		return DATABINDING::_VIRTUAL_COLLECTION_SET_SIZE(p0, size);
	}
	void _VIRTUAL_COLLECTION_SET_INTEREST_INDEX_Export(Any p0, int interestIndex)
	{
		return DATABINDING::_VIRTUAL_COLLECTION_SET_INTEREST_INDEX(p0, interestIndex);
	}
	void _VIRTUAL_COLLECTION_ITEM_ADD_Export(Any p0, int index, Hash p2, Any p3)
	{
		return DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(p0, index, p2, p3);
	}
	void _VIRTUAL_COLLECTION_RESET_Export(Any p0)
	{
		return DATABINDING::_VIRTUAL_COLLECTION_RESET(p0);
	}
	Any _VIRTUAL_COLLECTION_EXISTS_Export(Any p0)
	{
		return DATABINDING::_VIRTUAL_COLLECTION_EXISTS(p0);
	}
	void DATAFILE_WATCH_REQUEST_ID_Export(int nCloudRequestID)
	{
		return DATAFILE::DATAFILE_WATCH_REQUEST_ID(nCloudRequestID);
	}
	BOOL DATAFILE_HAS_LOADED_FILE_DATA_Export(int nCloudRequestID)
	{
		return DATAFILE::DATAFILE_HAS_LOADED_FILE_DATA(nCloudRequestID);
	}
	BOOL DATAFILE_HAS_VALID_FILE_DATA_Export(int nCloudRequestID)
	{
		return DATAFILE::DATAFILE_HAS_VALID_FILE_DATA(nCloudRequestID);
	}
	BOOL DATAFILE_SELECT_ACTIVE_FILE_Export(int nCloudRequestID, int datafileIndex)
	{
		return DATAFILE::DATAFILE_SELECT_ACTIVE_FILE(nCloudRequestID, datafileIndex);
	}
	BOOL DATAFILE_DELETE_REQUESTED_FILE_Export(int nCloudRequestID)
	{
		return DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(nCloudRequestID);
	}
	Any UGC2_SET_PLAYER_DATA_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return DATAFILE::UGC2_SET_PLAYER_DATA(p0, p1, p2, p3);
	}
	Any DATAFILE_UGC_SELECT_DATA_Export(Any ugcRequestId, int index, Any p2)
	{
		return DATAFILE::DATAFILE_UGC_SELECT_DATA(ugcRequestId, index, p2);
	}
	void DATAFILE_CREATE_Export(int datafileIndex)
	{
		return DATAFILE::DATAFILE_CREATE(datafileIndex);
	}
	void DATAFILE_DELETE_Export(int datafileIndex)
	{
		return DATAFILE::DATAFILE_DELETE(datafileIndex);
	}
	void* DATAFILE_GET_FILE_DICT_Export(int datafileIndex)
	{
		return DATAFILE::DATAFILE_GET_FILE_DICT(datafileIndex);
	}
	BOOL DATADICT_IS_DICT_VALID_Export(void* fileDict)
	{
		return DATAFILE::DATADICT_IS_DICT_VALID(fileDict);
	}
	BOOL DATADICT_IS_ARRAY_VALID_Export(void* fileDict)
	{
		return DATAFILE::DATADICT_IS_ARRAY_VALID(fileDict);
	}
	void DATADICT_SET_INT_Export(void* dict, const char* name, int value)
	{
		return DATAFILE::DATADICT_SET_INT(dict, name, value);
	}
	BOOL DATADICT_GET_BOOL_Export(void* dict, const char* name)
	{
		return DATAFILE::DATADICT_GET_BOOL(dict, name);
	}
	int DATADICT_GET_INT_Export(void* dict, const char* name)
	{
		return DATAFILE::DATADICT_GET_INT(dict, name);
	}
	float DATADICT_GET_FLOAT_Export(void* dict, const char* name)
	{
		return DATAFILE::DATADICT_GET_FLOAT(dict, name);
	}
	const char* DATADICT_GET_STRING_Export(void* dict, const char* name)
	{
		return DATAFILE::DATADICT_GET_STRING(dict, name);
	}
	scrVector DATADICT_GET_VECTOR_Export(void* dict, const char* name)
	{
		return DATAFILE::DATADICT_GET_VECTOR(dict, name);
	}
	void* DATADICT_GET_DICT_Export(void* parent, const char* name)
	{
		return DATAFILE::DATADICT_GET_DICT(parent, name);
	}
	void* DATADICT_GET_ARRAY_Export(void* parent, const char* name)
	{
		return DATAFILE::DATADICT_GET_ARRAY(parent, name);
	}
	int DATADICT_GET_TYPE_Export(void* dict, const char* name)
	{
		return DATAFILE::DATADICT_GET_TYPE(dict, name);
	}
	void _0xBC0DF006A4952C68_Export(Any p0, Any p1, Any p2)
	{
		return DATAFILE::_0xBC0DF006A4952C68(p0, p1, p2);
	}
	void _0x9F130129EBC31B34_Export(Any p0, Any p1, Any p2)
	{
		return DATAFILE::_0x9F130129EBC31B34(p0, p1, p2);
	}
	void _0x277251C161B4C3F4_Export(Any p0, Any p1, Any p2)
	{
		return DATAFILE::_0x277251C161B4C3F4(p0, p1, p2);
	}
	void _0x1C65CC931C0F946F_Export(Any p0, Any p1, Any p2)
	{
		return DATAFILE::_0x1C65CC931C0F946F(p0, p1, p2);
	}
	void _0x7681B677400C7071_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return DATAFILE::_0x7681B677400C7071(p0, p1, p2, p3, p4);
	}
	BOOL DATAARRAY_GET_BOOL_Export(void* arr, int index)
	{
		return DATAFILE::DATAARRAY_GET_BOOL(arr, index);
	}
	int DATAARRAY_GET_INT_Export(void* arr, int index)
	{
		return DATAFILE::DATAARRAY_GET_INT(arr, index);
	}
	float DATAARRAY_GET_FLOAT_Export(void* arr, int index)
	{
		return DATAFILE::DATAARRAY_GET_FLOAT(arr, index);
	}
	const char* DATAARRAY_GET_STRING_Export(void* arr, int index)
	{
		return DATAFILE::DATAARRAY_GET_STRING(arr, index);
	}
	scrVector DATAARRAY_GET_VECTOR_Export(void* arr, int index)
	{
		return DATAFILE::DATAARRAY_GET_VECTOR(arr, index);
	}
	void* DATAARRAY_GET_DICT_Export(void* parent, int index)
	{
		return DATAFILE::DATAARRAY_GET_DICT(parent, index);
	}
	int DATAARRAY_GET_COUNT_Export(void* arr)
	{
		return DATAFILE::DATAARRAY_GET_COUNT(arr);
	}
	int DATAARRAY_GET_TYPE_Export(void* arr, int index)
	{
		return DATAFILE::DATAARRAY_GET_TYPE(arr, index);
	}
	Any _0x4F9E3ED7617123AC_Export(Any p0)
	{
		return DATAFILE::_0x4F9E3ED7617123AC(p0);
	}
	Any _0xCA56DD6AB7A39F64_Export(Any p0)
	{
		return DATAFILE::_0xCA56DD6AB7A39F64(p0);
	}
	int _PARSEDDATA_LOAD_FILE_HASH_Export(Hash p0)
	{
		return DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(p0);
	}
	void _PARSEDDATA_UNLOAD_FILE_Export(int fileHandle)
	{
		return DATAFILE::_PARSEDDATA_UNLOAD_FILE(fileHandle);
	}
	BOOL PARSEDDATA_IS_FILE_VALID_Export(int fileHandle)
	{
		return DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle);
	}
	BOOL PARSEDDATA_IS_FILE_LOADED_Export(int fileHandle)
	{
		return DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle);
	}
	void _0x3168BA5D6DECE323_Export()
	{
		return DATAFILE::_0x3168BA5D6DECE323();
	}
	Any _PARSEDDATA_REGISTER_QUERY_Export(Any p0, Any p1, Any p2)
	{
		return DATAFILE::_PARSEDDATA_REGISTER_QUERY(p0, p1, p2);
	}
	BOOL PARSEDDATA_RQ_FILLOUT_NODE_Export(int* p0, void* p1)
	{
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(p0, p1);
	}
	Any _PARSEDDATA_RQ_GET_NUM_NODES_Export(Any p0)
	{
		return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(p0);
	}
	int _0xE13634BB6BAF0734_Export(int p0, int p1)
	{
		return DATAFILE::_0xE13634BB6BAF0734(p0, p1);
	}
	Any _PARSEDDATA_GET_NUM_CHILDREN_Export(Any p0, Any p1)
	{
		return DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(p0, p1);
	}
	BOOL PARSEDDATA_RQ_FILLOUT_HASH_Export(Hash* p0, void* p1)
	{
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(p0, p1);
	}
	BOOL _PARSEDDATA_RQ_FILLOUT_STRING_63_Export(char* p0, void* p1)
	{
		return DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(p0, p1);
	}
	BOOL PARSEDDATA_RQ_FILLOUT_STRING_127_Export(char* p0, void* p1)
	{
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(p0, p1);
	}
	BOOL _PARSEDDATA_RQ_FILLOUT_VECTOR_Export(scrVector* p0, void* p1)
	{
		return DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(p0, p1);
	}
	BOOL _PARSEDDATA_RQ_FILLOUT_FLOAT_Export(float* p0, void* p1)
	{
		return DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(p0, p1);
	}
	BOOL _PARSEDDATA_RQ_FILLOUT_INT_Export(int* p0, void* p1)
	{
		return DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(p0, p1);
	}
	BOOL _PARSEDDATA_RQ_FILLOUT_BOOL_Export(BOOL* p0, void* p1)
	{
		return DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(p0, p1);
	}
	void _PARSEDDATA_GET_FILE_Export(void* p0)
	{
		return DATAFILE::_PARSEDDATA_GET_FILE(p0);
	}
	BOOL _PARSEDDATA_GET_ENTRIES_Export(void* p0)
	{
		return DATAFILE::_PARSEDDATA_GET_ENTRIES(p0);
	}
	BOOL _PARSEDDATA_GET_FLOAT_Export(void* p0, void* p1, Hash p2)
	{
		return DATAFILE::_PARSEDDATA_GET_FLOAT(p0, p1, p2);
	}
	BOOL _PARSEDDATA_GET_INT_Export(void* p0, void* p1, Hash p2)
	{
		return DATAFILE::_PARSEDDATA_GET_INT(p0, p1, p2);
	}
	BOOL _PARSEDDATA_GET_SECTION_Export(void* p0, void* p1, Hash section)
	{
		return DATAFILE::_PARSEDDATA_GET_SECTION(p0, p1, section);
	}
	BOOL _PARSEDDATA_GET_BOOL_Export(BOOL* p0, void* p1, Hash p2)
	{
		return DATAFILE::_PARSEDDATA_GET_BOOL(p0, p1, p2);
	}
	Any _0xACF9CB705BEFA8CB_Export()
	{
		return DEBUG::_0xACF9CB705BEFA8CB();
	}
	Any _0xA8D970D8A72640A6_Export()
	{
		return DEBUG::_0xA8D970D8A72640A6();
	}
	const char* GET_GAME_VERSION_NAME_Export()
	{
		return DEBUG::GET_GAME_VERSION_NAME();
	}
	BOOL DECOR_SET_BOOL_Export(ScrHandle guid, const char* decoratorName, BOOL value)
	{
		return DECORATOR::DECOR_SET_BOOL(guid, decoratorName, value);
	}
	BOOL DECOR_SET_FLOAT_Export(ScrHandle guid, const char* decoratorName, float value)
	{
		return DECORATOR::DECOR_SET_FLOAT(guid, decoratorName, value);
	}
	BOOL DECOR_SET_INT_Export(ScrHandle guid, const char* decoratorName, int value)
	{
		return DECORATOR::DECOR_SET_INT(guid, decoratorName, value);
	}
	BOOL _DECOR_SET_UINT8_Export(Entity entity, const char* propertyName, int value)
	{
		return DECORATOR::_DECOR_SET_UINT8(entity, propertyName, value);
	}
	BOOL DECOR_SET_STRING_Export(Entity entity, const char* propertyName, const char* value)
	{
		return DECORATOR::DECOR_SET_STRING(entity, propertyName, value);
	}
	BOOL DECOR_GET_BOOL_Export(ScrHandle guid, const char* decoratorName)
	{
		return DECORATOR::DECOR_GET_BOOL(guid, decoratorName);
	}
	float DECOR_GET_FLOAT_Export(ScrHandle guid, const char* decoratorName)
	{
		return DECORATOR::DECOR_GET_FLOAT(guid, decoratorName);
	}
	int DECOR_GET_INT_Export(ScrHandle guid, const char* decoratorName)
	{
		return DECORATOR::DECOR_GET_INT(guid, decoratorName);
	}
	int _DECOR_GET_UINT8_Export(Entity entity, const char* propertyName)
	{
		return DECORATOR::_DECOR_GET_UINT8(entity, propertyName);
	}
	BOOL DECOR_EXIST_ON_Export(ScrHandle guid, const char* decoratorName)
	{
		return DECORATOR::DECOR_EXIST_ON(guid, decoratorName);
	}
	BOOL DECOR_REMOVE_Export(ScrHandle guid, const char* decoratorName)
	{
		return DECORATOR::DECOR_REMOVE(guid, decoratorName);
	}
	BOOL DECOR_REMOVE_ALL_Export(Entity entity)
	{
		return DECORATOR::DECOR_REMOVE_ALL(entity);
	}
	void DECOR_REGISTER_Export(const char* decoratorName, int type)
	{
		return DECORATOR::DECOR_REGISTER(decoratorName, type);
	}
	void _DECOR_REGISTER_2_Export(const char* propertyName, int type, BOOL p2)
	{
		return DECORATOR::_DECOR_REGISTER_2(propertyName, type, p2);
	}
	BOOL DECOR_IS_REGISTERED_AS_TYPE_Export(const char* decoratorName, int type)
	{
		return DECORATOR::DECOR_IS_REGISTERED_AS_TYPE(decoratorName, type);
	}
	BOOL IS_DLC_PRESENT_Export(Hash NameHash)
	{
		return DLC::IS_DLC_PRESENT(NameHash);
	}
	BOOL GET_IS_LOADING_SCREEN_ACTIVE_Export()
	{
		return DLC::GET_IS_LOADING_SCREEN_ACTIVE();
	}
	BOOL _GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED_Export()
	{
		return DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED();
	}
	BOOL _GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED_Export()
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	BOOL DOES_ENTITY_EXIST_Export(Entity EntityIndex)
	{
		return ENTITY::DOES_ENTITY_EXIST(EntityIndex);
	}
	BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT_Export(Entity EntityIndex, BOOL bDeadCheck)
	{
		return ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(EntityIndex, bDeadCheck);
	}
	BOOL DOES_ENTITY_HAVE_DRAWABLE_Export(Entity EntityIndex)
	{
		return ENTITY::DOES_ENTITY_HAVE_DRAWABLE(EntityIndex);
	}
	BOOL DOES_ENTITY_HAVE_PHYSICS_Export(Entity EntityIndex)
	{
		return ENTITY::DOES_ENTITY_HAVE_PHYSICS(EntityIndex);
	}
	BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT_Export(Entity EntityIndex)
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(EntityIndex);
	}
	BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED_Export(Entity EntityIndex)
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(EntityIndex);
	}
	BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE_Export(Entity EntityIndex)
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(EntityIndex);
	}
	BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY_Export(Entity EntityIndex, Entity DamagerIndex, BOOL p2, BOOL p3)
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(EntityIndex, DamagerIndex, p2, p3);
	}
	BOOL _0x3EC28DA1FFAC9DDD_Export(Entity entity1, Entity entity2, Any p2, Any p3)
	{
		return ENTITY::_0x3EC28DA1FFAC9DDD(entity1, entity2, p2, p3);
	}
	Entity _0xAF72EC7E1B54539B_Export(Entity entity)
	{
		return ENTITY::_0xAF72EC7E1B54539B(entity);
	}
	BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_Export(Entity FirstEntityIndex, Entity SecondEntityIndex, int LOSFlags)
	{
		return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(FirstEntityIndex, SecondEntityIndex, LOSFlags);
	}
	BOOL HAS_ENTITY_CLEAR_LOS_TO_COORD_Export(Entity entity, float x, float y, float z, int flags)
	{
		return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(entity, x, y, z, flags);
	}
	BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT_Export(Entity FirstEntityIndex, Entity SecondEntityIndex, int traceType)
	{
		return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(FirstEntityIndex, SecondEntityIndex, traceType);
	}
	BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING_Export(Entity EntityIndex)
	{
		return ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(EntityIndex);
	}
	float _0x6D58167F62238284_Export(Vehicle vehicle)
	{
		return ENTITY::_0x6D58167F62238284(vehicle);
	}
	float _0xDFC2B226D56D85F6_Export(Any p0, Any p1)
	{
		return ENTITY::_0xDFC2B226D56D85F6(p0, p1);
	}
	float GET_ANIM_DURATION_Export(const char* pAnimDictName, const char* pAnimName)
	{
		return ENTITY::GET_ANIM_DURATION(pAnimDictName, pAnimName);
	}
	Entity GET_ENTITY_ATTACHED_TO_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_ATTACHED_TO(EntityIndex);
	}
	scrVector GET_ENTITY_COORDS_Export(Entity EntityIndex, BOOL DoDeadCheck, BOOL realCoords)
	{
		return ENTITY::GET_ENTITY_COORDS(EntityIndex, DoDeadCheck, realCoords);
	}
	scrVector GET_ENTITY_FORWARD_VECTOR_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_FORWARD_VECTOR(EntityIndex);
	}
	float GET_ENTITY_FORWARD_X_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_FORWARD_X(EntityIndex);
	}
	float GET_ENTITY_FORWARD_Y_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_FORWARD_Y(EntityIndex);
	}
	scrVector _GET_ENTITY_FORWARD_VECTOR_YX_Export(Entity entity)
	{
		return ENTITY::_GET_ENTITY_FORWARD_VECTOR_YX(entity);
	}
	float GET_ENTITY_HEADING_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_HEADING(EntityIndex);
	}
	int GET_ENTITY_HEALTH_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_HEALTH(EntityIndex);
	}
	float _GET_ENTITY_HEALTH_FLOAT_Export(Entity entity)
	{
		return ENTITY::_GET_ENTITY_HEALTH_FLOAT(entity);
	}
	BOOL _CHANGE_ENTITY_HEALTH_Export(Entity entity, float amount, Entity entity2, Hash weaponHash)
	{
		return ENTITY::_CHANGE_ENTITY_HEALTH(entity, amount, entity2, weaponHash);
	}
	int GET_ENTITY_MAX_HEALTH_Export(Entity EntityIndex, BOOL p1)
	{
		return ENTITY::GET_ENTITY_MAX_HEALTH(EntityIndex, p1);
	}
	void SET_ENTITY_MAX_HEALTH_Export(Entity EntityIndex, int Health)
	{
		return ENTITY::SET_ENTITY_MAX_HEALTH(EntityIndex, Health);
	}
	float GET_ENTITY_HEIGHT_Export(Entity EntityIndex, float PositionX, float PositionY, float PositionZ, BOOL IsWorldPos, BOOL WantWorldResult)
	{
		return ENTITY::GET_ENTITY_HEIGHT(EntityIndex, PositionX, PositionY, PositionZ, IsWorldPos, WantWorldResult);
	}
	float GET_ENTITY_HEIGHT_ABOVE_GROUND_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(EntityIndex);
	}
	void _GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS_Export(Entity entity, scrVector* minimum, scrVector* maximum)
	{
		return ENTITY::_GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS(entity, minimum, maximum);
	}
	void GET_ENTITY_MATRIX_Export(Entity EntityIndex, scrVector* vFront, scrVector* vSide, scrVector* vUp, scrVector* vPos)
	{
		return ENTITY::GET_ENTITY_MATRIX(EntityIndex, vFront, vSide, vUp, vPos);
	}
	Hash GET_ENTITY_MODEL_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_MODEL(EntityIndex);
	}
	Hash _GET_PED_ANIMAL_TYPE_Export(Ped ped)
	{
		return ENTITY::_GET_PED_ANIMAL_TYPE(ped);
	}
	BOOL GET_IS_ANIMAL_Export(Entity entity)
	{
		return ENTITY::GET_IS_ANIMAL(entity);
	}
	BOOL _GET_IS_BIRD_Export(Entity entity)
	{
		return ENTITY::_GET_IS_BIRD(entity);
	}
	BOOL _GET_IS_PREDATOR_Export(Entity entity)
	{
		return ENTITY::_GET_IS_PREDATOR(entity);
	}
	scrVector GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS_Export(Entity EntityIndex, float VecWorldCoorsX, float VecWorldCoorsY, float VecWorldCoorsZ)
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(EntityIndex, VecWorldCoorsX, VecWorldCoorsY, VecWorldCoorsZ);
	}
	scrVector GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS_Export(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ)
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ);
	}
	float GET_ENTITY_PITCH_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_PITCH(EntityIndex);
	}
	float GET_ENTITY_ROLL_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_ROLL(EntityIndex);
	}
	scrVector GET_ENTITY_ROTATION_Export(Entity EntityIndex, int RotOrder)
	{
		return ENTITY::GET_ENTITY_ROTATION(EntityIndex, RotOrder);
	}
	Hash _GET_ENTITY_SCRIPT_Export(Entity entity, void* argStruct)
	{
		return ENTITY::_GET_ENTITY_SCRIPT(entity, argStruct);
	}
	float GET_ENTITY_SPEED_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_SPEED(EntityIndex);
	}
	scrVector GET_ENTITY_SPEED_VECTOR_Export(Entity EntityIndex, BOOL bLocalResult)
	{
		return ENTITY::GET_ENTITY_SPEED_VECTOR(EntityIndex, bLocalResult);
	}
	float GET_ENTITY_UPRIGHT_VALUE_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_UPRIGHT_VALUE(EntityIndex);
	}
	scrVector GET_ENTITY_VELOCITY_Export(Entity EntityIndex, int p1)
	{
		return ENTITY::GET_ENTITY_VELOCITY(EntityIndex, p1);
	}
	Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX_Export(Entity EntityIndex)
	{
		return ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(EntityIndex);
	}
	Ped GET_PED_INDEX_FROM_ENTITY_INDEX_Export(Entity EntityIndex)
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(EntityIndex);
	}
	Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX_Export(Entity EntityIndex)
	{
		return ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(EntityIndex);
	}
	scrVector GET_WORLD_POSITION_OF_ENTITY_BONE_Export(Entity EntityIndex, int iBoneIdx)
	{
		return ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(EntityIndex, iBoneIdx);
	}
	scrVector _0x5E214112806591EA_Export(Entity entity, int boneIndex)
	{
		return ENTITY::_0x5E214112806591EA(entity, boneIndex);
	}
	scrVector _0x3AB3A77672F6473F_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ENTITY::_0x3AB3A77672F6473F(p0, p1, p2, p3);
	}
	int GET_NEAREST_PLAYER_TO_ENTITY_Export(Entity entityIndex, Ped playerPedToIgnore, int flags)
	{
		return ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(entityIndex, playerPedToIgnore, flags);
	}
	int GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM_Export(Entity entityIndex, int team, Ped playerPedToIgnore, int flags)
	{
		return ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(entityIndex, team, playerPedToIgnore, flags);
	}
	Player GET_NEAREST_PARTICIPANT_TO_ENTITY_Export(Entity entity)
	{
		return ENTITY::GET_NEAREST_PARTICIPANT_TO_ENTITY(entity);
	}
	BOOL PLACE_ENTITY_ON_GROUND_PROPERLY_Export(Entity entity, BOOL p1)
	{
		return ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(entity, p1);
	}
	int GET_ENTITY_TYPE_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_TYPE(EntityIndex);
	}
	int GET_ENTITY_POPULATION_TYPE_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_POPULATION_TYPE(EntityIndex);
	}
	BOOL IS_AN_ENTITY_Export(ScrHandle obj)
	{
		return ENTITY::IS_AN_ENTITY(obj);
	}
	BOOL IS_ENTITY_A_PED_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_A_PED(EntityIndex);
	}
	BOOL IS_ENTITY_A_MISSION_ENTITY_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_A_MISSION_ENTITY(EntityIndex);
	}
	BOOL IS_ENTITY_A_VEHICLE_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_A_VEHICLE(EntityIndex);
	}
	BOOL IS_ENTITY_AN_OBJECT_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_AN_OBJECT(EntityIndex);
	}
	BOOL IS_ENTITY_AT_COORD_Export(Entity EntityIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float VecLocDimensionsX, float VecLocDimensionsY, float VecLocDimensionsZ, BOOL HighlightArea, BOOL Do3dCheck, int TM_MODE)
	{
		return ENTITY::IS_ENTITY_AT_COORD(EntityIndex, VecCoorsX, VecCoorsY, VecCoorsZ, VecLocDimensionsX, VecLocDimensionsY, VecLocDimensionsZ, HighlightArea, Do3dCheck, TM_MODE);
	}
	BOOL IS_ENTITY_AT_ENTITY_Export(Entity EntityIndex, Entity TargetEntityIndex, float VecLocDimensionsX, float VecLocDimensionsY, float VecLocDimensionsZ, BOOL HighlightArea, BOOL Do3dCheck, int TM_MODE)
	{
		return ENTITY::IS_ENTITY_AT_ENTITY(EntityIndex, TargetEntityIndex, VecLocDimensionsX, VecLocDimensionsY, VecLocDimensionsZ, HighlightArea, Do3dCheck, TM_MODE);
	}
	BOOL IS_ENTITY_ATTACHED_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_ATTACHED(EntityIndex);
	}
	BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(EntityIndex);
	}
	BOOL IS_ENTITY_ATTACHED_TO_ANY_PED_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(EntityIndex);
	}
	BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(EntityIndex);
	}
	BOOL IS_ENTITY_ATTACHED_TO_ENTITY_Export(Entity EntityIndex1, Entity EntityIndex2)
	{
		return ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(EntityIndex1, EntityIndex2);
	}
	BOOL _IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM_Export(Entity entity)
	{
		return ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(entity);
	}
	BOOL IS_ENTITY_DEAD_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_DEAD(EntityIndex);
	}
	BOOL IS_ENTITY_IN_AIR_Export(Entity EntityIndex, Any p1)
	{
		return ENTITY::IS_ENTITY_IN_AIR(EntityIndex, p1);
	}
	BOOL IS_ENTITY_IN_ANGLED_AREA_Export(Entity EntityIndex, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, float AreaWidth, BOOL HighlightArea, BOOL Do3dCheck, int TM_MODE)
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(EntityIndex, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, AreaWidth, HighlightArea, Do3dCheck, TM_MODE);
	}
	BOOL IS_ENTITY_IN_AREA_Export(Entity EntityIndex, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, BOOL HighlightArea, BOOL Do3dCheck, int TM_MODE)
	{
		return ENTITY::IS_ENTITY_IN_AREA(EntityIndex, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, HighlightArea, Do3dCheck, TM_MODE);
	}
	BOOL IS_ENTITY_IN_VOLUME_Export(Entity entity, ScrHandle volume, BOOL p2, int p3)
	{
		return ENTITY::IS_ENTITY_IN_VOLUME(entity, volume, p2, p3);
	}
	BOOL IS_ENTITY_IN_WATER_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_IN_WATER(EntityIndex);
	}
	BOOL _IS_ENTITY_UNDERWATER_Export(Entity entity, BOOL p1)
	{
		return ENTITY::_IS_ENTITY_UNDERWATER(entity, p1);
	}
	float GET_ENTITY_SUBMERGED_LEVEL_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_SUBMERGED_LEVEL(EntityIndex);
	}
	void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK_Export(Entity EntityIndex, BOOL FlagValue)
	{
		return ENTITY::SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(EntityIndex, FlagValue);
	}
	void _0x7A49D40DE437BC8D_Export(Any p0, Any p1)
	{
		return ENTITY::_0x7A49D40DE437BC8D(p0, p1);
	}
	void _0x978AA2323ED32209_Export(Any p0, Any p1)
	{
		return ENTITY::_0x978AA2323ED32209(p0, p1);
	}
	void _0x002AAC783ED323ED_Export(Any p0, Any p1)
	{
		return ENTITY::_0x002AAC783ED323ED(p0, p1);
	}
	void _0x007AAC783ED323ED_Export(Any p0, Any p1, Any p2)
	{
		return ENTITY::_0x007AAC783ED323ED(p0, p1, p2);
	}
	BOOL IS_ENTITY_ON_SCREEN_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_ON_SCREEN(EntityIndex);
	}
	BOOL IS_ENTITY_PLAYING_ANIM_Export(Entity EntityIndex, const char* AnimDictName, const char* AnimName, int type)
	{
		return ENTITY::IS_ENTITY_PLAYING_ANIM(EntityIndex, AnimDictName, AnimName, type);
	}
	BOOL _IS_ENTITY_PLAYING_ANY_ANIM_Export(Entity entity, int p1)
	{
		return ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(entity, p1);
	}
	BOOL IS_ENTITY_STATIC_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_STATIC(EntityIndex);
	}
	BOOL IS_ENTITY_TOUCHING_ENTITY_Export(Entity FirstEntityIndex, Entity SecondEntityIndex)
	{
		return ENTITY::IS_ENTITY_TOUCHING_ENTITY(FirstEntityIndex, SecondEntityIndex);
	}
	BOOL IS_ENTITY_TOUCHING_MODEL_Export(Entity EntityIndex, Hash ModelHashKey)
	{
		return ENTITY::IS_ENTITY_TOUCHING_MODEL(EntityIndex, ModelHashKey);
	}
	BOOL IS_ENTITY_UPRIGHT_Export(Entity EntityIndex, float fAngleToVerticalLimit)
	{
		return ENTITY::IS_ENTITY_UPRIGHT(EntityIndex, fAngleToVerticalLimit);
	}
	BOOL IS_ENTITY_UPSIDEDOWN_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_UPSIDEDOWN(EntityIndex);
	}
	BOOL IS_ENTITY_VISIBLE_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_VISIBLE(EntityIndex);
	}
	void _0xFF9965C47FA404DA_Export(Entity entity, BOOL toggle)
	{
		return ENTITY::_0xFF9965C47FA404DA(entity, toggle);
	}
	BOOL IS_ENTITY_VISIBLE_TO_SCRIPT_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(EntityIndex);
	}
	void _0x3F08C6163A4AB1D6_Export(Any p0)
	{
		return ENTITY::_0x3F08C6163A4AB1D6(p0);
	}
	void _0x0DB41D59E0F1502B_Export(Any p0)
	{
		return ENTITY::_0x0DB41D59E0F1502B(p0);
	}
	BOOL _IS_TRACKED_ENTITY_VISIBLE_Export(Entity entity)
	{
		return ENTITY::_IS_TRACKED_ENTITY_VISIBLE(entity);
	}
	BOOL IS_ENTITY_OCCLUDED_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_OCCLUDED(EntityIndex);
	}
	BOOL WOULD_ENTITY_BE_OCCLUDED_Export(Hash ModelHashKey, float CoordsX, float CoordsY, float CoordsZ, BOOL bAssertIfModelIsntLoaded)
	{
		return ENTITY::WOULD_ENTITY_BE_OCCLUDED(ModelHashKey, CoordsX, CoordsY, CoordsZ, bAssertIfModelIsntLoaded);
	}
	BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION_Export(Entity EntityIndex)
	{
		return ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(EntityIndex);
	}
	BOOL _IS_ENTITY_ON_TRAIN_TRACK_Export(Entity entity)
	{
		return ENTITY::_IS_ENTITY_ON_TRAIN_TRACK(entity);
	}
	void _0xCDB682BB47C02F0A_Export(Entity entity, Hash p1)
	{
		return ENTITY::_0xCDB682BB47C02F0A(entity, p1);
	}
	void _0xE19035EB65AB2932_Export(Any p0, Any p1)
	{
		return ENTITY::_0xE19035EB65AB2932(p0, p1);
	}
	BOOL SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT_Export(Entity entity, Hash lootTable)
	{
		return ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(entity, lootTable);
	}
	BOOL _GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT_Export(Entity entity, Hash* lootTable)
	{
		return ENTITY::_GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(entity, lootTable);
	}
	BOOL _REQUEST_ENTITY_LOOT_LIST_Export(Ped mount, void* argStruct, Hash visiblelootslotrequestType, int flag, int p4, BOOL p5)
	{
		return ENTITY::_REQUEST_ENTITY_LOOT_LIST(mount, argStruct, visiblelootslotrequestType, flag, p4, p5);
	}
	Any _0xE31FC20319874CB3_Export(Any p0, Any p1, Any p2)
	{
		return ENTITY::_0xE31FC20319874CB3(p0, p1, p2);
	}
	Any _0x582F73ACFE969571_Export(Any p0, Any p1, Any p2)
	{
		return ENTITY::_0x582F73ACFE969571(p0, p1, p2);
	}
	Any _0xBA2A089E60ED1163_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return ENTITY::_0xBA2A089E60ED1163(p0, p1, p2, p3, p4);
	}
	int GET_CARRIABLE_ENTITY_STATE_Export(Entity entity)
	{
		return ENTITY::GET_CARRIABLE_ENTITY_STATE(entity);
	}
	Any _0xD46BF94C4C66FAB0_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ENTITY::_0xD46BF94C4C66FAB0(p0, p1, p2, p3);
	}
	Hash _GET_OPTIMAL_CARRY_CONFIG_Export(Entity entity, int index)
	{
		return ENTITY::_GET_OPTIMAL_CARRY_CONFIG(entity, index);
	}
	Any _0xD21C7418C590BB40_Export(Any p0)
	{
		return ENTITY::_0xD21C7418C590BB40(p0);
	}
	Hash _GET_ENTITY_CARRY_CONFIG_Export(Entity entity)
	{
		return ENTITY::_GET_ENTITY_CARRY_CONFIG(entity);
	}
	BOOL _IS_CARRIABLE_MODEL_Export(Hash model)
	{
		return ENTITY::_IS_CARRIABLE_MODEL(model);
	}
	Hash _GET_CARRIABLE_FROM_ENTITY_Export(Entity entity)
	{
		return ENTITY::_GET_CARRIABLE_FROM_ENTITY(entity);
	}
	void _SET_ENTITY_CARCASS_TYPE_Export(Entity entity, Hash type)
	{
		return ENTITY::_SET_ENTITY_CARCASS_TYPE(entity, type);
	}
	Any _0x2A77EF9BEC8518F4_Export(Any p0)
	{
		return ENTITY::_0x2A77EF9BEC8518F4(p0);
	}
	void _DELETE_CARRIABLE_Export(Entity* entity)
	{
		return ENTITY::_DELETE_CARRIABLE(entity);
	}
	BOOL _IS_ENTITY_FULLY_LOOTED_Export(Entity entity)
	{
		return ENTITY::_IS_ENTITY_FULLY_LOOTED(entity);
	}
	void _SET_ENTITY_FULLY_LOOTED_Export(Entity entity, BOOL looted)
	{
		return ENTITY::_SET_ENTITY_FULLY_LOOTED(entity, looted);
	}
	Ped _0xEF2D9ED7CE684F08_Export(Ped ped)
	{
		return ENTITY::_0xEF2D9ED7CE684F08(ped);
	}
	Any _0x0CCEFC6C2C95DA2A_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ENTITY::_0x0CCEFC6C2C95DA2A(p0, p1, p2, p3);
	}
	BOOL _0x383F64263F946E45_Export(int* p0, Entity entity, int p2, Ped ped, Any p4, int p5)
	{
		return ENTITY::_0x383F64263F946E45(p0, entity, p2, ped, p4, p5);
	}
	Any _0x8E10DF0FFA63FB65_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return ENTITY::_0x8E10DF0FFA63FB65(p0, p1, p2, p3, p4);
	}
	BOOL _GET_ENTITY_CARRYING_FLAG_Export(Entity entity, int flagId)
	{
		return ENTITY::_GET_ENTITY_CARRYING_FLAG(entity, flagId);
	}
	void _SET_ENTITY_CARRYING_FLAG_Export(Entity entity, int flagId, BOOL value)
	{
		return ENTITY::_SET_ENTITY_CARRYING_FLAG(entity, flagId, value);
	}
	void _0xC3ABCFBC7D74AFA5_Export(Ped ped, int p1, BOOL p2)
	{
		return ENTITY::_0xC3ABCFBC7D74AFA5(ped, p1, p2);
	}
	void _0x371D179701D9C082_Export(Entity entity)
	{
		return ENTITY::_0x371D179701D9C082(entity);
	}
	void _0xA48E4801DEBDF7E4_Export(Entity entity, BOOL p1)
	{
		return ENTITY::_0xA48E4801DEBDF7E4(entity, p1);
	}
	BOOL _GET_IS_CARRIABLE_PELT_Export(Entity entity)
	{
		return ENTITY::_GET_IS_CARRIABLE_PELT(entity);
	}
	Any _0xF59FDE7B4D31A630_Export(Any p0)
	{
		return ENTITY::_0xF59FDE7B4D31A630(p0);
	}
	Any _0x120376C23F019C6C_Export(Any p0, Any p1)
	{
		return ENTITY::_0x120376C23F019C6C(p0, p1);
	}
	Any _0x5744562E973E33CD_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return ENTITY::_0x5744562E973E33CD(p0, p1, p2, p3, p4);
	}
	void _0xDD03FC2089AD093C_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ENTITY::_0xDD03FC2089AD093C(p0, p1, p2, p3);
	}
	Any _0xB16C780C51E51E2B_Export(Any p0)
	{
		return ENTITY::_0xB16C780C51E51E2B(p0);
	}
	void _0xEF259AA1E097E0AD_Export(Entity entity, Any p1)
	{
		return ENTITY::_0xEF259AA1E097E0AD(entity, p1);
	}
	void _0xBD94CECFB2D65119_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return ENTITY::_0xBD94CECFB2D65119(p0, p1, p2, p3, p4, p5);
	}
	void _SET_ENTITY_CUSTOM_PICKUP_RADIUS_Export(Entity entity, float radius)
	{
		return ENTITY::_SET_ENTITY_CUSTOM_PICKUP_RADIUS(entity, radius);
	}
	void _0xE75EEA8DB59A9F39_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return ENTITY::_0xE75EEA8DB59A9F39(p0, p1, p2, p3, p4, p5);
	}
	Any _0x188736456D1DEDE6_Export(Any p0, Any p1)
	{
		return ENTITY::_0x188736456D1DEDE6(p0, p1);
	}
	void _0xC6A1A3D63F122DE7_Export(Any p0, Any p1)
	{
		return ENTITY::_0xC6A1A3D63F122DE7(p0, p1);
	}
	void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS_Export(Entity EntityIndex, int ApplyType, float vForceX, float vForceY, float vForceZ, int Component, BOOL LocalForce, BOOL ScaleByMass, BOOL applyToChildren)
	{
		return ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(EntityIndex, ApplyType, vForceX, vForceY, vForceZ, Component, LocalForce, ScaleByMass, applyToChildren);
	}
	void APPLY_FORCE_TO_ENTITY_Export(Entity EntityIndex, int ApplyType, float vForceX, float vForceY, float vForceZ, float vOffsetX, float vOffsetY, float vOffsetZ, int Component, BOOL LocalForce, BOOL LocalOffset, BOOL ScaleByMass, BOOL triggerAudio, BOOL ScaleByTimeWarp)
	{
		return ENTITY::APPLY_FORCE_TO_ENTITY(EntityIndex, ApplyType, vForceX, vForceY, vForceZ, vOffsetX, vOffsetY, vOffsetZ, Component, LocalForce, LocalOffset, ScaleByMass, triggerAudio, ScaleByTimeWarp);
	}
	void ATTACH_ENTITY_TO_ENTITY_Export(Entity FirstEntityIndex, Entity SecondEntityIndex, int SecondEntityBoneIndex, float vecOffsetX, float vecOffsetY, float vecOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int RotOrder, BOOL bAttachOffsetIsRelative, BOOL p15, BOOL p16)
	{
		return ENTITY::ATTACH_ENTITY_TO_ENTITY(FirstEntityIndex, SecondEntityIndex, SecondEntityBoneIndex, vecOffsetX, vecOffsetY, vecOffsetZ, vecRotationX, vecRotationY, vecRotationZ, p9, useSoftPinning, collision, isPed, RotOrder, bAttachOffsetIsRelative, p15, p16);
	}
	void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY_Export(Entity FirstEntityIndex, Entity SecondEntityIndex, int FirstEntityBoneIndex, int SecondEntityBoneIndex, float SecondEntityOffsetX, float SecondEntityOffsetY, float SecondEntityOffsetZ, float FirstEntityOffsetX, float FirstEntityOffsetY, float FirstEntityOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, float PhysicalStrength, BOOL p14, BOOL p15, BOOL p16, BOOL p17, int RotOrder, BOOL p19, float p20, float p21)
	{
		return ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(FirstEntityIndex, SecondEntityIndex, FirstEntityBoneIndex, SecondEntityBoneIndex, SecondEntityOffsetX, SecondEntityOffsetY, SecondEntityOffsetZ, FirstEntityOffsetX, FirstEntityOffsetY, FirstEntityOffsetZ, vecRotationX, vecRotationY, vecRotationZ, PhysicalStrength, p14, p15, p16, p17, RotOrder, p19, p20, p21);
	}
	void _0x445D7D8EA66E373E_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15)
	{
		return ENTITY::_0x445D7D8EA66E373E(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
	}
	void _0x16908E859C3AB698_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return ENTITY::_0x16908E859C3AB698(p0, p1, p2, p3, p4);
	}
	int GET_ENTITY_BONE_INDEX_BY_NAME_Export(Entity EntityIndex, const char* BoneName)
	{
		return ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, BoneName);
	}
	void CLEAR_ENTITY_LAST_DAMAGE_ENTITY_Export(Entity EntityIndex)
	{
		return ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(EntityIndex);
	}
	void DELETE_ENTITY_Export(Entity* EntityIndex)
	{
		return ENTITY::DELETE_ENTITY(EntityIndex);
	}
	void _DELETE_ENTITY_2_Export(Entity* entity)
	{
		return ENTITY::_DELETE_ENTITY_2(entity);
	}
	void DETACH_ENTITY_Export(Entity EntityIndex, BOOL ApplyVelocity, BOOL bNoCollisionUntilClear)
	{
		return ENTITY::DETACH_ENTITY(EntityIndex, ApplyVelocity, bNoCollisionUntilClear);
	}
	BOOL _IS_ENTITY_FROZEN_Export(Entity entity)
	{
		return ENTITY::_IS_ENTITY_FROZEN(entity);
	}
	void FREEZE_ENTITY_POSITION_Export(Entity EntityIndex, BOOL FrozenByScriptFlag)
	{
		return ENTITY::FREEZE_ENTITY_POSITION(EntityIndex, FrozenByScriptFlag);
	}
	void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION_Export(Entity EntityIndex, BOOL ShouldFreeze)
	{
		return ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(EntityIndex, ShouldFreeze);
	}
	void SET_ENTITY_AS_MISSION_ENTITY_Export(Entity EntityIndex, BOOL ScriptHostObject, BOOL GrabFromOtherScript)
	{
		return ENTITY::SET_ENTITY_AS_MISSION_ENTITY(EntityIndex, ScriptHostObject, GrabFromOtherScript);
	}
	void SET_ENTITY_AS_NO_LONGER_NEEDED_Export(Entity* EntityIndex)
	{
		return ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(EntityIndex);
	}
	void SET_PED_AS_NO_LONGER_NEEDED_Export(Ped* PedIndex)
	{
		return ENTITY::SET_PED_AS_NO_LONGER_NEEDED(PedIndex);
	}
	void SET_VEHICLE_AS_NO_LONGER_NEEDED_Export(Vehicle* VehicleIndex)
	{
		return ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(VehicleIndex);
	}
	void SET_OBJECT_AS_NO_LONGER_NEEDED_Export(Object* ObjectIndex)
	{
		return ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(ObjectIndex);
	}
	void _0x20FAEE47427A4497_Export()
	{
		return ENTITY::_0x20FAEE47427A4497();
	}
	BOOL _DOES_THREAD_OWN_THIS_ENTITY_Export(Entity entity)
	{
		return ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity);
	}
	void _0x56E0735D6273B227_Export(Any p0, Any p1)
	{
		return ENTITY::_0x56E0735D6273B227(p0, p1);
	}
	void _0xC0EDEF16D90661EE_Export(Entity entity, float p1)
	{
		return ENTITY::_0xC0EDEF16D90661EE(entity, p1);
	}
	void _0x0FD7D7C232876E72_Export(Any p0)
	{
		return ENTITY::_0x0FD7D7C232876E72(p0);
	}
	void _0x0939E773925C4719_Export()
	{
		return ENTITY::_0x0939E773925C4719();
	}
	void SET_ENTITY_CAN_BE_DAMAGED_Export(Entity EntityIndex, BOOL CanBeDamagedFlag)
	{
		return ENTITY::SET_ENTITY_CAN_BE_DAMAGED(EntityIndex, CanBeDamagedFlag);
	}
	BOOL _GET_ENTITY_CAN_BE_DAMAGED_Export(Entity entity)
	{
		return ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(entity);
	}
	void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP_Export(Entity EntityIndex, BOOL AllowDamagedByRelGroup, Hash relGroup)
	{
		return ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(EntityIndex, AllowDamagedByRelGroup, relGroup);
	}
	void _0xFF83AF534156B399_Export(Any p0, Any p1)
	{
		return ENTITY::_0xFF83AF534156B399(p0, p1);
	}
	void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS_Export(Entity EntityIndex, BOOL TargettableWithNoLos)
	{
		return ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(EntityIndex, TargettableWithNoLos);
	}
	BOOL GET_ENTITY_COLLISION_DISABLED_Export(Entity EntityIndex)
	{
		return ENTITY::GET_ENTITY_COLLISION_DISABLED(EntityIndex);
	}
	void SET_ENTITY_COLLISION_Export(Entity EntityIndex, BOOL UsesCollisionsFlag, BOOL KeepDisabledSimulatingFlag)
	{
		return ENTITY::SET_ENTITY_COLLISION(EntityIndex, UsesCollisionsFlag, KeepDisabledSimulatingFlag);
	}
	void SET_ENTITY_COMPLETELY_DISABLE_COLLISION_Export(Entity EntityIndex, BOOL UsesCollisionsFlag, BOOL KeepDisabledSimulatingFlag)
	{
		return ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(EntityIndex, UsesCollisionsFlag, KeepDisabledSimulatingFlag);
	}
	void SET_ENTITY_COORDS_Export(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, BOOL DoDeadCheck, BOOL KeepTasks, BOOL KeepIK, BOOL DoWarp)
	{
		return ENTITY::SET_ENTITY_COORDS(EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, DoDeadCheck, KeepTasks, KeepIK, DoWarp);
	}
	void SET_ENTITY_COORDS_NO_OFFSET_Export(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, BOOL KeepTasks, BOOL KeepIK, BOOL DoWarp)
	{
		return ENTITY::SET_ENTITY_COORDS_NO_OFFSET(EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, KeepTasks, KeepIK, DoWarp);
	}
	void SET_ENTITY_DYNAMIC_Export(Entity EntityIndex, BOOL IsDynamic)
	{
		return ENTITY::SET_ENTITY_DYNAMIC(EntityIndex, IsDynamic);
	}
	void SET_ENTITY_HEADING_Export(Entity EntityIndex, float NewHeading)
	{
		return ENTITY::SET_ENTITY_HEADING(EntityIndex, NewHeading);
	}
	void _SET_ENTITY_COORDS_AND_HEADING_Export(Entity entity, float xPos, float yPos, float zPos, float heading, BOOL xAxis, BOOL yAxis, BOOL zAxis)
	{
		return ENTITY::_SET_ENTITY_COORDS_AND_HEADING(entity, xPos, yPos, zPos, heading, xAxis, yAxis, zAxis);
	}
	void _SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET_Export(Entity entity, float xPos, float yPos, float zPos, float heading, BOOL p5, BOOL p6)
	{
		return ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(entity, xPos, yPos, zPos, heading, p5, p6);
	}
	void SET_ENTITY_HEALTH_Export(Entity entity, int healthAmount, Entity entityKilledBy)
	{
		return ENTITY::SET_ENTITY_HEALTH(entity, healthAmount, entityKilledBy);
	}
	void SET_ENTITY_INVINCIBLE_Export(Entity EntityIndex, BOOL bInvincible)
	{
		return ENTITY::SET_ENTITY_INVINCIBLE(EntityIndex, bInvincible);
	}
	void _0xAF7F3099B9FEB535_Export(Entity entity, float p1, float p2, float p3)
	{
		return ENTITY::_0xAF7F3099B9FEB535(entity, p1, p2, p3);
	}
	void SET_ENTITY_IS_TARGET_PRIORITY_Export(Entity EntityIndex, BOOL bHighPriority, float fTargetableDistance)
	{
		return ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(EntityIndex, bHighPriority, fTargetableDistance);
	}
	void _0xB38A29CCD5447783_Export(Any p0, Any p1, Any p2)
	{
		return ENTITY::_0xB38A29CCD5447783(p0, p1, p2);
	}
	void _SET_ENTITY_THREAT_TIER_Export(Entity entity, int tier, BOOL p2)
	{
		return ENTITY::_SET_ENTITY_THREAT_TIER(entity, tier, p2);
	}
	int _GET_ENTITY_THREAT_TIER_Export(Entity entity)
	{
		return ENTITY::_GET_ENTITY_THREAT_TIER(entity);
	}
	void _0x2D40BCBFE9305DEA_Export(Any p0, Any p1)
	{
		return ENTITY::_0x2D40BCBFE9305DEA(p0, p1);
	}
	void _SET_ENTITY_LIGHTS_ENABLED_Export(Entity entity, BOOL enabled)
	{
		return ENTITY::_SET_ENTITY_LIGHTS_ENABLED(entity, enabled);
	}
	void SET_ENTITY_LOAD_COLLISION_FLAG_Export(Entity EntityIndex, BOOL LoadCollisionFlag)
	{
		return ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(EntityIndex, LoadCollisionFlag);
	}
	BOOL HAS_COLLISION_LOADED_AROUND_ENTITY_Export(Entity EntityIndex)
	{
		return ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(EntityIndex);
	}
	BOOL HAS_COLLISION_LOADED_AROUND_POSITION_Export(float xPos, float yPos, float zPos)
	{
		return ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(xPos, yPos, zPos);
	}
	void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER_Export(Entity EntityIndex, BOOL OnlyDamagedByPlayer)
	{
		return ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(EntityIndex, OnlyDamagedByPlayer);
	}
	void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP_Export(Entity EntityIndex, BOOL OnlyDamagedByRelGroup, Hash relGroup)
	{
		return ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(EntityIndex, OnlyDamagedByRelGroup, relGroup);
	}
	void SET_ENTITY_PROOFS_Export(Entity EntityIndex, int proofsBitset, BOOL specialFlag)
	{
		return ENTITY::SET_ENTITY_PROOFS(EntityIndex, proofsBitset, specialFlag);
	}
	int _GET_ENTITY_PROOFS_Export(Entity entity)
	{
		return ENTITY::_GET_ENTITY_PROOFS(entity);
	}
	void SET_ENTITY_QUATERNION_Export(Entity EntityIndex, float NewX, float NewY, float NewZ, float NewW)
	{
		return ENTITY::SET_ENTITY_QUATERNION(EntityIndex, NewX, NewY, NewZ, NewW);
	}
	void SET_ENTITY_ROTATION_Export(Entity EntityIndex, float VecNewRotationX, float VecNewRotationY, float VecNewRotationZ, int RotOrder, BOOL DoDeadCheck)
	{
		return ENTITY::SET_ENTITY_ROTATION(EntityIndex, VecNewRotationX, VecNewRotationY, VecNewRotationZ, RotOrder, DoDeadCheck);
	}
	void _0xD45BB89B53FC0CFD_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return ENTITY::_0xD45BB89B53FC0CFD(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void SET_ENTITY_VISIBLE_Export(Entity EntityIndex, BOOL VisibleFlag)
	{
		return ENTITY::SET_ENTITY_VISIBLE(EntityIndex, VisibleFlag);
	}
	void _0x80FDEB3A9E9AA578_Export(Entity entity, BOOL p1)
	{
		return ENTITY::_0x80FDEB3A9E9AA578(entity, p1);
	}
	void _0x9C6906EF8CB20C5F_Export(Entity entity)
	{
		return ENTITY::_0x9C6906EF8CB20C5F(entity);
	}
	void SET_ENTITY_VELOCITY_Export(Entity EntityIndex, float VecVelocityComponenttX, float VecVelocityComponenttY, float VecVelocityComponenttZ)
	{
		return ENTITY::SET_ENTITY_VELOCITY(EntityIndex, VecVelocityComponenttX, VecVelocityComponenttY, VecVelocityComponenttZ);
	}
	void SET_ENTITY_HAS_GRAVITY_Export(Entity EntityIndex, BOOL bHasGravity)
	{
		return ENTITY::SET_ENTITY_HAS_GRAVITY(EntityIndex, bHasGravity);
	}
	void SET_ENTITY_LOD_DIST_Export(Entity entityIndex, int lodDist)
	{
		return ENTITY::SET_ENTITY_LOD_DIST(entityIndex, lodDist);
	}
	int GET_ENTITY_LOD_DIST_Export(Entity entityIndex)
	{
		return ENTITY::GET_ENTITY_LOD_DIST(entityIndex);
	}
	void SET_ENTITY_ALPHA_Export(Entity entityIndex, int alpha_param, BOOL bUseSmoothAlpha)
	{
		return ENTITY::SET_ENTITY_ALPHA(entityIndex, alpha_param, bUseSmoothAlpha);
	}
	int GET_ENTITY_ALPHA_Export(Entity entityIndex)
	{
		return ENTITY::GET_ENTITY_ALPHA(entityIndex);
	}
	void RESET_ENTITY_ALPHA_Export(Entity entityIndex)
	{
		return ENTITY::RESET_ENTITY_ALPHA(entityIndex);
	}
	void _SET_ENTITY_FADE_IN_Export(Entity entity)
	{
		return ENTITY::_SET_ENTITY_FADE_IN(entity);
	}
	void SET_ENTITY_ALWAYS_PRERENDER_Export(Entity entityIndex, BOOL bAlwaysPreRender)
	{
		return ENTITY::SET_ENTITY_ALWAYS_PRERENDER(entityIndex, bAlwaysPreRender);
	}
	void SET_ENTITY_RENDER_SCORCHED_Export(Entity entityIndex, BOOL bRenderScorched)
	{
		return ENTITY::SET_ENTITY_RENDER_SCORCHED(entityIndex, bRenderScorched);
	}
	Any _0x37B01666BAE8F7EF_Export(Entity entity)
	{
		return ENTITY::_0x37B01666BAE8F7EF(entity);
	}
	void _0xA9E6D8F2DDFC4DB9_Export(Any p0, Any p1)
	{
		return ENTITY::_0xA9E6D8F2DDFC4DB9(p0, p1);
	}
	void CREATE_MODEL_SWAP_Export(float posX, float posY, float posZ, float radius, Hash oldModelHash, Hash newModelHash, BOOL bSurviveMapReload)
	{
		return ENTITY::CREATE_MODEL_SWAP(posX, posY, posZ, radius, oldModelHash, newModelHash, bSurviveMapReload);
	}
	void REMOVE_MODEL_SWAP_Export(float posX, float posY, float posZ, float radius, Hash oldModelHash, Hash newModelHash, BOOL bLazy)
	{
		return ENTITY::REMOVE_MODEL_SWAP(posX, posY, posZ, radius, oldModelHash, newModelHash, bLazy);
	}
	void CREATE_MODEL_HIDE_Export(float posX, float posY, float posZ, float radius, Hash modelHash, BOOL bSurviveMapReload)
	{
		return ENTITY::CREATE_MODEL_HIDE(posX, posY, posZ, radius, modelHash, bSurviveMapReload);
	}
	void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS_Export(float posX, float posY, float posZ, float radius, Hash modelHash, BOOL bSurviveMapReload)
	{
		return ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(posX, posY, posZ, radius, modelHash, bSurviveMapReload);
	}
	void REMOVE_MODEL_HIDE_Export(float posX, float posY, float posZ, float radius, Hash modelHash, BOOL bLazy)
	{
		return ENTITY::REMOVE_MODEL_HIDE(posX, posY, posZ, radius, modelHash, bLazy);
	}
	Any _0xD4636C2EDB0DEA8A_Export(Any p0)
	{
		return ENTITY::_0xD4636C2EDB0DEA8A(p0);
	}
	void CREATE_FORCED_OBJECT_Export(float posX, float posY, float posZ, float radius, Hash modelHash, BOOL bSurviveMapReload)
	{
		return ENTITY::CREATE_FORCED_OBJECT(posX, posY, posZ, radius, modelHash, bSurviveMapReload);
	}
	void REMOVE_FORCED_OBJECT_Export(float posX, float posY, float posZ, float radius, Hash modelHash)
	{
		return ENTITY::REMOVE_FORCED_OBJECT(posX, posY, posZ, radius, modelHash);
	}
	void SET_ENTITY_NO_COLLISION_ENTITY_Export(Entity entityIndex, Entity secondEntityIndex, BOOL bReactivateWhenNoCollision)
	{
		return ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(entityIndex, secondEntityIndex, bReactivateWhenNoCollision);
	}
	void SET_ENTITY_MOTION_BLUR_Export(Entity entityIndex, BOOL bEnableMotionBlur)
	{
		return ENTITY::SET_ENTITY_MOTION_BLUR(entityIndex, bEnableMotionBlur);
	}
	void SET_CAN_AUTO_VAULT_ON_ENTITY_Export(Entity entityIndex, BOOL bCanAutoVault)
	{
		return ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(entityIndex, bCanAutoVault);
	}
	void SET_CAN_CLIMB_ON_ENTITY_Export(Entity entityIndex, BOOL bCanClimb)
	{
		return ENTITY::SET_CAN_CLIMB_ON_ENTITY(entityIndex, bCanClimb);
	}
	void SET_ENTITY_NOWEAPONDECALS_Export(Entity entityIndex, BOOL bNoWeaponDecals)
	{
		return ENTITY::SET_ENTITY_NOWEAPONDECALS(entityIndex, bNoWeaponDecals);
	}
	int _GET_ENTITIES_NEAR_POINT_Export(float x, float y, float z, float radius, ItemSet itemSet, int p5)
	{
		return ENTITY::_GET_ENTITIES_NEAR_POINT(x, y, z, radius, itemSet, p5);
	}
	int GET_MATCHING_ENTITIES_Export(Volume volume, ItemSet itemSet, int entityType, Any p3, Hash p4, const char* p5)
	{
		return ENTITY::GET_MATCHING_ENTITIES(volume, itemSet, entityType, p3, p4, p5);
	}
	int _GET_ENTITIES_IN_VOLUME_Export(Volume volume, ItemSet itemSet, int entityType)
	{
		return ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, entityType);
	}
	Entity _SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL_Export(Hash modelHash)
	{
		return ENTITY::_SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL(modelHash);
	}
	Any _0xC2E71D7E0A7B4C89_Export(Any p0)
	{
		return ENTITY::_0xC2E71D7E0A7B4C89(p0);
	}
	void _0x6C31B06E91518269_Export(Any p0, Any p1)
	{
		return ENTITY::_0x6C31B06E91518269(p0, p1);
	}
	void _0x119A5714578F4E05_Export(Any p0, Any p1)
	{
		return ENTITY::_0x119A5714578F4E05(p0, p1);
	}
	Entity _GET_ENTITY_BY_DOORHASH_Export(Hash doorHash, int p1)
	{
		return ENTITY::_GET_ENTITY_BY_DOORHASH(doorHash, p1);
	}
	BOOL FIND_ANIM_EVENT_PHASE_Export(const char* pAnimDictName, const char* pAnimName, const char* pEventName, float* ReturnStartPhase, float* ReturnEndPhase)
	{
		return ENTITY::FIND_ANIM_EVENT_PHASE(pAnimDictName, pAnimName, pEventName, ReturnStartPhase, ReturnEndPhase);
	}
	void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE_Export(Entity EntityIndex, BOOL p1)
	{
		return ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(EntityIndex, p1);
	}
	float _GET_ENTITY_ANIM_CURRENT_TIME_Export(Entity entity, const char* animDict, const char* animName)
	{
		return ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(entity, animDict, animName);
	}
	float _0x8E46E18AA828334F_Export(Entity entity, const char* animDict, const char* animClip)
	{
		return ENTITY::_0x8E46E18AA828334F(entity, animDict, animClip);
	}
	Any _0xDF8E49EA89A01DB1_Export(Any p0, Any p1, Any p2)
	{
		return ENTITY::_0xDF8E49EA89A01DB1(p0, p1, p2);
	}
	BOOL HAS_ANIM_EVENT_FIRED_Export(Entity EntityIndex, Hash EventHash)
	{
		return ENTITY::HAS_ANIM_EVENT_FIRED(EntityIndex, EventHash);
	}
	BOOL HAS_ENTITY_ANIM_FINISHED_Export(Entity EntityIndex, const char* pAnimDictName, const char* pAnimName, int animType)
	{
		return ENTITY::HAS_ENTITY_ANIM_FINISHED(EntityIndex, pAnimDictName, pAnimName, animType);
	}
	BOOL PLAY_ENTITY_ANIM_Export(Entity EntityIndex, const char* AnimName, const char* AnimDictName, float BlendDelta, BOOL Loop, BOOL HoldLastFrame, BOOL DriveToPose, float StartPhase, int AnimFlags)
	{
		return ENTITY::PLAY_ENTITY_ANIM(EntityIndex, AnimName, AnimDictName, BlendDelta, Loop, HoldLastFrame, DriveToPose, StartPhase, AnimFlags);
	}
	void _SET_ENTITY_ANIM_CURRENT_TIME_Export(Entity entity, const char* animDict, const char* animName, float time)
	{
		return ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(entity, animDict, animName, time);
	}
	void _SET_ENTITY_ANIM_SPEED_Export(Entity entity, const char* animDict, const char* animName, float speedMultiplier)
	{
		return ENTITY::_SET_ENTITY_ANIM_SPEED(entity, animDict, animName, speedMultiplier);
	}
	BOOL STOP_ENTITY_ANIM_Export(Entity EntityIndex, const char* AnimName, const char* AnimDictName, float BlendDelta)
	{
		return ENTITY::STOP_ENTITY_ANIM(EntityIndex, AnimName, AnimDictName, BlendDelta);
	}
	void _0x669655FFB29EF1A9_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ENTITY::_0x669655FFB29EF1A9(p0, p1, p2, p3);
	}
	void _ADD_ENTITY_TRACKING_TRAILS_Export(Entity entity)
	{
		return ENTITY::_ADD_ENTITY_TRACKING_TRAILS(entity);
	}
	void _0x5826EFD6D73C4DE5_Export(Entity entity)
	{
		return ENTITY::_0x5826EFD6D73C4DE5(entity);
	}
	void _PAUSE_ENTITY_TRACKING_Export(Entity entity, BOOL pause)
	{
		return ENTITY::_PAUSE_ENTITY_TRACKING(entity, pause);
	}
	Any _CREATE_FOOTPATH_TRAIL_Export(Any p0, const char* waypointRecord, BOOL bUseSnowOffset, float p3, float p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, BOOL bInit)
	{
		return ENTITY::_CREATE_FOOTPATH_TRAIL(p0, waypointRecord, bUseSnowOffset, p3, p4, p5, p6, p7, p8, p9, p10, bInit);
	}
	void _0xC76E94A78127412B_Export(Any p0, Any p1, Any p2)
	{
		return ENTITY::_0xC76E94A78127412B(p0, p1, p2);
	}
	void _0x7F20092547B4DDEA_Export(Any p0)
	{
		return ENTITY::_0x7F20092547B4DDEA(p0);
	}
	void _0xF41E2979D5BC5370_Export(Any p0)
	{
		return ENTITY::_0xF41E2979D5BC5370(p0);
	}
	Any _0xAAACB74442C1BED3_Export(Any p0)
	{
		return ENTITY::_0xAAACB74442C1BED3(p0);
	}
	Any PIN_CLOSEST_MAP_ENTITY_Export(Hash modelHash, float x, float y, float z, int flags)
	{
		return ENTITY::PIN_CLOSEST_MAP_ENTITY(modelHash, x, y, z, flags);
	}
	void _UNPIN_MAP_ENTITY_Export(Entity entity)
	{
		return ENTITY::_UNPIN_MAP_ENTITY(entity);
	}
	BOOL IS_MAP_ENTITY_PINNED_Export(Any p0)
	{
		return ENTITY::IS_MAP_ENTITY_PINNED(p0);
	}
	Entity _GET_PINNED_MAP_ENTITY_Export(Any p0)
	{
		return ENTITY::_GET_PINNED_MAP_ENTITY(p0);
	}
	void _0xEAB3D91D30A344F1_Export(Any p0)
	{
		return ENTITY::_0xEAB3D91D30A344F1(p0);
	}
	void _0x37CEB637BA3B1A47_Export(Any p0)
	{
		return ENTITY::_0x37CEB637BA3B1A47(p0);
	}
	Any _0x350E9211074955AF_Export(Any p0, Any p1)
	{
		return ENTITY::_0x350E9211074955AF(p0, p1);
	}
	void _0x898586729DB5221D_Export(Ped ped)
	{
		return ENTITY::_0x898586729DB5221D(ped);
	}
	void _0xE9E7A0BAC7F57746_Export(Any p0, Any p1)
	{
		return ENTITY::_0xE9E7A0BAC7F57746(p0, p1);
	}
	void SET_DECISION_MAKER_Export(Ped PedIndex, Hash DecisionMakerId)
	{
		return EVENT::SET_DECISION_MAKER(PedIndex, DecisionMakerId);
	}
	void SET_DECISION_MAKER_TO_DEFAULT_Export(Ped ped)
	{
		return EVENT::SET_DECISION_MAKER_TO_DEFAULT(ped);
	}
	ScrHandle _CREATE_SHOCKING_EVENT_Export(void* args)
	{
		return EVENT::_CREATE_SHOCKING_EVENT(args);
	}
	int ADD_SHOCKING_EVENT_AT_POSITION_Export(Hash eventType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, int p9, int p10)
	{
		return EVENT::ADD_SHOCKING_EVENT_AT_POSITION(eventType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, p10);
	}
	int ADD_SHOCKING_EVENT_FOR_ENTITY_Export(Hash eventType, Entity ent, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9, int p10, int p11)
	{
		return EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(eventType, ent, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	BOOL IS_SHOCKING_EVENT_IN_SPHERE_Export(Hash eventType, float posX, float posY, float posZ, float radius)
	{
		return EVENT::IS_SHOCKING_EVENT_IN_SPHERE(eventType, posX, posY, posZ, radius);
	}
	BOOL REMOVE_SHOCKING_EVENT_Export(int shockingEventId)
	{
		return EVENT::REMOVE_SHOCKING_EVENT(shockingEventId);
	}
	void REMOVE_ALL_SHOCKING_EVENTS_Export(BOOL scriptCreatedOnly)
	{
		return EVENT::REMOVE_ALL_SHOCKING_EVENTS(scriptCreatedOnly);
	}
	void _REMOVE_ALL_SHOCKING_EVENTS_IN_AREA_Export(float x, float y, float z, float radius, BOOL p4)
	{
		return EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(x, y, z, radius, p4);
	}
	void _REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA_Export(Hash eventType, float x, float y, float z, float radius, BOOL p5)
	{
		return EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA(eventType, x, y, z, radius, p5);
	}
	void REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_Export(Hash eventType, BOOL p1)
	{
		return EVENT::REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(eventType, p1);
	}
	void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS_Export()
	{
		return EVENT::REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS();
	}
	Any _0x36D0F2BA2C0D9BDE_Export(Entity entity, int p1)
	{
		return EVENT::_0x36D0F2BA2C0D9BDE(entity, p1);
	}
	void _0x7C511E91738A0828_Export(Ped ped1, Ped ped2, int p2, Hash p3)
	{
		return EVENT::_0x7C511E91738A0828(ped1, ped2, p2, p3);
	}
	void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME_Export()
	{
		return EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
	}
	void _0xB6F4825153920582_Export()
	{
		return EVENT::_0xB6F4825153920582();
	}
	void _0x4B2B1A891D437CA7_Export(float p0)
	{
		return EVENT::_0x4B2B1A891D437CA7(p0);
	}
	void _0x9520175B35E2268D_Export(Ped ped, BOOL p1)
	{
		return EVENT::_0x9520175B35E2268D(ped, p1);
	}
	Any _0x18E93EBFC1FCFA48_Export(Volume volume, BOOL p1, BOOL p2)
	{
		return EVENT::_0x18E93EBFC1FCFA48(volume, p1, p2);
	}
	void _0x56B3410626A473E7_Export(Any p0)
	{
		return EVENT::_0x56B3410626A473E7(p0);
	}
	void _ADD_MODEL_TO_EVENT_MONITOR_Export(Hash model, BOOL p1, BOOL p2)
	{
		return EVENT::_ADD_MODEL_TO_EVENT_MONITOR(model, p1, p2);
	}
	void _0x4465C3D1475BD3FD_Export(Hash model)
	{
		return EVENT::_0x4465C3D1475BD3FD(model);
	}
	Any _0x2DD42FAD06E6F19E_Export(Object object, BOOL p1, BOOL p2)
	{
		return EVENT::_0x2DD42FAD06E6F19E(object, p1, p2);
	}
	void _0xA86B0EE9B39D15D6_Export(Object object)
	{
		return EVENT::_0xA86B0EE9B39D15D6(object);
	}
	BOOL _0x26054EB81AC0893B_Export(Object object)
	{
		return EVENT::_0x26054EB81AC0893B(object);
	}
	void _SET_EVENT_TRACKER_FOR_PED_Export(Ped ped, const char* eventName, int p2)
	{
		return EVENT::_SET_EVENT_TRACKER_FOR_PED(ped, eventName, p2);
	}
	int _0xAD17A18215DD23D6_Export(Entity entity, int p1, int p2)
	{
		return EVENT::_0xAD17A18215DD23D6(entity, p1, p2);
	}
	int _EVENT_GET_TIME_SINCE_EVENT_Export(Entity entity, Hash eventType, int p2, int p3)
	{
		return EVENT::_EVENT_GET_TIME_SINCE_EVENT(entity, eventType, p2, p3);
	}
	Hash _EVENT_GET_RECENT_EVENT_Export(Entity entity, int p1, int p2)
	{
		return EVENT::_EVENT_GET_RECENT_EVENT(entity, p1, p2);
	}
	BOOL _IS_EVENT_TRACKER_ACTIVE_Export(const char* eventName, Hash shockingEvent)
	{
		return EVENT::_IS_EVENT_TRACKER_ACTIVE(eventName, shockingEvent);
	}
	Entity _EVENT_GET_SOURCE_ENTITY_FROM_EVENT_Export(Entity entity, Hash eventType, int p2, int p3)
	{
		return EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(entity, eventType, p2, p3);
	}
	Entity _EVENT_GET_TARGET_ENTITY_FROM_EVENT_Export(Entity entity, Hash eventType, int p2, int p3)
	{
		return EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(entity, eventType, p2, p3);
	}
	Any _0x1D1B448D719415AB_Export(Ped ped)
	{
		return EVENT::_0x1D1B448D719415AB(ped);
	}
	Any _0x83D43F0FD5276E4D_Export(Entity entity, int p1)
	{
		return EVENT::_0x83D43F0FD5276E4D(entity, p1);
	}
	void _0xE28D7FC9FD32ABEB_Export(Entity entity, Hash eventType, int p2)
	{
		return EVENT::_0xE28D7FC9FD32ABEB(entity, eventType, p2);
	}
	void _0x1A5C5D350068A673_Export(Ped ped, int p1)
	{
		return EVENT::_0x1A5C5D350068A673(ped, p1);
	}
	void _EVENT_FLUSH_ALL_EVENT_TRACKERS_Export(Ped ped)
	{
		return EVENT::_EVENT_FLUSH_ALL_EVENT_TRACKERS(ped);
	}
	void _0xE2C2FBB7825FFC66_Export()
	{
		return EVENT::_0xE2C2FBB7825FFC66();
	}
	FireId START_SCRIPT_FIRE_Export(float VecPosX, float VecPosY, float VecPosZ, int GenerationsAllowed, float p4, BOOL p5, const char* soundsetName, float p7, int p8)
	{
		return FIRE::START_SCRIPT_FIRE(VecPosX, VecPosY, VecPosZ, GenerationsAllowed, p4, p5, soundsetName, p7, p8);
	}
	void REMOVE_SCRIPT_FIRE_Export(FireId FireIndex)
	{
		return FIRE::REMOVE_SCRIPT_FIRE(FireIndex);
	}
	void START_ENTITY_FIRE_Export(Entity EntityIndex, Any p1, Any p2, Any p3)
	{
		return FIRE::START_ENTITY_FIRE(EntityIndex, p1, p2, p3);
	}
	void STOP_ENTITY_FIRE_Export(Entity EntityIndex, Any p1)
	{
		return FIRE::STOP_ENTITY_FIRE(EntityIndex, p1);
	}
	BOOL IS_ENTITY_ON_FIRE_Export(Entity EntityIndex)
	{
		return FIRE::IS_ENTITY_ON_FIRE(EntityIndex);
	}
	void _0x754937C28271BC65_Export(Any p0)
	{
		return FIRE::_0x754937C28271BC65(p0);
	}
	int GET_NUMBER_OF_FIRES_IN_RANGE_Export(float VecPosX, float VecPosY, float VecPosZ, float Radius)
	{
		return FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(VecPosX, VecPosY, VecPosZ, Radius);
	}
	void STOP_FIRE_IN_RANGE_Export(float VecPosX, float VecPosY, float VecPosZ, float fRadius)
	{
		return FIRE::STOP_FIRE_IN_RANGE(VecPosX, VecPosY, VecPosZ, fRadius);
	}
	void _STOP_FIRE_IN_BOX_Export(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		return FIRE::_STOP_FIRE_IN_BOX(posX, posY, posZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}
	BOOL GET_CLOSEST_FIRE_POS_Export(scrVector* VecClosestFirePos, float VecTestPosX, float VecTestPosY, float VecTestPosZ)
	{
		return FIRE::GET_CLOSEST_FIRE_POS(VecClosestFirePos, VecTestPosX, VecTestPosY, VecTestPosZ);
	}
	Any _0x559FC1D310813031_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return FIRE::_0x559FC1D310813031(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any _0x41B87A6495EE13DD_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return FIRE::_0x41B87A6495EE13DD(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Any _0xA4454592DCF7C992_Export(Any p0)
	{
		return FIRE::_0xA4454592DCF7C992(p0);
	}
	BOOL _IS_ENTITY_CONSUMED_BY_FIRE_Export(Entity entity)
	{
		return FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(entity);
	}
	void ADD_EXPLOSION_Export(float VecExplosionPosX, float VecExplosionPosY, float VecExplosionPosZ, int ExplosionTag, float SizeScale, BOOL bMakeSound, BOOL bNoFx, float CamShakeMultiplier)
	{
		return FIRE::ADD_EXPLOSION(VecExplosionPosX, VecExplosionPosY, VecExplosionPosZ, ExplosionTag, SizeScale, bMakeSound, bNoFx, CamShakeMultiplier);
	}
	void ADD_OWNED_EXPLOSION_Export(Entity ExplosionOwner, float VecExplosionPosX, float VecExplosionPosY, float VecExplosionPosZ, int ExplosionTag, float SizeScale, BOOL bMakeSound, BOOL bNoFx, float CamShakeMultiplier)
	{
		return FIRE::ADD_OWNED_EXPLOSION(ExplosionOwner, VecExplosionPosX, VecExplosionPosY, VecExplosionPosZ, ExplosionTag, SizeScale, bMakeSound, bNoFx, CamShakeMultiplier);
	}
	void _0xB7DF150605EEDC9B_Export(Entity entity, int p1, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake)
	{
		return FIRE::_0xB7DF150605EEDC9B(entity, p1, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake);
	}
	void ADD_EXPLOSION_WITH_USER_VFX_Export(float VecExplosionPosX, float VecExplosionPosY, float VecExplosionPosZ, int ExplosionTag, Hash VfxTagHash, float SizeScale, BOOL bMakeSound, BOOL bNoFx, float CamShakeMultiplier)
	{
		return FIRE::ADD_EXPLOSION_WITH_USER_VFX(VecExplosionPosX, VecExplosionPosY, VecExplosionPosZ, ExplosionTag, VfxTagHash, SizeScale, bMakeSound, bNoFx, CamShakeMultiplier);
	}
	void _0x34AE85C7CA4857AA_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		return FIRE::_0x34AE85C7CA4857AA(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	BOOL IS_EXPLOSION_IN_AREA_Export(int ExplosionTag, float VecPosMinX, float VecPosMinY, float VecPosMinZ, float VecPosMaxX, float VecPosMaxY, float VecPosMaxZ)
	{
		return FIRE::IS_EXPLOSION_IN_AREA(ExplosionTag, VecPosMinX, VecPosMinY, VecPosMinZ, VecPosMaxX, VecPosMaxY, VecPosMaxZ);
	}
	BOOL IS_EXPLOSION_ACTIVE_IN_AREA_Export(int ExplosionTag, float VecPosMinX, float VecPosMinY, float VecPosMinZ, float VecPosMaxX, float VecPosMaxY, float VecPosMaxZ)
	{
		return FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(ExplosionTag, VecPosMinX, VecPosMinY, VecPosMinZ, VecPosMaxX, VecPosMaxY, VecPosMaxZ);
	}
	BOOL IS_EXPLOSION_IN_SPHERE_Export(int ExplosionTag, float VecCentrePosX, float VecCentrePosY, float VecCentrePosZ, float Radius)
	{
		return FIRE::IS_EXPLOSION_IN_SPHERE(ExplosionTag, VecCentrePosX, VecCentrePosY, VecCentrePosZ, Radius);
	}
	BOOL IS_EXPLOSION_IN_ANGLED_AREA_Export(int ExplosionTag, float VecPos1X, float VecPos1Y, float VecPos1Z, float VecPos2X, float VecPos2Y, float VecPos2Z, float AreaWidth)
	{
		return FIRE::IS_EXPLOSION_IN_ANGLED_AREA(ExplosionTag, VecPos1X, VecPos1Y, VecPos1Z, VecPos2X, VecPos2Y, VecPos2Z, AreaWidth);
	}
	BOOL _IS_EXPLOSION_IN_VOLUME_Export(int explosionType, Volume volume)
	{
		return FIRE::_IS_EXPLOSION_IN_VOLUME(explosionType, volume);
	}
	Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA_Export(int ExplosionTag, float VecPos1X, float VecPos1Y, float VecPos1Z, float VecPos2X, float VecPos2Y, float VecPos2Z, float AreaWidth)
	{
		return FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(ExplosionTag, VecPos1X, VecPos1Y, VecPos1Z, VecPos2X, VecPos2Y, VecPos2Z, AreaWidth);
	}
	void _0x68F6A75FDF5A70D6_Export(float x, float y, float z, float p3)
	{
		return FIRE::_0x68F6A75FDF5A70D6(x, y, z, p3);
	}
	void _0x24DB6B9F2B719043_Export(float p0)
	{
		return FIRE::_0x24DB6B9F2B719043(p0);
	}
	BOOL _IS_PED_SHOCKING_EVENT_ACTIVE_Export(Ped ped, int p1)
	{
		return FIRE::_IS_PED_SHOCKING_EVENT_ACTIVE(ped, p1);
	}
	float GET_SPECIES_TUNING_FLOAT_PARAM_Export(Hash p0, int p1, int p2)
	{
		return FLOCK::GET_SPECIES_TUNING_FLOAT_PARAM(p0, p1, p2);
	}
	void SET_SPECIES_TUNING_FLOAT_PARAM_Export(Hash p0, int p1, int p2, float p3)
	{
		return FLOCK::SET_SPECIES_TUNING_FLOAT_PARAM(p0, p1, p2, p3);
	}
	void SET_SPECIES_TUNING_BOOL_PARAM_Export(Hash p0, int p1, int p2, BOOL p3)
	{
		return FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(p0, p1, p2, p3);
	}
	float GET_ANIMAL_TUNING_FLOAT_PARAM_Export(Ped animal, int index)
	{
		return FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(animal, index);
	}
	void SET_ANIMAL_TUNING_FLOAT_PARAM_Export(Ped animal, int index, float value)
	{
		return FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(animal, index, value);
	}
	void RESET_ANIMAL_TUNING_FLOAT_PARAM_Export(Ped animal, int index)
	{
		return FLOCK::RESET_ANIMAL_TUNING_FLOAT_PARAM(animal, index);
	}
	BOOL GET_ANIMAL_TUNING_BOOL_PARAM_Export(Ped animal, int index)
	{
		return FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(animal, index);
	}
	void SET_ANIMAL_TUNING_BOOL_PARAM_Export(Ped animal, int index, BOOL value)
	{
		return FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(animal, index, value);
	}
	void RESET_ANIMAL_TUNING_BOOL_PARAM_Export(Ped animal, int index)
	{
		return FLOCK::RESET_ANIMAL_TUNING_BOOL_PARAM(animal, index);
	}
	Any _0x8049B17BEC937662_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return FLOCK::_0x8049B17BEC937662(p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0xE93415B3307208E5_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return FLOCK::_0xE93415B3307208E5(p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	Any _0x19870C40C7EE15BE_Export(Any p0, Any p1)
	{
		return FLOCK::_0x19870C40C7EE15BE(p0, p1);
	}
	void _0x0816C31480764AB0_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return FLOCK::_0x0816C31480764AB0(p0, p1, p2, p3);
	}
	void _0xC3D581A34BC0A1F0_Export(Any p0, Any p1)
	{
		return FLOCK::_0xC3D581A34BC0A1F0(p0, p1);
	}
	void _0xF2CCA7B68CFAB2B9_Export(Hash species, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float p10, float p11, float p12, float p13)
	{
		return FLOCK::_0xF2CCA7B68CFAB2B9(species, x1, y1, z1, x2, y2, z2, x3, y3, z3, p10, p11, p12, p13);
	}
	void _0xFB16F08F47B83B4C_Export(Any p0)
	{
		return FLOCK::_0xFB16F08F47B83B4C(p0);
	}
	BOOL _GET_ANIMAL_IS_WILD_Export(Ped ped)
	{
		return FLOCK::_GET_ANIMAL_IS_WILD(ped);
	}
	void _SET_ANIMAL_IS_WILD_Export(Ped ped, BOOL toggle)
	{
		return FLOCK::_SET_ANIMAL_IS_WILD(ped, toggle);
	}
	int _GET_ANIMAL_RARITY_Export(Ped ped)
	{
		return FLOCK::_GET_ANIMAL_RARITY(ped);
	}
	void _SET_ANIMAL_RARITY_Export(Ped ped, int rarityLevel)
	{
		return FLOCK::_SET_ANIMAL_RARITY(ped, rarityLevel);
	}
	void _0xFF1E339CE40EAAAF_Export(Any p0, Any p1)
	{
		return FLOCK::_0xFF1E339CE40EAAAF(p0, p1);
	}
	BOOL _IS_HERD_VALID_Export(ScrHandle herdHandle)
	{
		return FLOCK::_IS_HERD_VALID(herdHandle);
	}
	ScrHandle _CREATE_HERD_Export()
	{
		return FLOCK::_CREATE_HERD();
	}
	void _0xE0961AED72642B80_Export(Any p0)
	{
		return FLOCK::_0xE0961AED72642B80(p0);
	}
	void _ADD_PED_TO_FLOCK_Export(Any p0, Ped ped)
	{
		return FLOCK::_ADD_PED_TO_FLOCK(p0, ped);
	}
	void _0x408D1149C5E39C1E_Export(Any p0, Any p1)
	{
		return FLOCK::_0x408D1149C5E39C1E(p0, p1);
	}
	Any _0x9E13ACC38BA8F9C3_Export(Any p0, Any p1)
	{
		return FLOCK::_0x9E13ACC38BA8F9C3(p0, p1);
	}
	Any _0x34B9C4D86DF2C2F3_Export(Any p0)
	{
		return FLOCK::_0x34B9C4D86DF2C2F3(p0);
	}
	scrVector _0x1DA6CB02071055D5_Export(Any p0)
	{
		return FLOCK::_0x1DA6CB02071055D5(p0);
	}
	void _0xC95611869E14F8AF_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return FLOCK::_0xC95611869E14F8AF(p0, p1, p2, p3);
	}
	Any _0x09EE00B8F858E0BE_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return FLOCK::_0x09EE00B8F858E0BE(p0, p1, p2, p3, p4, p5, p6);
	}
	void _0xE36D2CB540597EF7_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return FLOCK::_0xE36D2CB540597EF7(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _0xD95F04A4E73BE85E_Export(Any p0, Any p1)
	{
		return FLOCK::_0xD95F04A4E73BE85E(p0, p1);
	}
	void _0x17E3E5C46ECCD308_Export(Any p0, Any p1, Any p2)
	{
		return FLOCK::_0x17E3E5C46ECCD308(p0, p1, p2);
	}
	void _0xC72CE37081DAE625_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return FLOCK::_0xC72CE37081DAE625(p0, p1, p2, p3);
	}
	void _0x67A43EA3F6FE0076_Export(Any p0)
	{
		return FLOCK::_0x67A43EA3F6FE0076(p0);
	}
	Any _0x36486AF7DA93A464_Export(Any p0)
	{
		return FLOCK::_0x36486AF7DA93A464(p0);
	}
	void _0x6C57BEA886A20C6B_Export(Any p0, Any p1)
	{
		return FLOCK::_0x6C57BEA886A20C6B(p0, p1);
	}
	void _0x1520626FFAFFFA8F_Export(Any p0, Any p1)
	{
		return FLOCK::_0x1520626FFAFFFA8F(p0, p1);
	}
	void _0xFA821997794F48E7_Export(Any p0, Any p1, Any p2)
	{
		return FLOCK::_0xFA821997794F48E7(p0, p1, p2);
	}
	void _0xCC6B5AAFC87BFC7B_Export(Any p0, Any p1, Any p2)
	{
		return FLOCK::_0xCC6B5AAFC87BFC7B(p0, p1, p2);
	}
	void _0xFDB008B3BCF5992F_Export(Any p0, Any p1, Any p2)
	{
		return FLOCK::_0xFDB008B3BCF5992F(p0, p1, p2);
	}
	void _0x2DF3D457D86F8E57_Export(Any p0, Any p1)
	{
		return FLOCK::_0x2DF3D457D86F8E57(p0, p1);
	}
	void _0x706B434FEFAD6A24_Export(Any p0)
	{
		return FLOCK::_0x706B434FEFAD6A24(p0);
	}
	void _0xA881F5C77A560906_Export(Any p0)
	{
		return FLOCK::_0xA881F5C77A560906(p0);
	}
	Any _0x53187E563F938E76_Export(Any p0)
	{
		return FLOCK::_0x53187E563F938E76(p0);
	}
	void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO_Export()
	{
		return GRAPHICS::FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO();
	}
	BOOL LOAD_MISSION_CREATOR_PHOTO_Export(const char* szContentID, int nFileID, int nFileVersion, int nLanguage)
	{
		return GRAPHICS::LOAD_MISSION_CREATOR_PHOTO(szContentID, nFileID, nFileVersion, nLanguage);
	}
	int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO_Export(const char* szContentID)
	{
		return GRAPHICS::GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(szContentID);
	}
	BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO_Export()
	{
		return GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
	}
	int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO_Export()
	{
		return GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
	}
	void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO_Export()
	{
		return GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	}
	void _SET_PHOTO_SELF_STAT_Export(BOOL p0)
	{
		return GRAPHICS::_SET_PHOTO_SELF_STAT(p0);
	}
	void _SET_PHOTO_STUDIO_STAT_Export(int p0)
	{
		return GRAPHICS::_SET_PHOTO_STUDIO_STAT(p0);
	}
	void _SET_POSSE_ID_FOR_PHOTO_Export(Any posseId)
	{
		return GRAPHICS::_SET_POSSE_ID_FOR_PHOTO(posseId);
	}
	void _0x9F6D859C80708B26_Export(BOOL p0, BOOL p1)
	{
		return GRAPHICS::_0x9F6D859C80708B26(p0, p1);
	}
	BOOL IS_PHOTO_FRAME_Export()
	{
		return GRAPHICS::IS_PHOTO_FRAME();
	}
	void _SET_PHOTO_IN_PHOTOMODE_STAT_Export(BOOL p0)
	{
		return GRAPHICS::_SET_PHOTO_IN_PHOTOMODE_STAT(p0);
	}
	void _SET_PHOTO_OVERLAY_EFFECT_STAT_Export(int p0)
	{
		return GRAPHICS::_SET_PHOTO_OVERLAY_EFFECT_STAT(p0);
	}
	void _0x0D5B19C34068FEE7_Export(Any p0)
	{
		return GRAPHICS::_0x0D5B19C34068FEE7(p0);
	}
	void _SET_PLAYER_APPEAR_IN_PHOTO_Export(Player player)
	{
		return GRAPHICS::_SET_PLAYER_APPEAR_IN_PHOTO(player);
	}
	void _SET_REGION_PHOTO_TAKEN_STAT_Export(const char* p0)
	{
		return GRAPHICS::_SET_REGION_PHOTO_TAKEN_STAT(p0);
	}
	void _SET_DISTRICT_PHOTO_TAKEN_STAT_Export(const char* p0)
	{
		return GRAPHICS::_SET_DISTRICT_PHOTO_TAKEN_STAT(p0);
	}
	void _SET_STATE_PHOTO_TAKEN_STAT_Export(const char* p0)
	{
		return GRAPHICS::_SET_STATE_PHOTO_TAKEN_STAT(p0);
	}
	BOOL SAVE_HIGH_QUALITY_PHOTO_Export(int PhotoSlotIndex)
	{
		return GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(PhotoSlotIndex);
	}
	int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO_Export()
	{
		return GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
	}
	BOOL BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO_Export(int qualitySetting)
	{
		return GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(qualitySetting);
	}
	int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO_Export(int qualitySetting)
	{
		return GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(qualitySetting);
	}
	void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO_Export()
	{
		return GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	}
	void DRAW_LOW_QUALITY_PHOTO_TO_PHONE_Export(BOOL bDraw, int PhotoRotation)
	{
		return GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(bDraw, PhotoRotation);
	}
	int _GET_MAX_NUMBER_OF_LOCAL_PHOTOS_Export()
	{
		return GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
	}
	int _GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS_Export()
	{
		return GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
	}
	BOOL QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS_Export()
	{
		return GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS();
	}
	int GET_STATUS_OF_SORTED_LIST_OPERATION_Export()
	{
		return GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION();
	}
	void DRAW_LIGHT_WITH_RANGE_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int R, int G, int B, float Range, float Intensity)
	{
		return GRAPHICS::DRAW_LIGHT_WITH_RANGE(VecCoorsX, VecCoorsY, VecCoorsZ, R, G, B, Range, Intensity);
	}
	void UPDATE_LIGHTS_ON_ENTITY_Export(Entity EntityIndex)
	{
		return GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(EntityIndex);
	}
	void _SET_LIGHTS_COLOR_FOR_ENTITY_Export(Entity entity, int red, int green, int blue)
	{
		return GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(entity, red, green, blue);
	}
	void _SET_LIGHTS_INTENSITY_FOR_ENTITY_Export(Entity entity, float intensity)
	{
		return GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(entity, intensity);
	}
	void _SET_LIGHTS_TYPE_FOR_ENTITY_Export(Entity entity, int type)
	{
		return GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(entity, type);
	}
	void _DRAW_MARKER_Export(Hash type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts)
	{
		return GRAPHICS::_DRAW_MARKER(type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts);
	}
	int CREATE_CHECKPOINT_WITH_NAMEHASH_Export(Hash typeHash, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved)
	{
		return GRAPHICS::CREATE_CHECKPOINT_WITH_NAMEHASH(typeHash, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green, blue, alpha, reserved);
	}
	BOOL _DOES_CHECKPOINT_HAVE_FX_Export(int checkpoint)
	{
		return GRAPHICS::_DOES_CHECKPOINT_HAVE_FX(checkpoint);
	}
	void SET_CHECKPOINT_RGBA_Export(int UniqueCheckpointIndex, int colR, int colG, int colB, int colA)
	{
		return GRAPHICS::SET_CHECKPOINT_RGBA(UniqueCheckpointIndex, colR, colG, colB, colA);
	}
	void SET_CHECKPOINT_RGBA2_Export(int UniqueCheckpointIndex, int colR, int colG, int colB, int colA)
	{
		return GRAPHICS::SET_CHECKPOINT_RGBA2(UniqueCheckpointIndex, colR, colG, colB, colA);
	}
	void _0xCC3B787E73E64160_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return GRAPHICS::_0xCC3B787E73E64160(p0, p1, p2, p3, p4);
	}
	void _0x171C18E994C1A395_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return GRAPHICS::_0x171C18E994C1A395(p0, p1, p2, p3, p4);
	}
	void DELETE_CHECKPOINT_Export(int UniqueCheckpointIndex)
	{
		return GRAPHICS::DELETE_CHECKPOINT(UniqueCheckpointIndex);
	}
	void DRAW_RECT_Export(float CentreX, float CentreY, float Width, float Height, int R, int G, int B, int A, BOOL bStereo, BOOL p9)
	{
		return GRAPHICS::DRAW_RECT(CentreX, CentreY, Width, Height, R, G, B, A, bStereo, p9);
	}
	void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU_Export(BOOL bValue)
	{
		return GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(bValue);
	}
	void SET_SCRIPT_GFX_DRAW_ORDER_Export(int iDrawOrder)
	{
		return GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iDrawOrder);
	}
	void DRAW_SPRITE_Export(const char* pTextureDictionaryName, const char* pTextureName, float CentreX, float CentreY, float Width, float Height, float Rotation, int R, int G, int B, int A, BOOL DoStereorize)
	{
		return GRAPHICS::DRAW_SPRITE(pTextureDictionaryName, pTextureName, CentreX, CentreY, Width, Height, Rotation, R, G, B, A, DoStereorize);
	}
	void ATTACH_TV_AUDIO_TO_ENTITY_Export(Entity entity)
	{
		return GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(entity);
	}
	void SET_TV_AUDIO_FRONTEND_Export(BOOL frontend)
	{
		return GRAPHICS::SET_TV_AUDIO_FRONTEND(frontend);
	}
	void GET_SCREEN_RESOLUTION_Export(int* X, int* Y)
	{
		return GRAPHICS::GET_SCREEN_RESOLUTION(X, Y);
	}
	void _0xA04EF43030593ABC_Export(Any p0, Any p1)
	{
		return GRAPHICS::_0xA04EF43030593ABC(p0, p1);
	}
	void _0xA21AF60C9F99CCC5_Export()
	{
		return GRAPHICS::_0xA21AF60C9F99CCC5();
	}
	Any _0xC28F62AC9774FC1B_Export()
	{
		return GRAPHICS::_0xC28F62AC9774FC1B();
	}
	void _0xEB48CE48EEC41FD4_Export(Any p0)
	{
		return GRAPHICS::_0xEB48CE48EEC41FD4(p0);
	}
	BOOL GET_SCREEN_COORD_FROM_WORLD_COORD_Export(float vWorldPosX, float vWorldPosY, float vWorldPosZ, float* fXpos, float* Ypos)
	{
		return GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vWorldPosX, vWorldPosY, vWorldPosZ, fXpos, Ypos);
	}
	BOOL _IS_TEXTURE_IN_DICT_Export(Hash txdHash, Hash dict)
	{
		return GRAPHICS::_IS_TEXTURE_IN_DICT(txdHash, dict);
	}
	void SET_ARTIFICIAL_LIGHTS_STATE_Export(BOOL bState)
	{
		return GRAPHICS::SET_ARTIFICIAL_LIGHTS_STATE(bState);
	}
	void DISABLE_HDTEX_THIS_FRAME_Export()
	{
		return GRAPHICS::DISABLE_HDTEX_THIS_FRAME();
	}
	void _0x1A9F09AB458D49C6_Export(BOOL p0)
	{
		return GRAPHICS::_0x1A9F09AB458D49C6(p0);
	}
	int CREATE_TRACKED_POINT_Export()
	{
		return GRAPHICS::CREATE_TRACKED_POINT();
	}
	void SET_TRACKED_POINT_INFO_Export(int queryIdx, float centerX, float centerY, float centerZ, float radius)
	{
		return GRAPHICS::SET_TRACKED_POINT_INFO(queryIdx, centerX, centerY, centerZ, radius);
	}
	BOOL IS_TRACKED_POINT_VISIBLE_Export(int queryIdx)
	{
		return GRAPHICS::IS_TRACKED_POINT_VISIBLE(queryIdx);
	}
	int _0xDFE332A5DA6FE7C9_Export(int iTrackedPoint)
	{
		return GRAPHICS::_0xDFE332A5DA6FE7C9(iTrackedPoint);
	}
	void DESTROY_TRACKED_POINT_Export(int queryIdx)
	{
		return GRAPHICS::DESTROY_TRACKED_POINT(queryIdx);
	}
	BOOL _IS_TRACKED_POINT_VALID_Export(int point)
	{
		return GRAPHICS::_IS_TRACKED_POINT_VALID(point);
	}
	int SET_GRASS_CULL_SPHERE_Export(float centerX, float centerY, float centerZ, float radius, int p4)
	{
		return GRAPHICS::SET_GRASS_CULL_SPHERE(centerX, centerY, centerZ, radius, p4);
	}
	void REMOVE_GRASS_CULL_SPHERE_Export(int handle)
	{
		return GRAPHICS::REMOVE_GRASS_CULL_SPHERE(handle);
	}
	int _ADD_VEG_MODIFIER_ZONE_Export(Volume volume, int p1, int flags, int p3)
	{
		return GRAPHICS::_ADD_VEG_MODIFIER_ZONE(volume, p1, flags, p3);
	}
	int ADD_VEG_MODIFIER_SPHERE_Export(float x, float y, float z, float radius, int modType, int flags, int p6)
	{
		return GRAPHICS::ADD_VEG_MODIFIER_SPHERE(x, y, z, radius, modType, flags, p6);
	}
	void REMOVE_VEG_MODIFIER_SPHERE_Export(int vegModifierHandle, int p1)
	{
		return GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(vegModifierHandle, p1);
	}
	void _ENABLE_STATIC_VEG_MODIFIER_Export(Hash p0)
	{
		return GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(p0);
	}
	void _DISABLE_STATIC_VEG_MODIFIER_Export(Hash p0)
	{
		return GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(p0);
	}
	BOOL _IS_STATIC_VEG_MODIFIER_ENABLED_Export(Hash p0)
	{
		return GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(p0);
	}
	void _0xEC3F7F24EEEB3BA3_Export()
	{
		return GRAPHICS::_0xEC3F7F24EEEB3BA3();
	}
	void _0x9F158A49B0D84C3C_Export(Any p0)
	{
		return GRAPHICS::_0x9F158A49B0D84C3C(p0);
	}
	void _0x910E260AEAD855DE_Export()
	{
		return GRAPHICS::_0x910E260AEAD855DE();
	}
	BOOL _CREATE_SWATCH_TEXTURE_DICT_Export(int slots)
	{
		return GRAPHICS::_CREATE_SWATCH_TEXTURE_DICT(slots);
	}
	void _DESTROY_SWATCH_TEXTURE_DICT_Export()
	{
		return GRAPHICS::_DESTROY_SWATCH_TEXTURE_DICT();
	}
	void _GENERATE_SWATCH_TEXTURE_DIRECTLY_Export(int slot, Any p1)
	{
		return GRAPHICS::_GENERATE_SWATCH_TEXTURE_DIRECTLY(slot, p1);
	}
	void _GENERATE_SWATCH_TEXTURE_Export(int slotId, Hash componentHash, int metapedType, BOOL p3)
	{
		return GRAPHICS::_GENERATE_SWATCH_TEXTURE(slotId, componentHash, metapedType, p3);
	}
	void CASCADE_SHADOWS_SET_CASCADE_BOUNDS_Export(int cascadeIndex, BOOL bEnabled, float x, float y, float z, float radiusScale, BOOL interpolateToDisabled, float interpolationTime)
	{
		return GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS(cascadeIndex, bEnabled, x, y, z, radiusScale, interpolateToDisabled, interpolationTime);
	}
	void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER_Export(BOOL scale)
	{
		return GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(scale);
	}
	void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE_Export(const char* typeStr)
	{
		return GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(typeStr);
	}
	void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE_Export()
	{
		return GRAPHICS::CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
	}
	void _0x503941F65DBA24EC_Export(Any p0)
	{
		return GRAPHICS::_0x503941F65DBA24EC(p0);
	}
	void _0x815653A42C5ABE76_Export()
	{
		return GRAPHICS::_0x815653A42C5ABE76();
	}
	void _0xFF8018C778349234_Export(Any p0)
	{
		return GRAPHICS::_0xFF8018C778349234(p0);
	}
	void RESET_ADAPTATION_Export(int numFrames)
	{
		return GRAPHICS::RESET_ADAPTATION(numFrames);
	}
	void TOGGLE_PAUSED_RENDERPHASES_Export(BOOL on)
	{
		return GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(on);
	}
	BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS_Export()
	{
		return GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS();
	}
	void RESET_PAUSED_RENDERPHASES_Export()
	{
		return GRAPHICS::RESET_PAUSED_RENDERPHASES();
	}
	void SET_HIDOF_OVERRIDE_Export(BOOL enableOverride, BOOL enableDOF, float dofNearStart, float dofNearEnd, float dofFarStart, float dofFarEnd)
	{
		return GRAPHICS::SET_HIDOF_OVERRIDE(enableOverride, enableDOF, dofNearStart, dofNearEnd, dofFarStart, dofFarEnd);
	}
	void _0x21F00E08CBB5F37B_Export(const char* component)
	{
		return GRAPHICS::_0x21F00E08CBB5F37B(component);
	}
	void _0x5AC6E0FA028369DE_Export()
	{
		return GRAPHICS::_0x5AC6E0FA028369DE();
	}
	BOOL _0xEC3D8C228FE553D7_Export(BOOL p0)
	{
		return GRAPHICS::_0xEC3D8C228FE553D7(p0);
	}
	void _0xF5793BB386E1FF9C_Export(Any p0)
	{
		return GRAPHICS::_0xF5793BB386E1FF9C(p0);
	}
	void _0x5CD6A2CCE5087161_Export(Any p0)
	{
		return GRAPHICS::_0x5CD6A2CCE5087161(p0);
	}
	void _0xC8D0611D9A0CF5D3_Export(Any p0)
	{
		return GRAPHICS::_0xC8D0611D9A0CF5D3(p0);
	}
	float _GET_PHOTO_MODE_EXPOSURE_Export()
	{
		return GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
	}
	void _0x62B9F9A1272AED80_Export(Any p0)
	{
		return GRAPHICS::_0x62B9F9A1272AED80(p0);
	}
	float _GET_PHOTO_MODE_CONTRAST_Export()
	{
		return GRAPHICS::_GET_PHOTO_MODE_CONTRAST();
	}
	void _0x9229ED770975BD9E_Export()
	{
		return GRAPHICS::_0x9229ED770975BD9E();
	}
	BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD_Export(const char* fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(fxName, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD_Export(const char* fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(fxName, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_Export(const char* fxName, Ped pedIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneTag, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(fxName, pedIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneTag, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_Export(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY_Export(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	BOOL _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2_Export(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ)
	{
		return GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ);
	}
	void SET_PARTICLE_FX_NON_LOOPED_COLOUR_Export(float colR, float colG, float colB)
	{
		return GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(colR, colG, colB);
	}
	void SET_PARTICLE_FX_NON_LOOPED_ALPHA_Export(float colA)
	{
		return GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(colA);
	}
	void _SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE_Export(float p0, float p1, float p2)
	{
		return GRAPHICS::_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(p0, p1, p2);
	}
	int START_PARTICLE_FX_LOOPED_AT_COORD_Export(const char* fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ, BOOL localOnly)
	{
		return GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(fxName, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ, localOnly);
	}
	int START_PARTICLE_FX_LOOPED_ON_PED_BONE_Export(const char* fxName, Ped pedIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneTag, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(fxName, pedIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneTag, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	int START_PARTICLE_FX_LOOPED_ON_ENTITY_Export(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE_Export(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneIndex, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneIndex, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_Export(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE_Export(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneIndex, float scale, BOOL invertAxisX, BOOL invertAxisY, BOOL invertAxisZ)
	{
		return GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneIndex, scale, invertAxisX, invertAxisY, invertAxisZ);
	}
	void STOP_PARTICLE_FX_LOOPED_Export(int ptfxId, BOOL localOnly)
	{
		return GRAPHICS::STOP_PARTICLE_FX_LOOPED(ptfxId, localOnly);
	}
	BOOL DOES_PARTICLE_FX_LOOPED_EXIST_Export(int ptfxId)
	{
		return GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(ptfxId);
	}
	void SET_PARTICLE_FX_LOOPED_OFFSETS_Export(int ptfxId, float positionX, float positionY, float positionZ, float vecRotationX, float vecRotationY, float vecRotationZ)
	{
		return GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(ptfxId, positionX, positionY, positionZ, vecRotationX, vecRotationY, vecRotationZ);
	}
	void SET_PARTICLE_FX_LOOPED_EVOLUTION_Export(int ptfxId, const char* evoName, float evoVal, BOOL localOnly)
	{
		return GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(ptfxId, evoName, evoVal, localOnly);
	}
	void SET_PARTICLE_FX_LOOPED_COLOUR_Export(int ptfxId, float colR, float colG, float colB, BOOL localOnly)
	{
		return GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(ptfxId, colR, colG, colB, localOnly);
	}
	void SET_PARTICLE_FX_LOOPED_ALPHA_Export(int ptfxId, float colA)
	{
		return GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(ptfxId, colA);
	}
	void SET_PARTICLE_FX_LOOPED_SCALE_Export(int ptfxId, float scale)
	{
		return GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(ptfxId, scale);
	}
	void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST_Export(int ptfxId, float farClipDist)
	{
		return GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(ptfxId, farClipDist);
	}
	void _SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE_Export(int ptfxHandle, float scalar)
	{
		return GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(ptfxHandle, scalar);
	}
	void REMOVE_PARTICLE_FX_Export(int ptfxId, BOOL localOnly)
	{
		return GRAPHICS::REMOVE_PARTICLE_FX(ptfxId, localOnly);
	}
	void REMOVE_PARTICLE_FX_FROM_ENTITY_Export(Entity entityIndex)
	{
		return GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(entityIndex);
	}
	void REMOVE_PARTICLE_FX_IN_RANGE_Export(float posX, float posY, float posZ, float range)
	{
		return GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(posX, posY, posZ, range);
	}
	void USE_PARTICLE_FX_ASSET_Export(const char* ptFxAssetName)
	{
		return GRAPHICS::USE_PARTICLE_FX_ASSET(ptFxAssetName);
	}
	void SET_PARTICLE_FX_OVERRIDE_Export(const char* ptFxToOverride, const char* ptFxToUseInstead)
	{
		return GRAPHICS::SET_PARTICLE_FX_OVERRIDE(ptFxToOverride, ptFxToUseInstead);
	}
	void RESET_PARTICLE_FX_OVERRIDE_Export(const char* ptFxToOverride)
	{
		return GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(ptFxToOverride);
	}
	void _0x4FB67D172C4476F3_Export(Entity entity, const char* p1, const char* p2, float p3)
	{
		return GRAPHICS::_0x4FB67D172C4476F3(entity, p1, p2, p3);
	}
	void SET_PARTICLE_FX_AMBIENT_COLOUR_Export(Entity entity, const char* p1, float r, float g, float b)
	{
		return GRAPHICS::SET_PARTICLE_FX_AMBIENT_COLOUR(entity, p1, r, g, b);
	}
	void _0xD1472AFF30C103D6_Export(float p0)
	{
		return GRAPHICS::_0xD1472AFF30C103D6(p0);
	}
	void SET_PARTICLE_FX_BULLET_IMPACT_SCALE_Export(float scale)
	{
		return GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(scale);
	}
	void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE_Export(float scale)
	{
		return GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(scale);
	}
	void _SET_SNIPER_GLINTS_ENABLED_Export(BOOL enabled)
	{
		return GRAPHICS::_SET_SNIPER_GLINTS_ENABLED(enabled);
	}
	void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE_Export(float scale)
	{
		return GRAPHICS::SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(scale);
	}
	void _0x4046493D2EEACA0E_Export()
	{
		return GRAPHICS::_0x4046493D2EEACA0E();
	}
	void SET_PICKUP_LIGHT_Export(Object object, BOOL toggle)
	{
		return GRAPHICS::SET_PICKUP_LIGHT(object, toggle);
	}
	void _BLOCK_PICKUP_OBJECT_LIGHT_Export(Object pickupObject, BOOL toggle)
	{
		return GRAPHICS::_BLOCK_PICKUP_OBJECT_LIGHT(pickupObject, toggle);
	}
	void BLOCK_PICKUP_PLACEMENT_LIGHT_Export(Pickup pickup, BOOL toggle)
	{
		return GRAPHICS::BLOCK_PICKUP_PLACEMENT_LIGHT(pickup, toggle);
	}
	void ALLOW_PICKUP_LIGHT_SYNC_Export(Object pickupObject, BOOL allow)
	{
		return GRAPHICS::ALLOW_PICKUP_LIGHT_SYNC(pickupObject, allow);
	}
	void _SET_PEARLESCENT_FX_ENABLED_Export(Object object, BOOL toggle)
	{
		return GRAPHICS::_SET_PEARLESCENT_FX_ENABLED(object, toggle);
	}
	void REMOVE_DECALS_IN_RANGE_Export(float posX, float posY, float posZ, float range)
	{
		return GRAPHICS::REMOVE_DECALS_IN_RANGE(posX, posY, posZ, range);
	}
	void REMOVE_DECALS_FROM_OBJECT_Export(Object ObjectIndex)
	{
		return GRAPHICS::REMOVE_DECALS_FROM_OBJECT(ObjectIndex);
	}
	int ADD_DECAL_Export(Any p0, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float sideX, float sideY, float sideZ, Any p10, float width, float height, float colR, float colG, float colB, float colA, float life, BOOL isLongRange, BOOL isDynamic, BOOL useComplexColn, Any p21)
	{
		return GRAPHICS::ADD_DECAL(p0, posX, posY, posZ, dirX, dirY, dirZ, sideX, sideY, sideZ, p10, width, height, colR, colG, colB, colA, life, isLongRange, isDynamic, useComplexColn, p21);
	}
	void _ADD_BLOOD_POOL_Export(float x, float y, float z, BOOL unused)
	{
		return GRAPHICS::_ADD_BLOOD_POOL(x, y, z, unused);
	}
	void _ADD_BLOOD_POOL_2_Export(float x, float y, float z, float p3, float size, float p5, BOOL permanent, float p7, BOOL p8)
	{
		return GRAPHICS::_ADD_BLOOD_POOL_2(x, y, z, p3, size, p5, permanent, p7, p8);
	}
	void _ADD_BLOOD_POOLS_FOR_PED_Export(Ped ped)
	{
		return GRAPHICS::_ADD_BLOOD_POOLS_FOR_PED(ped);
	}
	void _ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS_Export(Ped ped, float p1, float size, float p3)
	{
		return GRAPHICS::_ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS(ped, p1, size, p3);
	}
	void START_PETROL_TRAIL_DECALS_Export(Any p0, float width)
	{
		return GRAPHICS::START_PETROL_TRAIL_DECALS(p0, width);
	}
	void ADD_PETROL_TRAIL_DECAL_INFO_Export(float posX, float posY, float posZ, float alphaMult)
	{
		return GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(posX, posY, posZ, alphaMult);
	}
	void END_PETROL_TRAIL_DECALS_Export()
	{
		return GRAPHICS::END_PETROL_TRAIL_DECALS();
	}
	Any _0xE63D68F455CA0B47_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return GRAPHICS::_0xE63D68F455CA0B47(p0, p1, p2, p3, p4, p5, p6);
	}
	void REMOVE_DECAL_Export(int decalId)
	{
		return GRAPHICS::REMOVE_DECAL(decalId);
	}
	BOOL IS_DECAL_ALIVE_Export(int decalId)
	{
		return GRAPHICS::IS_DECAL_ALIVE(decalId);
	}
	void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME_Export()
	{
		return GRAPHICS::SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME();
	}
	void _0xB032C085D9A03907_Export()
	{
		return GRAPHICS::_0xB032C085D9A03907();
	}
	void _0xFB680A9B33D0EDBE_Export(BOOL p0)
	{
		return GRAPHICS::_0xFB680A9B33D0EDBE(p0);
	}
	void _0x41F88A85A579A61D_Export(float p0)
	{
		return GRAPHICS::_0x41F88A85A579A61D(p0);
	}
	void _BLOOD_TRAIL_FOR_WAYPOINT_Export(const char* waypointRecording, float p1)
	{
		return GRAPHICS::_BLOOD_TRAIL_FOR_WAYPOINT(waypointRecording, p1);
	}
	void _ADD_BLOOD_TRAIL_POINT_Export(float x, float y, float z)
	{
		return GRAPHICS::_ADD_BLOOD_TRAIL_POINT(x, y, z);
	}
	void _0x812C1563185C6FB2_Export()
	{
		return GRAPHICS::_0x812C1563185C6FB2();
	}
	void _0x4BD66B4E3427689B_Export(const char* p0)
	{
		return GRAPHICS::_0x4BD66B4E3427689B(p0);
	}
	void _ADD_BLOOD_TRAIL_SPLAT_Export(float x, float y, float z)
	{
		return GRAPHICS::_ADD_BLOOD_TRAIL_SPLAT(x, y, z);
	}
	void _0xF2F543D48F319A3A_Export()
	{
		return GRAPHICS::_0xF2F543D48F319A3A();
	}
	void _0x1460B644397453EB_Export()
	{
		return GRAPHICS::_0x1460B644397453EB();
	}
	void _DISABLE_FAR_ARTIFICIAL_LIGHTS_Export(BOOL disable)
	{
		return GRAPHICS::_DISABLE_FAR_ARTIFICIAL_LIGHTS(disable);
	}
	void _0x453D16D41FC51D3E_Export(BOOL p0)
	{
		return GRAPHICS::_0x453D16D41FC51D3E(p0);
	}
	void _0xC06F2F45A73EABCD_Export(Entity entity)
	{
		return GRAPHICS::_0xC06F2F45A73EABCD(entity);
	}
	void SET_TIMECYCLE_MODIFIER_Export(const char* ModifierName)
	{
		return GRAPHICS::SET_TIMECYCLE_MODIFIER(ModifierName);
	}
	void SET_TIMECYCLE_MODIFIER_STRENGTH_Export(float strength)
	{
		return GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(strength);
	}
	void SET_TRANSITION_TIMECYCLE_MODIFIER_Export(const char* ModifierName, float time)
	{
		return GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(ModifierName, time);
	}
	void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER_Export(float time)
	{
		return GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(time);
	}
	void CLEAR_TIMECYCLE_MODIFIER_Export()
	{
		return GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	int GET_TIMECYCLE_MODIFIER_INDEX_Export()
	{
		return GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
	}
	int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX_Export()
	{
		return GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX();
	}
	void _0x67B0778C62E74423_Export(Any p0)
	{
		return GRAPHICS::_0x67B0778C62E74423(p0);
	}
	void _0x6C03118E9E5C1A14_Export(Any p0)
	{
		return GRAPHICS::_0x6C03118E9E5C1A14(p0);
	}
	float _GET_MODIFIED_VISIBILITY_DISTANCE_Export()
	{
		return GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE();
	}
	void ENABLE_MOON_CYCLE_OVERRIDE_Export(float value)
	{
		return GRAPHICS::ENABLE_MOON_CYCLE_OVERRIDE(value);
	}
	void SET_TV_CHANNEL_Export(int iChannel)
	{
		return GRAPHICS::SET_TV_CHANNEL(iChannel);
	}
	int GET_TV_CHANNEL_Export()
	{
		return GRAPHICS::GET_TV_CHANNEL();
	}
	void SET_TV_VOLUME_Export(float vol)
	{
		return GRAPHICS::SET_TV_VOLUME(vol);
	}
	void DRAW_TV_CHANNEL_Export(float CentreX, float CentreY, float Width, float Height, float Rotation, int R, int G, int B, int A)
	{
		return GRAPHICS::DRAW_TV_CHANNEL(CentreX, CentreY, Width, Height, Rotation, R, G, B, A);
	}
	void SET_TV_CHANNEL_PLAYLIST_Export(int iChannel, const char* playlistName, BOOL startFromNow)
	{
		return GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iChannel, playlistName, startFromNow);
	}
	BOOL IS_TVSHOW_CURRENTLY_PLAYING_Export(Hash nameHash)
	{
		return GRAPHICS::IS_TVSHOW_CURRENTLY_PLAYING(nameHash);
	}
	Any _0x5C674EB487891F6B_Export()
	{
		return GRAPHICS::_0x5C674EB487891F6B();
	}
	void ENABLE_MOVIE_SUBTITLES_Export(BOOL bOnOff)
	{
		return GRAPHICS::ENABLE_MOVIE_SUBTITLES(bOnOff);
	}
	void _0x32DE2BFFDA43E62A_Export()
	{
		return GRAPHICS::_0x32DE2BFFDA43E62A();
	}
	void _0xD543487A1F12828F_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return GRAPHICS::_0xD543487A1F12828F(p0, p1, p2, p3);
	}
	void _0xD9BC98B55BCFAA9B_Export(Any p0)
	{
		return GRAPHICS::_0xD9BC98B55BCFAA9B(p0);
	}
	void _0x48FE0DB54045B975_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return GRAPHICS::_0x48FE0DB54045B975(p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x735762E8D7573E42_Export(Any p0, Any p1, Any p2)
	{
		return GRAPHICS::_0x735762E8D7573E42(p0, p1, p2);
	}
	void _0x981C7D863980FA51_Export()
	{
		return GRAPHICS::_0x981C7D863980FA51();
	}
	void _ANIMPOSTFX_PRELOAD_POSTFX_Export(const char* effectName)
	{
		return GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(effectName);
	}
	BOOL _ANIMPOSTFX_HAS_LOADED_Export(const char* effectName)
	{
		return GRAPHICS::_ANIMPOSTFX_HAS_LOADED(effectName);
	}
	void _ANIMPOSTFX_SET_TO_UNLOAD_Export(const char* effectName)
	{
		return GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(effectName);
	}
	void ANIMPOSTFX_PLAY_Export(const char* effectName)
	{
		return GRAPHICS::ANIMPOSTFX_PLAY(effectName);
	}
	void _ANIMPOSTFX_PLAY_TIMED_Export(const char* effectName, int duration)
	{
		return GRAPHICS::_ANIMPOSTFX_PLAY_TIMED(effectName, duration);
	}
	void ANIMPOSTFX_STOP_Export(const char* effectName)
	{
		return GRAPHICS::ANIMPOSTFX_STOP(effectName);
	}
	void _0x26DD2FB0A88CC412_Export(const char* effectName, const char* effectName2, Any p2, Any p3)
	{
		return GRAPHICS::_0x26DD2FB0A88CC412(effectName, effectName2, p2, p3);
	}
	void _ANIMPOSTFX_CLEAR_EFFECT_Export(const char* effectName)
	{
		return GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(effectName);
	}
	BOOL ANIMPOSTFX_IS_RUNNING_Export(const char* effectName)
	{
		return GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName);
	}
	BOOL _ANIMPOSTFX_IS_TAG_PLAYING_Export(const char* effectName)
	{
		return GRAPHICS::_ANIMPOSTFX_IS_TAG_PLAYING(effectName);
	}
	void ANIMPOSTFX_STOP_ALL_Export()
	{
		return GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	void _ANIMPOSTFX_STOP_TAG_Export(const char* effectName)
	{
		return GRAPHICS::_ANIMPOSTFX_STOP_TAG(effectName);
	}
	void _ANIMPOSTFX_SET_STRENGTH_Export(const char* effectName, float strength)
	{
		return GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(effectName, strength);
	}
	void _ANIMPOSTFX_SET_POTENCY_Export(const char* effectName, int p1, float potency)
	{
		return GRAPHICS::_ANIMPOSTFX_SET_POTENCY(effectName, p1, potency);
	}
	void _ANIMPOSTFX_SET_POSTFX_COLOR_Export(const char* effectName, int p1, int red, int green, int blue, int alpha)
	{
		return GRAPHICS::_ANIMPOSTFX_SET_POSTFX_COLOR(effectName, p1, red, green, blue, alpha);
	}
	BOOL _0xB958D97A0DFAA0C2_Export(const char* effectName)
	{
		return GRAPHICS::_0xB958D97A0DFAA0C2(effectName);
	}
	void _0xA201A3D0AC087C37_Export(const char* effectName)
	{
		return GRAPHICS::_0xA201A3D0AC087C37(effectName);
	}
	BOOL _0xFBF161FCFEC8589E_Export(const char* effectName, int p1, BOOL p2, BOOL* p3)
	{
		return GRAPHICS::_0xFBF161FCFEC8589E(effectName, p1, p2, p3);
	}
	Hash _ANIMPOSTFX_GET_STACKHASH_Export(const char* effectName)
	{
		return GRAPHICS::_ANIMPOSTFX_GET_STACKHASH(effectName);
	}
	void _ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH_Export(Hash effectNameHash)
	{
		return GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(effectNameHash);
	}
	BOOL ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH_Export(Hash effectNameHash)
	{
		return GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(effectNameHash);
	}
	void _0x38D9D50F2085E9B3_Export(Hash effectNameHash)
	{
		return GRAPHICS::_0x38D9D50F2085E9B3(effectNameHash);
	}
	void _ANIMPOSTFX_PLAY_TAG_Export(Hash effectNameHash)
	{
		return GRAPHICS::_ANIMPOSTFX_PLAY_TAG(effectNameHash);
	}
	void _0xC76FC4C2FC5F4405_Export(Hash effectNameHash)
	{
		return GRAPHICS::_0xC76FC4C2FC5F4405(effectNameHash);
	}
	void _ANIMPOSTFX_STOP_STACKHASH_POSTFX_Export(Hash effectNameHash)
	{
		return GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(effectNameHash);
	}
	BOOL _ANIMPOSTFX_IS_STACKHASH_PLAYING_Export(Hash effectNameHash)
	{
		return GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(effectNameHash);
	}
	BOOL _0xE75CDDEBF618C8FF_Export(Hash effectNameHash)
	{
		return GRAPHICS::_0xE75CDDEBF618C8FF(effectNameHash);
	}
	void _0x71845905BCCDE781_Export(Hash effectNameHash)
	{
		return GRAPHICS::_0x71845905BCCDE781(effectNameHash);
	}
	BOOL ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH_Export(Hash effectNameHash, int p1, BOOL p2, BOOL* p3)
	{
		return GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(effectNameHash, p1, p2, p3);
	}
	BOOL _0xFF584F097C17FA8F_Export()
	{
		return GRAPHICS::_0xFF584F097C17FA8F();
	}
	BOOL _0x3DA7A10583A4BEC0_Export()
	{
		return GRAPHICS::_0x3DA7A10583A4BEC0();
	}
	Any _0xC37792A3F9C90771_Export()
	{
		return GRAPHICS::_0xC37792A3F9C90771();
	}
	void _0xA0F4D12D6042F6D5_Export(Any p0, Any p1)
	{
		return GRAPHICS::_0xA0F4D12D6042F6D5(p0, p1);
	}
	void _0x8996FA6AD9FE4E90_Export(Any p0)
	{
		return GRAPHICS::_0x8996FA6AD9FE4E90(p0);
	}
	void _SET_ENTITY_RENDER_GUARMA_SHIP_Export(Vehicle vehicle, BOOL toggle)
	{
		return GRAPHICS::_SET_ENTITY_RENDER_GUARMA_SHIP(vehicle, toggle);
	}
	BOOL PEDSHOT_IS_AVAILABLE_Export()
	{
		return GRAPHICS::PEDSHOT_IS_AVAILABLE();
	}
	BOOL _0xFD05B1DDE83749FA_Export(const char* p0)
	{
		return GRAPHICS::_0xFD05B1DDE83749FA(p0);
	}
	void _PEDSHOT_FINISH_CLEANUP_DATA_Export()
	{
		return GRAPHICS::_PEDSHOT_FINISH_CLEANUP_DATA();
	}
	void _PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP_Export()
	{
		return GRAPHICS::_PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP();
	}
	void _PEDSHOT_INIT_CLEANUP_DATA_Export()
	{
		return GRAPHICS::_PEDSHOT_INIT_CLEANUP_DATA();
	}
	BOOL _PEDSHOT_GENERATE_PERSONA_PHOTO_Export(const char* texture, Ped ped, int playerSlot)
	{
		return GRAPHICS::_PEDSHOT_GENERATE_PERSONA_PHOTO(texture, ped, playerSlot);
	}
	void _PEDSHOT_SET_PERSONA_PHOTO_TYPE_Export(int personaPhotoLocalCacheType)
	{
		return GRAPHICS::_PEDSHOT_SET_PERSONA_PHOTO_TYPE(personaPhotoLocalCacheType);
	}
	void _0xA1A86055792FB249_Export(int personaPhotoLocalCacheType)
	{
		return GRAPHICS::_0xA1A86055792FB249(personaPhotoLocalCacheType);
	}
	BOOL _0x402E1A61D2587FCD_Export(Any p0, float x, float y, float z, float p4, float p5, float heading)
	{
		return GRAPHICS::_0x402E1A61D2587FCD(p0, x, y, z, p4, p5, heading);
	}
	Any _0x5C9C3A466B3296A8_Export(Any p0)
	{
		return GRAPHICS::_0x5C9C3A466B3296A8(p0);
	}
	Any _0xA15CCAB8AD038291_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return GRAPHICS::_0xA15CCAB8AD038291(p0, p1, p2, p3);
	}
	Any _0x285438C26C732F9D_Export()
	{
		return GRAPHICS::_0x285438C26C732F9D();
	}
	void _SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE_Export(int proxyInteriorIndex, BOOL state)
	{
		return GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(proxyInteriorIndex, state);
	}
	BOOL _IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED_Export(int proxyInteriorIndex)
	{
		return GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(proxyInteriorIndex);
	}
	int _GET_PROXY_INTERIOR_INDEX_Export(int interiorId)
	{
		return GRAPHICS::_GET_PROXY_INTERIOR_INDEX(interiorId);
	}
	void _0x9D1B0B5066205692_Export()
	{
		return GRAPHICS::_0x9D1B0B5066205692();
	}
	void _0xC489FE31AC726512_Export(Any p0, Any p1)
	{
		return GRAPHICS::_0xC489FE31AC726512(p0, p1);
	}
	void _SET_CLOUD_LAYER_Export(float x, float y, int p2)
	{
		return GRAPHICS::_SET_CLOUD_LAYER(x, y, p2);
	}
	void _SET_CLOUD_NOISE_Export(float x, float y, float z)
	{
		return GRAPHICS::_SET_CLOUD_NOISE(x, y, z);
	}
	void _SET_CLOUD_POSITION_Export(float x, float y, float z)
	{
		return GRAPHICS::_SET_CLOUD_POSITION(x, y, z);
	}
	void _SET_CLOUD_HEIGHT_Export(float height)
	{
		return GRAPHICS::_SET_CLOUD_HEIGHT(height);
	}
	void _0x085C5B61A0114F32_Export(Any p0, Any p1)
	{
		return GRAPHICS::_0x085C5B61A0114F32(p0, p1);
	}
	void _0x1FF8731BE1DFC0C0_Export(Any p0, Any p1)
	{
		return GRAPHICS::_0x1FF8731BE1DFC0C0(p0, p1);
	}
	Any _0xFC9B53C072F418E0_Export()
	{
		return GRAPHICS::_0xFC9B53C072F418E0();
	}
	void _0x94B261F1F35293E1_Export(Any p0)
	{
		return GRAPHICS::_0x94B261F1F35293E1(p0);
	}
	void ENABLE_ENTITYMASK_Export()
	{
		return GRAPHICS::ENABLE_ENTITYMASK();
	}
	void DISABLE_ENTITYMASK_Export()
	{
		return GRAPHICS::DISABLE_ENTITYMASK();
	}
	void _ADD_ENTITY_TO_ENTITY_MASK_Export(Entity entity, int mask)
	{
		return GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK(entity, mask);
	}
	void _ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY_Export(Entity entity, int mask, float intensity)
	{
		return GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY(entity, mask, intensity);
	}
	void _REMOVE_ENTITY_FROM_ENTITY_MASK_Export(Entity entity)
	{
		return GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(entity);
	}
	BOOL _GET_ENTITY_MASK_LAYERS_Export(Entity entity, float* layer0, float* layer1, float* layer2, float* layer3)
	{
		return GRAPHICS::_GET_ENTITY_MASK_LAYERS(entity, layer0, layer1, layer2, layer3);
	}
	void _SET_ENTITY_MASK_LAYERS_Export(Entity entity, float* layer0, float* layer1, float* layer2, float* layer3)
	{
		return GRAPHICS::_SET_ENTITY_MASK_LAYERS(entity, layer0, layer1, layer2, layer3);
	}
	void _SET_ENTITY_AURA_Export(float p0, float p1, float p2)
	{
		return GRAPHICS::_SET_ENTITY_AURA(p0, p1, p2);
	}
	void _RESET_ENTITY_AURA_Export()
	{
		return GRAPHICS::_RESET_ENTITY_AURA();
	}
	void _SET_SNOW_COVERAGE_TYPE_Export(int type)
	{
		return GRAPHICS::_SET_SNOW_COVERAGE_TYPE(type);
	}
	void _0x519928DF02EB5101_Export(Any p0)
	{
		return GRAPHICS::_0x519928DF02EB5101(p0);
	}
	void _0x1C6306E5BC25C29C_Export()
	{
		return GRAPHICS::_0x1C6306E5BC25C29C();
	}
	BOOL NETWORK_IS_GANG_ID_VALID_Export(Any gangId)
	{
		return GANG::NETWORK_IS_GANG_ID_VALID(gangId);
	}
	BOOL NETWORK_IS_GANG_IN_SESSION_Export(Any gangId)
	{
		return GANG::NETWORK_IS_GANG_IN_SESSION(gangId);
	}
	BOOL NETWORK_IS_GANG_ACTIVE_Export(Any gangId)
	{
		return GANG::NETWORK_IS_GANG_ACTIVE(gangId);
	}
	BOOL _NETWORK_IS_GANG_OPEN_Export(Any gangId)
	{
		return GANG::_NETWORK_IS_GANG_OPEN(gangId);
	}
	int _NETWORK_GET_GANG_PRIVACY_Export()
	{
		return GANG::_NETWORK_GET_GANG_PRIVACY();
	}
	void _NETWORK_START_GANG_Export(BOOL openStatus, int campSize)
	{
		return GANG::_NETWORK_START_GANG(openStatus, campSize);
	}
	BOOL _NETWORK_SET_GANG_PRIVACY_Export(int privacyType)
	{
		return GANG::_NETWORK_SET_GANG_PRIVACY(privacyType);
	}
	void _NETWORK_LEAVE_GANG_Export(BOOL disband)
	{
		return GANG::_NETWORK_LEAVE_GANG(disband);
	}
	void _NETWORK_KICK_GANG_MEMBER_Export(Player player, int banTimeSeconds)
	{
		return GANG::_NETWORK_KICK_GANG_MEMBER(player, banTimeSeconds);
	}
	BOOL _NETWORK_REQUEST_GANG_JOIN_Export(Any gangId)
	{
		return GANG::_NETWORK_REQUEST_GANG_JOIN(gangId);
	}
	BOOL NETWORK_IS_GANG_LEADER_Export(Player player)
	{
		return GANG::NETWORK_IS_GANG_LEADER(player);
	}
	BOOL _NETWORK_IS_GANG_MEMBER_Export(Any gangId, Player player)
	{
		return GANG::_NETWORK_IS_GANG_MEMBER(gangId, player);
	}
	BOOL NETWORK_IS_IN_SAME_GANG_Export(Player player1, Player player2)
	{
		return GANG::NETWORK_IS_IN_SAME_GANG(player1, player2);
	}
	BOOL _NETWORK_IS_IN_MY_GANG_Export(Player player)
	{
		return GANG::_NETWORK_IS_IN_MY_GANG(player);
	}
	int NETWORK_GET_NUM_GANG_MEMBERS_Export(Any gangId)
	{
		return GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId);
	}
	int _NETWORK_GET_GANG_SIZE_Export(Any gangId)
	{
		return GANG::_NETWORK_GET_GANG_SIZE(gangId);
	}
	BOOL _NETWORK_SET_GANG_SIZE_Export(int size)
	{
		return GANG::_NETWORK_SET_GANG_SIZE(size);
	}
	Any NETWORK_GET_GANG_ID_Export(Player player)
	{
		return GANG::NETWORK_GET_GANG_ID(player);
	}
	int _NETWORK_GET_GANG_MEMBERS_Export(Any gangId, void* memberHandles)
	{
		return GANG::_NETWORK_GET_GANG_MEMBERS(gangId, memberHandles);
	}
	BOOL _0xDA801F7F6A5278D3_Export(Player player)
	{
		return GANG::_0xDA801F7F6A5278D3(player);
	}
	Any _0x2F7EB8B6F6AFE79C_Export(Any p0)
	{
		return GANG::_0x2F7EB8B6F6AFE79C(p0);
	}
	Any _0x53A94294FDDCF98C_Export(Any p0, Any p1)
	{
		return GANG::_0x53A94294FDDCF98C(p0, p1);
	}
	Player NETWORK_GET_GANG_LEADER_Export(Any gangId)
	{
		return GANG::NETWORK_GET_GANG_LEADER(gangId);
	}
	BOOL _NETWORK_GET_GANG_LEADER_HANDLE_Export(Any gangId, void* gamerHandle)
	{
		return GANG::_NETWORK_GET_GANG_LEADER_HANDLE(gangId, gamerHandle);
	}
	BOOL _0x6102830F764B3DE1_Export(Player player)
	{
		return GANG::_0x6102830F764B3DE1(player);
	}
	void _0xB38C256498748413_Export()
	{
		return GANG::_0xB38C256498748413();
	}
	Any _0xE4C64CD37CB176AA_Export(int p0)
	{
		return GANG::_0xE4C64CD37CB176AA(p0);
	}
	Any _0x7BAA30C9BBE8AEE7_Export(Any p0, Any p1)
	{
		return GANG::_0x7BAA30C9BBE8AEE7(p0, p1);
	}
	Any _0x0E5C9FB9ED5DFF1C_Export(Any p0)
	{
		return GANG::_0x0E5C9FB9ED5DFF1C(p0);
	}
	void _0xB22B1D9F74095382_Export(Any p0)
	{
		return GANG::_0xB22B1D9F74095382(p0);
	}
	void _0xEE4F20004D0288B7_Export()
	{
		return GANG::_0xEE4F20004D0288B7();
	}
	void _0xAD22AB64FA428DF3_Export(Any p0)
	{
		return GANG::_0xAD22AB64FA428DF3(p0);
	}
	Any _0x48D82C83987E18E4_Export(Any p0)
	{
		return GANG::_0x48D82C83987E18E4(p0);
	}
	void _0xA9CEAE8D6637FBAD_Export(Any p0)
	{
		return GANG::_0xA9CEAE8D6637FBAD(p0);
	}
	Any _0x51C5EF47086AA0D7_Export()
	{
		return GANG::_0x51C5EF47086AA0D7();
	}
	Any _0x644E02F24F9D4E98_Export(Any p0, Any p1)
	{
		return GANG::_0x644E02F24F9D4E98(p0, p1);
	}
	Any _0x3ADC71A66356D706_Export()
	{
		return GANG::_0x3ADC71A66356D706();
	}
	Any _0xFA7C5B7E087A4CEB_Export()
	{
		return GANG::_0xFA7C5B7E087A4CEB();
	}
	Any _0x1F11702DDBD915C6_Export(Any p0, Any p1)
	{
		return GANG::_0x1F11702DDBD915C6(p0, p1);
	}
	Any _0x7933754F260B428A_Export(Player player)
	{
		return GANG::_0x7933754F260B428A(player);
	}
	Any _0xAFD3599A3CC5637D_Export()
	{
		return GANG::_0xAFD3599A3CC5637D();
	}
	void _0xC81A9E2C8EFD28D5_Export(Any p0)
	{
		return GANG::_0xC81A9E2C8EFD28D5(p0);
	}
	void _GOOGLE_ANALYTICS_PUSH_PAGE_Export(const char* pageName)
	{
		return GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_PUSH_PAGE(pageName);
	}
	void _GOOGLE_ANALYTICS_POP_PAGE_Export(const char* pageName)
	{
		return GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_POP_PAGE(pageName);
	}
	BOOL _GOOGLE_ANALYTICS_START_EVENT_Export(const char* eventCategory, const char* eventAction, const char* eventLabel, int eventValue)
	{
		return GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_START_EVENT(eventCategory, eventAction, eventLabel, eventValue);
	}
	BOOL _GOOGLE_ANALYTICS_END_EVENT_Export()
	{
		return GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_END_EVENT();
	}
	void _ENABLE_REDUCED_MENU_TIME_SCALE_Export()
	{
		return HUD::_ENABLE_REDUCED_MENU_TIME_SCALE();
	}
	void _DISABLE_REDUCED_MENU_TIME_SCALE_Export()
	{
		return HUD::_DISABLE_REDUCED_MENU_TIME_SCALE();
	}
	void _ENABLE_HUD_CONTEXT_THIS_FRAME_Export(Hash component)
	{
		return HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(component);
	}
	void _ENABLE_HUD_CONTEXT_Export(Hash component)
	{
		return HUD::_ENABLE_HUD_CONTEXT(component);
	}
	void _DISABLE_HUD_CONTEXT_Export(Hash component)
	{
		return HUD::_DISABLE_HUD_CONTEXT(component);
	}
	int _0x7EC0D68233E391AC_Export(int p0)
	{
		return HUD::_0x7EC0D68233E391AC(p0);
	}
	void _BUSYSPINNER_SET_TEXT_Export(const char* text)
	{
		return HUD::_BUSYSPINNER_SET_TEXT(text);
	}
	void BUSYSPINNER_OFF_Export()
	{
		return HUD::BUSYSPINNER_OFF();
	}
	BOOL BUSYSPINNER_IS_ON_Export()
	{
		return HUD::BUSYSPINNER_IS_ON();
	}
	const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_Export(const char* pText, int startPoint, int endPoint)
	{
		return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(pText, startPoint, endPoint);
	}
	const char* GET_FILENAME_FOR_AUDIO_CONVERSATION_Export(const char* pTextLabelOfAudioConversation)
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(pTextLabelOfAudioConversation);
	}
	void CLEAR_ALL_HELP_MESSAGES_Export()
	{
		return HUD::CLEAR_ALL_HELP_MESSAGES();
	}
	BOOL TEXT_BLOCK_IS_LOADED_Export(const char* textBlock)
	{
		return HUD::TEXT_BLOCK_IS_LOADED(textBlock);
	}
	BOOL _TEXT_BLOCK_IS_STREAMED_Export(const char* textBlock)
	{
		return HUD::_TEXT_BLOCK_IS_STREAMED(textBlock);
	}
	void TEXT_BLOCK_REQUEST_Export(const char* textBlock)
	{
		return HUD::TEXT_BLOCK_REQUEST(textBlock);
	}
	void _TEXT_BLOCK_DELETE_Export(const char* textBlock)
	{
		return HUD::_TEXT_BLOCK_DELETE(textBlock);
	}
	BOOL _DOES_TEXT_BLOCK_EXIST_Export(const char* textDatabase)
	{
		return HUD::_DOES_TEXT_BLOCK_EXIST(textDatabase);
	}
	BOOL DOES_TEXT_LABEL_EXIST_Export(const char* pTextLabel)
	{
		return HUD::DOES_TEXT_LABEL_EXIST(pTextLabel);
	}
	const char* _GET_LABEL_TEXT_2_Export(const char* label)
	{
		return HUD::_GET_LABEL_TEXT_2(label);
	}
	const char* _GET_TEXT_SUBSTRING_2_Export(const char* text, int length)
	{
		return HUD::_GET_TEXT_SUBSTRING_2(text, length);
	}
	Any _0x806862E5D266CF38_Export(Any p0, Any p1, Any p2)
	{
		return HUD::_0x806862E5D266CF38(p0, p1, p2);
	}
	int GET_LENGTH_OF_LITERAL_STRING_Export(const char* pLiteralString)
	{
		return HUD::GET_LENGTH_OF_LITERAL_STRING(pLiteralString);
	}
	int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES_Export(const char* pLiteralString)
	{
		return HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(pLiteralString);
	}
	const char* GET_STRING_FROM_HASH_KEY_Export(Hash labelHash)
	{
		return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
	}
	BOOL IS_RADAR_PREFERENCE_SWITCHED_ON_Export()
	{
		return HUD::IS_RADAR_PREFERENCE_SWITCHED_ON();
	}
	BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON_Export()
	{
		return HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON();
	}
	void DISPLAY_HUD_Export(BOOL bDisplayHudFlag)
	{
		return HUD::DISPLAY_HUD(bDisplayHudFlag);
	}
	BOOL IS_HUD_HIDDEN_Export()
	{
		return HUD::IS_HUD_HIDDEN();
	}
	BOOL IS_RADAR_HIDDEN_Export()
	{
		return HUD::IS_RADAR_HIDDEN();
	}
	BOOL IS_RADAR_HIDDEN_BY_SCRIPT_Export()
	{
		return HUD::IS_RADAR_HIDDEN_BY_SCRIPT();
	}
	void _GET_COLOR_FROM_NAME_Export(Hash colorNameHash, int* red, int* green, int* blue, int* alpha)
	{
		return HUD::_GET_COLOR_FROM_NAME(colorNameHash, red, green, blue, alpha);
	}
	void _DISPLAY_TEXT_Export(const char* text, float xPos, float yPos)
	{
		return HUD::_DISPLAY_TEXT(text, xPos, yPos);
	}
	void _SET_TEXT_COLOR_Export(int r, int g, int b, int a)
	{
		return HUD::_SET_TEXT_COLOR(r, g, b, a);
	}
	void SET_TEXT_RENDER_ID_Export(int RenderIndex)
	{
		return HUD::SET_TEXT_RENDER_ID(RenderIndex);
	}
	BOOL REGISTER_NAMED_RENDERTARGET_Export(const char* name, BOOL delay)
	{
		return HUD::REGISTER_NAMED_RENDERTARGET(name, delay);
	}
	BOOL IS_NAMED_RENDERTARGET_REGISTERED_Export(const char* name)
	{
		return HUD::IS_NAMED_RENDERTARGET_REGISTERED(name);
	}
	BOOL RELEASE_NAMED_RENDERTARGET_Export(const char* name)
	{
		return HUD::RELEASE_NAMED_RENDERTARGET(name);
	}
	void LINK_NAMED_RENDERTARGET_Export(Hash ModelHash)
	{
		return HUD::LINK_NAMED_RENDERTARGET(ModelHash);
	}
	int GET_NAMED_RENDERTARGET_RENDER_ID_Export(const char* name)
	{
		return HUD::GET_NAMED_RENDERTARGET_RENDER_ID(name);
	}
	BOOL IS_NAMED_RENDERTARGET_LINKED_Export(Hash ModelHash)
	{
		return HUD::IS_NAMED_RENDERTARGET_LINKED(ModelHash);
	}
	void _0x9D37EB5003E0F2CF_Export(Any p0, Any p1)
	{
		return HUD::_0x9D37EB5003E0F2CF(p0, p1);
	}
	void HIDE_LOADING_ON_FADE_THIS_FRAME_Export()
	{
		return HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	}
	void _0x052D4AC0922AF91A_Export(Any p0, Any p1)
	{
		return HUD::_0x052D4AC0922AF91A(p0, p1);
	}
	void HIDE_HUD_AND_RADAR_THIS_FRAME_Export()
	{
		return HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	void _0x8A59D44189AF2BC5_Export(Any p0, Any p1)
	{
		return HUD::_0x8A59D44189AF2BC5(p0, p1);
	}
	void _0x160825DADF1B04B3_Export()
	{
		return HUD::_0x160825DADF1B04B3();
	}
	Any _0x9C409BBC492CB5B1_Export()
	{
		return HUD::_0x9C409BBC492CB5B1();
	}
	Any _0x0501D52D24EA8934_Export(Any p0)
	{
		return HUD::_0x0501D52D24EA8934(p0);
	}
	Any _0x100157D6D7FE32CA_Export(Any p0, Any p1)
	{
		return HUD::_0x100157D6D7FE32CA(p0, p1);
	}
	Any _0x28AE29D909C8FDCE_Export(Any p0)
	{
		return HUD::_0x28AE29D909C8FDCE(p0);
	}
	void _0x2F7BB105144ACF30_Export()
	{
		return HUD::_0x2F7BB105144ACF30();
	}
	void _0xBFFF81E12A745A5F_Export()
	{
		return HUD::_0xBFFF81E12A745A5F();
	}
	void SET_MISSION_NAME_Export(BOOL bActive, const char* pTextLabel)
	{
		return HUD::SET_MISSION_NAME(bActive, pTextLabel);
	}
	void SET_MISSION_NAME_FOR_UGC_MISSION_Export(BOOL bActive, const char* pMissionName)
	{
		return HUD::SET_MISSION_NAME_FOR_UGC_MISSION(bActive, pMissionName);
	}
	void _0xCE0D2F5586627CCE_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return HUD::_0xCE0D2F5586627CCE(p0, p1, p2, p3, p4);
	}
	int GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION_Export(float vWorldPosX, float vWorldPosY, float vWorldPosZ, float* fScreenPosX, float* fScreenPosY)
	{
		return HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vWorldPosX, vWorldPosY, vWorldPosZ, fScreenPosX, fScreenPosY);
	}
	void _HIDE_HUD_THIS_FRAME_Export()
	{
		return HUD::_HIDE_HUD_THIS_FRAME();
	}
	void DISABLE_FRONTEND_THIS_FRAME_Export()
	{
		return HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	void _0x5651516D947ABC53_Export()
	{
		return HUD::_0x5651516D947ABC53();
	}
	void ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME_Export()
	{
		return HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
	}
	void SET_FRONTEND_ACTIVE_Export(BOOL bActive)
	{
		return HUD::SET_FRONTEND_ACTIVE(bActive);
	}
	BOOL IS_PAUSE_MENU_ACTIVE_Export()
	{
		return HUD::IS_PAUSE_MENU_ACTIVE();
	}
	void _SHOW_PLAYER_CORES_Export(BOOL state)
	{
		return HUD::_SHOW_PLAYER_CORES(state);
	}
	void _SHOW_HORSE_CORES_Export(BOOL state)
	{
		return HUD::_SHOW_HORSE_CORES(state);
	}
	void _0x3FE4FB41EF7D2196_Export(Any p0)
	{
		return HUD::_0x3FE4FB41EF7D2196(p0);
	}
	void _JOURNAL_WRITE_ENTRY_Export(Any p0)
	{
		return HUD::_JOURNAL_WRITE_ENTRY(p0);
	}
	Any _JOURNAL_CAN_WRITE_ENTRY_Export(Any p0)
	{
		return HUD::_JOURNAL_CAN_WRITE_ENTRY(p0);
	}
	Any _JOURNAL_GET_ENTRY_COUNT_Export()
	{
		return HUD::_JOURNAL_GET_ENTRY_COUNT();
	}
	Any _JOURNAL_GET_ENTRY_AT_INDEX_Export(Any p0)
	{
		return HUD::_JOURNAL_GET_ENTRY_AT_INDEX(p0);
	}
	Any _JOURNAL_GET_GRIME_AT_INDEX_Export(Any p0)
	{
		return HUD::_JOURNAL_GET_GRIME_AT_INDEX(p0);
	}
	Any _JOURNAL_GET_ENTRY_INFO_Export(Any p0, Any p1)
	{
		return HUD::_JOURNAL_GET_ENTRY_INFO(p0, p1);
	}
	Any _JOURNAL_GET_TEXTURE_WITH_LAYOUT_Export(Any p0, Any p1, Any p2)
	{
		return HUD::_JOURNAL_GET_TEXTURE_WITH_LAYOUT(p0, p1, p2);
	}
	void _JOURNAL_MARK_READ_Export(Any p0)
	{
		return HUD::_JOURNAL_MARK_READ(p0);
	}
	void _JOURNAL_CLEAR_ALL_PROGRESS_Export()
	{
		return HUD::_JOURNAL_CLEAR_ALL_PROGRESS();
	}
	Any UI_REQUEST_SCENE_Export(Any p0, Any p1)
	{
		return HUD::UI_REQUEST_SCENE(p0, p1);
	}
	void _0xF1E6979C0B779985_Export(int uiscene)
	{
		return HUD::_0xF1E6979C0B779985(uiscene);
	}
	Any UI_GET_SCENE_UIOBJECT_Export(Any p0)
	{
		return HUD::UI_GET_SCENE_UIOBJECT(p0);
	}
	void UI_MOVIEVIEW_SET_RENDER_TARGET_Export(Any p0, Any p1)
	{
		return HUD::UI_MOVIEVIEW_SET_RENDER_TARGET(p0, p1);
	}
	Prompt _UI_PROMPT_CREATE_Export(Hash inputHash, const char* labelName, Any p2, Any p3, Any p4, int p5)
	{
		return HUD::_UI_PROMPT_CREATE(inputHash, labelName, p2, p3, p4, p5);
	}
	Prompt _UI_PROMPT_REGISTER_BEGIN_Export()
	{
		return HUD::_UI_PROMPT_REGISTER_BEGIN();
	}
	void _UI_PROMPT_REGISTER_END_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_REGISTER_END(prompt);
	}
	void _UI_PROMPT_SET_PRIORITY_Export(Prompt prompt, int priority)
	{
		return HUD::_UI_PROMPT_SET_PRIORITY(prompt, priority);
	}
	Any _UI_PROMPT_SET_CONTROL_ACTION_Export(Prompt prompt, Hash action)
	{
		return HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, action);
	}
	void _UI_PROMPT_SET_ALLOWED_ACTION_Export(Prompt prompt, Hash action)
	{
		return HUD::_UI_PROMPT_SET_ALLOWED_ACTION(prompt, action);
	}
	void _UI_PROMPT_SET_STANDARD_MODE_Export(Prompt prompt, BOOL releaseMode)
	{
		return HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, releaseMode);
	}
	BOOL _UI_PROMPT_HAS_STANDARD_MODE_COMPLETED_Export(Prompt prompt, int p1)
	{
		return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(prompt, p1);
	}
	void _UI_PROMPT_SET_PRESSED_TIMED_MODE_Export(Prompt prompt, int depletionTimeMs)
	{
		return HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, depletionTimeMs);
	}
	BOOL _UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED(prompt);
	}
	BOOL _UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED(prompt);
	}
	void _UI_PROMPT_SET_HOLD_MODE_Export(Prompt prompt, int holdTimeMs)
	{
		return HUD::_UI_PROMPT_SET_HOLD_MODE(prompt, holdTimeMs);
	}
	void _UI_PROMPT_SET_STANDARDIZED_HOLD_MODE_Export(Prompt prompt, Hash timedEventHash)
	{
		return HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, timedEventHash);
	}
	void _UI_PROMPT_SET_HOLD_INDEFINITELY_MODE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
	}
	void _UI_PROMPT_SET_HOLD_AUTO_FILL_MODE_Export(Prompt prompt, int autoFillTimeMs, int holdTimeMs)
	{
		return HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, autoFillTimeMs, holdTimeMs);
	}
	void _UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE_Export(Prompt prompt, int autoFillTimeMs, int holdTimeMs)
	{
		return HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, autoFillTimeMs, holdTimeMs);
	}
	BOOL _UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(prompt);
	}
	BOOL _UI_PROMPT_HAS_HOLD_MODE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_HOLD_MODE(prompt);
	}
	BOOL _UI_PROMPT_IS_HOLD_MODE_RUNNING_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(prompt);
	}
	BOOL _UI_PROMPT_HAS_HOLD_MODE_COMPLETED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(prompt);
	}
	float _UI_PROMPT_GET_PROGRESS_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_GET_PROGRESS(prompt);
	}
	void _UI_PROMPT_SET_MASH_MODE_Export(Prompt prompt, int mashes)
	{
		return HUD::_UI_PROMPT_SET_MASH_MODE(prompt, mashes);
	}
	void _UI_PROMPT_SET_MASH_INDEFINITELY_MODE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
	}
	void _UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE_Export(Prompt prompt, int mashes, float p2, float p3)
	{
		return HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, mashes, p2, p3);
	}
	void _UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE_Export(Prompt prompt, int mashes, float p2, float p3)
	{
		return HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, mashes, p2, p3);
	}
	void _UI_PROMPT_SET_MASH_AUTO_FILL_MODE_Export(Prompt prompt, int autoFillTimeMs, int mashes)
	{
		return HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, autoFillTimeMs, mashes);
	}
	void _UI_PROMPT_SET_MASH_MANUAL_MODE_Export(Prompt prompt, float p1, float p2, float p3, Any p4)
	{
		return HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, p1, p2, p3, p4);
	}
	void _UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE_Export(Prompt prompt, float p1, float p2, float p3, Any p4)
	{
		return HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, p1, p2, p3, p4);
	}
	BOOL _UI_PROMPT_HAS_MANUAL_MASH_MODE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_MANUAL_MASH_MODE(prompt);
	}
	BOOL _UI_PROMPT_HAS_MASH_MODE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE(prompt);
	}
	Any _0xB0E8599243B3F568_Export(Any p0)
	{
		return HUD::_0xB0E8599243B3F568(p0);
	}
	BOOL _UI_PROMPT_HAS_MASH_MODE_COMPLETED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(prompt);
	}
	BOOL _UI_PROMPT_HAS_MASH_MODE_FAILED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_FAILED(prompt);
	}
	float _UI_PROMPT_GET_MASH_MODE_PROGRESS_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(prompt);
	}
	void _UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS_Export(Prompt prompt, float rate)
	{
		return HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(prompt, rate);
	}
	void _UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED_Export(Prompt prompt, float speed)
	{
		return HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(prompt, speed);
	}
	void _UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED_Export(Prompt prompt, float speed)
	{
		return HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(prompt, speed);
	}
	void _UI_PROMPT_SET_ROTATE_MODE_Export(Prompt prompt, float p1, BOOL counterclockwise)
	{
		return HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, p1, counterclockwise);
	}
	void _UI_PROMPT_SET_TARGET_MODE_Export(Prompt prompt, float p1, float p2, Any p3)
	{
		return HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, p1, p2, p3);
	}
	void _UI_PROMPT_SET_TARGET_MODE_TARGET_Export(Prompt prompt, float p1, float p2)
	{
		return HUD::_UI_PROMPT_SET_TARGET_MODE_TARGET(prompt, p1, p2);
	}
	void _UI_PROMPT_SET_TARGET_MODE_PROGRESS_Export(Prompt prompt, float progress)
	{
		return HUD::_UI_PROMPT_SET_TARGET_MODE_PROGRESS(prompt, progress);
	}
	void _UI_PROMPT_SET_BEAT_MODE_Export(Prompt prompt, BOOL toggle)
	{
		return HUD::_UI_PROMPT_SET_BEAT_MODE(prompt, toggle);
	}
	BOOL _UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW(prompt);
	}
	void _UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT_Export(Prompt prompt, Any p1)
	{
		return HUD::_UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT(prompt, p1);
	}
	void _UI_PROMPT_RESTART_MODES_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_RESTART_MODES(prompt);
	}
	void _UI_PROMPT_SET_SPINNER_SPEED_Export(Prompt prompt, Any p1)
	{
		return HUD::_UI_PROMPT_SET_SPINNER_SPEED(prompt, p1);
	}
	void _UI_PROMPT_SET_SPINNER_POSITION_Export(Prompt prompt, Any p1)
	{
		return HUD::_UI_PROMPT_SET_SPINNER_POSITION(prompt, p1);
	}
	void _UI_PROMPT_SET_URGENT_PULSING_ENABLED_Export(Prompt prompt, BOOL toggle)
	{
		return HUD::_UI_PROMPT_SET_URGENT_PULSING_ENABLED(prompt, toggle);
	}
	BOOL _UI_PROMPT_GET_URGENT_PULSING_ENABLED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_GET_URGENT_PULSING_ENABLED(prompt);
	}
	void _UI_PROMPT_SET_TAG_Export(Prompt prompt, Any p1)
	{
		return HUD::_UI_PROMPT_SET_TAG(prompt, p1);
	}
	int _UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY_Export(Entity entity)
	{
		return HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(entity);
	}
	int _UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT_Export(Any p0, int p1)
	{
		return HUD::_UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT(p0, p1);
	}
	void _UI_PROMPT_SET_GROUP_Export(Prompt prompt, int groupId, int tabIndex)
	{
		return HUD::_UI_PROMPT_SET_GROUP(prompt, groupId, tabIndex);
	}
	void _UI_PROMPT_REMOVE_GROUP_Export(Prompt prompt, Any p1)
	{
		return HUD::_UI_PROMPT_REMOVE_GROUP(prompt, p1);
	}
	Any _UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME_Export(Hash hash, const char* name, int tabAmount, int tabDefaultIndex, int p4, Prompt prompt)
	{
		return HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(hash, name, tabAmount, tabDefaultIndex, p4, prompt);
	}
	int _UI_PROMPT_GET_GROUP_ACTIVE_PAGE_Export(Hash hash)
	{
		return HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(hash);
	}
	Any _UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME_Export(Entity entity, float p1, int p2, int p3, Hash p4, const char* name, int p6)
	{
		return HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(entity, p1, p2, p3, p4, name, p6);
	}
	Any _0x8B55B324A9123F6B_Export(int groupId, Volume volume, const char* p2, Any p3, Any p4, Any p5)
	{
		return HUD::_0x8B55B324A9123F6B(groupId, volume, p2, p3, p4, p5);
	}
	BOOL _UI_PROMPT_DOES_AMBIENT_GROUP_EXIST_Export(Hash hash)
	{
		return HUD::_UI_PROMPT_DOES_AMBIENT_GROUP_EXIST(hash);
	}
	void _UI_PROMPT_ADD_GROUP_LINK_Export(Any p0, Prompt prompt, Any p2)
	{
		return HUD::_UI_PROMPT_ADD_GROUP_LINK(p0, prompt, p2);
	}
	void _UI_PROMPT_ADD_GROUP_RETURN_LINK_Export(Any p0, Prompt prompt)
	{
		return HUD::_UI_PROMPT_ADD_GROUP_RETURN_LINK(p0, prompt);
	}
	void _UI_PROMPT_SET_TRANSPORT_MODE_Export(Prompt prompt, int mode)
	{
		return HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, mode);
	}
	void _UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME_Export()
	{
		return HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
	}
	void _UI_PROMPT_DELETE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_DELETE(prompt);
	}
	BOOL _UI_PROMPT_IS_VALID_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_VALID(prompt);
	}
	BOOL _UI_PROMPT_IS_ACTIVE_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_ACTIVE(prompt);
	}
	void _UI_PROMPT_SET_VISIBLE_Export(Prompt prompt, BOOL toggle)
	{
		return HUD::_UI_PROMPT_SET_VISIBLE(prompt, toggle);
	}
	void _UI_PROMPT_SET_ENABLED_Export(Prompt prompt, BOOL toggle)
	{
		return HUD::_UI_PROMPT_SET_ENABLED(prompt, toggle);
	}
	void _UI_PROMPT_SET_TEXT_Export(Prompt prompt, const char* text)
	{
		return HUD::_UI_PROMPT_SET_TEXT(prompt, text);
	}
	void _UI_PROMPT_SET_ATTRIBUTE_Export(Prompt prompt, int attribute, BOOL enabled)
	{
		return HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, attribute, enabled);
	}
	void _UI_PROMPT_SET_TYPE_Export(Prompt prompt, int type)
	{
		return HUD::_UI_PROMPT_SET_TYPE(prompt, type);
	}
	void _0x53CE46C01A089DA1_Export(Prompt prompt, BOOL p1)
	{
		return HUD::_0x53CE46C01A089DA1(prompt, p1);
	}
	void _UI_PROMPT_SET_MANUAL_RESOLVED_Export(Prompt prompt, Any p1)
	{
		return HUD::_UI_PROMPT_SET_MANUAL_RESOLVED(prompt, p1);
	}
	void _UI_PROMPT_CONTEXT_SET_VOLUME_Export(Prompt prompt, Volume volume)
	{
		return HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volume);
	}
	void _UI_PROMPT_CONTEXT_SET_POINT_Export(Prompt prompt, float x, float y, float z)
	{
		return HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, x, y, z);
	}
	void _UI_PROMPT_CONTEXT_SET_RADIUS_Export(Prompt prompt, float radius)
	{
		return HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, radius);
	}
	BOOL _UI_PROMPT_IS_PRESSED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_PRESSED(prompt);
	}
	BOOL _UI_PROMPT_IS_JUST_PRESSED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_JUST_PRESSED(prompt);
	}
	BOOL _UI_PROMPT_IS_JUST_RELEASED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_JUST_RELEASED(prompt);
	}
	BOOL _UI_PROMPT_IS_RELEASED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_RELEASED(prompt);
	}
	void _UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME_Export(int p0)
	{
		return HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(p0);
	}
	void _UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME_Export(int p0)
	{
		return HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(p0);
	}
	void _UI_PROMPT_FILTER_CLEAR_Export()
	{
		return HUD::_UI_PROMPT_FILTER_CLEAR();
	}
	void _UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE_Export(Ped ped)
	{
		return HUD::_UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE(ped);
	}
	void _UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE_Export()
	{
		return HUD::_UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE();
	}
	BOOL _UI_PROMPT_IS_ENABLED_Export(Prompt prompt)
	{
		return HUD::_UI_PROMPT_IS_ENABLED(prompt);
	}
	BOOL UI_PROMPT_IS_CONTROL_ACTION_ACTIVE_Export(Hash controlAction)
	{
		return HUD::UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(controlAction);
	}
	Any _0xD6BD313CFA41E57A_Export(Any p0)
	{
		return HUD::_0xD6BD313CFA41E57A(p0);
	}
	int _UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION_Export()
	{
		return HUD::_UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION();
	}
	void _UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION_Export(int id)
	{
		return HUD::_UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION(id);
	}
	void _UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE_Export(Prompt prompt, Any p1)
	{
		return HUD::_UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE(prompt, p1);
	}
	Any _0x066725A9D52B3641_Export()
	{
		return HUD::_0x066725A9D52B3641();
	}
	void _0x958278B97C4AFFD8_Export(Any p0, Any p1)
	{
		return HUD::_0x958278B97C4AFFD8(p0, p1);
	}
	int _CREATE_MP_GAMER_TAG_Export(Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag)
	{
		return HUD::_CREATE_MP_GAMER_TAG(player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag);
	}
	int CREATE_FAKE_MP_GAMER_TAG_Export(Ped ped, const char* PlayerName, BOOL bCrewTypeIsPrivate, BOOL bCrewTagContainsRockstar, const char* CrewTag, int iCrewRank)
	{
		return HUD::CREATE_FAKE_MP_GAMER_TAG(ped, PlayerName, bCrewTypeIsPrivate, bCrewTagContainsRockstar, CrewTag, iCrewRank);
	}
	int _CREATE_MP_GAMER_TAG_ON_ENTITY_Export(Entity entity, const char* text)
	{
		return HUD::_CREATE_MP_GAMER_TAG_ON_ENTITY(entity, text);
	}
	void REMOVE_MP_GAMER_TAG_Export(int iPlayerNum)
	{
		return HUD::REMOVE_MP_GAMER_TAG(iPlayerNum);
	}
	BOOL IS_MP_GAMER_TAG_ACTIVE_Export(int iPlayerNum)
	{
		return HUD::IS_MP_GAMER_TAG_ACTIVE(iPlayerNum);
	}
	BOOL _IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY_Export(int gamerTagId, Entity entity)
	{
		return HUD::_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(gamerTagId, entity);
	}
	void _SET_MP_GAMER_TAG_VISIBILITY_Export(int gamerTagId, int visibility)
	{
		return HUD::_SET_MP_GAMER_TAG_VISIBILITY(gamerTagId, visibility);
	}
	void _SET_MP_GAMER_TAG_TYPE_Export(int gamerTagId, Hash type)
	{
		return HUD::_SET_MP_GAMER_TAG_TYPE(gamerTagId, type);
	}
	void _SET_MP_GAMER_TAG_COLOUR_Export(int gamerTagId, Hash colour)
	{
		return HUD::_SET_MP_GAMER_TAG_COLOUR(gamerTagId, colour);
	}
	void _SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED_Export(int gamerTagId, BOOL allow)
	{
		return HUD::_SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED(gamerTagId, allow);
	}
	void SET_MP_GAMER_TAG_NAME_Export(int iPlayerNum, const char* PlayerName)
	{
		return HUD::SET_MP_GAMER_TAG_NAME(iPlayerNum, PlayerName);
	}
	void _SET_MP_GAMER_TAG_NAME_POSSE_Export(int gamerTagId, const char* text)
	{
		return HUD::_SET_MP_GAMER_TAG_NAME_POSSE(gamerTagId, text);
	}
	void SET_MP_GAMER_TAG_BIG_TEXT_Export(int iPlayerNum, const char* BigText)
	{
		return HUD::SET_MP_GAMER_TAG_BIG_TEXT(iPlayerNum, BigText);
	}
	void _SET_MP_GAMER_TAG_TOP_ICON_Export(int gamerTagId, Hash icon)
	{
		return HUD::_SET_MP_GAMER_TAG_TOP_ICON(gamerTagId, icon);
	}
	void _SET_MP_GAMER_TAG_SECONDARY_ICON_Export(int gamerTagId, Hash icon)
	{
		return HUD::_SET_MP_GAMER_TAG_SECONDARY_ICON(gamerTagId, icon);
	}
	void _MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON_Export(int gamerTagId)
	{
		return HUD::_MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON(gamerTagId);
	}
	void _MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON_Export(int gamerTagId)
	{
		return HUD::_MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON(gamerTagId);
	}
	void _INVERSE_KINEMATICS_REQUEST_LOOK_AT_Export(Ped ped, void* args)
	{
		return IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(ped, args);
	}
	void _0x0B9F7A01EC50448D_Export(Ped ped, void* args)
	{
		return IK::_0x0B9F7A01EC50448D(ped, args);
	}
	void _INVERSE_KINEMATICS_SET_DISABLED_FOR_PED_Export(Ped ped, int p1, BOOL p2)
	{
		return IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(ped, p1, p2);
	}
	BOOL _0x6098139150DCC745_Export(Ped ped, int p1)
	{
		return IK::_0x6098139150DCC745(ped, p1);
	}
	void _0x873C792E07A32C8B_Export(Ped ped1, Ped ped2)
	{
		return IK::_0x873C792E07A32C8B(ped1, ped2);
	}
	void SET_MOUSE_CURSOR_THIS_FRAME_Export()
	{
		return INTERACTION::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	void SET_MOUSE_CURSOR_STYLE_Export(int style)
	{
		return INTERACTION::SET_MOUSE_CURSOR_STYLE(style);
	}
	void _SET_ALLOW_FIRST_PERSON_MOUSE_CAMERA_MOVEMENT_Export()
	{
		return INTERACTION::_SET_ALLOW_FIRST_PERSON_MOUSE_CAMERA_MOVEMENT();
	}
	BOOL _POINTER_IS_BEING_MOVED_Export()
	{
		return INTERACTION::_POINTER_IS_BEING_MOVED();
	}
	BOOL _POINTER_IS_LEFT_BUTTON_HELD_Export()
	{
		return INTERACTION::_POINTER_IS_LEFT_BUTTON_HELD();
	}
	BOOL _POINTER_IS_LEFT_BUTTON_JUST_RELEASED_Export()
	{
		return INTERACTION::_POINTER_IS_LEFT_BUTTON_JUST_RELEASED();
	}
	BOOL IS_VALID_INTERIOR_Export(Interior InteriorInstanceIndex)
	{
		return INTERIOR::IS_VALID_INTERIOR(InteriorInstanceIndex);
	}
	void GET_INTERIOR_LOCATION_AND_NAMEHASH_Export(Interior interior, scrVector* position, Hash* nameHash)
	{
		return INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(interior, position, nameHash);
	}
	Hash _GET_INTERIOR_MINIMAP_HASH_Export(Interior interior)
	{
		return INTERIOR::_GET_INTERIOR_MINIMAP_HASH(interior);
	}
	scrVector _GET_INTERIOR_POSITION_Export(Interior interior)
	{
		return INTERIOR::_GET_INTERIOR_POSITION(interior);
	}
	BOOL IS_INTERIOR_SCENE_Export()
	{
		return INTERIOR::IS_INTERIOR_SCENE();
	}
	void CLEAR_ROOM_FOR_ENTITY_Export(Entity EntityIndex)
	{
		return INTERIOR::CLEAR_ROOM_FOR_ENTITY(EntityIndex);
	}
	void FORCE_ROOM_FOR_ENTITY_Export(Entity EntityIndex, Interior InteriorInstanceIndex, Hash RoomKey)
	{
		return INTERIOR::FORCE_ROOM_FOR_ENTITY(EntityIndex, InteriorInstanceIndex, RoomKey);
	}
	Hash GET_ROOM_KEY_FROM_ENTITY_Export(Entity EntityIndex)
	{
		return INTERIOR::GET_ROOM_KEY_FROM_ENTITY(EntityIndex);
	}
	Hash GET_KEY_FOR_ENTITY_IN_ROOM_Export(Entity EntityIndex)
	{
		return INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(EntityIndex);
	}
	Interior GET_INTERIOR_FROM_ENTITY_Export(Entity EntityIndex)
	{
		return INTERIOR::GET_INTERIOR_FROM_ENTITY(EntityIndex);
	}
	void RETAIN_ENTITY_IN_INTERIOR_Export(Entity EntityIndex, Interior InteriorInstanceIndex)
	{
		return INTERIOR::RETAIN_ENTITY_IN_INTERIOR(EntityIndex, InteriorInstanceIndex);
	}
	void FORCE_ROOM_FOR_GAME_VIEWPORT_Export(Interior InteriorInstanceIndex, Hash RoomKey)
	{
		return INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(InteriorInstanceIndex, RoomKey);
	}
	void CLEAR_ROOM_FOR_GAME_VIEWPORT_Export()
	{
		return INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
	}
	Interior GET_INTERIOR_FROM_PRIMARY_VIEW_Export()
	{
		return INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
	}
	Interior GET_INTERIOR_AT_COORDS_Export(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ)
	{
		return INTERIOR::GET_INTERIOR_AT_COORDS(VecInCoorsX, VecInCoorsY, VecInCoorsZ);
	}
	void PIN_INTERIOR_IN_MEMORY_Export(Interior InteriorInstanceIndex)
	{
		return INTERIOR::PIN_INTERIOR_IN_MEMORY(InteriorInstanceIndex);
	}
	void UNPIN_INTERIOR_Export(Interior InteriorInstanceIndex)
	{
		return INTERIOR::UNPIN_INTERIOR(InteriorInstanceIndex);
	}
	BOOL IS_INTERIOR_READY_Export(Interior InteriorInstanceIndex)
	{
		return INTERIOR::IS_INTERIOR_READY(InteriorInstanceIndex);
	}
	BOOL SET_INTERIOR_IN_USE_Export(Interior InteriorInstanceIndex)
	{
		return INTERIOR::SET_INTERIOR_IN_USE(InteriorInstanceIndex);
	}
	Interior GET_INTERIOR_AT_COORDS_WITH_TYPE_Export(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ, const char* Name)
	{
		return INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(VecInCoorsX, VecInCoorsY, VecInCoorsZ, Name);
	}
	Interior GET_INTERIOR_AT_COORDS_WITH_TYPEHASH_Export(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ, Hash NameHash)
	{
		return INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(VecInCoorsX, VecInCoorsY, VecInCoorsZ, NameHash);
	}
	BOOL IS_COLLISION_MARKED_OUTSIDE_Export(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ)
	{
		return INTERIOR::IS_COLLISION_MARKED_OUTSIDE(VecInCoorsX, VecInCoorsY, VecInCoorsZ);
	}
	Interior GET_INTERIOR_FROM_COLLISION_Export(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ)
	{
		return INTERIOR::GET_INTERIOR_FROM_COLLISION(VecInCoorsX, VecInCoorsY, VecInCoorsZ);
	}
	void ACTIVATE_INTERIOR_ENTITY_SET_Export(Interior InteriorInstanceIndex, const char* entitySetName, int p2)
	{
		return INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(InteriorInstanceIndex, entitySetName, p2);
	}
	void DEACTIVATE_INTERIOR_ENTITY_SET_Export(Interior InteriorInstanceIndex, const char* entitySetName, BOOL p2)
	{
		return INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(InteriorInstanceIndex, entitySetName, p2);
	}
	BOOL IS_INTERIOR_ENTITY_SET_ACTIVE_Export(Interior InteriorInstanceIndex, const char* entitySetName)
	{
		return INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(InteriorInstanceIndex, entitySetName);
	}
	BOOL _IS_INTERIOR_ENTITY_SET_VALID_Export(Interior interior, const char* entitySetName)
	{
		return INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(interior, entitySetName);
	}
	void DISABLE_INTERIOR_Export(Interior InteriorInstanceIndex, BOOL bDisable)
	{
		return INTERIOR::DISABLE_INTERIOR(InteriorInstanceIndex, bDisable);
	}
	void _0x2533F2AB0EB9C6F9_Export(Any p0, Any p1)
	{
		return INTERIOR::_0x2533F2AB0EB9C6F9(p0, p1);
	}
	void _0xFE2B3D5500B1B2E4_Export(Any p0, Any p1)
	{
		return INTERIOR::_0xFE2B3D5500B1B2E4(p0, p1);
	}
	int _INVENTORY_GET_INVENTORY_ID_FROM_PED_Export(Ped ped)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped);
	}
	int _GET_ITEM_ROLE_MAX_LEVEL_COUNT_Export(int inventoryId, Hash eRoleMaxLevel)
	{
		return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(inventoryId, eRoleMaxLevel);
	}
	int _GET_ITEM_SLOT_MAX_COUNT_Export(Hash provision, Hash slotId)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(provision, slotId);
	}
	BOOL _0x112BCA290D2EB53C_Export(int inventoryId, Hash p1, int* year, int* month, int* day, int* hour, int* minute, int* second)
	{
		return INVENTORY::_0x112BCA290D2EB53C(inventoryId, p1, year, month, day, hour, minute, second);
	}
	void _0x46743BBFEDBC859E_Export(int inventoryId, Hash eInventoryItem, BOOL p2)
	{
		return INVENTORY::_0x46743BBFEDBC859E(inventoryId, eInventoryItem, p2);
	}
	void _INVENTORY_SET_INVENTORY_ITEM_IN_USE_Export(int inventoryId, void* guid, BOOL inUse)
	{
		return INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(inventoryId, guid, inUse);
	}
	BOOL _INVENTORY_GET_INVENTORY_ITEM_IN_USE_Export(int inventoryId, void* guid)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(inventoryId, guid);
	}
	void _INVENTORY_SET_INVENTORY_ITEM_HIDDEN_Export(int inventoryId, void* guid, BOOL hidden)
	{
		return INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(inventoryId, guid, hidden);
	}
	void _INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2_Export(int inventoryId, void* guid, BOOL hidden)
	{
		return INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2(inventoryId, guid, hidden);
	}
	BOOL _INVENTORY_GET_INVENTORY_ITEM_HIDDEN_Export(int inventoryId, void* guid)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_HIDDEN(inventoryId, guid);
	}
	BOOL _INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT_Export(Hash item)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(item);
	}
	Hash _INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH_Export(Hash item)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(item);
	}
	BOOL _INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED_Export(Hash item, int flag)
	{
		return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(item, flag);
	}
	BOOL _INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID_Export(Hash item, int soundType)
	{
		return INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(item, soundType);
	}
	Hash _INVENTORY_GET_INVENTORY_ITEM_SOUND_Export(Hash item, int soundType)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_SOUND(item, soundType);
	}
	BOOL _INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO_Export(Hash item, void* info)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO(item, info);
	}
	int _INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID_Export(int inventoryId, void* guid)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID(inventoryId, guid);
	}
	BOOL _INVENTORY_ARE_LOCAL_CHANGES_ALLOWED_Export(int inventoryId)
	{
		return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(inventoryId);
	}
	BOOL _INVENTORY_IS_GUID_VALID_Export(void* guid)
	{
		return INVENTORY::_INVENTORY_IS_GUID_VALID(guid);
	}
	BOOL _INVENTORY_COMPARE_GUIDS_Export(void* guid1, void* guid2)
	{
		return INVENTORY::_INVENTORY_COMPARE_GUIDS(guid1, guid2);
	}
	BOOL INVENTORY_GET_GUID_FROM_ITEMID_Export(int inventoryId, void* guid, Hash p2, Hash slotId, void* outGuid)
	{
		return INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(inventoryId, guid, p2, slotId, outGuid);
	}
	BOOL _0x5D6182F3BCE1333B_Export(int inventoryId, Hash removeReason)
	{
		return INVENTORY::_0x5D6182F3BCE1333B(inventoryId, removeReason);
	}
	BOOL INVENTORY_GET_INVENTORY_ITEM_Export(int inventoryId, void* inData, void* outData, BOOL p3)
	{
		return INVENTORY::INVENTORY_GET_INVENTORY_ITEM(inventoryId, inData, outData, p3);
	}
	BOOL _INVENTORY_GET_FULL_INVENTORY_ITEM_DATA_Export(int inventoryId, void* guid, void* p2, int p3, int p4)
	{
		return INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, guid, p2, p3, p4);
	}
	BOOL _INVENTORY_GET_INVENTORY_ITEM_CHILD_Export(int inventoryId, void* parentGuid, Any childIndex, void* outInventoryItem)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, parentGuid, childIndex, outInventoryItem);
	}
	BOOL _INVENTORY_ADD_ITEM_WITH_GUID_Export(int inventoryId, void* guid1, void* guid2, Hash item, Hash inventoryItemSlot, int p5, Hash addReason)
	{
		return INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(inventoryId, guid1, guid2, item, inventoryItemSlot, p5, addReason);
	}
	BOOL _INVENTORY_UPDATE_INVENTORY_ITEM_Export(int inventoryId, void* guid1, void* guid2, int p3)
	{
		return INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(inventoryId, guid1, guid2, p3);
	}
	BOOL _INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID_Export(int inventoryId, void* guid, int quantity, Hash removeReason)
	{
		return INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(inventoryId, guid, quantity, removeReason);
	}
	BOOL _INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID_Export(int inventoryId, Hash item, int quantity, Hash removeReason)
	{
		return INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(inventoryId, item, quantity, removeReason);
	}
	BOOL _INVENTORY_MOVE_INVENTORY_ITEM_Export(int inventoryId, void* guid1, void* guid2, Hash slotId, int quantity, void* outGuid)
	{
		return INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(inventoryId, guid1, guid2, slotId, quantity, outGuid);
	}
	BOOL _INVENTORY_SWAP_INVENTORY_ITEM_Export(int inventoryId, void* guid1, void* guid2)
	{
		return INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, guid1, guid2);
	}
	int _INVENTORY_CREATE_ITEM_COLLECTION_Export(int inventoryId, const char* filterName, Hash slotId, int* size)
	{
		return INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(inventoryId, filterName, slotId, size);
	}
	int _INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER_Export(int inventoryId, void* filter, int* numInCollection)
	{
		return INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(inventoryId, filter, numInCollection);
	}
	BOOL _INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX_Export(int collectionId, int itemIndex, void* itemData)
	{
		return INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(collectionId, itemIndex, itemData);
	}
	BOOL _INVENTORY_RELEASE_ITEM_COLLECTION_Export(int collectionId)
	{
		return INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
	}
	BOOL _INVENTORY_EQUIP_ITEM_WITH_GUID_Export(int inventoryId, void* guid, BOOL bEquipped)
	{
		return INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, guid, bEquipped);
	}
	BOOL _INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF_Export(int inventoryId, void* guid, Hash slotId, void* outGuid)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(inventoryId, guid, slotId, outGuid);
	}
	BOOL _INVENTORY_DOES_ITEM_OWN_EQUIPMENT_Export(int inventoryId, void* guid, Hash item)
	{
		return INVENTORY::_INVENTORY_DOES_ITEM_OWN_EQUIPMENT(inventoryId, guid, item);
	}
	BOOL _0xD08685BA892DBFAB_Export(int inventoryId, void* guid, int* p2, int* p3)
	{
		return INVENTORY::_0xD08685BA892DBFAB(inventoryId, guid, p2, p3);
	}
	void _0x0349404A22736740_Export(BOOL p0, int inventoryId, void* guid)
	{
		return INVENTORY::_0x0349404A22736740(p0, inventoryId, guid);
	}
	void _INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS_Export(int inventoryId, void* guid, int weatherEffectiveness)
	{
		return INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS(inventoryId, guid, weatherEffectiveness);
	}
	void _INVENTORY_DISABLE_ITEM_Export(int inventoryId, Hash item, Hash gtxReason)
	{
		return INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, gtxReason);
	}
	void _INVENTORY_ENABLE_ITEM_Export(int inventoryId, Hash item)
	{
		return INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}
	BOOL _INVENTORY_IS_INVENTORY_ITEM_EQUIPPED_Export(int inventoryId, Hash item, BOOL p2)
	{
		return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(inventoryId, item, p2);
	}
	BOOL _INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED_Export(int inventoryId, void* p1, BOOL enabled)
	{
		return INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED(inventoryId, p1, enabled);
	}
	BOOL _INVENTORY_IS_ITEM_EXPIRED_Export(void* itemGUID)
	{
		return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(itemGUID);
	}
	int _INVENTORY_GET_ITEM_EXPIRY_TIME_Export(void* itemGUID)
	{
		return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(itemGUID);
	}
	int _INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID_Export(int inventoryId, void* guid, BOOL p2)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(inventoryId, guid, p2);
	}
	int _INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID_Export(int inventoryId, Hash eInventoryItem, BOOL p2)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(inventoryId, eInventoryItem, p2);
	}
	BOOL _0xB1DD74A1F5536622_Export(int inventoryId, void* itemGUID)
	{
		return INVENTORY::_0xB1DD74A1F5536622(inventoryId, itemGUID);
	}
	int _INVENTORY_GET_CHILDREN_COUNT_Export(int inventoryId, void* parentGuid)
	{
		return INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, parentGuid);
	}
	int INVENTORY_GET_CHILDREN_IN_SLOT_COUNT_Export(int inventoryId, void* guid, Hash slotId)
	{
		return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, guid, slotId);
	}
	int _INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_Export(int inventoryId, void* guid, Hash slotId, int p3, void* p4)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, guid, slotId, p3, p4);
	}
	BOOL _INVENTORY_FITS_SLOT_ID_Export(Hash item, Hash slotId)
	{
		return INVENTORY::_INVENTORY_FITS_SLOT_ID(item, slotId);
	}
	Hash _GET_DEFAULT_ITEM_SLOT_INFO_Export(Hash item, Hash p1)
	{
		return INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(item, p1);
	}
	BOOL _INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT_Export(Hash p0, void* p1, int p2)
	{
		return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT(p0, p1, p2);
	}
	BOOL _0x9AC53CB6907B4428_Export(Hash item, void* p1, void* p2)
	{
		return INVENTORY::_0x9AC53CB6907B4428(item, p1, p2);
	}
	Hash _0x9D21B185ABC2DBC4_Export(Any data, const char* effects, BOOL p2, BOOL p3)
	{
		return INVENTORY::_0x9D21B185ABC2DBC4(data, effects, p2, p3);
	}
	void _0x75CFAC49301E134F_Export(Hash databindingEntryId, BOOL p1, BOOL p2)
	{
		return INVENTORY::_0x75CFAC49301E134F(databindingEntryId, p1, p2);
	}
	Hash _0x9D21B185ABC2DBC5_Export(Any data, const char* stats, int p2, int p3)
	{
		return INVENTORY::_0x9D21B185ABC2DBC5(data, stats, p2, p3);
	}
	void _0x75CFAC49301E134E_Export(Any data, BOOL p1, Ped ped)
	{
		return INVENTORY::_0x75CFAC49301E134E(data, p1, ped);
	}
	Hash _0x46DB71883EE9D5AF_Export(Any data, const char* stats, void* guid, Ped ped)
	{
		return INVENTORY::_0x46DB71883EE9D5AF(data, stats, guid, ped);
	}
	void _0x951847CEF3D829FF_Export(Any p0, void* outGuid, Ped ped)
	{
		return INVENTORY::_0x951847CEF3D829FF(p0, outGuid, ped);
	}
	BOOL _0x6862E4D93F64CF01_Export(int inventoryId, void* guid, Hash p2, void* p3)
	{
		return INVENTORY::_0x6862E4D93F64CF01(inventoryId, guid, p2, p3);
	}
	void _SET_USE_MISSION_INVENTORY_Export(BOOL toggle)
	{
		return INVENTORY::_SET_USE_MISSION_INVENTORY(toggle);
	}
	void INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS_Export()
	{
		return INVENTORY::INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS();
	}
	void _INVENTORY_USE_MISSION_INVENTORY_Export(BOOL enable, BOOL mirrorTransactions)
	{
		return INVENTORY::_INVENTORY_USE_MISSION_INVENTORY(enable, mirrorTransactions);
	}
	void INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY_Export(BOOL p0, BOOL p1, BOOL bCopySatchelItems, BOOL bCopyEmotes, BOOL bCopyHorse, BOOL p5)
	{
		return INVENTORY::INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY(p0, p1, bCopySatchelItems, bCopyEmotes, bCopyHorse, p5);
	}
	void _INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY_Export(void* guid, BOOL p1)
	{
		return INVENTORY::_INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY(guid, p1);
	}
	void _0xE36D4A38D28D9CFB_Export(BOOL p0)
	{
		return INVENTORY::_0xE36D4A38D28D9CFB(p0);
	}
	BOOL _INVENTORY_USE_SP_BACKUP_Export()
	{
		return INVENTORY::_INVENTORY_USE_SP_BACKUP();
	}
	BOOL _INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS_Export()
	{
		return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
	}
	void _INVENTORY_COPY_ITEM_TO_INVENTORY_Export(int inventoryId, int inventoryIdCloned, void* p2, Any p3)
	{
		return INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(inventoryId, inventoryIdCloned, p2, p3);
	}
	void _0x9E58207B194488AC_Export(Ped ped, int p1)
	{
		return INVENTORY::_0x9E58207B194488AC(ped, p1);
	}
	void _SET_ITEM_PROMPT_INFO_REQUEST_Export(void* p0)
	{
		return INVENTORY::_SET_ITEM_PROMPT_INFO_REQUEST(p0);
	}
	void _0x9B4E793B1CB6550A_Export()
	{
		return INVENTORY::_0x9B4E793B1CB6550A();
	}
	void _SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE_Export(void* data)
	{
		return INVENTORY::_SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE(data);
	}
	void _INVENTORY_ENABLE_WEAPONS_Export(int inventoryId)
	{
		return INVENTORY::_INVENTORY_ENABLE_WEAPONS(inventoryId);
	}
	void _INVENTORY_DISABLE_WEAPONS_Export(int inventoryId, Any p1)
	{
		return INVENTORY::_INVENTORY_DISABLE_WEAPONS(inventoryId, p1);
	}
	void _0xE1F45A67A9F0DCBC_Export(int inventoryId)
	{
		return INVENTORY::_0xE1F45A67A9F0DCBC(inventoryId);
	}
	void _0x6968CE7AC32F6788_Export(int inventoryId)
	{
		return INVENTORY::_0x6968CE7AC32F6788(inventoryId);
	}
	int _INVENTORY_CREATE_ITEM_COLLECTION_2_Export(int* collectionSize)
	{
		return INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_2(collectionSize);
	}
	int _INVENTORY_CREATE_SORTED_COLLECTION_Export(int inventoryId, int p1, int* size)
	{
		return INVENTORY::_INVENTORY_CREATE_SORTED_COLLECTION(inventoryId, p1, size);
	}
	BOOL _ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_Export(Any p0, Any p1, Hash slotId)
	{
		return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(p0, p1, slotId);
	}
	int _ITEMDATABASE_GET_FITS_SLOT_COUNT_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(p0);
	}
	BOOL _ITEMDATABASE_GET_FITS_SLOT_INFO_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(p0, p1, p2);
	}
	int _ITEMDATABASE_GET_HAS_SLOT_COUNT_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(p0);
	}
	BOOL _ITEMDATABASE_GET_HAS_SLOT_INFO_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(p0, p1, p2);
	}
	BOOL ITEMDATABASE_FILLOUT_ITEM_BY_NAME_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(p0, p1);
	}
	BOOL ITEMDATABASE_FILLOUT_ITEM_INFO_Export(Hash p0, void* p1)
	{
		return ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(p0, p1);
	}
	BOOL _ITEMDATABASE_FILLOUT_ACQUIRE_COST_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_FILLOUT_SELL_PRICE_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_FILLOUT_SATCHEL_DATA_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(p0, p1);
	}
	BOOL _ITEMDATABASE_FILLOUT_UI_DATA_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(p0, p1);
	}
	BOOL _0x74C3B1093728D263_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_0x74C3B1093728D263(p0, p1);
	}
	BOOL _ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(p0, p1);
	}
	BOOL ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(p0, p1);
	}
	BOOL _ITEMDATABASE_FILLOUT_TAG_DATA_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(p0, p1, p2, p3);
	}
	int _ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(p0);
	}
	BOOL _ITEMDATABASE_GET_ACQUIRE_COST_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(p0, p1, p2);
	}
	int _0xDEE7B3C76ED664BE_Export(Hash p0, Hash costShop)
	{
		return ITEMDATABASE::_0xDEE7B3C76ED664BE(p0, costShop);
	}
	BOOL _ITEMDATABASE_FILLOUT_ITEM_Export(Hash p0, Hash costShop, int fillOutIndex, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(p0, costShop, fillOutIndex, p3);
	}
	int _ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE(p0);
	}
	BOOL _0x1FC25AEB5F76B38D_Export(Any p0, int index, void* data)
	{
		return ITEMDATABASE::_0x1FC25AEB5F76B38D(p0, index, data);
	}
	int _0xF540239F9937033B_Export(Any award, Hash cost)
	{
		return ITEMDATABASE::_0xF540239F9937033B(award, cost);
	}
	BOOL _0xF27F01BBF5ACD3F3_Export(Any award, Hash cost, int index, Any p3)
	{
		return ITEMDATABASE::_0xF27F01BBF5ACD3F3(award, cost, index, p3);
	}
	int _ITEMDATABASE_CREATE_ITEM_COLLECTION_Export(void* p0, int* size, int comparisonType)
	{
		return ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(p0, size, comparisonType);
	}
	int _ITEMDATABASE_GET_COLLECTION_SIZE_Export(int collectionId)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(collectionId);
	}
	BOOL _ITEMDATABASE_GET_COMPONENT_ITEM_Export(int collectionId, int index, Hash* p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, index, p2);
	}
	BOOL _ITEMDATABASE_RELEASE_ITEM_COLLECTION_Export(int collectionId)
	{
		return ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId);
	}
	BOOL _ITEMDATABASE_IS_INTRINSIC_ITEM_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(p0);
	}
	BOOL _ITEMDATABASE_IS_OVERPOWERED_ITEM_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(p0);
	}
	BOOL _ITEMDATABASE_IS_KEY_VALID_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(p0, p1);
	}
	BOOL _0x537A0555F62CA01A_Export(Hash p0, Any p1)
	{
		return ITEMDATABASE::_0x537A0555F62CA01A(p0, p1);
	}
	int _ITEMDATABASE_GET_BUNDLE_ID_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ID(p0);
	}
	int _ITEMDATABASE_GET_BUNDLE_ITEM_COUNT_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(p0, p1);
	}
	BOOL _ITEMDATABASE_GET_BUNDLE_ITEM_INFO_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(p0, p1, p2, p3);
	}
	BOOL _ITEMDATABASE_IS_BUNDLE_VALID_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(p0, p1);
	}
	int _0x799FCD53358ED5FA_Export(Any bundle, Any p1)
	{
		return ITEMDATABASE::_0x799FCD53358ED5FA(bundle, p1);
	}
	BOOL _0xC4146375D8A0B374_Export(Any bundle, Any p1, int index, Any p3)
	{
		return ITEMDATABASE::_0xC4146375D8A0B374(bundle, p1, index, p3);
	}
	BOOL _0xA97EE5E4589FCF5A_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_0xA97EE5E4589FCF5A(p0, p1);
	}
	int _0x7A35A72A692BE9DB_Export(Any p0)
	{
		return ITEMDATABASE::_0x7A35A72A692BE9DB(p0);
	}
	BOOL _0x3A0B667ABFF87F6E_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_0x3A0B667ABFF87F6E(p0, p1, p2);
	}
	int _0x388088BFF3681189_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_0x388088BFF3681189(p0, p1);
	}
	BOOL _ITEMDATABASE_FILLOUT_BUNDLE_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(p0, p1, p2, p3);
	}
	BOOL _ITEMDATABASE_IS_SHOP_KEY_VALID_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_IS_SHOP_KEY_VALID(p0);
	}
	int _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(p0);
	}
	BOOL _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(p0, p1, p2, p3);
	}
	BOOL _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(p0, p1, p2, p3, p4);
	}
	BOOL _0x17721003A66C72BF_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_0x17721003A66C72BF(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID(p0);
	}
	BOOL _ITEMDATABASE_GET_SHOP_LAYOUT_INFO_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_INFO(p0, p1);
	}
	BOOL _ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(p0, p1, p2, p3);
	}
	BOOL _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(p0, p1, p2, p3);
	}
	BOOL _0xDBEADA0DF5F9AB9F_Export(Any p0, int index, Any menuKey)
	{
		return ITEMDATABASE::_0xDBEADA0DF5F9AB9F(p0, index, menuKey);
	}
	BOOL _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(p0, p1, p2, p3, p4, p5);
	}
	BOOL ITEMDATABASE_IS_BUYABLE_AWARD_VALID_Export(Any p0)
	{
		return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(p0);
	}
	BOOL _ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(p0, p1, p2, p3);
	}
	BOOL _0xF8D09EF8CE61D7BF_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_0xF8D09EF8CE61D7BF(p0, p1);
	}
	BOOL _ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(p0, p1);
	}
	BOOL _ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(p0, p1);
	}
	int _ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(p0);
	}
	Hash _ITEMDATABASE_GET_MODIFIED_PRICE_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(p0, p1);
	}
	int _ITEMDATABASE_GET_NUMBER_OF_MODIFIERS_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(p0);
	}
	BOOL _ITEMDATABASE_FILLOUT_MODIFIER_Export(Any p0, Any p1, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(p0, p1, p2);
	}
	BOOL _ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD_Export(Hash award)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(award);
	}
	int _ITEMDATABASE_GET_AWARD_ITEM_COUNT_Export(Hash award)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(award);
	}
	int _0x48229CE0C7938237_Export(Hash award)
	{
		return ITEMDATABASE::_0x48229CE0C7938237(award);
	}
	BOOL _ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO_Export(Hash award, int index, Hash* currency)
	{
		return ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(award, index, currency);
	}
	BOOL _0x8D029948CA29409B_Export(Hash award, Any p1, Any p2)
	{
		return ITEMDATABASE::_0x8D029948CA29409B(award, p1, p2);
	}
	BOOL _ITEMDATABASE_GET_AWARD_COST_MODIFIERS_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(p0, p1);
	}
	BOOL _0xD076DB9B96FAADF1_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_0xD076DB9B96FAADF1(p0, p1);
	}
	BOOL _ITEMDATABASE_DOES_ITEM_HAVE_TAG_Export(Hash item, Hash tag, Hash tagType)
	{
		return ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(item, tag, tagType);
	}
	BOOL _ITEMDATABASE_DOES_BUNDLE_HAVE_TAG_Export(Hash bundle, Hash tag, Hash tagType)
	{
		return ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(bundle, tag, tagType);
	}
	Hash _ITEMDATABASE_GET_ITEM_TAG_TYPE_Export(Hash item, Hash tag)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_TAG_TYPE(item, tag);
	}
	int _0x8870895BA5ED9385_Export(Any p0, Hash tagType, Any p2)
	{
		return ITEMDATABASE::_0x8870895BA5ED9385(p0, tagType, p2);
	}
	int _ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES_Export(Any p0)
	{
		return ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(p0);
	}
	int _ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(p0, p1);
	}
	Any _ITEMDATABASE_LOCALIZATION_GET_TYPE_Export(Any p0, Any p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(p0, p1);
	}
	int _ITEMDATABASE_LOCALIZATION_GET_VALUE_Export(Any p0, Hash label, Any p2)
	{
		return ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(p0, label, p2);
	}
	int _ITEMDATABASE_GET_ITEM_PATHSET_Export(int item, int p1)
	{
		return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(item, p1);
	}
	Hash _0xAA29A5F13B2C20B2_Export(Any p0, Hash p1)
	{
		return ITEMDATABASE::_0xAA29A5F13B2C20B2(p0, p1);
	}
	ItemSet CREATE_ITEMSET_Export(BOOL autoClean)
	{
		return ITEMSET::CREATE_ITEMSET(autoClean);
	}
	void DESTROY_ITEMSET_Export(ItemSet itemSet)
	{
		return ITEMSET::DESTROY_ITEMSET(itemSet);
	}
	BOOL IS_ITEMSET_VALID_Export(ItemSet itemSet)
	{
		return ITEMSET::IS_ITEMSET_VALID(itemSet);
	}
	BOOL ADD_TO_ITEMSET_Export(ScrHandle itemToAdd, ItemSet itemSetToAddTo)
	{
		return ITEMSET::ADD_TO_ITEMSET(itemToAdd, itemSetToAddTo);
	}
	void REMOVE_FROM_ITEMSET_Export(ScrHandle itemToRemove, ItemSet itemSetToRemoveFrom)
	{
		return ITEMSET::REMOVE_FROM_ITEMSET(itemToRemove, itemSetToRemoveFrom);
	}
	int GET_ITEMSET_SIZE_Export(ItemSet itemSet)
	{
		return ITEMSET::GET_ITEMSET_SIZE(itemSet);
	}
	ScrHandle GET_INDEXED_ITEM_IN_ITEMSET_Export(int indexInSet, ItemSet itemSet)
	{
		return ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(indexInSet, itemSet);
	}
	Any GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET_Export(int index, ItemSet itemset)
	{
		return ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(index, itemset);
	}
	BOOL IS_IN_ITEMSET_Export(ScrHandle objToCheck, ItemSet itemSet)
	{
		return ITEMSET::IS_IN_ITEMSET(objToCheck, itemSet);
	}
	void CLEAN_ITEMSET_Export(ItemSet itemSet)
	{
		return ITEMSET::CLEAN_ITEMSET(itemSet);
	}
	void _CLEAR_ITEMSET_Export(ItemSet itemset)
	{
		return ITEMSET::_CLEAR_ITEMSET(itemset);
	}
	void _REPORT_CRIME_Export(Player player, Hash crimeType, int bounty, Entity entity, BOOL isKnownSuspect)
	{
		return LAW::_REPORT_CRIME(player, crimeType, bounty, entity, isKnownSuspect);
	}
	void SUPPRESS_CRIME_THIS_FRAME_Export(Player player, Hash crimeType, int p2, int p3, int p4)
	{
		return LAW::SUPPRESS_CRIME_THIS_FRAME(player, crimeType, p2, p3, p4);
	}
	int NUM_CRIMES_SUPPRESSED_Export(Player player, Hash crimeType)
	{
		return LAW::NUM_CRIMES_SUPPRESSED(player, crimeType);
	}
	Any _0xFFEBE5AA96BC2E4E_Export(Ped ped, Hash crimeType, BOOL p2)
	{
		return LAW::_0xFFEBE5AA96BC2E4E(ped, crimeType, p2);
	}
	void _0x15ABD5004CAD2D99_Export(int p0)
	{
		return LAW::_0x15ABD5004CAD2D99(p0);
	}
	void _0xF611DE44AEB36A1D_Export(Hash crimeType, BOOL p1)
	{
		return LAW::_0xF611DE44AEB36A1D(crimeType, p1);
	}
	BOOL _0x3D2674828A4E6B3C_Export()
	{
		return LAW::_0x3D2674828A4E6B3C();
	}
	void _0xC5EB2755FA25F1E9_Export(BOOL p0)
	{
		return LAW::_0xC5EB2755FA25F1E9(p0);
	}
	int GET_BOUNTY_Export(Player player)
	{
		return LAW::GET_BOUNTY(player);
	}
	void ADD_BOUNTY_Export(Player player, int itemValueAmount)
	{
		return LAW::ADD_BOUNTY(player, itemValueAmount);
	}
	void SET_BOUNTY_Export(Player player, int amount)
	{
		return LAW::SET_BOUNTY(player, amount);
	}
	void CLEAR_BOUNTY_Export(Player player)
	{
		return LAW::CLEAR_BOUNTY(player);
	}
	int GET_WANTED_SCORE_Export(Player player)
	{
		return LAW::GET_WANTED_SCORE(player);
	}
	void SET_WANTED_SCORE_Export(Player player, int intensity)
	{
		return LAW::SET_WANTED_SCORE(player, intensity);
	}
	void CLEAR_WANTED_SCORE_Export(Player player)
	{
		return LAW::CLEAR_WANTED_SCORE(player);
	}
	void _0x331D349E0380B097_Export(Any p0)
	{
		return LAW::_0x331D349E0380B097(p0);
	}
	void _0x292AD61A33A7A485_Export()
	{
		return LAW::_0x292AD61A33A7A485();
	}
	void _0x07E8B8B20570271C_Export(Player player)
	{
		return LAW::_0x07E8B8B20570271C(player);
	}
	void _0x22741652985C84D0_Export(Player player, Hash lawRegionHash)
	{
		return LAW::_0x22741652985C84D0(player, lawRegionHash);
	}
	void _REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE_Export(Player player, Hash dispatchResponseHash)
	{
		return LAW::_REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE(player, dispatchResponseHash);
	}
	BOOL _0x9EF07CFBB19A9733_Export()
	{
		return LAW::_0x9EF07CFBB19A9733();
	}
	void _SET_LAW_DISABLED_Export(BOOL toggle)
	{
		return LAW::_SET_LAW_DISABLED(toggle);
	}
	void _FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY_Export()
	{
		return LAW::_FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY();
	}
	void _SET_LAW_REGION_Export(Player player, Hash lawRegionHash, Hash stateHash)
	{
		return LAW::_SET_LAW_REGION(player, lawRegionHash, stateHash);
	}
	void _0x5E6F375CA101C108_Export(Player player, BOOL p1)
	{
		return LAW::_0x5E6F375CA101C108(player, p1);
	}
	void _SET_LAW_RBS_VOLUME_Export(Player player, Hash p1)
	{
		return LAW::_SET_LAW_RBS_VOLUME(player, p1);
	}
	BOOL IS_LAW_INCIDENT_ACTIVE_Export(Player player)
	{
		return LAW::IS_LAW_INCIDENT_ACTIVE(player);
	}
	Hash _0x148E7AC8141C9E64_Export(Player player)
	{
		return LAW::_0x148E7AC8141C9E64(player);
	}
	void _0xEDFC6C1FD1C964F5_Export(Player player, Hash crimeType, int bounty, float p3, float p4, BOOL p5, float p6, float p7, Any p8)
	{
		return LAW::_0xEDFC6C1FD1C964F5(player, crimeType, bounty, p3, p4, p5, p6, p7, p8);
	}
	BOOL _LAW_WITNESS_RESPONSE_TASK_Export(Ped pedGroup1, Ped ped, Ped pedGroup2, float x, float y, float z, Hash crimeType)
	{
		return LAW::_LAW_WITNESS_RESPONSE_TASK(pedGroup1, ped, pedGroup2, x, y, z, crimeType);
	}
	Any _0x018F30D762E62DF8_Export(Ped ped, void* p1)
	{
		return LAW::_0x018F30D762E62DF8(ped, p1);
	}
	Any _0x318F0F9A4426CFA2_Export(Ped ped, void* p1)
	{
		return LAW::_0x318F0F9A4426CFA2(ped, p1);
	}
	Any _0x95878B13E272EF1F_Export(Entity entity, Ped ped, BOOL p2, float x, float y, float z, Hash crimeType)
	{
		return LAW::_0x95878B13E272EF1F(entity, ped, p2, x, y, z, crimeType);
	}
	void _ADD_WITNESS_RESPONSE_Export(Player player, Hash crimeType, Ped pedGroup)
	{
		return LAW::_ADD_WITNESS_RESPONSE(player, crimeType, pedGroup);
	}
	void _0xD7494DED50C6EF52_Export(Player player, Hash crimeType, int p2)
	{
		return LAW::_0xD7494DED50C6EF52(player, crimeType, p2);
	}
	BOOL ARE_WITNESSES_ACTIVE_Export(Player player)
	{
		return LAW::ARE_WITNESSES_ACTIVE(player);
	}
	BOOL _ARE_WITNESSES_PENDING_Export(Player player)
	{
		return LAW::_ARE_WITNESSES_PENDING(player);
	}
	BOOL _ARE_INVESTIGATORS_ACTIVE_Export(Player player, BOOL areInvestigatorsActive, Any p2)
	{
		return LAW::_ARE_INVESTIGATORS_ACTIVE(player, areInvestigatorsActive, p2);
	}
	void _0x522F74636DF10201_Export(Player player, ItemSet itemSet)
	{
		return LAW::_0x522F74636DF10201(player, itemSet);
	}
	void _0xDA1A9ADC4E3D4B16_Export(ItemSet itemSet, BOOL p1, BOOL p2)
	{
		return LAW::_0xDA1A9ADC4E3D4B16(itemSet, p1, p2);
	}
	void _ENABLE_DISPATCH_LAW_Export(BOOL toggle)
	{
		return LAW::_ENABLE_DISPATCH_LAW(toggle);
	}
	void _ENABLE_DISPATCH_LAW_2_Export(BOOL toggle)
	{
		return LAW::_ENABLE_DISPATCH_LAW_2(toggle);
	}
	BOOL _ARE_ANY_LAW_PEDS_INVESTIGATING_Export()
	{
		return LAW::_ARE_ANY_LAW_PEDS_INVESTIGATING();
	}
	BOOL _ARE_LAW_PEDS_ENABLED_FOR_TRAIN_Export()
	{
		return LAW::_ARE_LAW_PEDS_ENABLED_FOR_TRAIN();
	}
	void _0x82F11E1296996574_Export(int p0)
	{
		return LAW::_0x82F11E1296996574(p0);
	}
	void _0x3852237A3D9DF145_Export(int p0)
	{
		return LAW::_0x3852237A3D9DF145(p0);
	}
	BOOL _0x0EAF918F751F27BA_Export(Ped ped)
	{
		return LAW::_0x0EAF918F751F27BA(ped);
	}
	BOOL _0xC0DF161950FB101E_Export(Ped ped)
	{
		return LAW::_0xC0DF161950FB101E(ped);
	}
	Any _0xE4D6E45F491A66CB_Export(Player player, int p1)
	{
		return LAW::_0xE4D6E45F491A66CB(player, p1);
	}
	int _0xE9EB79CBF9C0F58A_Export(Player player)
	{
		return LAW::_0xE9EB79CBF9C0F58A(player);
	}
	void _0x21213B833EF4DAE7_Export(Player player, Ped ped, scrVector* outCoords)
	{
		return LAW::_0x21213B833EF4DAE7(player, ped, outCoords);
	}
	void _0x61B98367D93F012F_Export(Player player)
	{
		return LAW::_0x61B98367D93F012F(player);
	}
	void _0x6ABC50979655BEE7_Export(Player player, Hash* crimeType, Any p2)
	{
		return LAW::_0x6ABC50979655BEE7(player, crimeType, p2);
	}
	void _0x390710D2DAFA6BFF_Export(Player player, BOOL p1)
	{
		return LAW::_0x390710D2DAFA6BFF(player, p1);
	}
	int _GET_CRIME_BOUNTY_AMOUNT_BY_TYPE_Export(Hash crimeType)
	{
		return LAW::_GET_CRIME_BOUNTY_AMOUNT_BY_TYPE(crimeType);
	}
	int _0xDAEFDFDB2AEECE37_Export(Hash crimeType, Any p1)
	{
		return LAW::_0xDAEFDFDB2AEECE37(crimeType, p1);
	}
	Hash _GET_HUD_PLAYER_CRIME_TYPE_Export(Player player)
	{
		return LAW::_GET_HUD_PLAYER_CRIME_TYPE(player);
	}
	int _0xE083BEDA81709891_Export(Player player)
	{
		return LAW::_0xE083BEDA81709891(player);
	}
	BOOL _0x89E005B1662F6E48_Export(Player player, int p1, int p2)
	{
		return LAW::_0x89E005B1662F6E48(player, p1, p2);
	}
	BOOL _0x3738B784DDD35CC6_Export(Player player, int p1, int p2)
	{
		return LAW::_0x3738B784DDD35CC6(player, p1, p2);
	}
	int _0x0BDFEBCF40A5F7E3_Export(Hash crimeType)
	{
		return LAW::_0x0BDFEBCF40A5F7E3(crimeType);
	}
	void _SET_CUSTOM_LAW_DISPATCH_RESPONSE_Export(Hash dispatchResponseHash)
	{
		return LAW::_SET_CUSTOM_LAW_DISPATCH_RESPONSE(dispatchResponseHash);
	}
	Any _CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS_Export(float x, float y, float z, Hash dispatchResponseHash)
	{
		return LAW::_CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS(x, y, z, dispatchResponseHash);
	}
	void _SET_BOUNTY_HUNTER_PURSUIT_CLEARED_Export()
	{
		return LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
	}
	void _0xBD944A3D36E992DE_Export()
	{
		return LAW::_0xBD944A3D36E992DE();
	}
	void _0x987BE590FB9D41E5_Export(BOOL p0)
	{
		return LAW::_0x987BE590FB9D41E5(p0);
	}
	void _0xDCF12B89624AAC96_Export(BOOL p0)
	{
		return LAW::_0xDCF12B89624AAC96(p0);
	}
	void _0xDDCE8E960D1DE240_Export(BOOL p0)
	{
		return LAW::_0xDDCE8E960D1DE240(p0);
	}
	void _0xDEA083C16BB91345_Export()
	{
		return LAW::_0xDEA083C16BB91345();
	}
	void _0x9C8A2BF37E966464_Export(Player player, ItemSet itemSet)
	{
		return LAW::_0x9C8A2BF37E966464(player, itemSet);
	}
	BOOL _0x9D5C9A5A3321B128_Export(Player player)
	{
		return LAW::_0x9D5C9A5A3321B128(player);
	}
	BOOL _0x0F230DE0DDBE3649_Export(Player player)
	{
		return LAW::_0x0F230DE0DDBE3649(player);
	}
	BOOL _0x9945A3E2528A02E8_Export(Player player)
	{
		return LAW::_0x9945A3E2528A02E8(player);
	}
	float _GET_TIME_SINCE_LAST_SEEN_BY_LAW_Export(Player player)
	{
		return LAW::_GET_TIME_SINCE_LAST_SEEN_BY_LAW(player);
	}
	void _0x9B4C564BFA7CFF37_Export(float p0)
	{
		return LAW::_0x9B4C564BFA7CFF37(p0);
	}
	void _SET_ALLOW_DISABLED_LAW_RESPONSES_Export(BOOL toggle)
	{
		return LAW::_SET_ALLOW_DISABLED_LAW_RESPONSES(toggle);
	}
	void RESET_WANTED_FOR_NEW_INCIDENT_Export(Player player)
	{
		return LAW::RESET_WANTED_FOR_NEW_INCIDENT(player);
	}
	BOOL _0x856CE8FDE2416602_Export(Ped ped)
	{
		return LAW::_0x856CE8FDE2416602(ped);
	}
	BOOL _0x7351DA734F989F4E_Export(Entity entity)
	{
		return LAW::_0x7351DA734F989F4E(entity);
	}
	int _GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_Export(Hash p0)
	{
		return LAW::_GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(p0);
	}
	void _SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_Export(Hash p0, int p1)
	{
		return LAW::_SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(p0, p1);
	}
	void _0x2001687F9562FD9D_Export(Any p0)
	{
		return LAW::_0x2001687F9562FD9D(p0);
	}
	void _PAUSE_BOUNTY_HUNTER_COOLDOWN_Export(Hash p0, BOOL p1, Any p2)
	{
		return LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(p0, p1, p2);
	}
	void _0xE9AC8466ABE484BB_Export(BOOL p0, Any p1)
	{
		return LAW::_0xE9AC8466ABE484BB(p0, p1);
	}
	BOOL _0x40851BCC33ACD9AB_Export(Ped ped)
	{
		return LAW::_0x40851BCC33ACD9AB(ped);
	}
	BOOL _0xF46108C50A22B029_Export()
	{
		return LAW::_0xF46108C50A22B029();
	}
	void _0x7803436E68C32B26_Export()
	{
		return LAW::_0x7803436E68C32B26();
	}
	void _0xC310239ACCCF5579_Export()
	{
		return LAW::_0xC310239ACCCF5579();
	}
	void _0x29CD4896ECB66C12_Export()
	{
		return LAW::_0x29CD4896ECB66C12();
	}
	void _0xE94B5E938619712E_Export()
	{
		return LAW::_0xE94B5E938619712E();
	}
	int _0x7FC667F6DDFBCDCC_Export(Player player)
	{
		return LAW::_0x7FC667F6DDFBCDCC(player);
	}
	void _0x9C5BD8C562565CE6_Export(Hash* crimeType)
	{
		return LAW::_0x9C5BD8C562565CE6(crimeType);
	}
	void _0xCBFB4951F2E3934C_Export(Player player, void* data)
	{
		return LAW::_0xCBFB4951F2E3934C(player, data);
	}
	void _SET_PED_LAW_BEHAVIOUR_Export(Ped ped, int behaviour)
	{
		return LAW::_SET_PED_LAW_BEHAVIOUR(ped, behaviour);
	}
	void _0x00DB0BC05E3FAA4E_Export(Ped ped, int bitset)
	{
		return LAW::_0x00DB0BC05E3FAA4E(ped, bitset);
	}
	void _0x0C392DB374655176_Export(float x, float y, float z, float p3, ItemSet itemSet)
	{
		return LAW::_0x0C392DB374655176(x, y, z, p3, itemSet);
	}
	Any _0xC687A23E166DCF68_Export(void* p0)
	{
		return LAW::_0xC687A23E166DCF68(p0);
	}
	void _SET_DISPATCH_MULTIPLIER_OVERRIDE_Export(float multiplier)
	{
		return LAW::_SET_DISPATCH_MULTIPLIER_OVERRIDE(multiplier);
	}
	BOOL _0x26934083D3F2579C_Export(Player player)
	{
		return LAW::_0x26934083D3F2579C(player);
	}
	BOOL GET_PLAYER_REGISTERED_CRIME_Export(Player player, int p1, Hash* crimeType)
	{
		return LAW::GET_PLAYER_REGISTERED_CRIME(player, p1, crimeType);
	}
	BOOL _0xB527099D1E1EED49_Export(Player player, int p1, Hash* crimeType)
	{
		return LAW::_0xB527099D1E1EED49(player, p1, crimeType);
	}
	void CLEAR_PLAYER_PAST_CRIMES_Export(Player player)
	{
		return LAW::CLEAR_PLAYER_PAST_CRIMES(player);
	}
	void SET_PLAYER_ARRESTED_IN_REGION_Export(Player player, Hash lawRegionHash)
	{
		return LAW::SET_PLAYER_ARRESTED_IN_REGION(player, lawRegionHash);
	}
	void SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION_Export(Player player, Hash lawRegionHash)
	{
		return LAW::SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION(player, lawRegionHash);
	}
	void _0xD6C0A8C7C0B2F82C_Export(Player player, BOOL p1)
	{
		return LAW::_0xD6C0A8C7C0B2F82C(player, p1);
	}
	void SET_LAW_SENSE_RANGE_MODIFIER_Export(Player player, float range)
	{
		return LAW::SET_LAW_SENSE_RANGE_MODIFIER(player, range);
	}
	void _0x7EF2A2FE38D74456_Export(int flag, BOOL p1)
	{
		return LAW::_0x7EF2A2FE38D74456(flag, p1);
	}
	BOOL _0xC7DC5A0A7DF608CB_Export(int flag)
	{
		return LAW::_0xC7DC5A0A7DF608CB(flag);
	}
	void SET_DISABLE_DISTURBANCE_CRIMES_Export(Player player, BOOL p1)
	{
		return LAW::SET_DISABLE_DISTURBANCE_CRIMES(player, p1);
	}
	void SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT_Export(Player player, BOOL p1)
	{
		return LAW::SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT(player, p1);
	}
	void _CREATE_GUARD_ZONE_Export(const char* name)
	{
		return LAW::_CREATE_GUARD_ZONE(name);
	}
	void _REMOVE_GUARD_ZONE_Export(const char* name)
	{
		return LAW::_REMOVE_GUARD_ZONE(name);
	}
	void _0x9772395CC73E8D1F_Export(Ped ped, const char* name)
	{
		return LAW::_0x9772395CC73E8D1F(ped, name);
	}
	void _DISABLE_GUARD_ZONE_Export(const char* name)
	{
		return LAW::_DISABLE_GUARD_ZONE(name);
	}
	BOOL _0x0DBACA9C38C9A686_Export(const char* name)
	{
		return LAW::_0x0DBACA9C38C9A686(name);
	}
	BOOL _IS_GUARD_PED_INVESTIGATING_Export(Ped ped)
	{
		return LAW::_IS_GUARD_PED_INVESTIGATING(ped);
	}
	BOOL _CREATE_GUARD_ZONE_FOR_ENTITY_Export(const char* guardZoneName, Entity entity, float x, float y, float z)
	{
		return LAW::_CREATE_GUARD_ZONE_FOR_ENTITY(guardZoneName, entity, x, y, z);
	}
	void _SET_GUARD_ZONE_VOLUME_REGISTRATION_START_Export(const char* name, Volume volume)
	{
		return LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(name, volume);
	}
	void _SET_GUARD_ZONE_VOLUME_RESTRICTED_Export(const char* name, Volume volume)
	{
		return LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(name, volume);
	}
	void _SET_GUARD_ZONE_VOLUME_THREAT_Export(const char* name, Volume volume)
	{
		return LAW::_SET_GUARD_ZONE_VOLUME_THREAT(name, volume);
	}
	void _SET_GUARD_ZONE_VOLUME_WARNING_Export(const char* name, Volume volume)
	{
		return LAW::_SET_GUARD_ZONE_VOLUME_WARNING(name, volume);
	}
	void _SET_GUARD_ZONE_VOLUME_REGISTRATION_END_Export(const char* name, Volume volume)
	{
		return LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(name, volume);
	}
	void _SET_GUARD_ZONE_POSITION_Export(const char* name, float x, float y, float z)
	{
		return LAW::_SET_GUARD_ZONE_POSITION(name, x, y, z);
	}
	void _SET_GUARD_ZONE_POSITION_2_Export(const char* name, float x, float y, float z)
	{
		return LAW::_SET_GUARD_ZONE_POSITION_2(name, x, y, z);
	}
	int LOCALIZATION_GET_SYSTEM_LANGUAGE_Export()
	{
		return LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
	}
	int GET_CURRENT_LANGUAGE_Export()
	{
		return LOCALIZATION::GET_CURRENT_LANGUAGE();
	}
	BOOL _DOES_CURRENT_LANGUAGE_SUPPORT_CONDENSED_STYLE_Export()
	{
		return LOCALIZATION::_DOES_CURRENT_LANGUAGE_SUPPORT_CONDENSED_STYLE();
	}
	int LOCALIZATION_GET_SYSTEM_DATE_TYPE_Export()
	{
		return LOCALIZATION::LOCALIZATION_GET_SYSTEM_DATE_TYPE();
	}
	Blip GET_BLIP_FROM_ENTITY_Export(Entity entityIndex)
	{
		return MAP::GET_BLIP_FROM_ENTITY(entityIndex);
	}
	Blip GET_MAIN_PLAYER_BLIP_ID_Export()
	{
		return MAP::GET_MAIN_PLAYER_BLIP_ID();
	}
	Blip _BLIP_ADD_FOR_STYLE_Export(Hash styleHash)
	{
		return MAP::_BLIP_ADD_FOR_STYLE(styleHash);
	}
	Blip BLIP_ADD_FOR_COORDS_Export(Hash blipHash, float x, float y, float z)
	{
		return MAP::BLIP_ADD_FOR_COORDS(blipHash, x, y, z);
	}
	Blip BLIP_ADD_FOR_ENTITY_Export(Hash blipHash, Entity entity)
	{
		return MAP::BLIP_ADD_FOR_ENTITY(blipHash, entity);
	}
	Blip BLIP_ADD_FOR_PICKUP_PLACEMENT_Export(Hash blipHash, Pickup pickup)
	{
		return MAP::BLIP_ADD_FOR_PICKUP_PLACEMENT(blipHash, pickup);
	}
	Blip BLIP_ADD_FOR_RADIUS_Export(Hash blipHash, float x, float y, float z, float radius)
	{
		return MAP::BLIP_ADD_FOR_RADIUS(blipHash, x, y, z, radius);
	}
	Blip _BLIP_ADD_FOR_AREA_Export(Hash blipHash, float x, float y, float z, float scaleX, float scaleY, float scaleZ, int p7)
	{
		return MAP::_BLIP_ADD_FOR_AREA(blipHash, x, y, z, scaleX, scaleY, scaleZ, p7);
	}
	Blip _BLIP_ADD_FOR_VOLUME_Export(Hash blipHash, Volume volume)
	{
		return MAP::_BLIP_ADD_FOR_VOLUME(blipHash, volume);
	}
	BOOL _BLIP_SET_STYLE_Export(Blip blip, Hash styleHash)
	{
		return MAP::_BLIP_SET_STYLE(blip, styleHash);
	}
	BOOL _BLIP_ADD_STYLE_Export(Blip blip, Hash styleHash)
	{
		return MAP::_BLIP_ADD_STYLE(blip, styleHash);
	}
	BOOL BLIP_ADD_MODIFIER_Export(Blip blip, Hash modifierHash)
	{
		return MAP::BLIP_ADD_MODIFIER(blip, modifierHash);
	}
	BOOL BLIP_REMOVE_MODIFIER_Export(Blip blip, Hash modifierHash)
	{
		return MAP::BLIP_REMOVE_MODIFIER(blip, modifierHash);
	}
	void _0x250C75EB1728CC0D_Export(Blip blip)
	{
		return MAP::_0x250C75EB1728CC0D(blip);
	}
	void SET_BLIP_FLASH_TIMER_Export(Blip blip, int blipType, Hash blipHash)
	{
		return MAP::SET_BLIP_FLASH_TIMER(blip, blipType, blipHash);
	}
	BOOL SET_BLIP_FLASHES_Export(Blip blip, int* p1, Hash* p2)
	{
		return MAP::SET_BLIP_FLASHES(blip, p1, p2);
	}
	void TRIGGER_SONAR_BLIP_Export(Hash typeHash, float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		return MAP::TRIGGER_SONAR_BLIP(typeHash, VecCoorsX, VecCoorsY, VecCoorsZ);
	}
	void _TRIGGER_SONAR_BLIP_ON_ENTITY_Export(Hash typeHash, Entity entity)
	{
		return MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(typeHash, entity);
	}
	void ALLOW_SONAR_BLIPS_Export(BOOL bSet)
	{
		return MAP::ALLOW_SONAR_BLIPS(bSet);
	}
	void SET_BLIP_COORDS_Export(Blip BlipIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		return MAP::SET_BLIP_COORDS(BlipIndex, VecCoorsX, VecCoorsY, VecCoorsZ);
	}
	scrVector GET_BLIP_COORDS_Export(Blip BlipIndex)
	{
		return MAP::GET_BLIP_COORDS(BlipIndex);
	}
	void SET_BLIP_SPRITE_Export(Blip blip, Hash hash, BOOL p2)
	{
		return MAP::SET_BLIP_SPRITE(blip, hash, p2);
	}
	Any _0x01B928CA2E198B01_Export(Any p0)
	{
		return MAP::_0x01B928CA2E198B01(p0);
	}
	void SET_BLIP_NAME_FROM_TEXT_FILE_Export(Blip blip, const char* pTextLabel)
	{
		return MAP::SET_BLIP_NAME_FROM_TEXT_FILE(blip, pTextLabel);
	}
	void _SET_BLIP_NAME_Export(Blip blip, const char* name)
	{
		return MAP::_SET_BLIP_NAME(blip, name);
	}
	void SET_BLIP_NAME_TO_PLAYER_NAME_Export(Blip blip, Player PlayerIndex)
	{
		return MAP::SET_BLIP_NAME_TO_PLAYER_NAME(blip, PlayerIndex);
	}
	void SET_BLIP_ROTATION_Export(Blip blipIndex, int iDegrees)
	{
		return MAP::SET_BLIP_ROTATION(blipIndex, iDegrees);
	}
	void SET_BLIP_SCALE_Export(Blip blip, float scale)
	{
		return MAP::SET_BLIP_SCALE(blip, scale);
	}
	void REMOVE_BLIP_Export(Blip* BlipId)
	{
		return MAP::REMOVE_BLIP(BlipId);
	}
	BOOL DOES_BLIP_EXIST_Export(Blip blipIndex)
	{
		return MAP::DOES_BLIP_EXIST(blipIndex);
	}
	BOOL _DOES_ENTITY_HAVE_BLIP_Export(Entity entity)
	{
		return MAP::_DOES_ENTITY_HAVE_BLIP(entity);
	}
	void SET_RADAR_ZOOM_Export(int ZoomValue)
	{
		return MAP::SET_RADAR_ZOOM(ZoomValue);
	}
	void _ABANDON_BLIP_Export(Blip blip)
	{
		return MAP::_ABANDON_BLIP(blip);
	}
	BOOL _IS_BLIP_ATTACHED_TO_ANY_ENTITY_Export(Blip blip)
	{
		return MAP::_IS_BLIP_ATTACHED_TO_ANY_ENTITY(blip);
	}
	BOOL IS_BLIP_ON_MINIMAP_Export(Blip BlipIndex)
	{
		return MAP::IS_BLIP_ON_MINIMAP(BlipIndex);
	}
	Any FORCE_SONAR_BLIPS_THIS_FRAME_Export()
	{
		return MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	void SET_GPS_FLAGS_Export(int iFlags, float fBlippedRouteDisplayDistance)
	{
		return MAP::SET_GPS_FLAGS(iFlags, fBlippedRouteDisplayDistance);
	}
	void CLEAR_GPS_FLAGS_Export()
	{
		return MAP::CLEAR_GPS_FLAGS();
	}
	void SET_GPS_CUSTOM_ROUTE_RENDER_Export(BOOL bOn, int iRouteWidthMiniMap, int iRouteWidthPauseMap)
	{
		return MAP::SET_GPS_CUSTOM_ROUTE_RENDER(bOn, iRouteWidthMiniMap, iRouteWidthPauseMap);
	}
	void CLEAR_GPS_CUSTOM_ROUTE_Export()
	{
		return MAP::CLEAR_GPS_CUSTOM_ROUTE();
	}
	void START_GPS_MULTI_ROUTE_Export(Hash colorNameHash, BOOL bOnFoot, BOOL inVehicle)
	{
		return MAP::START_GPS_MULTI_ROUTE(colorNameHash, bOnFoot, inVehicle);
	}
	void ADD_POINT_TO_GPS_MULTI_ROUTE_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, BOOL p3)
	{
		return MAP::ADD_POINT_TO_GPS_MULTI_ROUTE(VecCoorsX, VecCoorsY, VecCoorsZ, p3);
	}
	void SET_GPS_MULTI_ROUTE_RENDER_Export(BOOL bOn)
	{
		return MAP::SET_GPS_MULTI_ROUTE_RENDER(bOn);
	}
	void CLEAR_GPS_MULTI_ROUTE_Export()
	{
		return MAP::CLEAR_GPS_MULTI_ROUTE();
	}
	void _START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE_Export(const char* waypointRecording, int point, int numPoints, Hash colorNameHash, BOOL p4, BOOL p5)
	{
		return MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(waypointRecording, point, numPoints, colorNameHash, p4, p5);
	}
	void CLEAR_GPS_PLAYER_WAYPOINT_Export()
	{
		return MAP::CLEAR_GPS_PLAYER_WAYPOINT();
	}
	void _0xD3F58E9316B7FC2A_Export(Any p0)
	{
		return MAP::_0xD3F58E9316B7FC2A(p0);
	}
	void SET_WAYPOINT_OFF_Export()
	{
		return MAP::SET_WAYPOINT_OFF();
	}
	BOOL IS_WAYPOINT_ACTIVE_Export()
	{
		return MAP::IS_WAYPOINT_ACTIVE();
	}
	scrVector _GET_WAYPOINT_COORDS_Export()
	{
		return MAP::_GET_WAYPOINT_COORDS();
	}
	BOOL _0xF08E42BFA46BDFF8_Export(Any p0, Any p1)
	{
		return MAP::_0xF08E42BFA46BDFF8(p0, p1);
	}
	void _HIDE_ACTIVE_POINTS_OF_INTEREST_Export()
	{
		return MAP::_HIDE_ACTIVE_POINTS_OF_INTEREST();
	}
	void _SHOW_ACTIVE_POINTS_OF_INTEREST_Export()
	{
		return MAP::_SHOW_ACTIVE_POINTS_OF_INTEREST();
	}
	Any _0xF47A1EB2A538A3A3_Export()
	{
		return MAP::_0xF47A1EB2A538A3A3();
	}
	BOOL _FIND_CLOSEST_GPS_POSITION_Export(float x, float y, float z, scrVector* outPosition)
	{
		return MAP::_FIND_CLOSEST_GPS_POSITION(x, y, z, outPosition);
	}
	void DISPLAY_RADAR_Export(BOOL bDisplayRadarFlag)
	{
		return MAP::DISPLAY_RADAR(bDisplayRadarFlag);
	}
	void _SET_RADAR_CONFIG_TYPE_Export(Hash configHash, Hash p1)
	{
		return MAP::_SET_RADAR_CONFIG_TYPE(configHash, p1);
	}
	void _ADD_PROP_TO_MINIMAP_Export(Hash minimapProp, float x, float y, float rotation, int p4)
	{
		return MAP::_ADD_PROP_TO_MINIMAP(minimapProp, x, y, rotation, p4);
	}
	void _REMOVE_PROP_FROM_MINIMAP_Export(Hash minimapProp)
	{
		return MAP::_REMOVE_PROP_FROM_MINIMAP(minimapProp);
	}
	void SET_RADAR_AS_EXTERIOR_THIS_FRAME_Export()
	{
		return MAP::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	}
	void SET_MINIMAP_HIDE_FOW_Export(BOOL bHideFow)
	{
		return MAP::SET_MINIMAP_HIDE_FOW(bHideFow);
	}
	void _SET_FOW_UPDATE_PLAYER_OVERRIDE_Export(BOOL toggle, Hash p1)
	{
		return MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(toggle, p1);
	}
	void _SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE_Export(float scale, Hash p1)
	{
		return MAP::_SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE(scale, p1);
	}
	void _SET_MINIMAP_FOW_SHOULD_UPDATE_Export(BOOL toggle, Hash p1)
	{
		return MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(toggle, p1);
	}
	void SET_MINIMAP_FOW_REVEAL_COORDINATE_Export(float worldPOSX, float worldPOSY, float worldPOSZ, Hash p3)
	{
		return MAP::SET_MINIMAP_FOW_REVEAL_COORDINATE(worldPOSX, worldPOSY, worldPOSZ, p3);
	}
	void SET_MINIMAP_FOW_REVEAL_VOLUME_Export(Volume volume, Hash p1)
	{
		return MAP::SET_MINIMAP_FOW_REVEAL_VOLUME(volume, p1);
	}
	void RESET_MINIMAP_FOW_Export(Hash hash)
	{
		return MAP::RESET_MINIMAP_FOW(hash);
	}
	void _REVEAL_MINIMAP_FOW_Export(Hash hash)
	{
		return MAP::_REVEAL_MINIMAP_FOW(hash);
	}
	void _SET_MINIMAP_ZONE_Export(Hash zone)
	{
		return MAP::_SET_MINIMAP_ZONE(zone);
	}
	void LOCK_MINIMAP_ANGLE_Export(int iAngle)
	{
		return MAP::LOCK_MINIMAP_ANGLE(iAngle);
	}
	void UNLOCK_MINIMAP_ANGLE_Export()
	{
		return MAP::UNLOCK_MINIMAP_ANGLE();
	}
	void _MAP_ENABLE_REGION_BLIP_Export(Hash regionHash, Hash styleHash)
	{
		return MAP::_MAP_ENABLE_REGION_BLIP(regionHash, styleHash);
	}
	void _MAP_DISABLE_REGION_BLIP_Export(Hash regionHash)
	{
		return MAP::_MAP_DISABLE_REGION_BLIP(regionHash);
	}
	BOOL _MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE_Export(Hash regionHash, Hash styleHash)
	{
		return MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(regionHash, styleHash);
	}
	void _MAP_DISCOVER_REGION_Export(Hash discoveryHash)
	{
		return MAP::_MAP_DISCOVER_REGION(discoveryHash);
	}
	void _MAP_DISCOVERY_SET_ENABLED_Export(Hash discoveryHash)
	{
		return MAP::_MAP_DISCOVERY_SET_ENABLED(discoveryHash);
	}
	BOOL _MAP_IS_DISCOVERY_ACTIVE_Export(Hash discoveryHash)
	{
		return MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash);
	}
	void _SET_PAUSEMAP_COORDS_WITH_RADIUS_Export(float x, float y, float z, float radius)
	{
		return MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(x, y, z, radius);
	}
	void _0x7C9F4CDF402CA82A_Export()
	{
		return MAP::_0x7C9F4CDF402CA82A();
	}
	void _0x44813684F72B563C_Export(Entity entity, Any p1)
	{
		return MAP::_0x44813684F72B563C(entity, p1);
	}
	void _0x97F6F158CC5B5CA2_Export(Entity entity, Any p1)
	{
		return MAP::_0x97F6F158CC5B5CA2(entity, p1);
	}
	void _0xBB68D4D3CA3DE402_Export(Any p0, Any p1)
	{
		return MAP::_0xBB68D4D3CA3DE402(p0, p1);
	}
	Any _0x3CB8859F04763C78_Export(Any p0, Any p1)
	{
		return MAP::_0x3CB8859F04763C78(p0, p1);
	}
	void _0x7563CBCA99253D1A_Export(Entity entity, Hash blip)
	{
		return MAP::_0x7563CBCA99253D1A(entity, blip);
	}
	void _0x1726963E6049DB53_Export(Any p0)
	{
		return MAP::_0x1726963E6049DB53(p0);
	}
	void _0x6480723D3BE535B6_Export(Any p0)
	{
		return MINIGAME::_0x6480723D3BE535B6(p0);
	}
	void _0x3DF7EE3A76185108_Export()
	{
		return MINIGAME::_0x3DF7EE3A76185108();
	}
	Any _0xE1F365C4C8F259D8_Export(Any p0, Any p1, Any p2)
	{
		return MINIGAME::_0xE1F365C4C8F259D8(p0, p1, p2);
	}
	Any _0xE53A308AC35877A8_Export()
	{
		return MINIGAME::_0xE53A308AC35877A8();
	}
	Any _0x580F34C726387226_Export(Any p0, Any p1)
	{
		return MINIGAME::_0x580F34C726387226(p0, p1);
	}
	void _0x0876326238914A3F_Export()
	{
		return MINIGAME::_0x0876326238914A3F();
	}
	Any _0x3FFE60DD8A936551_Export(Any p0, Any p1)
	{
		return MINIGAME::_0x3FFE60DD8A936551(p0, p1);
	}
	void _0x18A0D48DF9211C07_Export()
	{
		return MINIGAME::_0x18A0D48DF9211C07();
	}
	Any _MINIGAME_IS_CONNECTED_TO_SERVER_Export(Any p0)
	{
		return MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(p0);
	}
	Any _0x39654E1F68B78287_Export()
	{
		return MINIGAME::_0x39654E1F68B78287();
	}
	Any _0x3EECAADAB0D9FE29_Export()
	{
		return MINIGAME::_0x3EECAADAB0D9FE29();
	}
	Any _0xD39D32EB3B52DD83_Export(Any p0)
	{
		return MINIGAME::_0xD39D32EB3B52DD83(p0);
	}
	BOOL _MINIGAME_IS_SEAT_OCCUPIED_Export(Any p0)
	{
		return MINIGAME::_MINIGAME_IS_SEAT_OCCUPIED(p0);
	}
	BOOL _MINIGAME_REQUEST_SEAT_AT_TABLE_Export(void* data)
	{
		return MINIGAME::_MINIGAME_REQUEST_SEAT_AT_TABLE(data);
	}
	Any _MINIGAME_LEAVE_TABLE_Export(Any p0)
	{
		return MINIGAME::_MINIGAME_LEAVE_TABLE(p0);
	}
	Any _MINIGAME_GET_NEXT_EVENT_TYPE_Export()
	{
		return MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
	}
	Any _MINIGAME_GET_NEXT_EVENT_Export(Any p0, Any p1)
	{
		return MINIGAME::_MINIGAME_GET_NEXT_EVENT(p0, p1);
	}
	void _MINIGAME_POP_NEXT_EVENT_Export()
	{
		return MINIGAME::_MINIGAME_POP_NEXT_EVENT();
	}
	Any _0x3B31732FADE5BAF3_Export()
	{
		return MINIGAME::_0x3B31732FADE5BAF3();
	}
	Any _0x578907F59BA01B6D_Export(Any p0)
	{
		return MINIGAME::_0x578907F59BA01B6D(p0);
	}
	Any _0xDF728C5AE137FC14_Export(Any p0, Any p1, Any p2)
	{
		return MINIGAME::_0xDF728C5AE137FC14(p0, p1, p2);
	}
	Any _MINIGAME_IS_REQUEST_PENDING_Export(Any p0)
	{
		return MINIGAME::_MINIGAME_IS_REQUEST_PENDING(p0);
	}
	Any _0x644439B5387EE57E_Export(Any p0, Any p1)
	{
		return MINIGAME::_0x644439B5387EE57E(p0, p1);
	}
	Any _0x15E90B6A993017AA_Export()
	{
		return MINIGAME::_0x15E90B6A993017AA();
	}
	Any _0x10342CC82E8356E9_Export(Any p0, Any p1)
	{
		return MINIGAME::_0x10342CC82E8356E9(p0, p1);
	}
	Any _0x32A7C216344D623B_Export(Any p0, Any p1, Any p2)
	{
		return MINIGAME::_0x32A7C216344D623B(p0, p1, p2);
	}
	Any _0xEC819D612038EF4B_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return MINIGAME::_0xEC819D612038EF4B(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	Any _POKER_GET_GAME_SETTINGS_FOR_ID_Export(Any p0)
	{
		return MINIGAME::_POKER_GET_GAME_SETTINGS_FOR_ID(p0);
	}
	Any _POKER_BUY_IN_Export(Any p0, Any p1)
	{
		return MINIGAME::_POKER_BUY_IN(p0, p1);
	}
	Any _POKER_CALL_Export(Any p0, Any p1)
	{
		return MINIGAME::_POKER_CALL(p0, p1);
	}
	Any _POKER_CHECK_Export(Any p0, Any p1)
	{
		return MINIGAME::_POKER_CHECK(p0, p1);
	}
	Any _POKER_FOLD_Export(Any p0)
	{
		return MINIGAME::_POKER_FOLD(p0);
	}
	Any _POKER_RAISE_Export(Any p0, Any p1)
	{
		return MINIGAME::_POKER_RAISE(p0, p1);
	}
	Any _POKER_REVEAL_Export(Any p0)
	{
		return MINIGAME::_POKER_REVEAL(p0);
	}
	void _0x58521E6DCDE97D74_Export(Any p0, Any p1, Any p2)
	{
		return MINIGAME::_0x58521E6DCDE97D74(p0, p1, p2);
	}
	void _0xF6DE98516FD3AC9B_Export()
	{
		return MINIGAME::_0xF6DE98516FD3AC9B();
	}
	Any _0x3F4FD4BED07AB8C4_Export(Any p0)
	{
		return MINIGAME::_0x3F4FD4BED07AB8C4(p0);
	}
	Any _0x3AE451860F03CA8A_Export(Any p0, Any p1)
	{
		return MINIGAME::_0x3AE451860F03CA8A(p0, p1);
	}
	Any _0x012027C28F421F46_Export(Any p0, Any p1)
	{
		return MINIGAME::_0x012027C28F421F46(p0, p1);
	}
	void _0x455ECCA0715C507F_Export()
	{
		return MINIGAME::_0x455ECCA0715C507F();
	}
	Any _DOMINOES_BUY_IN_Export(Any p0)
	{
		return MINIGAME::_DOMINOES_BUY_IN(p0);
	}
	Any _DOMINOES_PLACE_DOMINO_Export(Any p0, Any p1)
	{
		return MINIGAME::_DOMINOES_PLACE_DOMINO(p0, p1);
	}
	Any _DOMINOES_REQUEST_VALID_PLACEMENTS_Export(Any p0)
	{
		return MINIGAME::_DOMINOES_REQUEST_VALID_PLACEMENTS(p0);
	}
	Any _0xA2DB3C6270C122E3_Export(Any p0, Any p1)
	{
		return MINIGAME::_0xA2DB3C6270C122E3(p0, p1);
	}
	Any _0x398066F893149856_Export(Any p0, Any p1, Any p2)
	{
		return MINIGAME::_0x398066F893149856(p0, p1, p2);
	}
	Any _0xBEA7D3CB47E1479C_Export()
	{
		return MINIGAME::_0xBEA7D3CB47E1479C();
	}
	Any _0x910B088E51A511AC_Export()
	{
		return MINIGAME::_0x910B088E51A511AC();
	}
	Any _0x9DD95B405AB4983E_Export(Any p0, Any p1)
	{
		return MINIGAME::_0x9DD95B405AB4983E(p0, p1);
	}
	int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE_Export(int stackSize)
	{
		return MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(stackSize);
	}
	int _GET_NUMBER_OF_INSTRUCTIONS_Export()
	{
		return MISC::_GET_NUMBER_OF_INSTRUCTIONS();
	}
	int _GET_MAX_NUM_INSTRUCTIONS_Export()
	{
		return MISC::_GET_MAX_NUM_INSTRUCTIONS();
	}
	BOOL IS_MAG_DEMO_1_ACTIVE_Export()
	{
		return MISC::IS_MAG_DEMO_1_ACTIVE();
	}
	void SET_RANDOM_SEED_Export(int NewSeed)
	{
		return MISC::SET_RANDOM_SEED(NewSeed);
	}
	void SET_TIME_SCALE_Export(float fNewTimeScale)
	{
		return MISC::SET_TIME_SCALE(fNewTimeScale);
	}
	void SET_MISSION_FLAG_Export(BOOL MissionFlagValue)
	{
		return MISC::SET_MISSION_FLAG(MissionFlagValue);
	}
	BOOL GET_MISSION_FLAG_Export()
	{
		return MISC::GET_MISSION_FLAG();
	}
	void _0x5801BE2DF2AF07EC_Export(Any p0)
	{
		return MISC::_0x5801BE2DF2AF07EC(p0);
	}
	void SET_RANDOM_EVENT_FLAG_Export(BOOL bThisScriptIsARandomEvent)
	{
		return MISC::SET_RANDOM_EVENT_FLAG(bThisScriptIsARandomEvent);
	}
	BOOL GET_RANDOM_EVENT_FLAG_Export()
	{
		return MISC::GET_RANDOM_EVENT_FLAG();
	}
	void _0x9BF2C0C568C61641_Export(Any p0)
	{
		return MISC::_0x9BF2C0C568C61641(p0);
	}
	void ACTIVITY_FEED_CREATE_Export(const char* CaptionString, const char* CondensedCaptionString)
	{
		return MISC::ACTIVITY_FEED_CREATE(CaptionString, CondensedCaptionString);
	}
	void ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION_Export(const char* SubString)
	{
		return MISC::ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(SubString);
	}
	void _0xFF252E2BAFB7330F_Export(Any p0)
	{
		return MISC::_0xFF252E2BAFB7330F(p0);
	}
	void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_Export(const char* commandLineString, const char* labelString)
	{
		return MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(commandLineString, labelString);
	}
	void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD_Export(const char* commandLineString)
	{
		return MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(commandLineString);
	}
	Any _0xAF530E56505D1BD6_Export(Any p0)
	{
		return MISC::_0xAF530E56505D1BD6(p0);
	}
	void ACTIVITY_FEED_POST_Export()
	{
		return MISC::ACTIVITY_FEED_POST();
	}
	const char* _0xF81C53561D15F330_Export()
	{
		return MISC::_0xF81C53561D15F330();
	}
	void _0x1096603B519C905F_Export(const char* name)
	{
		return MISC::_0x1096603B519C905F(name);
	}
	void _0xCC3EDC5614B03F61_Export(int p0)
	{
		return MISC::_0xCC3EDC5614B03F61(p0);
	}
	void INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION_Export(const char* ContentIdString)
	{
		return MISC::INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(ContentIdString);
	}
	void _0xDA4D8EB04E8E2928_Export(Any p0)
	{
		return MISC::_0xDA4D8EB04E8E2928(p0);
	}
	void _0xB08C4FA25BC29DB9_Export(Any p0)
	{
		return MISC::_0xB08C4FA25BC29DB9(p0);
	}
	Hash _GET_PREV_WEATHER_TYPE_HASH_NAME_Export()
	{
		return MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	}
	Hash _GET_NEXT_WEATHER_TYPE_HASH_NAME_Export()
	{
		return MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	}
	void _0x0730E518486DEEC3_Export(Any p0)
	{
		return MISC::_0x0730E518486DEEC3(p0);
	}
	void SET_WEATHER_TYPE_Export(Hash weatherType, BOOL p1, BOOL p2, BOOL transition, float transitionTime, BOOL p5)
	{
		return MISC::SET_WEATHER_TYPE(weatherType, p1, p2, transition, transitionTime, p5);
	}
	void _SET_WEATHER_TYPE_2_Export(Hash weatherType, int p1, int p2, int p3, BOOL p4)
	{
		return MISC::_SET_WEATHER_TYPE_2(weatherType, p1, p2, p3, p4);
	}
	int _GET_RANDOM_WEATHER_TYPE_INDEX_Export()
	{
		return MISC::_GET_RANDOM_WEATHER_TYPE_INDEX();
	}
	Hash _GET_RANDOM_WEATHER_TYPE_Export()
	{
		return MISC::_GET_RANDOM_WEATHER_TYPE();
	}
	void SET_RANDOM_WEATHER_TYPE_Export(BOOL p0, BOOL p1)
	{
		return MISC::SET_RANDOM_WEATHER_TYPE(p0, p1);
	}
	void CLEAR_WEATHER_TYPE_PERSIST_Export()
	{
		return MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	void _CLEAR_WEATHER_TYPE_PERSIST_OVERTIME_Export(int milliseconds)
	{
		return MISC::_CLEAR_WEATHER_TYPE_PERSIST_OVERTIME(milliseconds);
	}
	void GET_CURR_WEATHER_STATE_Export(Hash* prevTypeHashName, Hash* nextTypeHashName, float* interpVal)
	{
		return MISC::GET_CURR_WEATHER_STATE(prevTypeHashName, nextTypeHashName, interpVal);
	}
	void SET_CURR_WEATHER_STATE_Export(Hash prevTypeHashName, Hash nextTypeHashName, float interpVal, BOOL enabled)
	{
		return MISC::SET_CURR_WEATHER_STATE(prevTypeHashName, nextTypeHashName, interpVal, enabled);
	}
	void _SET_WEATHER_TYPE_FROZEN_Export(BOOL toggle)
	{
		return MISC::_SET_WEATHER_TYPE_FROZEN(toggle);
	}
	void _GET_FORCED_WEATHER_Export(Hash* weather, Hash* p1)
	{
		return MISC::_GET_FORCED_WEATHER(weather, p1);
	}
	void _0x2916B30DC6C41179_Export(Hash weatherType)
	{
		return MISC::_0x2916B30DC6C41179(weatherType);
	}
	void _0xD3F943B88F55376A_Export(Hash weatherType)
	{
		return MISC::_0xD3F943B88F55376A(weatherType);
	}
	void _0x243CEDE8F916B994_Export()
	{
		return MISC::_0x243CEDE8F916B994();
	}
	void _SET_OVERRIDE_WEATHER_Export(Hash weatherType)
	{
		return MISC::_SET_OVERRIDE_WEATHER(weatherType);
	}
	void CLEAR_OVERRIDE_WEATHER_Export()
	{
		return MISC::CLEAR_OVERRIDE_WEATHER();
	}
	void _SET_WEATHER_VARIATION_Export(const char* weatherType, const char* variation)
	{
		return MISC::_SET_WEATHER_VARIATION(weatherType, variation);
	}
	void _CLEAR_WEATHER_VARIATION_Export(const char* weatherType, BOOL p1)
	{
		return MISC::_CLEAR_WEATHER_VARIATION(weatherType, p1);
	}
	void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE_Export(float value)
	{
		return MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(value);
	}
	void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE_Export(float value)
	{
		return MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(value);
	}
	float _GET_TEMPERATURE_AT_COORDS_Export(float x, float y, float z)
	{
		return MISC::_GET_TEMPERATURE_AT_COORDS(x, y, z);
	}
	void SET_WIND_SPEED_Export(float WindSpeed)
	{
		return MISC::SET_WIND_SPEED(WindSpeed);
	}
	float GET_WIND_SPEED_Export()
	{
		return MISC::GET_WIND_SPEED();
	}
	void SET_WIND_DIRECTION_Export(float WindDir)
	{
		return MISC::SET_WIND_DIRECTION(WindDir);
	}
	scrVector GET_WIND_DIRECTION_Export()
	{
		return MISC::GET_WIND_DIRECTION();
	}
	void SET_RAIN_Export(float RainVal)
	{
		return MISC::SET_RAIN(RainVal);
	}
	float GET_RAIN_LEVEL_Export()
	{
		return MISC::GET_RAIN_LEVEL();
	}
	void _0x745808BB01CEC6B9_Export(float p0)
	{
		return MISC::_0x745808BB01CEC6B9(p0);
	}
	void _SET_SNOW_LEVEL_Export(float level)
	{
		return MISC::_SET_SNOW_LEVEL(level);
	}
	float GET_SNOW_LEVEL_Export()
	{
		return MISC::GET_SNOW_LEVEL();
	}
	void FORCE_LIGHTNING_FLASH_Export()
	{
		return MISC::FORCE_LIGHTNING_FLASH();
	}
	void _FORCE_LIGHTNING_FLASH_AT_COORDS_Export(float x, float y, float z, float p3)
	{
		return MISC::_FORCE_LIGHTNING_FLASH_AT_COORDS(x, y, z, p3);
	}
	void _0xA9342743B634A462_Export(Any p0)
	{
		return MISC::_0xA9342743B634A462(p0);
	}
	int GET_GAME_TIMER_Export()
	{
		return MISC::GET_GAME_TIMER();
	}
	int _GET_GAME_TIMER_NON_SCALED_CLIPPED_Export()
	{
		return MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
	}
	int GET_SYSTEM_TIME_Export()
	{
		return MISC::GET_SYSTEM_TIME();
	}
	int GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL_Export()
	{
		return MISC::GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL();
	}
	int GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS_Export()
	{
		return MISC::GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS();
	}
	void RESET_SCRIPT_TIME_WITHIN_FRAME_Export()
	{
		return MISC::RESET_SCRIPT_TIME_WITHIN_FRAME();
	}
	float GET_FRAME_TIME_Export()
	{
		return MISC::GET_FRAME_TIME();
	}
	float GET_SYSTEM_TIME_STEP_Export()
	{
		return MISC::GET_SYSTEM_TIME_STEP();
	}
	int GET_FRAME_COUNT_Export()
	{
		return MISC::GET_FRAME_COUNT();
	}
	void _0x6BED40493A1AFDB8_Export(void* p0, float p1)
	{
		return MISC::_0x6BED40493A1AFDB8(p0, p1);
	}
	float _READ_INT_AS_FLOAT_Export(int value)
	{
		return MISC::_READ_INT_AS_FLOAT(value);
	}
	float GET_RANDOM_FLOAT_IN_RANGE_Export(float MinFloat, float MaxFloat)
	{
		return MISC::GET_RANDOM_FLOAT_IN_RANGE(MinFloat, MaxFloat);
	}
	int GET_RANDOM_INT_IN_RANGE_Export(int MinInt, int MaxInt)
	{
		return MISC::GET_RANDOM_INT_IN_RANGE(MinInt, MaxInt);
	}
	BOOL GET_GROUND_Z_FOR_3D_COORD_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float* ReturnZ, BOOL p4)
	{
		return MISC::GET_GROUND_Z_FOR_3D_COORD(VecCoorsX, VecCoorsY, VecCoorsZ, ReturnZ, p4);
	}
	BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float* ReturnZ, scrVector* ReturnNormal)
	{
		return MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(VecCoorsX, VecCoorsY, VecCoorsZ, ReturnZ, ReturnNormal);
	}
	Any _0xBBE5B63EFFB08E68_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return MISC::_0xBBE5B63EFFB08E68(p0, p1, p2, p3, p4, p5, p6);
	}
	float ASIN_Export(float X)
	{
		return MISC::ASIN(X);
	}
	float ACOS_Export(float X)
	{
		return MISC::ACOS(X);
	}
	float TAN_Export(float X)
	{
		return MISC::TAN(X);
	}
	float ATAN_Export(float X)
	{
		return MISC::ATAN(X);
	}
	float ATAN2_Export(float Y, float X)
	{
		return MISC::ATAN2(Y, X);
	}
	float GET_DISTANCE_BETWEEN_COORDS_Export(float VecFirstCoorsX, float VecFirstCoorsY, float VecFirstCoorsZ, float VecSecondCoorsX, float VecSecondCoorsY, float VecSecondCoorsZ, BOOL bCheck3d)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(VecFirstCoorsX, VecFirstCoorsY, VecFirstCoorsZ, VecSecondCoorsX, VecSecondCoorsY, VecSecondCoorsZ, bCheck3d);
	}
	float GET_ANGLE_BETWEEN_2D_VECTORS_Export(float X1, float Y1, float X2, float Y2)
	{
		return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(X1, Y1, X2, Y2);
	}
	float GET_HEADING_FROM_VECTOR_2D_Export(float VecX, float VecY)
	{
		return MISC::GET_HEADING_FROM_VECTOR_2D(VecX, VecY);
	}
	scrVector GET_CLOSEST_POINT_ON_LINE_Export(float rPointToTestX, float rPointToTestY, float rPointToTestZ, float vStartX, float vStartY, float vStartZ, float vEndX, float vEndY, float vEndZ, BOOL bClampToLine)
	{
		return MISC::GET_CLOSEST_POINT_ON_LINE(rPointToTestX, rPointToTestY, rPointToTestZ, vStartX, vStartY, vStartZ, vEndX, vEndY, vEndZ, bClampToLine);
	}
	BOOL GET_LINE_PLANE_INTERSECTION_Export(float vscrPntAX, float vscrPntAY, float vscrPntAZ, float vscrPntBX, float vscrPntBY, float vscrPntBZ, float vscrPntOnPlaneX, float vscrPntOnPlaneY, float vscrPntOnPlaneZ, float vscrNormalX, float vscrNormalY, float vscrNormalZ, float* fTValue)
	{
		return MISC::GET_LINE_PLANE_INTERSECTION(vscrPntAX, vscrPntAY, vscrPntAZ, vscrPntBX, vscrPntBY, vscrPntBZ, vscrPntOnPlaneX, vscrPntOnPlaneY, vscrPntOnPlaneZ, vscrNormalX, vscrNormalY, vscrNormalZ, fTValue);
	}
	void SET_BIT_Export(int* Variable, int BitIndex)
	{
		return MISC::SET_BIT(Variable, BitIndex);
	}
	void CLEAR_BIT_Export(int* Variable, int BitIndex)
	{
		return MISC::CLEAR_BIT(Variable, BitIndex);
	}
	BOOL _IS_BIT_FLAG_SET_Export(void* bitFlags, int flag)
	{
		return MISC::_IS_BIT_FLAG_SET(bitFlags, flag);
	}
	BOOL _IS_ANY_BIT_FLAG_SET_Export(void* bitFlags)
	{
		return MISC::_IS_ANY_BIT_FLAG_SET(bitFlags);
	}
	int _COUNT_BIT_FLAGS_Export(void* bitFlags)
	{
		return MISC::_COUNT_BIT_FLAGS(bitFlags);
	}
	void _SET_BIT_FLAG_Export(void* bitFlags, int flag)
	{
		return MISC::_SET_BIT_FLAG(bitFlags, flag);
	}
	void _CLEAR_BIT_FLAG_Export(void* bitFlags, int flag)
	{
		return MISC::_CLEAR_BIT_FLAG(bitFlags, flag);
	}
	void _CLEAR_ALL_BIT_FLAGS_Export(void* bitFlags)
	{
		return MISC::_CLEAR_ALL_BIT_FLAGS(bitFlags);
	}
	Hash GET_HASH_KEY_Export(const char* InputString)
	{
		return MISC::GET_HASH_KEY(InputString);
	}
	float _GET_EASING_CURVE_VALUE_Export(float t, float b, float d, int easingCurveType)
	{
		return MISC::_GET_EASING_CURVE_VALUE(t, b, d, easingCurveType);
	}
	BOOL IS_POSITION_OCCUPIED_Export(float VecCenterCoorsX, float VecCenterCoorsY, float VecCenterCoorsZ, float radius, BOOL bBuildingFlag, BOOL bVehicleFlag, BOOL bPedFlag, BOOL bObjectFlag, BOOL bDummyFlag, Entity ExcludeEntityIndex, BOOL bCheckAlive)
	{
		return MISC::IS_POSITION_OCCUPIED(VecCenterCoorsX, VecCenterCoorsY, VecCenterCoorsZ, radius, bBuildingFlag, bVehicleFlag, bPedFlag, bObjectFlag, bDummyFlag, ExcludeEntityIndex, bCheckAlive);
	}
	void CLEAR_AREA_Export(float VecCentreCoorsX, float VecCentreCoorsY, float VecCentreCoorsZ, float Radius, int iFlags)
	{
		return MISC::CLEAR_AREA(VecCentreCoorsX, VecCentreCoorsY, VecCentreCoorsZ, Radius, iFlags);
	}
	void _CLEAR_VOLUME_AREA_Export(Volume volume, int flag)
	{
		return MISC::_CLEAR_VOLUME_AREA(volume, flag);
	}
	void CLEAR_ANGLED_AREA_OF_VEHICLES_Export(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float DistanceOfOppositeFace, int iFlags)
	{
		return MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, DistanceOfOppositeFace, iFlags);
	}
	void SET_CREDITS_ACTIVE_Export(BOOL bActive)
	{
		return MISC::SET_CREDITS_ACTIVE(bActive);
	}
	void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME_Export()
	{
		return MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	}
	void PAUSE_DEATH_ARREST_RESTART_Export(BOOL bPaused)
	{
		return MISC::PAUSE_DEATH_ARREST_RESTART(bPaused);
	}
	void IGNORE_NEXT_RESTART_Export(BOOL bIgnore)
	{
		return MISC::IGNORE_NEXT_RESTART(bIgnore);
	}
	void SET_FADE_IN_AFTER_DEATH_ARREST_Export(BOOL bDoFade)
	{
		return MISC::SET_FADE_IN_AFTER_DEATH_ARREST(bDoFade);
	}
	void SET_FADE_IN_AFTER_LOAD_Export(BOOL bFadeIn)
	{
		return MISC::SET_FADE_IN_AFTER_LOAD(bFadeIn);
	}
	BOOL OVERRIDE_SAVE_HOUSE_Export(BOOL bOverride, float vecCoordsX, float vecCoordsY, float vecCoordsZ, float fHeading, BOOL bIsAnAutosave, scrVector* vecReturnCoords, float* fReturnHeading)
	{
		return MISC::OVERRIDE_SAVE_HOUSE(bOverride, vecCoordsX, vecCoordsY, vecCoordsZ, fHeading, bIsAnAutosave, vecReturnCoords, fReturnHeading);
	}
	void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_Export(float VecStartCoorsX, float VecStartCoorsY, float VecStartCoorsZ, float VecEndCoorsX, float VecEndCoorsY, float VecEndCoorsZ, int DamageCaused, BOOL bPerfectAccuracy, Hash Weapon, Ped PedIndex, BOOL isAudible, BOOL isInvisible, float InitialVelocity, BOOL p13)
	{
		return MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(VecStartCoorsX, VecStartCoorsY, VecStartCoorsZ, VecEndCoorsX, VecEndCoorsY, VecEndCoorsZ, DamageCaused, bPerfectAccuracy, Weapon, PedIndex, isAudible, isInvisible, InitialVelocity, p13);
	}
	void FIRE_SINGLE_BULLET_Export(void* args)
	{
		return MISC::FIRE_SINGLE_BULLET(args);
	}
	void GET_MODEL_DIMENSIONS_Export(Hash ModelHashKey, scrVector* returnMin, scrVector* returnMax)
	{
		return MISC::GET_MODEL_DIMENSIONS(ModelHashKey, returnMin, returnMax);
	}
	BOOL IS_BIT_SET_Export(int address, int offset)
	{
		return MISC::IS_BIT_SET(address, offset);
	}
	void _0x0A487CC74A517FB5_Export(Any p0)
	{
		return MISC::_0x0A487CC74A517FB5(p0);
	}
	BOOL IS_MINIGAME_IN_PROGRESS_Export()
	{
		return MISC::IS_MINIGAME_IN_PROGRESS();
	}
	BOOL SHOULD_USE_METRIC_MEASUREMENTS_Export()
	{
		return MISC::SHOULD_USE_METRIC_MEASUREMENTS();
	}
	BOOL _SHOULD_USE_METRIC_MEASUREMENTS_2_Export()
	{
		return MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
	}
	BOOL _SHOULD_USE_METRIC_TEMPERATURE_Export()
	{
		return MISC::_SHOULD_USE_METRIC_TEMPERATURE();
	}
	BOOL _SHOULD_USE_METRIC_WEIGHT_Export()
	{
		return MISC::_SHOULD_USE_METRIC_WEIGHT();
	}
	BOOL _SHOULD_USE_24_HOUR_CLOCK_Export()
	{
		return MISC::_SHOULD_USE_24_HOUR_CLOCK();
	}
	int COMPARE_STRINGS_Export(const char* String1, const char* String2, BOOL bCaseSensitive, int numberOfCharactersToCompare)
	{
		return MISC::COMPARE_STRINGS(String1, String2, bCaseSensitive, numberOfCharactersToCompare);
	}
	int ABSI_Export(int n)
	{
		return MISC::ABSI(n);
	}
	float ABSF_Export(float n)
	{
		return MISC::ABSF(n);
	}
	BOOL IS_PROJECTILE_IN_AREA_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, BOOL bIsPlayer)
	{
		return MISC::IS_PROJECTILE_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer);
	}
	BOOL IS_PROJECTILE_TYPE_IN_AREA_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, Hash WeaponType, BOOL bIsPlayer)
	{
		return MISC::IS_PROJECTILE_TYPE_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, WeaponType, bIsPlayer);
	}
	BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA_Export(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float DistanceOfOppositeFace, Hash WeaponType, BOOL bIsPlayer)
	{
		return MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, DistanceOfOppositeFace, WeaponType, bIsPlayer);
	}
	BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE_Export(float vecCoorsX, float vecCoorsY, float vecCoorsZ, Hash WeaponType, float distance, BOOL bIsPlayer)
	{
		return MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vecCoorsX, vecCoorsY, vecCoorsZ, WeaponType, distance, bIsPlayer);
	}
	BOOL GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE_Export(Ped ped, Hash WeaponType, float distance, scrVector* positionOut, BOOL needsToBeStationary, BOOL mustBeOwnedByThisPed)
	{
		return MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(ped, WeaponType, distance, positionOut, needsToBeStationary, mustBeOwnedByThisPed);
	}
	BOOL GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE_Export(Ped ped, Hash WeaponType, float distance, scrVector* positionOut, Entity* EntityIndex, BOOL needsToBeStationary, BOOL mustBeOwnedByThisPed)
	{
		return MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(ped, WeaponType, distance, positionOut, EntityIndex, needsToBeStationary, mustBeOwnedByThisPed);
	}
	BOOL IS_BULLET_IN_ANGLED_AREA_Export(float VecPos1X, float VecPos1Y, float VecPos1Z, float VecPos2X, float VecPos2Y, float VecPos2Z, float AreaWidth, BOOL bIsPlayer)
	{
		return MISC::IS_BULLET_IN_ANGLED_AREA(VecPos1X, VecPos1Y, VecPos1Z, VecPos2X, VecPos2Y, VecPos2Z, AreaWidth, bIsPlayer);
	}
	BOOL IS_BULLET_IN_AREA_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, BOOL bIsPlayer)
	{
		return MISC::IS_BULLET_IN_AREA(VecCoorsX, VecCoorsY, VecCoorsZ, Radius, bIsPlayer);
	}
	BOOL IS_BULLET_IN_BOX_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, BOOL bIsPlayer)
	{
		return MISC::IS_BULLET_IN_BOX(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer);
	}
	BOOL HAS_BULLET_IMPACTED_IN_AREA_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, BOOL bIsPlayer, BOOL bEntryOnly)
	{
		return MISC::HAS_BULLET_IMPACTED_IN_AREA(VecCoorsX, VecCoorsY, VecCoorsZ, Radius, bIsPlayer, bEntryOnly);
	}
	BOOL HAS_BULLET_IMPACTED_IN_BOX_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, BOOL bIsPlayer, BOOL bEntryOnly)
	{
		return MISC::HAS_BULLET_IMPACTED_IN_BOX(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer, bEntryOnly);
	}
	Any _0x7A76104CC2CC69E8_Export(Entity entity, int p1, int p2)
	{
		return MISC::_0x7A76104CC2CC69E8(entity, p1, p2);
	}
	Any _0xDC416CA762BC4F43_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return MISC::_0xDC416CA762BC4F43(p0, p1, p2, p3, p4, p5);
	}
	Any _0x970339EFA4FDE518_Export(Any p0, Any p1, Any p2)
	{
		return MISC::_0x970339EFA4FDE518(p0, p1, p2);
	}
	BOOL IS_ORBIS_VERSION_Export()
	{
		return MISC::IS_ORBIS_VERSION();
	}
	BOOL IS_DURANGO_VERSION_Export()
	{
		return MISC::IS_DURANGO_VERSION();
	}
	BOOL IS_PC_VERSION_Export()
	{
		return MISC::IS_PC_VERSION();
	}
	BOOL IS_STADIA_VERSION_Export()
	{
		return MISC::IS_STADIA_VERSION();
	}
	BOOL IS_STRING_NULL_Export(const char* StringToTest)
	{
		return MISC::IS_STRING_NULL(StringToTest);
	}
	BOOL IS_STRING_NULL_OR_EMPTY_Export(const char* StringToTest)
	{
		return MISC::IS_STRING_NULL_OR_EMPTY(StringToTest);
	}
	BOOL IS_STRING_NULL_OR_EMPTY_OR_SPACES_Export(const char* string)
	{
		return MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(string);
	}
	BOOL ARE_STRINGS_EQUAL_Export(const char* String1, const char* String2)
	{
		return MISC::ARE_STRINGS_EQUAL(String1, String2);
	}
	BOOL _DOES_STRING_EXIST_IN_STRING_Export(const char* string1, const char* string2)
	{
		return MISC::_DOES_STRING_EXIST_IN_STRING(string1, string2);
	}
	void _0x3C3C7B1B5EC08764_Export()
	{
		return MISC::_0x3C3C7B1B5EC08764();
	}
	Any _0x94E8CA3DEE952789_Export(Any p0, Any p1)
	{
		return MISC::_0x94E8CA3DEE952789(p0, p1);
	}
	Any _0x5B4A8121A47D844D_Export(Any p0)
	{
		return MISC::_0x5B4A8121A47D844D(p0);
	}
	BOOL STRING_TO_INT_Export(const char* StringToConvert, int* ReturnInteger)
	{
		return MISC::STRING_TO_INT(StringToConvert, ReturnInteger);
	}
	void _INT_TO_STRING_Export(int value, const char* format, char* buffer)
	{
		return MISC::_INT_TO_STRING(value, format, buffer);
	}
	void _0x74ACA66484CEBAF0_Export(Any p0)
	{
		return MISC::_0x74ACA66484CEBAF0(p0);
	}
	void _0x49C44FE78A135A1D_Export(Any p0)
	{
		return MISC::_0x49C44FE78A135A1D(p0);
	}
	void _0xF650DCF5D6F312C1_Export(Any p0)
	{
		return MISC::_0xF650DCF5D6F312C1(p0);
	}
	const char* _GET_STRING_FROM_FLOAT_Export(float value, int digits)
	{
		return MISC::_GET_STRING_FROM_FLOAT(value, digits);
	}
	const char* _GET_STRING_FROM_VECTOR_Export(float x, float y, float z)
	{
		return MISC::_GET_STRING_FROM_VECTOR(x, y, z);
	}
	const char* _GET_STRING_FROM_BOOL_Export(BOOL value)
	{
		return MISC::_GET_STRING_FROM_BOOL(value);
	}
	// const char* VAR_STRING_Export(int flags, int argCount, IntPtr args) { return MISC::VAR_STRING(flags, argCount, args); }
	const char* _CREATE_COLOR_STRING_Export(int rgb)
	{
		return MISC::_CREATE_COLOR_STRING(rgb);
	}
	void SET_BITS_IN_RANGE_Export(int* VariableToChange, int StartBit, int EndBit, int NewValue)
	{
		return MISC::SET_BITS_IN_RANGE(VariableToChange, StartBit, EndBit, NewValue);
	}
	int GET_BITS_IN_RANGE_Export(int VariableToRead, int StartBit, int EndBit)
	{
		return MISC::GET_BITS_IN_RANGE(VariableToRead, StartBit, EndBit);
	}
	void SET_GAME_PAUSED_Export(BOOL bDoPause)
	{
		return MISC::SET_GAME_PAUSED(bDoPause);
	}
	void SET_THIS_SCRIPT_CAN_BE_PAUSED_Export(BOOL bScriptCanBePaused)
	{
		return MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(bScriptCanBePaused);
	}
	void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT_Export(BOOL bCanRemoveBlipsCreatedByOtherScripts)
	{
		return MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bCanRemoveBlipsCreatedByOtherScripts);
	}
	void SET_CHEAT_ACTIVE_Export(int cheatId)
	{
		return MISC::SET_CHEAT_ACTIVE(cheatId);
	}
	void _0xB711EB4BC8D06013_Export()
	{
		return MISC::_0xB711EB4BC8D06013();
	}
	void POPULATE_NOW_Export()
	{
		return MISC::POPULATE_NOW();
	}
	BOOL IS_GAME_SESSION_STATE_MACHINE_IDLE_Export()
	{
		return MISC::IS_GAME_SESSION_STATE_MACHINE_IDLE();
	}
	BOOL _QUEUE_SAVEGAME_OPERATION_Export(int p0)
	{
		return MISC::_QUEUE_SAVEGAME_OPERATION(p0);
	}
	int _GET_STATUS_OF_SAVEGAME_OPERATION_Export(int p0)
	{
		return MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(p0);
	}
	Any _0x6C7B68D3CE60E8DE_Export(Any p0)
	{
		return MISC::_0x6C7B68D3CE60E8DE(p0);
	}
	Any _0x627B68D9CE6EE8DE_Export(Any p0)
	{
		return MISC::_0x627B68D9CE6EE8DE(p0);
	}
	Any _0x7CF96F1250EF3221_Export(Any p0)
	{
		return MISC::_0x7CF96F1250EF3221(p0);
	}
	void COPY_SCRIPT_STRUCT_Export(void* DestStruct, void* SourceStruct, int Size)
	{
		return MISC::COPY_SCRIPT_STRUCT(DestStruct, SourceStruct, Size);
	}
	void ENABLE_DISPATCH_SERVICE_Export(int dispatchType, BOOL bEnable)
	{
		return MISC::ENABLE_DISPATCH_SERVICE(dispatchType, bEnable);
	}
	void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION_Export(int dispatchType, BOOL bBlock)
	{
		return MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(dispatchType, bBlock);
	}
	BOOL CREATE_INCIDENT_Export(int dispatchType, float vLocationX, float vLocationY, float vLocationZ, int iNumUnits, float fTime, int* incidentIndex, Hash iOverrideRelGroupHash, int assassinsLevel)
	{
		return MISC::CREATE_INCIDENT(dispatchType, vLocationX, vLocationY, vLocationZ, iNumUnits, fTime, incidentIndex, iOverrideRelGroupHash, assassinsLevel);
	}
	BOOL _CREATE_INCIDENT_WITH_ENTITIES_Export(int dispatchService, float x, float y, float z, ItemSet itemSet, float radius, int* outIncidentID)
	{
		return MISC::_CREATE_INCIDENT_WITH_ENTITIES(dispatchService, x, y, z, itemSet, radius, outIncidentID);
	}
	void DELETE_INCIDENT_Export(int incidentIndex)
	{
		return MISC::DELETE_INCIDENT(incidentIndex);
	}
	BOOL IS_INCIDENT_VALID_Export(int incidentIndex)
	{
		return MISC::IS_INCIDENT_VALID(incidentIndex);
	}
	void _SET_INCIDENT_UNK_Export(int incidentId)
	{
		return MISC::_SET_INCIDENT_UNK(incidentId);
	}
	int ADD_POP_MULTIPLIER_AREA_Export(float minWSX, float minWSY, float minWSZ, float maxWSX, float maxWSY, float maxWSZ, float pedDensity, float trafficDensity, BOOL localOnly, BOOL bCameraGlobalMultiplier)
	{
		return MISC::ADD_POP_MULTIPLIER_AREA(minWSX, minWSY, minWSZ, maxWSX, maxWSY, maxWSZ, pedDensity, trafficDensity, localOnly, bCameraGlobalMultiplier);
	}
	BOOL DOES_POP_MULTIPLIER_AREA_EXIST_Export(int index)
	{
		return MISC::DOES_POP_MULTIPLIER_AREA_EXIST(index);
	}
	void REMOVE_POP_MULTIPLIER_AREA_Export(int index, BOOL localOnly)
	{
		return MISC::REMOVE_POP_MULTIPLIER_AREA(index, localOnly);
	}
	int _ADD_POP_MULTIPLIER_VOLUME_Export(Volume volume, float pedDensity, float vehicleDensity, BOOL p3, BOOL p4)
	{
		return MISC::_ADD_POP_MULTIPLIER_VOLUME(volume, pedDensity, vehicleDensity, p3, p4);
	}
	BOOL _DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME_Export(Volume volume)
	{
		return MISC::_DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME(volume);
	}
	void _REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME_Export(Volume volume, int p1)
	{
		return MISC::_REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME(volume, p1);
	}
	void _0xF569E33FB72ED28E_Export()
	{
		return MISC::_0xF569E33FB72ED28E();
	}
	void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE_Export()
	{
		return MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
	}
	void SET_DISPATCH_IDEAL_SPAWN_DISTANCE_Export(float fIdealSpawnDistance)
	{
		return MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(fIdealSpawnDistance);
	}
	void _RESET_DISPATCH_MIN_SPAWN_DISTANCE_Export()
	{
		return MISC::_RESET_DISPATCH_MIN_SPAWN_DISTANCE();
	}
	void _SET_DISPATCH_MIN_SPAWN_DISTANCE_Export(float minSpawnDistance)
	{
		return MISC::_SET_DISPATCH_MIN_SPAWN_DISTANCE(minSpawnDistance);
	}
	void _RESET_DISPATCH_MAX_SPAWN_DISTANCE_Export()
	{
		return MISC::_RESET_DISPATCH_MAX_SPAWN_DISTANCE();
	}
	void _SET_DISPATCH_MAX_SPAWN_DISTANCE_Export(float maxSpawnDistance)
	{
		return MISC::_SET_DISPATCH_MAX_SPAWN_DISTANCE(maxSpawnDistance);
	}
	void _0x4B0501A468B749F8_Export()
	{
		return MISC::_0x4B0501A468B749F8();
	}
	void _0x6BCF7B5CD338281A_Export(Any p0, Any p1, Any p2)
	{
		return MISC::_0x6BCF7B5CD338281A(p0, p1, p2);
	}
	Any _ADD_DISPATCH_SPAWN_BLOCKING_AREA_Export(Volume volume)
	{
		return MISC::_ADD_DISPATCH_SPAWN_BLOCKING_AREA(volume);
	}
	void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA_Export(int iIndex)
	{
		return MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iIndex);
	}
	void RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN_Export()
	{
		return MISC::RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN();
	}
	void ADD_TACTICAL_NAV_MESH_POINT_Export(float vPositionX, float vPositionY, float vPositionZ, int p3)
	{
		return MISC::ADD_TACTICAL_NAV_MESH_POINT(vPositionX, vPositionY, vPositionZ, p3);
	}
	void CLEAR_TACTICAL_NAV_MESH_POINTS_Export()
	{
		return MISC::CLEAR_TACTICAL_NAV_MESH_POINTS();
	}
	void DISPLAY_ONSCREEN_KEYBOARD_Export(int keyboardTypeFlag, const char* prompt, const char* description, const char* initialValue1, const char* initialValue2, const char* initialValue3, const char* initialValue4, int maxLength)
	{
		return MISC::DISPLAY_ONSCREEN_KEYBOARD(keyboardTypeFlag, prompt, description, initialValue1, initialValue2, initialValue3, initialValue4, maxLength);
	}
	int UPDATE_ONSCREEN_KEYBOARD_Export()
	{
		return MISC::UPDATE_ONSCREEN_KEYBOARD();
	}
	const char* GET_ONSCREEN_KEYBOARD_RESULT_Export()
	{
		return MISC::GET_ONSCREEN_KEYBOARD_RESULT();
	}
	void CANCEL_ONSCREEN_KEYBOARD_Export()
	{
		return MISC::CANCEL_ONSCREEN_KEYBOARD();
	}
	void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS_Export(int fontBitField)
	{
		return MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(fontBitField);
	}
	void ACTION_MANAGER_ENABLE_ACTION_Export(Hash iActionHash, BOOL bEnable)
	{
		return MISC::ACTION_MANAGER_ENABLE_ACTION(iActionHash, bEnable);
	}
	BOOL ACTION_MANAGER_IS_ACTION_ENABLED_Export(Hash hash)
	{
		return MISC::ACTION_MANAGER_IS_ACTION_ENABLED(hash);
	}
	int GET_REAL_WORLD_TIME_Export()
	{
		return MISC::GET_REAL_WORLD_TIME();
	}
	void SET_SUPER_JUMP_THIS_FRAME_Export(Ped PedIndex)
	{
		return MISC::SET_SUPER_JUMP_THIS_FRAME(PedIndex);
	}
	void SCRIPT_RACE_INIT_Export(int numCheckpoints, int numLaps, int numPlayers, int localPlayerIndex)
	{
		return MISC::SCRIPT_RACE_INIT(numCheckpoints, numLaps, numPlayers, localPlayerIndex);
	}
	void SCRIPT_RACE_SHUTDOWN_Export()
	{
		return MISC::SCRIPT_RACE_SHUTDOWN();
	}
	void SCRIPT_RACE_PLAYER_HIT_CHECKPOINT_Export(Ped pedIndex, int checkpoint, int lap, int time)
	{
		return MISC::SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(pedIndex, checkpoint, lap, time);
	}
	BOOL SCRIPT_RACE_GET_PLAYER_SPLIT_TIME_Export(Ped pedIndex, int* time, int* position)
	{
		return MISC::SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(pedIndex, time, position);
	}
	void START_END_USER_BENCHMARK_Export()
	{
		return MISC::START_END_USER_BENCHMARK();
	}
	void STOP_END_USER_BENCHMARK_Export()
	{
		return MISC::STOP_END_USER_BENCHMARK();
	}
	void RESET_END_USER_BENCHMARK_Export()
	{
		return MISC::RESET_END_USER_BENCHMARK();
	}
	void SAVE_END_USER_BENCHMARK_Export()
	{
		return MISC::SAVE_END_USER_BENCHMARK();
	}
	BOOL UI_STARTED_END_USER_BENCHMARK_Export()
	{
		return MISC::UI_STARTED_END_USER_BENCHMARK();
	}
	int GET_BENCHMARK_ITERATIONS_Export()
	{
		return MISC::GET_BENCHMARK_ITERATIONS();
	}
	int GET_BENCHMARK_PASS_Export()
	{
		return MISC::GET_BENCHMARK_PASS();
	}
	Any _0xDC057B86FC157031_Export()
	{
		return MISC::_0xDC057B86FC157031();
	}
	void _0x9A252AA23D7098F2_Export()
	{
		return MISC::_0x9A252AA23D7098F2();
	}
	BOOL _DOES_ITEM_HAVE_VALID_BASE_Export(ScrHandle item)
	{
		return MISC::_DOES_ITEM_HAVE_VALID_BASE(item);
	}
	int _GET_ITEM_TYPE_Export(ScrHandle handle)
	{
		return MISC::_GET_ITEM_TYPE(handle);
	}
	BOOL _IS_BASE_A_PERSISTENT_CHARACTER_Export(ScrHandle handle)
	{
		return MISC::_IS_BASE_A_PERSISTENT_CHARACTER(handle);
	}
	BOOL _IS_BASE_A_COVER_POINT_Export(ScrHandle handle)
	{
		return MISC::_IS_BASE_A_COVER_POINT(handle);
	}
	void _0x553D67295DDD2309_Export(Entity entity)
	{
		return MISC::_0x553D67295DDD2309(entity);
	}
	Volume _GET_VOLUME_FROM_INDEXED_ITEM_Export(ScrHandle item)
	{
		return MISC::_GET_VOLUME_FROM_INDEXED_ITEM(item);
	}
	Entity _GET_ENTITY_FROM_ITEM_Export(ScrHandle item)
	{
		return MISC::_GET_ENTITY_FROM_ITEM(item);
	}
	Ped _GET_PED_FROM_INDEXED_ITEM_Export(ScrHandle item)
	{
		return MISC::_GET_PED_FROM_INDEXED_ITEM(item);
	}
	Vehicle _GET_VEHICLE_FROM_INDEXED_ITEM_Export(ScrHandle item)
	{
		return MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(item);
	}
	Object _GET_OBJECT_FROM_INDEXED_ITEM_Export(ScrHandle item)
	{
		return MISC::_GET_OBJECT_FROM_INDEXED_ITEM(item);
	}
	Any _0x33982467B1E349EF_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return MISC::_0x33982467B1E349EF(p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0x8314FC2013ECE2DA_Export(Any p0, Any p1, Any p2)
	{
		return MISC::_0x8314FC2013ECE2DA(p0, p1, p2);
	}
	void _0x4D5C9CC7E7E23E09_Export()
	{
		return MISC::_0x4D5C9CC7E7E23E09();
	}
	BOOL REGISTER_INTERACTION_LOCKON_PROMPT_Export(Entity entity, const char* text, float radius, float p3, int flag, float p5, float p6, Prompt prompt, BOOL p8, int p9)
	{
		return MISC::REGISTER_INTERACTION_LOCKON_PROMPT(entity, text, radius, p3, flag, p5, p6, prompt, p8, p9);
	}
	BOOL UNREGISTER_INTERACTION_LOCKON_PROMPT_Export(Entity entity)
	{
		return MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(entity);
	}
	void _0xFC6ECB9170145ECE_Export()
	{
		return MISC::_0xFC6ECB9170145ECE();
	}
	Any _0x35165C658077CD0B_Export()
	{
		return MISC::_0x35165C658077CD0B();
	}
	BOOL _0x4B101DBCC9482F2D_Export(Ped ped)
	{
		return MISC::_0x4B101DBCC9482F2D(ped);
	}
	BOOL _IS_MISSION_CREATOR_ACTIVE_Export()
	{
		return MISC::_IS_MISSION_CREATOR_ACTIVE();
	}
	void _0xA3A8926951471C82_Export()
	{
		return MISC::_0xA3A8926951471C82();
	}
	void _CREATE_AI_MEMORY_Export(void* args, int aiMemoryType)
	{
		return MISC::_CREATE_AI_MEMORY(args, aiMemoryType);
	}
	BOOL _GET_AI_PED_DOES_HAVE_EVENT_MEMORY_Export(void* args, int p1)
	{
		return MISC::_GET_AI_PED_DOES_HAVE_EVENT_MEMORY(args, p1);
	}
	void _0xEB946B9E579729AD_Export(Ped ped, Any p1)
	{
		return MISC::_0xEB946B9E579729AD(ped, p1);
	}
	void _SET_AI_MEMORY_REACTIONS_ENABLED_Export(BOOL enabled)
	{
		return MISC::_SET_AI_MEMORY_REACTIONS_ENABLED(enabled);
	}
	Any _0x8DB104CCEBCD58C5_Export(Any p0, Any p1)
	{
		return MISC::_0x8DB104CCEBCD58C5(p0, p1);
	}
	void _0x68319452C5064ABA_Export(Any p0, Any p1)
	{
		return MISC::_0x68319452C5064ABA(p0, p1);
	}
	void _0xDE2C3B74D2B3705C_Export(Any p0, Any p1)
	{
		return MISC::_0xDE2C3B74D2B3705C(p0, p1);
	}
	void _0x49F3241C28EBBFBC_Export(int p0)
	{
		return MISC::_0x49F3241C28EBBFBC(p0);
	}
	void _0x183672FE838A661B_Export(void* data)
	{
		return MISC::_0x183672FE838A661B(data);
	}
	void _0x38C0C9CAE1544500_Export(Hash p0)
	{
		return MISC::_0x38C0C9CAE1544500(p0);
	}
	void _0x154340E87D8CC178_Export(Any p0)
	{
		return MISC::_0x154340E87D8CC178(p0);
	}
	void _0x94FCADCF9F0C368E_Export(Any p0)
	{
		return MISC::_0x94FCADCF9F0C368E(p0);
	}
	BOOL _0x0D0AE5081F88CFE1_Export(Hash p0)
	{
		return MISC::_0x0D0AE5081F88CFE1(p0);
	}
	void _0xAF3A84C7DE6A1DC5_Export(Any p0, Any p1)
	{
		return MISC::_0xAF3A84C7DE6A1DC5(p0, p1);
	}
	void _LOOT_TABLES_GET_INFO_Export(Ped ped, BOOL p1, BOOL p2, Hash lootTableKey, void* p4, Any p5)
	{
		return MISC::_LOOT_TABLES_GET_INFO(ped, p1, p2, lootTableKey, p4, p5);
	}
	Any _0xB1F6665AA54DCD5C_Export(Any p0)
	{
		return MISC::_0xB1F6665AA54DCD5C(p0);
	}
	Any _0x8BB99B85444544D9_Export(Any p0, Any p1)
	{
		return MISC::_0x8BB99B85444544D9(p0, p1);
	}
	Any _0x6F02B5E50511721E_Export(Any p0)
	{
		return MISC::_0x6F02B5E50511721E(p0);
	}
	Any _0xCC1BAF72D571DB8D_Export(Any p0, Any p1, Any p2)
	{
		return MISC::_0xCC1BAF72D571DB8D(p0, p1, p2);
	}
	BOOL _IS_PED_DECOMPOSED_Export(Ped ped)
	{
		return MISC::_IS_PED_DECOMPOSED(ped);
	}
	void SET_PED_DECOMPOSED_Export(Ped ped, BOOL toggle)
	{
		return MISC::SET_PED_DECOMPOSED(ped, toggle);
	}
	void _0xAB26DEEE120FD3FD_Export(Any p0, Any p1)
	{
		return MISC::_0xAB26DEEE120FD3FD(p0, p1);
	}
	void _0x082C043C7AFC3747_Export(int compositeId, BOOL p1)
	{
		return MISC::_0x082C043C7AFC3747(compositeId, p1);
	}
	void DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME_Export(int compositeId, BOOL p1)
	{
		return MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(compositeId, p1);
	}
	void _0xBB282CF5D2333FB8_Export(Any p0, Any p1)
	{
		return MISC::_0xBB282CF5D2333FB8(p0, p1);
	}
	void _0xAD44856A1CD29635_Export(Any p0, Any p1, Any p2)
	{
		return MISC::_0xAD44856A1CD29635(p0, p1, p2);
	}
	Any _0x38C2BF94D15F464D_Export(Any p0)
	{
		return MISC::_0x38C2BF94D15F464D(p0);
	}
	void _0x3A87FDA8F1B6CDFB_Export(Any p0, Any p1, Any p2)
	{
		return MISC::_0x3A87FDA8F1B6CDFB(p0, p1, p2);
	}
	void _0x4647842FE8F31C1E_Export(Any p0, Any p1)
	{
		return MISC::_0x4647842FE8F31C1E(p0, p1);
	}
	BOOL _GET_LOOTING_EVENT_HAS_FIRED_Export(Ped ped, const char* eventName)
	{
		return MISC::_GET_LOOTING_EVENT_HAS_FIRED(ped, eventName);
	}
	void _SET_LOOT_PELT_SATCHEL_ITEM_Export(Ped ped, Any item)
	{
		return MISC::_SET_LOOT_PELT_SATCHEL_ITEM(ped, item);
	}
	void _0x96282005C5C6801F_Export(Any p0, Any p1)
	{
		return MISC::_0x96282005C5C6801F(p0, p1);
	}
	void _0xF63FA29D4A9ACA86_Export(Any p0, Any p1)
	{
		return MISC::_0xF63FA29D4A9ACA86(p0, p1);
	}
	void _0x8C0F6A3D7236DEEB_Export(Any p0, Any p1)
	{
		return MISC::_0x8C0F6A3D7236DEEB(p0, p1);
	}
	void _0x7FA58CED69405F9A_Export(Any p0, Any p1)
	{
		return MISC::_0x7FA58CED69405F9A(p0, p1);
	}
	void _0xA08111B053D84B4D_Export(Any p0)
	{
		return MISC::_0xA08111B053D84B4D(p0);
	}
	BOOL _IS_GLOBAL_BLOCK_VALID_Export(int index)
	{
		return MISC::_IS_GLOBAL_BLOCK_VALID(index);
	}
	void _SET_GLOBAL_BLOCK_IS_LOADED_Export(int index, BOOL toggle)
	{
		return MISC::_SET_GLOBAL_BLOCK_IS_LOADED(index, toggle);
	}
	BOOL GAME_FRAMEWORK_MANAGER_INIT_Export(Hash transitionMode)
	{
		return MISC::GAME_FRAMEWORK_MANAGER_INIT(transitionMode);
	}
	void _GAME_FRAMEWORK_MANAGER_SHUTDOWN_Export()
	{
		return MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	}
	Hash _GAME_FRAMEWORK_MANAGER_GET_MODE_Export()
	{
		return MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE();
	}
	BOOL _IS_PLAYER_OWNING_STANDALONE_SP_Export()
	{
		return MISC::_IS_PLAYER_OWNING_STANDALONE_SP();
	}
	Any _0x0358B8A41916C613_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return MISC::_0x0358B8A41916C613(p0, p1, p2, p3);
	}
	void _SET_GAME_LOGIC_PAUSED_Export()
	{
		return MISC::_SET_GAME_LOGIC_PAUSED();
	}
	void STOP_CURRENT_LOADING_PROGRESS_TIMER_Export()
	{
		return MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	}
	void _0xDBDA48EC456ED908_Export()
	{
		return MISC::_0xDBDA48EC456ED908();
	}
	BOOL MISSIONDATA_IS_VALID_Export(Any p0)
	{
		return MISSIONDATA::MISSIONDATA_IS_VALID(p0);
	}
	Hash MISSIONDATA_GET_CATAGORY_Export(Hash missionId)
	{
		return MISSIONDATA::MISSIONDATA_GET_CATAGORY(missionId);
	}
	Hash MISSIONDATA_GET_TEXTURE_NAME_Export(Hash missionId)
	{
		return MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(missionId);
	}
	Hash MISSIONDATA_GET_TEXTURE_TXD_Export(Hash missionId)
	{
		return MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(missionId);
	}
	BOOL MISSIONDATA_WAS_COMPLETED_Export(Hash missionId)
	{
		return MISSIONDATA::MISSIONDATA_WAS_COMPLETED(missionId);
	}
	int MISSIONDATA_GET_RATING_Export(Hash missionId)
	{
		return MISSIONDATA::MISSIONDATA_GET_RATING(missionId);
	}
	void _MISSIONDATA_SET_MISSION_RATING_Export(Hash missionId, int rating)
	{
		return MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(missionId, rating);
	}
	BOOL MISSIONDATA_IS_REQUIRED_STORY_MISSION_Export(Hash missionId)
	{
		return MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(missionId);
	}
	void _MISSIONDATA_SET_REPLAY_STATE_LOCKED_Export(Hash missionId, int replayState)
	{
		return MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, replayState);
	}
	int MISSIONDATA_GET_REPLAY_STATE_Export(Any p0)
	{
		return MISSIONDATA::MISSIONDATA_GET_REPLAY_STATE(p0);
	}
	void MISSIONDATA_SET_RATING_SCORES_Export(Hash missionId, int bronzeScore, int silverScore, int goldScore)
	{
		return MISSIONDATA::MISSIONDATA_SET_RATING_SCORES(missionId, bronzeScore, silverScore, goldScore);
	}
	void MISSIONDATA_SET_HIGH_SCORE_Export(Hash missionId, int score)
	{
		return MISSIONDATA::MISSIONDATA_SET_HIGH_SCORE(missionId, score);
	}
	int MISSIONDATA_GET_HIGH_SCORE_Export(Hash missionId)
	{
		return MISSIONDATA::MISSIONDATA_GET_HIGH_SCORE(missionId);
	}
	BOOL _MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED_Export(Hash category)
	{
		return MISSIONDATA::_MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(category);
	}
	void MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY_Export(Hash category, BOOL locked)
	{
		return MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(category, locked);
	}
	void _MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER_Export(const char* timecycleName)
	{
		return MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(timecycleName);
	}
	void _MISSIONDATA_TIMECYCLE_BOX_DELETE_Export()
	{
		return MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	BOOL _MISSIONDATA_TIMECYCLE_BOX_EXISTS_Export()
	{
		return MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS();
	}
	int _MONEY_GET_CASH_BALANCE_Export()
	{
		return MONEY::_MONEY_GET_CASH_BALANCE();
	}
	BOOL _MONEY_DECREMENT_CASH_BALANCE_Export(int amount)
	{
		return MONEY::_MONEY_DECREMENT_CASH_BALANCE(amount);
	}
	BOOL _MONEY_INCREMENT_CASH_BALANCE_Export(int amount, Hash addReason)
	{
		return MONEY::_MONEY_INCREMENT_CASH_BALANCE(amount, addReason);
	}
	const char* _NETWORK_GET_STRING_CASH_BALANCE_Export()
	{
		return MONEY::_NETWORK_GET_STRING_CASH_BALANCE();
	}
	BOOL _NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN_Export(int cashBalance, int goldBarBalance)
	{
		return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance);
	}
	const char* _0xA46FD001D1BE896C_Export()
	{
		return MONEY::_0xA46FD001D1BE896C();
	}
	BOOL _0x07AD9E43FD478527_Export(Any p0, Any p1)
	{
		return MONEY::_0x07AD9E43FD478527(p0, p1);
	}
	int _NETWORK_GET_CASH_BALANCE_Export()
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	BOOL CASHINVENTORY_INIT_SESSION_STATUS_Export(int* p0, int* p1)
	{
		return NETSHOPPING::CASHINVENTORY_INIT_SESSION_STATUS(p0, p1);
	}
	BOOL _CASHINVENTORY_IS_SESSION_READY_Export()
	{
		return NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY();
	}
	BOOL CASHINVENTORY_IS_CONNECTION_FAULTED_Export()
	{
		return NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED();
	}
	BOOL _CASHINVENTORY_INIT_SESSION_IS_FAULTED_Export()
	{
		return NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED();
	}
	BOOL _CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM_Export(Hash actionHash, int* id, void* item, int p3)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(actionHash, id, item, p3);
	}
	BOOL _CASHINVENTORY_TRANSACTION_START_Export(int* id, Hash type, Hash actionHash)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(id, type, actionHash);
	}
	BOOL _CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID_Export(int id)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(id);
	}
	BOOL _CASHINVENTORY_TRANSACTION_DELETE_Export(int id)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(id);
	}
	int _CASHINVENTORY_TRANSACTION_VALIDATE_ITEM_Export(Hash p0, void* p1)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(p0, p1);
	}
	int _0x38640A8C2DEF011B_Export(int p0)
	{
		return NETSHOPPING::_0x38640A8C2DEF011B(p0);
	}
	BOOL _0xA3B8D31C13CB4239_Export(int p0, Hash p1, void* p2, int p3, void* p4, int p5)
	{
		return NETSHOPPING::_0xA3B8D31C13CB4239(p0, p1, p2, p3, p4, p5);
	}
	BOOL _CASHINVENTORY_TRANSACTION_ADD_AWARD_Export(int id, Hash hash, void* p2, void* p3)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_AWARD(id, hash, p2, p3);
	}
	BOOL _CASHINVENTORY_TRANSACTION_GET_ITEM_INFO_Export(int id, int index, void* itemInfo)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(id, index, itemInfo);
	}
	int _CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS_Export(int id)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(id);
	}
	Hash _CASHINVENTORY_TRANSACTION_GET_ACTION_Export(int id)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(id);
	}
	BOOL _CASHINVENTORY_TRANSACTION_CHECKOUT_Export(int id)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(id);
	}
	BOOL _CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS_Export(int id, int* status)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(id, status);
	}
	int _0xB6F4557060EF0FB4_Export(int p0, int p1)
	{
		return NETSHOPPING::_0xB6F4557060EF0FB4(p0, p1);
	}
	BOOL _CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO_Export(int id, int index, void* itemInfo)
	{
		return NETSHOPPING::_CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO(id, index, itemInfo);
	}
	BOOL _0xCE54C9ABE6FBC6DB_Export(Hash p0)
	{
		return NETSHOPPING::_0xCE54C9ABE6FBC6DB(p0);
	}
	BOOL _0xA0B7094629724974_Export(Hash p0, Any p1)
	{
		return NETSHOPPING::_0xA0B7094629724974(p0, p1);
	}
	BOOL _0x92A32BA29622763F_Export(int id, int index, void* p2)
	{
		return NETSHOPPING::_0x92A32BA29622763F(id, index, p2);
	}
	BOOL _0x3FA09DD57B93C0DE_Export(Hash p0, int p1, int p2, Any p3, int p4)
	{
		return NETSHOPPING::_0x3FA09DD57B93C0DE(p0, p1, p2, p3, p4);
	}
	BOOL _0xD1555FBC96C88444_Export(Hash p0, int p1, int p2, Any p3, int p4)
	{
		return NETSHOPPING::_0xD1555FBC96C88444(p0, p1, p2, p3, p4);
	}
	BOOL NETWORK_IS_SIGNED_ONLINE_Export()
	{
		return NETWORK::NETWORK_IS_SIGNED_ONLINE();
	}
	int NETWORK_GET_NP_UNAVAILABLE_REASON_Export()
	{
		return NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();
	}
	BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS_Export()
	{
		return NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS();
	}
	BOOL NETWORK_IS_CLOUD_AVAILABLE_Export()
	{
		return NETWORK::NETWORK_IS_CLOUD_AVAILABLE();
	}
	BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT_Export()
	{
		return NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT();
	}
	BOOL NETWORK_IS_HOST_Export()
	{
		return NETWORK::NETWORK_IS_HOST();
	}
	BOOL NETWORK_HAVE_ONLINE_PRIVILEGES_Export()
	{
		return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
	}
	BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES_Export(int nGamerIndex)
	{
		return NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(nGamerIndex);
	}
	BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES_Export(int nGamerIndex)
	{
		return NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(nGamerIndex);
	}
	BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(gamerHandle);
	}
	BOOL _0xF23A6D6C11D8EC15_Export(void* gamerHandle)
	{
		return NETWORK::_0xF23A6D6C11D8EC15(gamerHandle);
	}
	int _0x3E8CCE6769DB5F34_Export(int p0)
	{
		return NETWORK::_0x3E8CCE6769DB5F34(p0);
	}
	void NETWORK_SHOW_ACCOUNT_UPGRADE_UI_Export()
	{
		return NETWORK::NETWORK_SHOW_ACCOUNT_UPGRADE_UI();
	}
	BOOL NETWORK_IS_PROMOTION_ENABLED_Export()
	{
		return NETWORK::NETWORK_IS_PROMOTION_ENABLED();
	}
	BOOL NETWORK_IS_CUSTOM_UPSELL_ENABLED_Export()
	{
		return NETWORK::NETWORK_IS_CUSTOM_UPSELL_ENABLED();
	}
	BOOL NETWORK_SHOULD_SHOW_PROMOTION_DLG_Export()
	{
		return NETWORK::NETWORK_SHOULD_SHOW_PROMOTION_DLG();
	}
	void _0xFC6FCF4C03F1BBF6_Export()
	{
		return NETWORK::_0xFC6FCF4C03F1BBF6();
	}
	Any _0x160F0CE6D76A39C9_Export()
	{
		return NETWORK::_0x160F0CE6D76A39C9();
	}
	int NETWORK_GET_PROMOTION_DLG_SEEN_COUNT_Export()
	{
		return NETWORK::NETWORK_GET_PROMOTION_DLG_SEEN_COUNT();
	}
	void _0xE5FF65CFF5160752_Export()
	{
		return NETWORK::_0xE5FF65CFF5160752();
	}
	BOOL NETWORK_CAN_ACCESS_MULTIPLAYER_Export(int* nAccessCode)
	{
		return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(nAccessCode);
	}
	BOOL NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL_Export()
	{
		return NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL();
	}
	int _NETWORK_GET_GLOBAL_ENTITY_FLAGS_Export(Entity entity)
	{
		return NETWORK::_NETWORK_GET_GLOBAL_ENTITY_FLAGS(entity);
	}
	void _0xA95470DA137587F5_Export(BOOL p0)
	{
		return NETWORK::_0xA95470DA137587F5(p0);
	}
	Any _0xBB697756309D77EE_Export(BOOL p0)
	{
		return NETWORK::_0xBB697756309D77EE(p0);
	}
	BOOL _NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT_Export()
	{
		return NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT();
	}
	BOOL NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT_Export(BOOL completed)
	{
		return NETWORK::NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(completed);
	}
	BOOL _0xD7D0DF27CB1765B5_Export(int p0)
	{
		return NETWORK::_0xD7D0DF27CB1765B5(p0);
	}
	BOOL NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT_Export(BOOL enabled, int flagIndex)
	{
		return NETWORK::NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(enabled, flagIndex);
	}
	void _0x3E74A687A73979C6_Export(BOOL p0)
	{
		return NETWORK::_0x3E74A687A73979C6(p0);
	}
	BOOL NETWORK_SESSION_IS_PRIVATE_Export()
	{
		return NETWORK::NETWORK_SESSION_IS_PRIVATE();
	}
	void _NETWORK_SESSION_GET_SESSION_ID_Export(void* sessionId)
	{
		return NETWORK::_NETWORK_SESSION_GET_SESSION_ID(sessionId);
	}
	BOOL _NETWORK_SESSION_ARE_SESSION_IDS_EQUAL_Export(void* sessionId1, void* sessionId2)
	{
		return NETWORK::_NETWORK_SESSION_ARE_SESSION_IDS_EQUAL(sessionId1, sessionId2);
	}
	BOOL NETWORK_REQUEST_SESSION_SEAMLESS_Export(int flags, int seamlessType, void* sessionRequestId)
	{
		return NETWORK::NETWORK_REQUEST_SESSION_SEAMLESS(flags, seamlessType, sessionRequestId);
	}
	BOOL NETWORK_SESSION_REQUEST_SESSION_SEAMLESS_Export(int flags, int seamlessType, int userHash, void* sessionRequestId)
	{
		return NETWORK::NETWORK_SESSION_REQUEST_SESSION_SEAMLESS(flags, seamlessType, userHash, sessionRequestId);
	}
	BOOL NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE_Export(int flags, int matchType, int userHash, int p3, void* sessionRequestId)
	{
		return NETWORK::NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE(flags, matchType, userHash, p3, sessionRequestId);
	}
	BOOL NETWORK_SESSION_REQUEST_SESSION_PRIVATE_Export(int flags, int numPlayers, int userHash, void* sessionRequestId)
	{
		return NETWORK::NETWORK_SESSION_REQUEST_SESSION_PRIVATE(flags, numPlayers, userHash, sessionRequestId);
	}
	BOOL _NETWORK_SESSION_REQUEST_SESSION_ON_CALL_Export(int flags, int category, void* p2, int userHash, void* sessionRequestId)
	{
		return NETWORK::_NETWORK_SESSION_REQUEST_SESSION_ON_CALL(flags, category, p2, userHash, sessionRequestId);
	}
	BOOL _NETWORK_SESSION_REQUEST_SESSION_NOMINATED_Export(int flags, int userHash, int p2, void* sessionRequestId)
	{
		return NETWORK::_NETWORK_SESSION_REQUEST_SESSION_NOMINATED(flags, userHash, p2, sessionRequestId);
	}
	BOOL NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID_Export(void* sessionRequestId)
	{
		return NETWORK::NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID(sessionRequestId);
	}
	int NETWORK_SESSION_GET_SESSION_TYPE_Export()
	{
		return NETWORK::NETWORK_SESSION_GET_SESSION_TYPE();
	}
	int _0x1413B6BF27AB7A95_Export()
	{
		return NETWORK::_0x1413B6BF27AB7A95();
	}
	BOOL NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS_Export()
	{
		return NETWORK::NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS();
	}
	BOOL _0xAFA14F98327791CE_Export(void* sessionRequestId)
	{
		return NETWORK::_0xAFA14F98327791CE(sessionRequestId);
	}
	BOOL NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_Export(void* sessionRequestId)
	{
		return NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(sessionRequestId);
	}
	BOOL _NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP_Export(int queueGroup)
	{
		return NETWORK::_NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP(queueGroup);
	}
	BOOL _NETWORK_SESSION_CANCEL_REQUEST_Export(void* sessionRequestId)
	{
		return NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(sessionRequestId);
	}
	void _0xA6F1BAABFF6AD7B9_Export(void* p0)
	{
		return NETWORK::_0xA6F1BAABFF6AD7B9(p0);
	}
	int _NETWORK_SESSION_GET_SESSION_REQUEST_RESULT_Export(void* sessionRequestId, int* p1)
	{
		return NETWORK::_NETWORK_SESSION_GET_SESSION_REQUEST_RESULT(sessionRequestId, p1);
	}
	BOOL NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION_Export(void* sessionRequestId)
	{
		return NETWORK::NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION(sessionRequestId);
	}
	BOOL _NETWORK_SESSION_TRANSITION_TO_SESSION_Export(void* sessionRequestId)
	{
		return NETWORK::_NETWORK_SESSION_TRANSITION_TO_SESSION(sessionRequestId);
	}
	BOOL _NETWORK_SESSION_IS_NSRR_SUCCESS_Export(void* sessionRequestId)
	{
		return NETWORK::_NETWORK_SESSION_IS_NSRR_SUCCESS(sessionRequestId);
	}
	BOOL NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION_Export(void* sessionRequestId)
	{
		return NETWORK::NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION(sessionRequestId);
	}
	BOOL NETWORK_SESSION_LEAVE_SESSION_Export()
	{
		return NETWORK::NETWORK_SESSION_LEAVE_SESSION();
	}
	BOOL NETWORK_SESSION_IS_TRANSITIONING_Export()
	{
		return NETWORK::NETWORK_SESSION_IS_TRANSITIONING();
	}
	void _0xFD4272A137703449_Export()
	{
		return NETWORK::_0xFD4272A137703449();
	}
	void _NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT_Export()
	{
		return NETWORK::_NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT();
	}
	void _NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT_Export()
	{
		return NETWORK::_NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT();
	}
	void NETWORK_DISABLE_REALTIME_MULTIPLAYER_Export()
	{
		return NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}
	void _0x71FA2D1880C48032_Export(BOOL p0)
	{
		return NETWORK::_0x71FA2D1880C48032(p0);
	}
	void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK_Export(int* nHour, int* nMinute, int* nSecond)
	{
		return NETWORK::NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(nHour, nMinute, nSecond);
	}
	void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE_Export()
	{
		return NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
	}
	BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN_Export()
	{
		return NETWORK::NETWORK_IS_CLOCK_TIME_OVERRIDDEN();
	}
	BOOL NETWORK_GET_GLOBAL_CLOCK_Export(int* hour, int* minute, int* second)
	{
		return NETWORK::NETWORK_GET_GLOBAL_CLOCK(hour, minute, second);
	}
	void _NETWORK_CLOCK_TIME_OVERRIDE_Export(int hour, int minute, int second, int transitionTime, BOOL pauseClock)
	{
		return NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(hour, minute, second, transitionTime, pauseClock);
	}
	void _NETWORK_CLOCK_TIME_OVERRIDE_2_Export(int hour, int minute, int second, int transitionTime, BOOL pauseClock, BOOL clockwise)
	{
		return NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE_2(hour, minute, second, transitionTime, pauseClock, clockwise);
	}
	void _NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME_Export(int milliseconds)
	{
		return NETWORK::_NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME(milliseconds);
	}
	BOOL _0x0E54D4DA6018FF8E_Export()
	{
		return NETWORK::_0x0E54D4DA6018FF8E();
	}
	BOOL NETWORK_IS_FINDING_GAMERS_Export()
	{
		return NETWORK::NETWORK_IS_FINDING_GAMERS();
	}
	BOOL NETWORK_DID_FIND_GAMERS_SUCCEED_Export()
	{
		return NETWORK::NETWORK_DID_FIND_GAMERS_SUCCEED();
	}
	int _0x7BCA0A3972708436_Export(void* outData, int p1)
	{
		return NETWORK::_0x7BCA0A3972708436(outData, p1);
	}
	void NETWORK_CLEAR_FOUND_GAMERS_Export()
	{
		return NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
	}
	BOOL _NETWORK_GET_GAMER_SESSION_FROM_HANDLE_Export(void* data, int count)
	{
		return NETWORK::_NETWORK_GET_GAMER_SESSION_FROM_HANDLE(data, count);
	}
	BOOL _NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED_Export()
	{
		return NETWORK::_NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED();
	}
	BOOL NETWORK_DID_GET_GAMER_STATUS_SUCCEED_Export()
	{
		return NETWORK::NETWORK_DID_GET_GAMER_STATUS_SUCCEED();
	}
	int _NETWORK_GET_GAMER_STATUS_Export(void* gamerHandle, int p1)
	{
		return NETWORK::_NETWORK_GET_GAMER_STATUS(gamerHandle, p1);
	}
	void NETWORK_CLEAR_GET_GAMER_STATUS_Export()
	{
		return NETWORK::NETWORK_CLEAR_GET_GAMER_STATUS();
	}
	void NETWORK_SET_SCRIPT_READY_FOR_EVENTS_Export(BOOL bReady)
	{
		return NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(bReady);
	}
	BOOL _0x316FD416C432C761_Export()
	{
		return NETWORK::_0x316FD416C432C761();
	}
	BOOL _0x062842D61D0D53FD_Export()
	{
		return NETWORK::_0x062842D61D0D53FD();
	}
	BOOL NETWORK_IS_GAME_IN_PROGRESS_Export()
	{
		return NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	}
	BOOL NETWORK_IS_SESSION_ACTIVE_Export()
	{
		return NETWORK::NETWORK_IS_SESSION_ACTIVE();
	}
	BOOL NETWORK_IS_IN_SESSION_Export()
	{
		return NETWORK::NETWORK_IS_IN_SESSION();
	}
	BOOL _NETWORK_IS_IN_SESSION_LOBBY_Export()
	{
		return NETWORK::_NETWORK_IS_IN_SESSION_LOBBY();
	}
	BOOL NETWORK_IS_SESSION_STARTED_Export()
	{
		return NETWORK::NETWORK_IS_SESSION_STARTED();
	}
	BOOL NETWORK_CAN_SESSION_END_Export()
	{
		return NETWORK::NETWORK_CAN_SESSION_END();
	}
	int NETWORK_GET_GAME_MODE_Export()
	{
		return NETWORK::NETWORK_GET_GAME_MODE();
	}
	BOOL _NETWORK_SESSION_ADD_SESSION_FLAGS_Export(int flags)
	{
		return NETWORK::_NETWORK_SESSION_ADD_SESSION_FLAGS(flags);
	}
	BOOL NETWORK_SESSION_REMOVE_SESSION_FLAGS_Export(int flags)
	{
		return NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(flags);
	}
	int NETWORK_SESSION_GET_SESSION_FLAGS_Export()
	{
		return NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
	}
	BOOL _NETWORK_SESSION_SET_PLAYER_FLAGS_Export(int flags)
	{
		return NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(flags);
	}
	BOOL _NETWORK_SESSION_REMOVE_PLAYER_FLAGS_Export(int flags)
	{
		return NETWORK::_NETWORK_SESSION_REMOVE_PLAYER_FLAGS(flags);
	}
	Player _NETWORK_GET_SESSION_HOST_Export()
	{
		return NETWORK::_NETWORK_GET_SESSION_HOST();
	}
	Any _0xD3A3C8B9F3BDEF81_Export()
	{
		return NETWORK::_0xD3A3C8B9F3BDEF81();
	}
	BOOL _0x18B94666CF610AEB_Export()
	{
		return NETWORK::_0x18B94666CF610AEB();
	}
	BOOL _0x981146E5C9CE9250_Export(int inviteIndex)
	{
		return NETWORK::_0x981146E5C9CE9250(inviteIndex);
	}
	int _0xBF8276E51761F9DA_Export()
	{
		return NETWORK::_0xBF8276E51761F9DA();
	}
	BOOL _0xDCA4A74135E1DEA5_Export(Any p0)
	{
		return NETWORK::_0xDCA4A74135E1DEA5(p0);
	}
	BOOL NETWORK_HAS_PENDING_INVITE_FAILURE_Export()
	{
		return NETWORK::NETWORK_HAS_PENDING_INVITE_FAILURE();
	}
	BOOL _NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE_Export(void* gamerHandle)
	{
		return NETWORK::_NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE(gamerHandle);
	}
	void _0x704F92B3AF20D857_Export(BOOL setting)
	{
		return NETWORK::_0x704F92B3AF20D857(setting);
	}
	void _0xF342F6BD0A8287D5_Export(Any p0)
	{
		return NETWORK::_0xF342F6BD0A8287D5(p0);
	}
	void _0xD39A72AE5EBD57E5_Export()
	{
		return NETWORK::_0xD39A72AE5EBD57E5();
	}
	BOOL _NETWORK_SEND_SESSION_INVITE_Export(void* gamerHandle, const char* contentId, void* data, int dataSize, int p4, int flags)
	{
		return NETWORK::_NETWORK_SEND_SESSION_INVITE(gamerHandle, contentId, data, dataSize, p4, flags);
	}
	BOOL _0xD1FFB246F4E088AC_Export(int p0)
	{
		return NETWORK::_0xD1FFB246F4E088AC(p0);
	}
	int _0x27B1AE4D8C652F08_Export(int p0)
	{
		return NETWORK::_0x27B1AE4D8C652F08(p0);
	}
	int _0x6C27442A225A241A_Export(int p0)
	{
		return NETWORK::_0x6C27442A225A241A(p0);
	}
	const char* _0xE59F4924BD3A718D_Export(int p0)
	{
		return NETWORK::_0xE59F4924BD3A718D(p0);
	}
	int _0x78271BC02AE9AF83_Export(int p0)
	{
		return NETWORK::_0x78271BC02AE9AF83(p0);
	}
	BOOL _0x16EFB123C4451032_Export(int p0, void* gamerHandle)
	{
		return NETWORK::_0x16EFB123C4451032(p0, gamerHandle);
	}
	const char* _0xE79BA3BC265895DA_Export(int p0)
	{
		return NETWORK::_0xE79BA3BC265895DA(p0);
	}
	Any _0xC0CFFDA87C2C163D_Export(int p0, Any p1, int p2)
	{
		return NETWORK::_0xC0CFFDA87C2C163D(p0, p1, p2);
	}
	Any _0x5ED39DA62BEB1330_Export(int p0)
	{
		return NETWORK::_0x5ED39DA62BEB1330(p0);
	}
	BOOL NETWORK_ACCEPT_RS_INVITE_Export(int p0)
	{
		return NETWORK::NETWORK_ACCEPT_RS_INVITE(p0);
	}
	BOOL _0x3AA0CDC63696166D_Export(int p0)
	{
		return NETWORK::_0x3AA0CDC63696166D(p0);
	}
	int NETWORK_REQUEST_JOIN_Export(Any p0)
	{
		return NETWORK::NETWORK_REQUEST_JOIN(p0);
	}
	int _0xE8E633215471BB5D_Export(Any p0)
	{
		return NETWORK::_0xE8E633215471BB5D(p0);
	}
	BOOL _0xA2837A5E21FB5A58_Export(Any p0)
	{
		return NETWORK::_0xA2837A5E21FB5A58(p0);
	}
	BOOL _0xE39600E50D608693_Export(Any p0, Any p1)
	{
		return NETWORK::_0xE39600E50D608693(p0, p1);
	}
	BOOL _0xD7BAD4062074B9C1_Export(Any p0)
	{
		return NETWORK::_0xD7BAD4062074B9C1(p0);
	}
	int _0xCA58D4FD20D70F24_Export(Any p0)
	{
		return NETWORK::_0xCA58D4FD20D70F24(p0);
	}
	BOOL _0xC028B3F52C707C49_Export(Any p0)
	{
		return NETWORK::_0xC028B3F52C707C49(p0);
	}
	BOOL NETWORK_IS_PLATFORM_INVITE_PENDING_Export()
	{
		return NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING();
	}
	void _0x5B9C6AC118FD4774_Export()
	{
		return NETWORK::_0x5B9C6AC118FD4774();
	}
	int _NETWORK_GET_PLATFORM_INVITE_ID_Export()
	{
		return NETWORK::_NETWORK_GET_PLATFORM_INVITE_ID();
	}
	BOOL NETWORK_ACTION_PLATFORM_INVITE_Export()
	{
		return NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
	}
	void NETWORK_CLEAR_PLATFORM_INVITE_Export()
	{
		return NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	}
	void _0x603469298A4308AF_Export(BOOL p0)
	{
		return NETWORK::_0x603469298A4308AF(p0);
	}
	BOOL _NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE_Export()
	{
		return NETWORK::_NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE();
	}
	BOOL NETWORK_IS_IN_PLATFORM_PARTY_Export()
	{
		return NETWORK::NETWORK_IS_IN_PLATFORM_PARTY();
	}
	BOOL _NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY_Export(void* gamerHandle1, void* gamerHandle2)
	{
		return NETWORK::_NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY(gamerHandle1, gamerHandle2);
	}
	BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT_Export()
	{
		return NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT();
	}
	void NETWORK_SEED_RANDOM_NUMBER_GENERATOR_Export(int nSeed)
	{
		return NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(nSeed);
	}
	int NETWORK_GET_RANDOM_INT_RANGED_Export(int nMinimum, int nMaximum)
	{
		return NETWORK::NETWORK_GET_RANDOM_INT_RANGED(nMinimum, nMaximum);
	}
	void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT_Export(int MaxNumPlayers, BOOL activeInSinglePlayer, int InstanceId)
	{
		return NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(MaxNumPlayers, activeInSinglePlayer, InstanceId);
	}
	BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT_Export()
	{
		return NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
	}
	int NETWORK_GET_MAX_NUM_PARTICIPANTS_Export()
	{
		return NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
	}
	int NETWORK_GET_NUM_PARTICIPANTS_Export()
	{
		return NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
	}
	int NETWORK_GET_SCRIPT_STATUS_Export()
	{
		return NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES_Export(void* Address, int Size, const char* DebugName)
	{
		return NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Address, Size, DebugName);
	}
	int _NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE_Export(int* p0)
	{
		return NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(p0);
	}
	void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES_Export(void* Address, int Size, const char* DebugName)
	{
		return NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Address, Size, DebugName);
	}
	int _NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE_Export(int* p0)
	{
		return NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(p0);
	}
	BOOL NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA_Export()
	{
		return NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA();
	}
	Player NETWORK_GET_PLAYER_INDEX_Export(int Participant)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(Participant);
	}
	int NETWORK_GET_PARTICIPANT_INDEX_Export(Player Plr)
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Plr);
	}
	Player NETWORK_GET_PLAYER_INDEX_FROM_PED_Export(Ped PedIndex)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PedIndex);
	}
	int NETWORK_GET_NUM_CONNECTED_PLAYERS_Export()
	{
		return NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
	}
	BOOL NETWORK_IS_PLAYER_CONNECTED_Export(Player Plr)
	{
		return NETWORK::NETWORK_IS_PLAYER_CONNECTED(Plr);
	}
	int NETWORK_GET_TOTAL_NUM_PLAYERS_Export()
	{
		return NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	}
	BOOL NETWORK_IS_PARTICIPANT_ACTIVE_Export(int Participant)
	{
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(Participant);
	}
	BOOL NETWORK_IS_PLAYER_ACTIVE_Export(Player Plr)
	{
		return NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr);
	}
	BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_Export(Player Plr)
	{
		return NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Plr);
	}
	BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT_Export()
	{
		return NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	}
	int NETWORK_GET_HOST_OF_THIS_SCRIPT_Export()
	{
		return NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
	}
	Player NETWORK_GET_HOST_OF_SCRIPT_Export(const char* scriptName, int instanceId, int p2)
	{
		return NETWORK::NETWORK_GET_HOST_OF_SCRIPT(scriptName, instanceId, p2);
	}
	Player NETWORK_GET_HOST_OF_THREAD_Export(int threadId)
	{
		return NETWORK::NETWORK_GET_HOST_OF_THREAD(threadId);
	}
	void NETWORK_SET_MISSION_FINISHED_Export()
	{
		return NETWORK::NETWORK_SET_MISSION_FINISHED();
	}
	BOOL NETWORK_IS_SCRIPT_ACTIVE_Export(const char* scriptName, int instanceId, BOOL localOnly, int p3)
	{
		return NETWORK::NETWORK_IS_SCRIPT_ACTIVE(scriptName, instanceId, localOnly, p3);
	}
	BOOL NETWORK_IS_SCRIPT_ACTIVE_BY_HASH_Export(Hash scriptHash, int p1, BOOL p2, int p3)
	{
		return NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, p1, p2, p3);
	}
	BOOL _NETWORK_IS_THREAD_ACTIVE_Export(int threadId)
	{
		return NETWORK::_NETWORK_IS_THREAD_ACTIVE(threadId);
	}
	int _NETWORK_GET_INSTANCE_ID_OF_THREAD_Export(int threadId)
	{
		return NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(threadId);
	}
	int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS_Export(const char* scriptName, int instanceId, Hash positionHash)
	{
		return NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(scriptName, instanceId, positionHash);
	}
	int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT_Export()
	{
		return NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	}
	BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT_Export(Player Plr, const char* scriptName, int instanceId)
	{
		return NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Plr, scriptName, instanceId);
	}
	void NETWORK_PREVENT_SCRIPT_HOST_MIGRATION_Export()
	{
		return NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
	}
	BOOL NETWORK_IS_FEATURE_SUPPORTED_Export(int featureId)
	{
		return NETWORK::NETWORK_IS_FEATURE_SUPPORTED(featureId);
	}
	int PARTICIPANT_ID_Export()
	{
		return NETWORK::PARTICIPANT_ID();
	}
	int PARTICIPANT_ID_TO_INT_Export()
	{
		return NETWORK::PARTICIPANT_ID_TO_INT();
	}
	Player NETWORK_GET_DESTROYER_OF_NETWORK_ID_Export(int NetworkId, Hash* TypeOfWeapon)
	{
		return NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(NetworkId, TypeOfWeapon);
	}
	Player _0x6CF82A7F65A5AD5F_Export(Ped ped, void* p1)
	{
		return NETWORK::_0x6CF82A7F65A5AD5F(ped, p1);
	}
	BOOL _0x236321F1178A5446_Export(Player player, Ped ped, void* p2)
	{
		return NETWORK::_0x236321F1178A5446(player, ped, p2);
	}
	BOOL NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY_Export(Player playerIndexDamager, Entity entityDamaged, int* damageDealt)
	{
		return NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(playerIndexDamager, entityDamaged, damageDealt);
	}
	Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER_Export(Player Plr, Hash* TypeOfWeapon)
	{
		return NETWORK::NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Plr, TypeOfWeapon);
	}
	void NETWORK_RESURRECT_LOCAL_PLAYER_Export(float PosX, float PosY, float PosZ, float Heading, int p4, BOOL p5, Any p6, BOOL p7)
	{
		return NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(PosX, PosY, PosZ, Heading, p4, p5, p6, p7);
	}
	void _NETWORK_RESURRECT_LOCAL_PLAYER_2_Export(void* args)
	{
		return NETWORK::_NETWORK_RESURRECT_LOCAL_PLAYER_2(args);
	}
	void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME_Export(int invincibilityTime)
	{
		return NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(invincibilityTime);
	}
	void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT_Export(BOOL bSyncLookAt)
	{
		return NETWORK::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(bSyncLookAt);
	}
	BOOL NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD_Export(Entity EntityIndex)
	{
		return NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(EntityIndex);
	}
	int NETWORK_GET_NETWORK_ID_FROM_ENTITY_Export(Entity EntityIndex)
	{
		return NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(EntityIndex);
	}
	Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID_Export(int NetworkId)
	{
		return NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(NetworkId);
	}
	BOOL NETWORK_GET_ENTITY_IS_NETWORKED_Export(Entity entityIndex)
	{
		return NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(entityIndex);
	}
	void NETWORK_REGISTER_ENTITY_AS_NETWORKED_Export(Entity entityIndex)
	{
		return NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(entityIndex);
	}
	BOOL NETWORK_DOES_NETWORK_ID_EXIST_Export(int NetworkId)
	{
		return NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NetworkId);
	}
	Any _0x950ACD8F05B7B9DF_Export(Any p0)
	{
		return NETWORK::_0x950ACD8F05B7B9DF(p0);
	}
	BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID_Export(int NetworkId)
	{
		return NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NetworkId);
	}
	BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID_Export(int NetworkId)
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NetworkId);
	}
	BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY_Export(Entity entityIndex)
	{
		return NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(entityIndex);
	}
	BOOL _NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE_Export(AnimScene animScene)
	{
		return NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(animScene);
	}
	BOOL NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT_Export(Any p0)
	{
		return NETWORK::NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT(p0);
	}
	BOOL NETWORK_HAS_CONTROL_OF_ENTITY_Export(Entity entityIndex)
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityIndex);
	}
	BOOL NETWORK_HAS_CONTROL_OF_PICKUP_Export(Pickup pickupIndex)
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(pickupIndex);
	}
	BOOL _NETWORK_HAS_CONTROL_OF_ANIM_SCENE_Export(AnimScene animScene)
	{
		return NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(animScene);
	}
	BOOL NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT_Export(Any p0)
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT(p0);
	}
	int _0xF260AF6F43953316_Export(ScrHandle handle)
	{
		return NETWORK::_0xF260AF6F43953316(handle);
	}
	int VEH_TO_NET_Export(Vehicle vehID)
	{
		return NETWORK::VEH_TO_NET(vehID);
	}
	int PED_TO_NET_Export(Ped pedID)
	{
		return NETWORK::PED_TO_NET(pedID);
	}
	int OBJ_TO_NET_Export(Object objID)
	{
		return NETWORK::OBJ_TO_NET(objID);
	}
	int _ANIM_SCENE_TO_NET_Export(AnimScene animScene)
	{
		return NETWORK::_ANIM_SCENE_TO_NET(animScene);
	}
	Vehicle NET_TO_VEH_Export(int netID)
	{
		return NETWORK::NET_TO_VEH(netID);
	}
	Ped NET_TO_PED_Export(int netID)
	{
		return NETWORK::NET_TO_PED(netID);
	}
	Object NET_TO_OBJ_Export(int netID)
	{
		return NETWORK::NET_TO_OBJ(netID);
	}
	Entity NET_TO_ENT_Export(int netID)
	{
		return NETWORK::NET_TO_ENT(netID);
	}
	AnimScene _NET_TO_ANIM_SCENE_Export(int netId)
	{
		return NETWORK::_NET_TO_ANIM_SCENE(netId);
	}
	int _PROPSET_TO_NET_Export(PropSet propSet)
	{
		return NETWORK::_PROPSET_TO_NET(propSet);
	}
	PropSet _NET_TO_PROPSET_Export(int netId)
	{
		return NETWORK::_NET_TO_PROPSET(netId);
	}
	void _0x0CC28C08613BA9E5_Export(int p0)
	{
		return NETWORK::_0x0CC28C08613BA9E5(p0);
	}
	void NETWORK_GET_LOCAL_HANDLE_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_GET_LOCAL_HANDLE(gamerHandle);
	}
	void NETWORK_HANDLE_FROM_PLAYER_Export(Player playerIndex, void* gamerHandle)
	{
		return NETWORK::NETWORK_HANDLE_FROM_PLAYER(playerIndex, gamerHandle);
	}
	Hash NETWORK_HASH_FROM_PLAYER_HANDLE_Export(Player playerIndex)
	{
		return NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(playerIndex);
	}
	void NETWORK_HANDLE_FROM_FRIEND_Export(int friendIndex, void* gamerHandle)
	{
		return NETWORK::NETWORK_HANDLE_FROM_FRIEND(friendIndex, gamerHandle);
	}
	const char* NETWORK_GET_GAMERTAG_FROM_HANDLE_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(gamerHandle);
	}
	int NETWORK_DISPLAYNAMES_FROM_HANDLES_START_Export(void* gamerHandles, int count)
	{
		return NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(gamerHandles, count);
	}
	int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES_Export(int requestId, Any displayNames, int count)
	{
		return NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(requestId, displayNames, count);
	}
	BOOL _NETWORK_GET_DISPLAY_NAME_FROM_HANDLE_Export(void* gamerHandle, char* displayName)
	{
		return NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(gamerHandle, displayName);
	}
	BOOL NETWORK_ARE_HANDLES_THE_SAME_Export(void* gamerHandle1, void* gamerHandle2)
	{
		return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(gamerHandle1, gamerHandle2);
	}
	BOOL NETWORK_IS_HANDLE_VALID_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_IS_HANDLE_VALID(gamerHandle);
	}
	Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(gamerHandle);
	}
	BOOL NETWORK_IS_GAMER_IN_MY_SESSION_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(gamerHandle);
	}
	void NETWORK_SHOW_PROFILE_UI_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_SHOW_PROFILE_UI(gamerHandle);
	}
	void _0x5759160AC17C13CE_Export(void* gamerHandle, const char* message)
	{
		return NETWORK::_0x5759160AC17C13CE(gamerHandle, message);
	}
	int _0xF302AB9D978352EE_Export(Entity entity)
	{
		return NETWORK::_0xF302AB9D978352EE(entity);
	}
	Entity _0x4538EE7C321590BC_Export(int networkId)
	{
		return NETWORK::_0x4538EE7C321590BC(networkId);
	}
	BOOL _0xA47D48D06AA5A188_Export()
	{
		return NETWORK::_0xA47D48D06AA5A188();
	}
	int NETWORK_GET_TOTAL_NUM_FRIENDS_Export()
	{
		return NETWORK::NETWORK_GET_TOTAL_NUM_FRIENDS();
	}
	int _0xA94ECE191D90637A_Export()
	{
		return NETWORK::_0xA94ECE191D90637A();
	}
	void _0x5CB8B0C846D0F30B_Export(Any p0)
	{
		return NETWORK::_0x5CB8B0C846D0F30B(p0);
	}
	void _0xFF36F36B07E69059_Export(Any p0)
	{
		return NETWORK::_0xFF36F36B07E69059(p0);
	}
	BOOL _NETWORK_GET_CURRENT_FRIEND_PAGE_DATA_Export(void* p0)
	{
		return NETWORK::_NETWORK_GET_CURRENT_FRIEND_PAGE_DATA(p0);
	}
	int _0xB389289F031F059A_Export()
	{
		return NETWORK::_0xB389289F031F059A();
	}
	BOOL NETWORK_CAN_REFRESH_FRIEND_PAGE_Export()
	{
		return NETWORK::NETWORK_CAN_REFRESH_FRIEND_PAGE();
	}
	BOOL NETWORK_REFRESH_CURRENT_FRIEND_PAGE_Export()
	{
		return NETWORK::NETWORK_REFRESH_CURRENT_FRIEND_PAGE();
	}
	BOOL _0xDA1BFED8582F61F0_Export()
	{
		return NETWORK::_0xDA1BFED8582F61F0();
	}
	BOOL _0x232E1EB23CDB313C_Export()
	{
		return NETWORK::_0x232E1EB23CDB313C();
	}
	BOOL _0x3E4A16BC669E71B3_Export()
	{
		return NETWORK::_0x3E4A16BC669E71B3();
	}
	BOOL _NETWORK_IS_FRIEND_HANDLE_ONLINE_Export(void* gamerHandle)
	{
		return NETWORK::_NETWORK_IS_FRIEND_HANDLE_ONLINE(gamerHandle);
	}
	BOOL _NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE_Export(void* gamerHandle)
	{
		return NETWORK::_NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE(gamerHandle);
	}
	const char* _NETWORK_GET_GAMERTAG_FROM_FRIEND_Export(void* gamerHandle)
	{
		return NETWORK::_NETWORK_GET_GAMERTAG_FROM_FRIEND(gamerHandle);
	}
	BOOL NETWORK_IS_FRIEND_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_IS_FRIEND(gamerHandle);
	}
	BOOL NETWORK_IS_PENDING_FRIEND_Export(void* gamerHandle)
	{
		return NETWORK::NETWORK_IS_PENDING_FRIEND(gamerHandle);
	}
	BOOL NETWORK_ADD_FRIEND_Export(void* gamerHandle, const char* message)
	{
		return NETWORK::NETWORK_ADD_FRIEND(gamerHandle, message);
	}
	BOOL _NETWORK_REMOVE_FRIEND_Export(void* gamerHandle)
	{
		return NETWORK::_NETWORK_REMOVE_FRIEND(gamerHandle);
	}
	BOOL _NETWORK_CAN_ADD_FRIEND_Export(void* gamerHandle)
	{
		return NETWORK::_NETWORK_CAN_ADD_FRIEND(gamerHandle);
	}
	void NETWORK_SET_PLAYER_IS_PASSIVE_Export(BOOL toggle)
	{
		return NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(toggle);
	}
	void NETWORK_SET_FRIENDLY_FIRE_OPTION_Export(BOOL friendlyFire)
	{
		return NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(friendlyFire);
	}
	void NETWORK_SET_RICH_PRESENCE_Export(int id, void* data, int sizeOfData, int numFields)
	{
		return NETWORK::NETWORK_SET_RICH_PRESENCE(id, data, sizeOfData, numFields);
	}
	int NETWORK_GET_TIMEOUT_TIME_Export()
	{
		return NETWORK::NETWORK_GET_TIMEOUT_TIME();
	}
	void _0xBC7D36946D19E60E_Export(BOOL p0)
	{
		return NETWORK::_0xBC7D36946D19E60E(p0);
	}
	BOOL _0x880A7202301E282B_Export(void* p0, void* p1, float x, float y, float z, float p5, Any p6)
	{
		return NETWORK::_0x880A7202301E282B(p0, p1, x, y, z, p5, p6);
	}
	Any _0xC964FCD3D1720697_Export()
	{
		return NETWORK::_0xC964FCD3D1720697();
	}
	Any _0xEC089F84A9C16C62_Export()
	{
		return NETWORK::_0xEC089F84A9C16C62();
	}
	void PREVENT_NETWORK_ID_MIGRATION_Export(int netId)
	{
		return NETWORK::PREVENT_NETWORK_ID_MIGRATION(netId);
	}
	void KEEP_NETWORK_ID_IN_FAST_INSTANCE_Export(int netId, BOOL p1, int p2)
	{
		return NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(netId, p1, p2);
	}
	void _0x02C4C6C2900D84DF_Export(Player player, Any p1)
	{
		return NETWORK::_0x02C4C6C2900D84DF(player, p1);
	}
	void _0xD78A26024BB13E08_Export(Player player)
	{
		return NETWORK::_0xD78A26024BB13E08(player);
	}
	void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES_Export(int NetworkId, BOOL ExistsOnAll)
	{
		return NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(NetworkId, ExistsOnAll);
	}
	void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER_Export(int NetworkId, Player PlayerId, BOOL AlwaysExistsForPlayer)
	{
		return NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(NetworkId, PlayerId, AlwaysExistsForPlayer);
	}
	void SET_NETWORK_ID_STOP_CLONING_Export(int networkId, BOOL bStopCloning)
	{
		return NETWORK::SET_NETWORK_ID_STOP_CLONING(networkId, bStopCloning);
	}
	void NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED_Export(Entity entity, BOOL toggle)
	{
		return NETWORK::NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED(entity, toggle);
	}
	void NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS_Export(Entity EntityIndex, BOOL Exists)
	{
		return NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(EntityIndex, Exists);
	}
	void _0xE31A04513237DC89_Export(Entity entity)
	{
		return NETWORK::_0xE31A04513237DC89(entity);
	}
	void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_Export(int NetworkId, BOOL Visible, BOOL RemotelyVisible, Any p3)
	{
		return NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(NetworkId, Visible, RemotelyVisible, p3);
	}
	BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT_Export(int NetworkId)
	{
		return NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NetworkId);
	}
	Player _NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID_Export(int netId)
	{
		return NETWORK::_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(netId);
	}
	void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE_Export(BOOL LocallyVisible, BOOL RemotelyVisible, int instanceId)
	{
		return NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(LocallyVisible, RemotelyVisible, instanceId);
	}
	void PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER_Export(BOOL toggle)
	{
		return NETWORK::PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(toggle);
	}
	void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY_Export(BOOL bIncludePlayersVehicle)
	{
		return NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(bIncludePlayersVehicle);
	}
	void SET_PLAYER_INVISIBLE_LOCALLY_Export(Player PlayerId, BOOL bIncludePlayersVehicle)
	{
		return NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PlayerId, bIncludePlayersVehicle);
	}
	void SET_PLAYER_VISIBLE_LOCALLY_Export(Player PlayerId, BOOL bIncludePlayersVehicle)
	{
		return NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PlayerId, bIncludePlayersVehicle);
	}
	void SET_ENTITY_VISIBLE_IN_CUTSCENE_Export(Entity EntityIndex, BOOL Visible, BOOL RemotelyVisible, int p3)
	{
		return NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(EntityIndex, Visible, RemotelyVisible, p3);
	}
	void _SET_DOOR_NETWORKED_Export(Hash doorHash)
	{
		return NETWORK::_SET_DOOR_NETWORKED(doorHash);
	}
	void _SET_DOOR_UNNETWORKED_Export(Any p0, BOOL toggle)
	{
		return NETWORK::_SET_DOOR_UNNETWORKED(p0, toggle);
	}
	BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID_Export(int NetworkId)
	{
		return NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(NetworkId);
	}
	void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID_Export(int NetworkId, BOOL ActivateTracker)
	{
		return NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(NetworkId, ActivateTracker);
	}
	BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE_Export(float PosX, float PosY, float PosZ, float minRadius, float maxRadius)
	{
		return NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(PosX, PosY, PosZ, minRadius, maxRadius);
	}
	BOOL IS_SPHERE_VISIBLE_TO_PLAYER_Export(Player PlayerId, float PosX, float PosY, float PosZ, float minRadius, float maxRadius)
	{
		return NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PlayerId, PosX, PosY, PosZ, minRadius, maxRadius);
	}
	void _0xD42C543F73233041_Export(BOOL p0)
	{
		return NETWORK::_0xD42C543F73233041(p0);
	}
	void RESERVE_NETWORK_MISSION_OBJECTS_Export(int NumObjectsToReserve)
	{
		return NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NumObjectsToReserve);
	}
	void RESERVE_NETWORK_CLIENT_MISSION_OBJECTS_Export(int amount)
	{
		return NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(amount);
	}
	void RESERVE_NETWORK_MISSION_PEDS_Export(int NumPedsToReserve)
	{
		return NETWORK::RESERVE_NETWORK_MISSION_PEDS(NumPedsToReserve);
	}
	void RESERVE_NETWORK_CLIENT_MISSION_PEDS_Export(int amount)
	{
		return NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(amount);
	}
	void RESERVE_NETWORK_MISSION_VEHICLES_Export(int NumVehiclesToReserve)
	{
		return NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NumVehiclesToReserve);
	}
	void RESERVE_NETWORK_MISSION_PICKUPS_Export(int amount)
	{
		return NETWORK::RESERVE_NETWORK_MISSION_PICKUPS(amount);
	}
	BOOL CAN_REGISTER_MISSION_OBJECTS_Export(int NumObjectsToRegister)
	{
		return NETWORK::CAN_REGISTER_MISSION_OBJECTS(NumObjectsToRegister);
	}
	BOOL CAN_REGISTER_MISSION_PEDS_Export(int NumPedsToRegister)
	{
		return NETWORK::CAN_REGISTER_MISSION_PEDS(NumPedsToRegister);
	}
	BOOL CAN_REGISTER_MISSION_VEHICLES_Export(int NumVehiclesToRegister)
	{
		return NETWORK::CAN_REGISTER_MISSION_VEHICLES(NumVehiclesToRegister);
	}
	BOOL CAN_REGISTER_MISSION_PICKUPS_Export(int amount)
	{
		return NETWORK::CAN_REGISTER_MISSION_PICKUPS(amount);
	}
	BOOL CAN_REGISTER_MISSION_ENTITIES_Export(int NumPedsToRegister, int NumVehiclesToRegister, int NumObjectsToRegister, int NumPickupsToRegister)
	{
		return NETWORK::CAN_REGISTER_MISSION_ENTITIES(NumPedsToRegister, NumVehiclesToRegister, NumObjectsToRegister, NumPickupsToRegister);
	}
	int GET_NUM_RESERVED_MISSION_OBJECTS_Export(BOOL bForAllScripts)
	{
		return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(bForAllScripts);
	}
	int GET_NUM_RESERVED_MISSION_PEDS_Export(BOOL bForAllScripts)
	{
		return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(bForAllScripts);
	}
	int GET_NUM_RESERVED_MISSION_VEHICLES_Export(BOOL bForAllScripts)
	{
		return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(bForAllScripts);
	}
	int _GET_NUM_RESERVED_MISSION_PICKUPS_Export(BOOL p0)
	{
		return NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(p0);
	}
	int GET_NUM_CREATED_MISSION_OBJECTS_Export(BOOL bForAllScripts)
	{
		return NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(bForAllScripts);
	}
	int GET_NUM_CREATED_MISSION_PEDS_Export(BOOL bForAllScripts)
	{
		return NETWORK::GET_NUM_CREATED_MISSION_PEDS(bForAllScripts);
	}
	int GET_NUM_CREATED_MISSION_VEHICLES_Export(BOOL bForAllScripts)
	{
		return NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(bForAllScripts);
	}
	int _GET_NUM_CREATED_MISSION_PICKUPS_Export(BOOL p0)
	{
		return NETWORK::_GET_NUM_CREATED_MISSION_PICKUPS(p0);
	}
	void _GET_RESERVED_MISSION_ENTITIES_FOR_THREAD_Export(int threadId, int* pedMax, int* vehicleMax, int* unkMax, int* pedMin, int* vehicleMin, int* unkMin)
	{
		return NETWORK::_GET_RESERVED_MISSION_ENTITIES_FOR_THREAD(threadId, pedMax, vehicleMax, unkMax, pedMin, vehicleMin, unkMin);
	}
	void GET_RESERVED_MISSION_ENTITIES_IN_AREA_Export(float locationX, float locationY, float locationZ, BOOL includeLocalScripts, int* numReservedPeds, int* numReservedVehicles, int* numReservedObjects, int* numReservedPickups)
	{
		return NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(locationX, locationY, locationZ, includeLocalScripts, numReservedPeds, numReservedVehicles, numReservedObjects, numReservedPickups);
	}
	BOOL _0x5F328FC909F0E0FF_Export(int p0, int p1, int p2, int p3)
	{
		return NETWORK::_0x5F328FC909F0E0FF(p0, p1, p2, p3);
	}
	int GET_MAX_NUM_NETWORK_OBJECTS_Export()
	{
		return NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
	}
	int GET_MAX_NUM_NETWORK_PEDS_Export()
	{
		return NETWORK::GET_MAX_NUM_NETWORK_PEDS();
	}
	int GET_MAX_NUM_NETWORK_VEHICLES_Export()
	{
		return NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
	}
	int GET_MAX_NUM_NETWORK_PICKUPS_Export()
	{
		return NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
	}
	BOOL _0x75FC34A2BA345BD1_Export(Entity entity, Player player, void* p2)
	{
		return NETWORK::_0x75FC34A2BA345BD1(entity, player, p2);
	}
	void _0x979765465A6F25FC_Export(Entity entity, BOOL p1)
	{
		return NETWORK::_0x979765465A6F25FC(entity, p1);
	}
	int _0x5133CF81924F1129_Export()
	{
		return NETWORK::_0x5133CF81924F1129();
	}
	int _0x1E4E097D71D449FB_Export(BOOL p0)
	{
		return NETWORK::_0x1E4E097D71D449FB(p0);
	}
	int _0x982D7AD755B8F62C_Export(BOOL p0)
	{
		return NETWORK::_0x982D7AD755B8F62C(p0);
	}
	int _0x917AD74BDCF8B6E9_Export(BOOL p0)
	{
		return NETWORK::_0x917AD74BDCF8B6E9(p0);
	}
	int _0xF8DC69DC1AD19072_Export(BOOL p0)
	{
		return NETWORK::_0xF8DC69DC1AD19072(p0);
	}
	int _0x744BFBB0CA908161_Export(BOOL p0)
	{
		return NETWORK::_0x744BFBB0CA908161(p0);
	}
	int _0x106CBDD5077DEDE1_Export(BOOL p0)
	{
		return NETWORK::_0x106CBDD5077DEDE1(p0);
	}
	int _0xBAF7E2979442B29F_Export(BOOL p0)
	{
		return NETWORK::_0xBAF7E2979442B29F(p0);
	}
	int _0x039B692B3318FAB6_Export(BOOL p0)
	{
		return NETWORK::_0x039B692B3318FAB6(p0);
	}
	int _0x4835413EA6F9C9CD_Export(BOOL p0)
	{
		return NETWORK::_0x4835413EA6F9C9CD(p0);
	}
	int GET_NETWORK_TIME_Export()
	{
		return NETWORK::GET_NETWORK_TIME();
	}
	int GET_NETWORK_TIME_ACCURATE_Export()
	{
		return NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	BOOL HAS_NETWORK_TIME_STARTED_Export()
	{
		return NETWORK::HAS_NETWORK_TIME_STARTED();
	}
	int GET_TIME_OFFSET_Export(int Time1, int Offset)
	{
		return NETWORK::GET_TIME_OFFSET(Time1, Offset);
	}
	BOOL IS_TIME_LESS_THAN_Export(int Time1, int Time2)
	{
		return NETWORK::IS_TIME_LESS_THAN(Time1, Time2);
	}
	BOOL IS_TIME_MORE_THAN_Export(int Time1, int Time2)
	{
		return NETWORK::IS_TIME_MORE_THAN(Time1, Time2);
	}
	int GET_TIME_DIFFERENCE_Export(int Time1, int Time2)
	{
		return NETWORK::GET_TIME_DIFFERENCE(Time1, Time2);
	}
	int GET_CLOUD_TIME_AS_INT_Export()
	{
		return NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	void CONVERT_POSIX_TIME_Export(int nContentIndex, void* sDate)
	{
		return NETWORK::CONVERT_POSIX_TIME(nContentIndex, sDate);
	}
	void NETWORK_SET_IN_SPECTATOR_MODE_Export(BOOL InSpectatorMode, Player playerIndex)
	{
		return NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(InSpectatorMode, playerIndex);
	}
	void _NETWORK_SET_IN_STATIC_SPECTATOR_MODE_Export(BOOL toggle, float x, float y, float z)
	{
		return NETWORK::_NETWORK_SET_IN_STATIC_SPECTATOR_MODE(toggle, x, y, z);
	}
	BOOL NETWORK_IS_IN_SPECTATOR_MODE_Export()
	{
		return NETWORK::NETWORK_IS_IN_SPECTATOR_MODE();
	}
	BOOL _NETWORK_IS_PLAYER_IN_SPECTATOR_MODE_Export(Player player)
	{
		return NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(player);
	}
	void NETWORK_SET_IN_MP_CUTSCENE_Export(BOOL p0, BOOL p1, int p2, BOOL p3)
	{
		return NETWORK::NETWORK_SET_IN_MP_CUTSCENE(p0, p1, p2, p3);
	}
	BOOL NETWORK_IS_IN_MP_CUTSCENE_Export()
	{
		return NETWORK::NETWORK_IS_IN_MP_CUTSCENE();
	}
	BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE_Export(Player playerIndex)
	{
		return NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(playerIndex);
	}
	void _0x34BC1E79546BA543_Export(BOOL p0)
	{
		return NETWORK::_0x34BC1E79546BA543(p0);
	}
	void _SET_NETWORK_RESPOT_TIMER_Export(Entity entity, int timer, BOOL p2)
	{
		return NETWORK::_SET_NETWORK_RESPOT_TIMER(entity, timer, p2);
	}
	BOOL _0x26A867C0B7A456D1_Export(Entity entity)
	{
		return NETWORK::_0x26A867C0B7A456D1(entity);
	}
	void SET_LOCAL_PLAYER_AS_GHOST_Export(BOOL bSet)
	{
		return NETWORK::SET_LOCAL_PLAYER_AS_GHOST(bSet);
	}
	BOOL IS_ENTITY_A_GHOST_Export(Entity EntityIndex)
	{
		return NETWORK::IS_ENTITY_A_GHOST(EntityIndex);
	}
	void _SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED_Export(Player player, BOOL disabled)
	{
		return NETWORK::_SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED(player, disabled);
	}
	void _SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER_Export(Entity entity, BOOL toggle)
	{
		return NETWORK::_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(entity, toggle);
	}
	BOOL IS_OBJECT_REASSIGNMENT_IN_PROGRESS_Export()
	{
		return NETWORK::IS_OBJECT_REASSIGNMENT_IN_PROGRESS();
	}
	int _0x039AD6B57D5179FF_Export()
	{
		return NETWORK::_0x039AD6B57D5179FF();
	}
	int _0x02B3CDD652B3CDD6_Export()
	{
		return NETWORK::_0x02B3CDD652B3CDD6();
	}
	int _GET_NUM_PEER_NEGOTIATION_RESPONSES_Export()
	{
		return NETWORK::_GET_NUM_PEER_NEGOTIATION_RESPONSES();
	}
	void _NETWORK_DEBUG_REQUEST_ENTITY_POSITION_Export(void* p0)
	{
		return NETWORK::_NETWORK_DEBUG_REQUEST_ENTITY_POSITION(p0);
	}
	int NETWORK_GET_NETWORK_ID_FROM_ROPE_ID_Export(int ropeId)
	{
		return NETWORK::NETWORK_GET_NETWORK_ID_FROM_ROPE_ID(ropeId);
	}
	int NETWORK_GET_ROPE_ID_FROM_NETWORK_ID_Export(int netId)
	{
		return NETWORK::NETWORK_GET_ROPE_ID_FROM_NETWORK_ID(netId);
	}
	void _NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT_Export(float x, float y, float z, float heading)
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT(x, y, z, heading);
	}
	void _0xA63E4F050F20021F_Export()
	{
		return NETWORK::_0xA63E4F050F20021F();
	}
	void _NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME_Export(Volume volume)
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(volume);
	}
	void _NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME_Export(Volume volume)
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(volume);
	}
	void _0x0BF90CBB6B72977B_Export()
	{
		return NETWORK::_0x0BF90CBB6B72977B();
	}
	void _0x7B3FF2D193628126_Export(Player player)
	{
		return NETWORK::_0x7B3FF2D193628126(player);
	}
	void _0x19B52C20B5C4757C_Export()
	{
		return NETWORK::_0x19B52C20B5C4757C();
	}
	void NETWORK_SPAWN_CONFIG_SET_FLAGS_Export(int flags)
	{
		return NETWORK::NETWORK_SPAWN_CONFIG_SET_FLAGS(flags);
	}
	void _0x6CEE2E30021DAEC6_Export()
	{
		return NETWORK::_0x6CEE2E30021DAEC6();
	}
	void _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED_Export(int configProperty, BOOL include)
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(configProperty, include);
	}
	void _0xB131E686BD97B3F8_Export()
	{
		return NETWORK::_0xB131E686BD97B3F8();
	}
	void _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE_Export(int configProperty, BOOL include, float weight)
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(configProperty, include, weight);
	}
	void _0x405DDEFB1F531B18_Export(Volume volume, BOOL p1, Any p2, Any p3)
	{
		return NETWORK::_0x405DDEFB1F531B18(volume, p1, p2, p3);
	}
	void _0x43CF999205084B4B_Export()
	{
		return NETWORK::_0x43CF999205084B4B();
	}
	void _0x13F592FC3BF0EA84_Export(Volume volume, BOOL p1, float originalWeight, Any p3, Any p4)
	{
		return NETWORK::_0x13F592FC3BF0EA84(volume, p1, originalWeight, p3, p4);
	}
	void _0xCF23AB5BD47B384D_Export(Any p0)
	{
		return NETWORK::_0xCF23AB5BD47B384D(p0);
	}
	void _0xE5634491A58C2703_Export(float p0)
	{
		return NETWORK::_0xE5634491A58C2703(p0);
	}
	void NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET_Export(float offset)
	{
		return NETWORK::NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET(offset);
	}
	void _NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH_Export(int waterDepthLevel)
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH(waterDepthLevel);
	}
	void NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT_Export(Hash p0, float p1)
	{
		return NETWORK::NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT(p0, p1);
	}
	void _0x5D3C528B7A7DF836_Export(Hash nsctf)
	{
		return NETWORK::_0x5D3C528B7A7DF836(nsctf);
	}
	void _0x2686BD9566B65EDA_Export(float x, float y, float z)
	{
		return NETWORK::_0x2686BD9566B65EDA(x, y, z);
	}
	void _0xBB1EC8C2EEF33BAA_Export(Entity entity)
	{
		return NETWORK::_0xBB1EC8C2EEF33BAA(entity);
	}
	BOOL _0x67CCDF74C4DF7169_Export()
	{
		return NETWORK::_0x67CCDF74C4DF7169();
	}
	void _0xC8B6D18E22484643_Export()
	{
		return NETWORK::_0xC8B6D18E22484643();
	}
	void _0x97BCE4C4B3191228_Export()
	{
		return NETWORK::_0x97BCE4C4B3191228();
	}
	int _0x41452E8A3B9C0C4B_Export()
	{
		return NETWORK::_0x41452E8A3B9C0C4B();
	}
	BOOL _NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS_Export()
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS();
	}
	void _0x61BFBAA795E712AD_Export()
	{
		return NETWORK::_0x61BFBAA795E712AD();
	}
	void _NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH_Export()
	{
		return NETWORK::_NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH();
	}
	void _0x691E4DE5309EAEFC_Export(Any p0, void* p1)
	{
		return NETWORK::_0x691E4DE5309EAEFC(p0, p1);
	}
	void NETWORK_START_SOLO_TUTORIAL_SESSION_Export()
	{
		return NETWORK::NETWORK_START_SOLO_TUTORIAL_SESSION();
	}
	void NETWORK_END_TUTORIAL_SESSION_Export()
	{
		return NETWORK::NETWORK_END_TUTORIAL_SESSION();
	}
	BOOL NETWORK_IS_IN_TUTORIAL_SESSION_Export()
	{
		return NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	}
	BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING_Export()
	{
		return NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING();
	}
	BOOL NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION_Export(Player FirstPlayerIndex, Player SecondPlayerIndex)
	{
		return NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(FirstPlayerIndex, SecondPlayerIndex);
	}
	void NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES_Export(BOOL toggle)
	{
		return NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(toggle);
	}
	void NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES_Export(Entity entity, BOOL toggle)
	{
		return NETWORK::NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(entity, toggle);
	}
	void _0xDC6AD5C046F33AB4_Export(BOOL p0, BOOL p1)
	{
		return NETWORK::_0xDC6AD5C046F33AB4(p0, p1);
	}
	void _0x6C7E04E9DE451789_Export()
	{
		return NETWORK::_0x6C7E04E9DE451789();
	}
	void NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID_Export(int instanceId)
	{
		return NETWORK::NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(instanceId);
	}
	int _NETWORK_GET_PLAYER_FAST_INSTANCE_ID_Export(Player player)
	{
		return NETWORK::_NETWORK_GET_PLAYER_FAST_INSTANCE_ID(player);
	}
	void NETWORK_CONCEAL_PLAYER_Export(Player PlayerIndex, BOOL Conceal)
	{
		return NETWORK::NETWORK_CONCEAL_PLAYER(PlayerIndex, Conceal);
	}
	BOOL NETWORK_IS_PLAYER_CONCEALED_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_IS_PLAYER_CONCEALED(PlayerIndex);
	}
	void _0x40FEDB13870042F1_Export()
	{
		return NETWORK::_0x40FEDB13870042F1();
	}
	void _0x422F9D6D6C7BC290_Export(int p0)
	{
		return NETWORK::_0x422F9D6D6C7BC290(p0);
	}
	void NETWORK_REQUEST_CLOUD_TUNABLES_Export()
	{
		return NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
	}
	BOOL NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING_Export()
	{
		return NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING();
	}
	int NETWORK_GET_TUNABLE_CLOUD_CRC_Export()
	{
		return NETWORK::NETWORK_GET_TUNABLE_CLOUD_CRC();
	}
	BOOL NETWORK_DOES_TUNABLE_EXIST_Export(Hash tunableContext, Hash tunableName)
	{
		return NETWORK::NETWORK_DOES_TUNABLE_EXIST(tunableContext, tunableName);
	}
	BOOL NETWORK_ACCESS_TUNABLE_INT_Export(Hash tunableContext, Hash tunableName, int* value)
	{
		return NETWORK::NETWORK_ACCESS_TUNABLE_INT(tunableContext, tunableName, value);
	}
	BOOL NETWORK_ACCESS_TUNABLE_BOOL_Export(Hash tunableContext, Hash tunableName)
	{
		return NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(tunableContext, tunableName);
	}
	int NETWORK_TRY_ACCESS_TUNABLE_INT_HASH_Export(Hash tunableContext, Hash tunableName, int defaultValue)
	{
		return NETWORK::NETWORK_TRY_ACCESS_TUNABLE_INT_HASH(tunableContext, tunableName, defaultValue);
	}
	float NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH_Export(Hash tunableContext, Hash tunableName, float defaultValue)
	{
		return NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(tunableContext, tunableName, defaultValue);
	}
	BOOL NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH_Export(Hash tunableContext, Hash tunableName, BOOL defaultValue)
	{
		return NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(tunableContext, tunableName, defaultValue);
	}
	void _0x894B5ECAB45D2342_Export(int netHandle, Any p1)
	{
		return NETWORK::_0x894B5ECAB45D2342(netHandle, p1);
	}
	void NETWORK_DISABLE_PROXIMITY_MIGRATION_Export(int NetworkId)
	{
		return NETWORK::NETWORK_DISABLE_PROXIMITY_MIGRATION(NetworkId);
	}
	BOOL _COMMERCE_STORE_IS_OPEN_Export()
	{
		return NETWORK::_COMMERCE_STORE_IS_OPEN();
	}
	BOOL _COMMERCE_STORE_IS_ENABLED_Export()
	{
		return NETWORK::_COMMERCE_STORE_IS_ENABLED();
	}
	BOOL CLOUD_HAS_REQUEST_COMPLETED_Export(int nRequestID)
	{
		return NETWORK::CLOUD_HAS_REQUEST_COMPLETED(nRequestID);
	}
	BOOL CLOUD_DID_REQUEST_SUCCEED_Export(int nRequestID)
	{
		return NETWORK::CLOUD_DID_REQUEST_SUCCEED(nRequestID);
	}
	BOOL _GET_LAUNCH_PARAM_EXISTS_Export(const char* paramName)
	{
		return NETWORK::_GET_LAUNCH_PARAM_EXISTS(paramName);
	}
	const char* GET_LAUNCH_PARAM_VALUE_Export(const char* paramName)
	{
		return NETWORK::GET_LAUNCH_PARAM_VALUE(paramName);
	}
	void _SET_LAUNCH_PARAM_VALUE_Export(const char* paramName, const char* value)
	{
		return NETWORK::_SET_LAUNCH_PARAM_VALUE(paramName, value);
	}
	void _CLEAR_LAUNCH_PARAM_Export(const char* paramName)
	{
		return NETWORK::_CLEAR_LAUNCH_PARAM(paramName);
	}
	const char* _GET_LAUNCH_PARAM_STRING_Export()
	{
		return NETWORK::_GET_LAUNCH_PARAM_STRING();
	}
	void _SET_LAUNCH_PARAM_STRING_Export(const char* params)
	{
		return NETWORK::_SET_LAUNCH_PARAM_STRING(params);
	}
	void CLEAR_SERVICE_EVENT_ARGUMENTS_Export()
	{
		return NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
	}
	BOOL UGC_IS_REQUEST_PENDING_Export(int ugcRequestId)
	{
		return NETWORK::UGC_IS_REQUEST_PENDING(ugcRequestId);
	}
	BOOL UGC_HAS_REQUEST_FINISHED_Export(int ugcRequestId)
	{
		return NETWORK::UGC_HAS_REQUEST_FINISHED(ugcRequestId);
	}
	BOOL UGC_DID_REQUEST_SUCCEED_Export(int ugcRequestId)
	{
		return NETWORK::UGC_DID_REQUEST_SUCCEED(ugcRequestId);
	}
	BOOL _0xCD53E6CBF609C012_Export(int ugcRequestId)
	{
		return NETWORK::_0xCD53E6CBF609C012(ugcRequestId);
	}
	int _UGC_QUERY_BY_CONTENT_TYPE_Export(int p0, int maxGet, const char* contentTypeName, int p3, int p4, int p5)
	{
		return NETWORK::_UGC_QUERY_BY_CONTENT_TYPE(p0, maxGet, contentTypeName, p3, p4, p5);
	}
	int _UGC_QUERY_BY_CATEGORY_Export(int categoryType, int p1, int maxGet, const char* contentTypeName, int p4, BOOL p5)
	{
		return NETWORK::_UGC_QUERY_BY_CATEGORY(categoryType, p1, maxGet, contentTypeName, p4, p5);
	}
	int _UGC_QUERY_BY_CONTENT_ID_Export(const char* contentId, BOOL latestVersion, const char* contentTypeName)
	{
		return NETWORK::_UGC_QUERY_BY_CONTENT_ID(contentId, latestVersion, contentTypeName);
	}
	BOOL _UGC_IS_BOOK_MARKED_Export(const char* contentId)
	{
		return NETWORK::_UGC_IS_BOOK_MARKED(contentId);
	}
	void UGC_CLEAR_QUERY_RESULTS_Export(int ugcRequestId)
	{
		return NETWORK::UGC_CLEAR_QUERY_RESULTS(ugcRequestId);
	}
	BOOL UGC_QUERY_WAS_FORCE_CANCELLED_Export(int ugcRequestId)
	{
		return NETWORK::UGC_QUERY_WAS_FORCE_CANCELLED(ugcRequestId);
	}
	int UGC_QUERY_GET_CONTENT_NUM_Export(int ugcRequestId)
	{
		return NETWORK::UGC_QUERY_GET_CONTENT_NUM(ugcRequestId);
	}
	Any _UGC_QUERY_GET_CREATOR_HANDLE_Export(Any p0, int index, void* gamerHandle)
	{
		return NETWORK::_UGC_QUERY_GET_CREATOR_HANDLE(p0, index, gamerHandle);
	}
	const char* _UGC_QUERY_GET_OWNER_ID_Export(Any p0, int index)
	{
		return NETWORK::_UGC_QUERY_GET_OWNER_ID(p0, index);
	}
	const char* _UGC_QUERY_GET_NAME_Export(Any p0, int index)
	{
		return NETWORK::_UGC_QUERY_GET_NAME(p0, index);
	}
	const char* _UGC_QUERY_GET_ROOT_CONTENT_ID_Export(Any p0, int index)
	{
		return NETWORK::_UGC_QUERY_GET_ROOT_CONTENT_ID(p0, index);
	}
	const char* _UGC_QUERY_GET_PLAYLIST_NAME_Export(Any p0, int index)
	{
		return NETWORK::_UGC_QUERY_GET_PLAYLIST_NAME(p0, index);
	}
	Hash _UGC_QUERY_GET_MISSION_DESC_HASH_Export(Any p0, int index)
	{
		return NETWORK::_UGC_QUERY_GET_MISSION_DESC_HASH(p0, index);
	}
	const char* _UGC_QUERY_GET_CREATOR_PHOTO_Export(Any p0, int p1, Any p2)
	{
		return NETWORK::_UGC_QUERY_GET_CREATOR_PHOTO(p0, p1, p2);
	}
	void _UGC_QUERY_GET_DATE_Export(Any p0, int index, void* p2)
	{
		return NETWORK::_UGC_QUERY_GET_DATE(p0, index, p2);
	}
	int _UGC_QUERY_GET_POSIX_UPDATED_DATE_Export(Any p0, Any p1)
	{
		return NETWORK::_UGC_QUERY_GET_POSIX_UPDATED_DATE(p0, p1);
	}
	int _UGC_QUERY_GET_POSIX_PUBLISHED_DATE_Export(Any p0, Any p1)
	{
		return NETWORK::_UGC_QUERY_GET_POSIX_PUBLISHED_DATE(p0, p1);
	}
	int _UGC_QUERY_GET_VERSION_Export(Any p0, int index, int p2)
	{
		return NETWORK::_UGC_QUERY_GET_VERSION(p0, index, p2);
	}
	int _UGC_QUERY_GET_LANGUAGE_Export(Any p0, int index)
	{
		return NETWORK::_UGC_QUERY_GET_LANGUAGE(p0, index);
	}
	BOOL _UGC_QUERY_GET_PUBLISHED_Export(Any p0, Any p1)
	{
		return NETWORK::_UGC_QUERY_GET_PUBLISHED(p0, p1);
	}
	float _UGC_QUERY_GET_RATING_Export(Any p0, int index, int p2)
	{
		return NETWORK::_UGC_QUERY_GET_RATING(p0, index, p2);
	}
	Any _0x5F0E99071582DECA_Export(Any p0, int index, int p2)
	{
		return NETWORK::_0x5F0E99071582DECA(p0, index, p2);
	}
	BOOL UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD_Export(Any p0, int index)
	{
		return NETWORK::UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD(p0, index);
	}
	BOOL _UGC_QUERY_GET_BOOK_MARKED_Export(Any p0, int index)
	{
		return NETWORK::_UGC_QUERY_GET_BOOK_MARKED(p0, index);
	}
	BOOL _UGC_HAS_PRIVILEGE_Export()
	{
		return NETWORK::_UGC_HAS_PRIVILEGE();
	}
	int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS_Export(const char* szContentType, const char* szContentID, int nFileID, int nFileVersion, int nLanguage)
	{
		return NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(szContentType, szContentID, nFileID, nFileVersion, nLanguage);
	}
	int UGC_REQUEST_CACHED_DESCRIPTION_Export(Hash nHash)
	{
		return NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(nHash);
	}
	BOOL UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS_Export(Hash nHash)
	{
		return NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(nHash);
	}
	BOOL UGC_HAS_DESCRIPTION_REQUEST_FINISHED_Export(Hash nHash)
	{
		return NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(nHash);
	}
	BOOL UGC_DID_DESCRIPTION_REQUEST_SUCCEED_Export(Hash nHash)
	{
		return NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(nHash);
	}
	const char* UGC_GET_CACHED_DESCRIPTION_Export(Hash nHash, int nMaxLength)
	{
		return NETWORK::UGC_GET_CACHED_DESCRIPTION(nHash, nMaxLength);
	}
	BOOL UGC_RELEASE_CACHED_DESCRIPTION_Export(Hash nHash)
	{
		return NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(nHash);
	}
	void UGC_RELEASE_ALL_CACHED_DESCRIPTIONS_Export()
	{
		return NETWORK::UGC_RELEASE_ALL_CACHED_DESCRIPTIONS();
	}
	void UGC_SET_QUERY_DATA_FROM_OFFLINE_Export(BOOL bFromOffline)
	{
		return NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(bFromOffline);
	}
	BOOL UGC_IS_LANGUAGE_SUPPORTED_Export(int nLanguage)
	{
		return NETWORK::UGC_IS_LANGUAGE_SUPPORTED(nLanguage);
	}
	Any _0xD4022C7286B0DFA2_Export(const char* p0, int p1, int p2)
	{
		return NETWORK::_0xD4022C7286B0DFA2(p0, p1, p2);
	}
	BOOL _NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE_Export(const char* texture, int personaPhotoType, int formatIndex)
	{
		return NETWORK::_NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE(texture, personaPhotoType, formatIndex);
	}
	BOOL _NETWORK_PERSONA_PHOTO_WRITE_LOCAL_Export(const char* texture, int playerSlot, int p2, int personaPhotoLocalCacheType)
	{
		return NETWORK::_NETWORK_PERSONA_PHOTO_WRITE_LOCAL(texture, playerSlot, p2, personaPhotoLocalCacheType);
	}
	BOOL _NETWORK_IS_PREVIOUS_UPLOAD_PENDING_Export()
	{
		return NETWORK::_NETWORK_IS_PREVIOUS_UPLOAD_PENDING();
	}
	Any _0xCC4E72C339461ED1_Export()
	{
		return NETWORK::_0xCC4E72C339461ED1();
	}
	const char* _REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD_Export(int player, int personaPhotoLocalCacheType)
	{
		return NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD(player, personaPhotoLocalCacheType);
	}
	const char* _REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD_Export(void* gamerHandle, int p1)
	{
		return NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD(gamerHandle, p1);
	}
	const char* _REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD_Export(void* gamerHandle, int p1)
	{
		return NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(gamerHandle, p1);
	}
	BOOL _TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID_Export(const char* name)
	{
		return NETWORK::_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID(name);
	}
	int TEXTURE_DOWNLOAD_REQUEST_Export(void* gamerHandle, const char* cloudPath, const char* textureName, BOOL useCacheWithoutCloudChecks)
	{
		return NETWORK::TEXTURE_DOWNLOAD_REQUEST(gamerHandle, cloudPath, textureName, useCacheWithoutCloudChecks);
	}
	int _MUGSHOT_TEXTURE_DOWNLOAD_REQUEST_Export(void* gamerHandle, int p1, const char* name, BOOL p3)
	{
		return NETWORK::_MUGSHOT_TEXTURE_DOWNLOAD_REQUEST(gamerHandle, p1, name, p3);
	}
	int UGC_TEXTURE_DOWNLOAD_REQUEST_Export(const char* contentID, int nFileID, int nFileVersion, int nLanguage, const char* textureName, BOOL useCacheWithoutCloudChecks)
	{
		return NETWORK::UGC_TEXTURE_DOWNLOAD_REQUEST(contentID, nFileID, nFileVersion, nLanguage, textureName, useCacheWithoutCloudChecks);
	}
	int _LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST_Export(int playerSlot, int personaPhotoLocalCacheType)
	{
		return NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(playerSlot, personaPhotoLocalCacheType);
	}
	void TEXTURE_DOWNLOAD_RELEASE_Export(int textureDownloadHandle)
	{
		return NETWORK::TEXTURE_DOWNLOAD_RELEASE(textureDownloadHandle);
	}
	void _TEXTURE_DOWNLOAD_RELEASE_BY_NAME_Export(const char* name)
	{
		return NETWORK::_TEXTURE_DOWNLOAD_RELEASE_BY_NAME(name);
	}
	const char* TEXTURE_DOWNLOAD_GET_NAME_Export(int textureDownloadHandle)
	{
		return NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadHandle);
	}
	int GET_STATUS_OF_TEXTURE_DOWNLOAD_Export(int textureDownloadHandle)
	{
		return NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(textureDownloadHandle);
	}
	int _PEDMUGSHOT_GET_STATUS_Export()
	{
		return NETWORK::_PEDMUGSHOT_GET_STATUS();
	}
	BOOL _PEDMUGSHOT_TAKE_Export()
	{
		return NETWORK::_PEDMUGSHOT_TAKE();
	}
	Any _PEDMUGSHOT_REQUEST_SEND_Export()
	{
		return NETWORK::_PEDMUGSHOT_REQUEST_SEND();
	}
	void _0x814729078AED6D30_Export()
	{
		return NETWORK::_0x814729078AED6D30();
	}
	BOOL NETWORK_HAVE_ROS_BANNED_PRIV_Export()
	{
		return NETWORK::NETWORK_HAVE_ROS_BANNED_PRIV();
	}
	BOOL NETWORK_HAS_ROS_PRIVILEGE_Export(int privilegeId)
	{
		return NETWORK::NETWORK_HAS_ROS_PRIVILEGE(privilegeId);
	}
	int NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK_Export(void* hGamer)
	{
		return NETWORK::NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(hGamer);
	}
	void _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT_Export(BOOL toggle)
	{
		return NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT(toggle);
	}
	BOOL NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE_Export()
	{
		return NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE();
	}
	void _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE_Export(BOOL toggle, void* p1, int p2)
	{
		return NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(toggle, p1, p2);
	}
	BOOL _NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED_Export()
	{
		return NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED();
	}
	void _NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED_Export(BOOL toggle)
	{
		return NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(toggle);
	}
	BOOL NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION_Export(int* p0)
	{
		return NETWORK::NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(p0);
	}
	BOOL NETWORK_AUTO_SESSION_SPLIT_SESSION_Export(int playersToTake, int maxInstancePlayers, int sessionFlags, int bucketId)
	{
		return NETWORK::NETWORK_AUTO_SESSION_SPLIT_SESSION(playersToTake, maxInstancePlayers, sessionFlags, bucketId);
	}
	BOOL _NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT_Export()
	{
		return NETWORK::_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT();
	}
	BOOL _NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL_Export()
	{
		return NETWORK::_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL();
	}
	BOOL _NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION_Export()
	{
		return NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION();
	}
	void NETWORK_AUTO_SESSION_FINISH_INSTANCE_Export()
	{
		return NETWORK::NETWORK_AUTO_SESSION_FINISH_INSTANCE();
	}
	void _0xFD8112109A96877C_Export()
	{
		return NETWORK::_0xFD8112109A96877C();
	}
	void _0x5A91BCEF74944E93_Export(Player player, float p1)
	{
		return NETWORK::_0x5A91BCEF74944E93(player, p1);
	}
	int _0xFB3205788F8AFA3F_Export()
	{
		return NETWORK::_0xFB3205788F8AFA3F();
	}
	void _0x335AF56613CA0F49_Export(int p0)
	{
		return NETWORK::_0x335AF56613CA0F49(p0);
	}
	BOOL _0x9E5A47744C0F0376_Export(int p0)
	{
		return NETWORK::_0x9E5A47744C0F0376(p0);
	}
	void _0xD3B6EBC6C3D77D44_Export(int p0)
	{
		return NETWORK::_0xD3B6EBC6C3D77D44(p0);
	}
	void _0xA7670F7991099680_Export(int p0)
	{
		return NETWORK::_0xA7670F7991099680(p0);
	}
	void _0x7673C0D2C5CDAC55_Export()
	{
		return NETWORK::_0x7673C0D2C5CDAC55();
	}
	void _0x3CBD6565D9C3B133_Export(int p0, int p1, float p2)
	{
		return NETWORK::_0x3CBD6565D9C3B133(p0, p1, p2);
	}
	void _0x0D183D8490EE4366_Export(int p0, int p1)
	{
		return NETWORK::_0x0D183D8490EE4366(p0, p1);
	}
	void _0xC1968045EEB563B7_Export(int p0)
	{
		return NETWORK::_0xC1968045EEB563B7(p0);
	}
	BOOL NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED_Export()
	{
		return NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED();
	}
	BOOL _0x0B6B4507AC5EA8B8_Export()
	{
		return NETWORK::_0x0B6B4507AC5EA8B8();
	}
	BOOL NETWORK_IS_RESETTING_POPULATION_Export()
	{
		return NETWORK::NETWORK_IS_RESETTING_POPULATION();
	}
	BOOL NETWORK_RESET_POPULATION_Export(BOOL p0, int p1)
	{
		return NETWORK::NETWORK_RESET_POPULATION(p0, p1);
	}
	void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND_Export(BOOL flag)
	{
		return NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(flag);
	}
	void _0x3034C77C79A58880_Export(BOOL p0)
	{
		return NETWORK::_0x3034C77C79A58880(p0);
	}
	void NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION_Export(Entity EntityIndex, BOOL CanModify)
	{
		return NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(EntityIndex, CanModify);
	}
	void NETWORK_SHOW_CHAT_RESTRICTION_MSC_Export(Player localGamerIndex)
	{
		return NETWORK::NETWORK_SHOW_CHAT_RESTRICTION_MSC(localGamerIndex);
	}
	void NETWORK_SHOW_PSN_UGC_RESTRICTION_Export()
	{
		return NETWORK::NETWORK_SHOW_PSN_UGC_RESTRICTION();
	}
	BOOL NETWORK_IS_CONNECTED_VIA_RELAY_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_IS_CONNECTED_VIA_RELAY(PlayerIndex);
	}
	float NETWORK_GET_AVERAGE_LATENCY_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_GET_AVERAGE_LATENCY(PlayerIndex);
	}
	float NETWORK_GET_AVERAGE_PING_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_GET_AVERAGE_PING(PlayerIndex);
	}
	float NETWORK_GET_AVERAGE_PACKET_LOSS_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_GET_AVERAGE_PACKET_LOSS(PlayerIndex);
	}
	int NETWORK_GET_NUM_UNACKED_RELIABLES_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_GET_NUM_UNACKED_RELIABLES(PlayerIndex);
	}
	int NETWORK_GET_UNRELIABLE_RESEND_COUNT_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_GET_UNRELIABLE_RESEND_COUNT(PlayerIndex);
	}
	int NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT_Export(Player PlayerIndex)
	{
		return NETWORK::NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(PlayerIndex);
	}
	void NETWORK_DUMP_NET_IF_CONFIG_Export()
	{
		return NETWORK::NETWORK_DUMP_NET_IF_CONFIG();
	}
	void NETWORK_GET_NET_STATISTICS_INFO_Export()
	{
		return NETWORK::NETWORK_GET_NET_STATISTICS_INFO();
	}
	BOOL NETWORK_IS_PLAYER_INDEX_VALID_Export(Player player)
	{
		return NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player);
	}
	BOOL _GET_PLAYER_WAYPOINT_IS_ACTIVE_Export(Player player)
	{
		return NETWORK::_GET_PLAYER_WAYPOINT_IS_ACTIVE(player);
	}
	void _0x455156F47DC6B78C_Export(BOOL p0)
	{
		return NETWORK::_0x455156F47DC6B78C(p0);
	}
	void _SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER_Export(Player player, float damageMultiplier)
	{
		return NETWORK::_SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER(player, damageMultiplier);
	}
	void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE_Export(Entity EntityIndex, BOOL shouldTrigger)
	{
		return NETWORK::NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(EntityIndex, shouldTrigger);
	}
	void _0x5CD3AAD8FF9ED121_Export(Any p0)
	{
		return NETWORK::_0x5CD3AAD8FF9ED121(p0);
	}
	void _0x51951DE06C0D1C40_Export(Player player, int type)
	{
		return NETWORK::_0x51951DE06C0D1C40(player, type);
	}
	void _0xE3AB5EEFCB6671A2_Export(int setting)
	{
		return NETWORK::_0xE3AB5EEFCB6671A2(setting);
	}
	void _0x9B39B0555CC692B5_Export()
	{
		return NETWORK::_0x9B39B0555CC692B5();
	}
	int _0xFE53B1F8D43F19BF_Export(Player player1, Player player2)
	{
		return NETWORK::_0xFE53B1F8D43F19BF(player1, player2);
	}
	BOOL _0x862C5040F4888741_Export(Player player1, Player player2)
	{
		return NETWORK::_0x862C5040F4888741(player1, player2);
	}
	void _0x2CD41AC000E6F611_Export()
	{
		return NETWORK::_0x2CD41AC000E6F611();
	}
	void _0xACC44768AF229042_Export()
	{
		return NETWORK::_0xACC44768AF229042();
	}
	void _0x7E300B5B86AB1D1A_Export(void* p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14)
	{
		return NETWORK::_0x7E300B5B86AB1D1A(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	int GET_UNIQUE_INT_FOR_PLAYER_Export(Player player)
	{
		return NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
	}
	void _0x780A13F780A13F1B_Export(BOOL toggle)
	{
		return NETWORK::_0x780A13F780A13F1B(toggle);
	}
	BOOL _NETWORK_IS_TRACKED_PLAYER_VISIBLE_Export(Player player, Player trackedPlayer)
	{
		return NETWORK::_NETWORK_IS_TRACKED_PLAYER_VISIBLE(player, trackedPlayer);
	}
	BOOL NETWORK_IS_AIM_CAM_ACTIVE_Export(Player player)
	{
		return NETWORK::NETWORK_IS_AIM_CAM_ACTIVE(player);
	}
	void _NETWORK_ALERT_Export(Hash ctx, Hash lh, int ec, int h)
	{
		return NETWORK::_NETWORK_ALERT(ctx, lh, ec, h);
	}
	void _0x19447FCAE97704DC_Export(Hash ctx, int ec, BOOL ex, BOOL ro)
	{
		return NETWORK::_0x19447FCAE97704DC(ctx, ec, ex, ro);
	}
	void _0x2C4E98DDA475364F_Export(const char* p0)
	{
		return NETWORK::_0x2C4E98DDA475364F(p0);
	}
	void _0x3F0ABAE38A0515AD_Export(int p0, int p1)
	{
		return NETWORK::_0x3F0ABAE38A0515AD(p0, p1);
	}
	int _0x3F2EE18A3E294801_Export(int p0)
	{
		return NETWORK::_0x3F2EE18A3E294801(p0);
	}
	void _SET_SOCIAL_MATCHMAKING_ALLOWED_Export(BOOL toggle)
	{
		return NETWORK::_SET_SOCIAL_MATCHMAKING_ALLOWED(toggle);
	}
	BOOL _GET_SOCIAL_MATCHMAKING_ALLOWED_Export()
	{
		return NETWORK::_GET_SOCIAL_MATCHMAKING_ALLOWED();
	}
	BOOL NETWORK_AWARD_HAS_REACHED_MAXCLAIM_Export(Any p0)
	{
		return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(p0);
	}
	Any _0x271F95E55C663B8B_Export(Any p0, Any p1)
	{
		return NETWORK::_0x271F95E55C663B8B(p0, p1);
	}
	Any _0x64A36BA85CE01A81_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return NETWORK::_0x64A36BA85CE01A81(p0, p1, p2, p3);
	}
	Any _0xE10F2D7715ABABEC_Export(Any p0)
	{
		return NETWORK::_0xE10F2D7715ABABEC(p0);
	}
	Any _0x7A8E8DF782B47EB0_Export(Any p0, Any p1, Any p2)
	{
		return NETWORK::_0x7A8E8DF782B47EB0(p0, p1, p2);
	}
	Any _0x77B299E8799B1332_Export(Any p0, Any p1, Any p2)
	{
		return NETWORK::_0x77B299E8799B1332(p0, p1, p2);
	}
	Any _0x923346025512DFB7_Export(Any p0)
	{
		return NETWORK::_0x923346025512DFB7(p0);
	}
	int _NETWORK_GET_XP_Export()
	{
		return NETWORK::_NETWORK_GET_XP();
	}
	int _NETWORK_GET_RANK_Export()
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	void NETWORK_SET_RECENT_GAMERS_ENABLED_Export(BOOL toggle)
	{
		return NETWORK::NETWORK_SET_RECENT_GAMERS_ENABLED(toggle);
	}
	BOOL _0x273E04A3A7AD1F2D_Export()
	{
		return NETWORK::_0x273E04A3A7AD1F2D();
	}
	void _NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST_Export(Player player, int p1)
	{
		return NETWORK::_NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST(player, p1);
	}
	BOOL NETWORK_REQUEST_RECENT_GAMER_NAMES_Export(int p0, int playerCount)
	{
		return NETWORK::NETWORK_REQUEST_RECENT_GAMER_NAMES(p0, playerCount);
	}
	BOOL _NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS_Export()
	{
		return NETWORK::_NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS();
	}
	BOOL _NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED_Export()
	{
		return NETWORK::_NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED();
	}
	int _NETWORK_GET_NUM_RECENT_GAMERS_Export()
	{
		return NETWORK::_NETWORK_GET_NUM_RECENT_GAMERS();
	}
	BOOL NETWORK_GET_RECENT_GAMER_NAMES_Export(int p0, int p1, void* outData, int dataSize)
	{
		return NETWORK::NETWORK_GET_RECENT_GAMER_NAMES(p0, p1, outData, dataSize);
	}
	void _0x49CF17A564918E8D_Export()
	{
		return NETWORK::_0x49CF17A564918E8D();
	}
	void _0xD637D327080CD86E_Export(int p0)
	{
		return NETWORK::_0xD637D327080CD86E(p0);
	}
	void _0x564552C6AF1EEAB1_Export()
	{
		return NETWORK::_0x564552C6AF1EEAB1();
	}
	void NETWORK_ACTIVITY_RESET_TO_IDLE_Export()
	{
		return NETWORK::NETWORK_ACTIVITY_RESET_TO_IDLE();
	}
	void NETWORK_ACTIVITY_SET_CURRENT_Export(int netPlaylistActivity)
	{
		return NETWORK::NETWORK_ACTIVITY_SET_CURRENT(netPlaylistActivity);
	}
	const char* _NETWORK_GET_ROS_TITLE_NAME_Export()
	{
		return NETWORK::_NETWORK_GET_ROS_TITLE_NAME();
	}
	void _REPORT_PLAYER_Export(Player player, int reportType, const char* description, const char* horseName)
	{
		return NETWORK::_REPORT_PLAYER(player, reportType, description, horseName);
	}
	Object CREATE_OBJECT_Export(Hash ModelIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, BOOL RegisterAsNetworkObject, BOOL ScriptHostObject, BOOL ForceToBeObject, BOOL p7, BOOL p8)
	{
		return OBJECT::CREATE_OBJECT(ModelIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, RegisterAsNetworkObject, ScriptHostObject, ForceToBeObject, p7, p8);
	}
	Object CREATE_OBJECT_NO_OFFSET_Export(Hash ModelIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, BOOL RegisterAsNetworkObject, BOOL ScriptHostObject, BOOL ForceToBeObject, BOOL p7)
	{
		return OBJECT::CREATE_OBJECT_NO_OFFSET(ModelIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, RegisterAsNetworkObject, ScriptHostObject, ForceToBeObject, p7);
	}
	void DELETE_OBJECT_Export(Object* ObjectIndex)
	{
		return OBJECT::DELETE_OBJECT(ObjectIndex);
	}
	BOOL PLACE_OBJECT_ON_GROUND_PROPERLY_Export(Object ObjectIndex, BOOL p1)
	{
		return OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(ObjectIndex, p1);
	}
	BOOL SLIDE_OBJECT_Export(Object ObjectID, float VecDestCoorstX, float VecDestCoorstY, float VecDestCoorstZ, float VecIncrementX, float VecIncrementY, float VecIncrementZ, BOOL StopOnCollision)
	{
		return OBJECT::SLIDE_OBJECT(ObjectID, VecDestCoorstX, VecDestCoorstY, VecDestCoorstZ, VecIncrementX, VecIncrementY, VecIncrementZ, StopOnCollision);
	}
	void SET_OBJECT_TARGETTABLE_Export(Object ObjectID, BOOL Targettable)
	{
		return OBJECT::SET_OBJECT_TARGETTABLE(ObjectID, Targettable);
	}
	void _SET_OBJECT_TARGETTABLE_2_Export(Object object, BOOL targettable)
	{
		return OBJECT::_SET_OBJECT_TARGETTABLE_2(object, targettable);
	}
	void _SET_OBJECT_TARGETTABLE_FOCUS_Export(Object object, BOOL p1, BOOL p2)
	{
		return OBJECT::_SET_OBJECT_TARGETTABLE_FOCUS(object, p1, p2);
	}
	void _0xF6E88489B4E6EBE5_Export(Any p0, Any p1)
	{
		return OBJECT::_0xF6E88489B4E6EBE5(p0, p1);
	}
	void _0xE157A8A336C7F04A_Export(Any p0, Any p1)
	{
		return OBJECT::_0xE157A8A336C7F04A(p0, p1);
	}
	void _0x46CBCF0E98A4E156_Export(Any p0, Any p1)
	{
		return OBJECT::_0x46CBCF0E98A4E156(p0, p1);
	}
	Object GET_CLOSEST_OBJECT_OF_TYPE_Export(float scrVecCentreCoorsX, float scrVecCentreCoorsY, float scrVecCentreCoorsZ, float Radius, Hash ObjectModelHashKey, BOOL RegisterAsScriptObject, BOOL ScriptHostObject, BOOL RegisterAsNetworkObject)
	{
		return OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(scrVecCentreCoorsX, scrVecCentreCoorsY, scrVecCentreCoorsZ, Radius, ObjectModelHashKey, RegisterAsScriptObject, ScriptHostObject, RegisterAsNetworkObject);
	}
	BOOL HAS_OBJECT_BEEN_BROKEN_Export(Object ObjectID)
	{
		return OBJECT::HAS_OBJECT_BEEN_BROKEN(ObjectID);
	}
	BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN_Export(float scrVecCoorsX, float scrVecCoorsY, float scrVecCoorsZ, float Radius, Hash model, int SearchFlags)
	{
		return OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(scrVecCoorsX, scrVecCoorsY, scrVecCoorsZ, Radius, model, SearchFlags);
	}
	scrVector GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS_Export(float vPosX, float vPosY, float vPosZ, float fHeading, float vOffsetX, float vOffsetY, float vOffsetZ)
	{
		return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vPosX, vPosY, vPosZ, fHeading, vOffsetX, vOffsetY, vOffsetZ);
	}
	void _ADD_DOOR_TO_SYSTEM_NEW_Export(Hash doorHash, BOOL p1, BOOL p2, BOOL p3, int threadId, int p5, BOOL p6)
	{
		return OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(doorHash, p1, p2, p3, threadId, p5, p6);
	}
	BOOL _IS_DOOR_REGISTERED_WITH_NETWORK_Export(Hash doorHash)
	{
		return OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(doorHash);
	}
	void REMOVE_DOOR_FROM_SYSTEM_Export(Hash doorEnumHash)
	{
		return OBJECT::REMOVE_DOOR_FROM_SYSTEM(doorEnumHash);
	}
	void DOOR_SYSTEM_SET_DOOR_STATE_Export(Hash doorEnumHash, int state)
	{
		return OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(doorEnumHash, state);
	}
	int DOOR_SYSTEM_GET_DOOR_STATE_Export(Hash doorEnumHash)
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(doorEnumHash);
	}
	void DOOR_SYSTEM_SET_AUTOMATIC_RATE_Export(Hash doorEnumHash, float fAutomaticRate)
	{
		return OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(doorEnumHash, fAutomaticRate);
	}
	void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE_Export(Hash doorEnumHash, float fAutomaticDistance)
	{
		return OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(doorEnumHash, fAutomaticDistance);
	}
	void _0xB3B1546D23DF8DE1_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return OBJECT::_0xB3B1546D23DF8DE1(p0, p1, p2, p3, p4);
	}
	void DOOR_SYSTEM_SET_OPEN_RATIO_Export(Hash doorEnumHash, float fOpenRatio, BOOL forceUpdate)
	{
		return OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(doorEnumHash, fOpenRatio, forceUpdate);
	}
	void _0x3A77DAE8B4FD7586_Export(Any p0, Any p1)
	{
		return OBJECT::_0x3A77DAE8B4FD7586(p0, p1);
	}
	void _DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED_Export(Hash doorHash, BOOL p1)
	{
		return OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(doorHash, p1);
	}
	BOOL _IS_DOOR_REGISTERED_WITH_OWNER_Export(Hash doorHash)
	{
		return OBJECT::_IS_DOOR_REGISTERED_WITH_OWNER(doorHash);
	}
	void _DOOR_SYSTEM_CHANGE_SCRIPT_OWNER_Export(Hash doorHash)
	{
		return OBJECT::_DOOR_SYSTEM_CHANGE_SCRIPT_OWNER(doorHash);
	}
	float _DOOR_SYSTEM_GET_AUTOMATIC_RATE_Export(Hash doorHash)
	{
		return OBJECT::_DOOR_SYSTEM_GET_AUTOMATIC_RATE(doorHash);
	}
	Any _0x6E2AA80BB0C03728_Export(Any p0, Any p1)
	{
		return OBJECT::_0x6E2AA80BB0C03728(p0, p1);
	}
	void _DOOR_SYSTEM_SET_AUTOMATIC_STATE_Export(Hash doorHash, BOOL disable)
	{
		return OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(doorHash, disable);
	}
	float DOOR_SYSTEM_GET_OPEN_RATIO_Export(Hash doorEnumHash)
	{
		return OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(doorEnumHash);
	}
	void _0x7F458B543006C8FE_Export(Any p0, Any p1)
	{
		return OBJECT::_0x7F458B543006C8FE(p0, p1);
	}
	Any _0xACD4F9831DFAD7F5_Export(Any p0)
	{
		return OBJECT::_0xACD4F9831DFAD7F5(p0);
	}
	void _0x0C0A373D181BF900_Export(Any p0)
	{
		return OBJECT::_0x0C0A373D181BF900(p0);
	}
	void _0xA93F925F1942E434_Export(Any p0, Any p1)
	{
		return OBJECT::_0xA93F925F1942E434(p0, p1);
	}
	Any _0x4D8611DFE1126478_Export(Any p0)
	{
		return OBJECT::_0x4D8611DFE1126478(p0);
	}
	void _0x57C242543B7B8FB9_Export(Any p0, Any p1)
	{
		return OBJECT::_0x57C242543B7B8FB9(p0, p1);
	}
	void _0x4AE07EBA3462C5D5_Export(Any p0, Any p1)
	{
		return OBJECT::_0x4AE07EBA3462C5D5(p0, p1);
	}
	void _0x22031584496CFB70_Export(Any p0, Any p1)
	{
		return OBJECT::_0x22031584496CFB70(p0, p1);
	}
	void _0xC07B91B996C1DE89_Export(Any p0, Any p1)
	{
		return OBJECT::_0xC07B91B996C1DE89(p0, p1);
	}
	BOOL IS_DOOR_REGISTERED_WITH_SYSTEM_Export(Hash doorEnumHash)
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(doorEnumHash);
	}
	BOOL IS_DOOR_CLOSED_Export(Hash doorEnumHash)
	{
		return OBJECT::IS_DOOR_CLOSED(doorEnumHash);
	}
	Any _0x0943113E02322164_Export(Object object, int p1)
	{
		return OBJECT::_0x0943113E02322164(object, p1);
	}
	Any _0x614D0B4533F842D3_Export(Any p0)
	{
		return OBJECT::_0x614D0B4533F842D3(p0);
	}
	void _DOOR_SYSTEM_FORCE_SHUT_Export(Hash doorHash, BOOL p1)
	{
		return OBJECT::_DOOR_SYSTEM_FORCE_SHUT(doorHash, p1);
	}
	Any _0xEBA314768FB35D58_Export(Any p0)
	{
		return OBJECT::_0xEBA314768FB35D58(p0);
	}
	void _0x5230BF34EB0EC645_Export(Any p0)
	{
		return OBJECT::_0x5230BF34EB0EC645(p0);
	}
	BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, Hash ModelIndex, BOOL checkPhysicsExists)
	{
		return OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(VecCoorsX, VecCoorsY, VecCoorsZ, Radius, ModelIndex, checkPhysicsExists);
	}
	BOOL IS_POINT_IN_ANGLED_AREA_Export(float VecPointX, float VecPointY, float VecPointZ, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, float DistanceP1toP4, BOOL HighlightArea, BOOL bCheck3D)
	{
		return OBJECT::IS_POINT_IN_ANGLED_AREA(VecPointX, VecPointY, VecPointZ, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, DistanceP1toP4, HighlightArea, bCheck3D);
	}
	void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY_Export(Object ObjectID, BOOL AllowFlag)
	{
		return OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(ObjectID, AllowFlag);
	}
	void SET_OBJECT_PHYSICS_PARAMS_Export(Object ObjectIndex, float fMass, float fGravityFactor, float TranslationalDampingX, float TranslationalDampingY, float TranslationalDampingZ, float RotationalDampingX, float RotationalDampingY, float RotationalDampingZ, float fCollisionMargin, float fMaxAngularSpeed, float fBuoyancyFactor)
	{
		return OBJECT::SET_OBJECT_PHYSICS_PARAMS(ObjectIndex, fMass, fGravityFactor, TranslationalDampingX, TranslationalDampingY, TranslationalDampingZ, RotationalDampingX, RotationalDampingY, RotationalDampingZ, fCollisionMargin, fMaxAngularSpeed, fBuoyancyFactor);
	}
	float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH_Export(Object ObjectIndex, BOOL HealthPercentageByMass)
	{
		return OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(ObjectIndex, HealthPercentageByMass);
	}
	Any _0x235C863DA77BD88D_Export(Any p0, Any p1, Any p2)
	{
		return OBJECT::_0x235C863DA77BD88D(p0, p1, p2);
	}
	void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN_Export(Object ObjectIndex, BOOL bActivatePhysicsWhenUnfrozen)
	{
		return OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(ObjectIndex, bActivatePhysicsWhenUnfrozen);
	}
	void BREAK_OBJECT_FRAGMENT_CHILD_Export(Object ObjectIndex, int Component, BOOL Disappear)
	{
		return OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(ObjectIndex, Component, Disappear);
	}
	void BREAK_ALL_OBJECT_FRAGMENT_BONES_Export(Object object)
	{
		return OBJECT::BREAK_ALL_OBJECT_FRAGMENT_BONES(object);
	}
	void _0xAAACF33CBF9B990A_Export(Any p0, Any p1)
	{
		return OBJECT::_0xAAACF33CBF9B990A(p0, p1);
	}
	void _DAMAGE_BONE_ON_PROP_Export(Object object, int bone)
	{
		return OBJECT::_DAMAGE_BONE_ON_PROP(object, bone);
	}
	void FIX_OBJECT_FRAGMENT_Export(Object ObjectIndex)
	{
		return OBJECT::FIX_OBJECT_FRAGMENT(ObjectIndex);
	}
	Any _0x58DE624FA7FB0E7F_Export(Any p0)
	{
		return OBJECT::_0x58DE624FA7FB0E7F(p0);
	}
	void _0x491439AEF410A2FC_Export(Any p0)
	{
		return OBJECT::_0x491439AEF410A2FC(p0);
	}
	void _SET_OBJECT_BREAK_SCALE_Export(Object object, float scale)
	{
		return OBJECT::_SET_OBJECT_BREAK_SCALE(object, scale);
	}
	void _0xCEAB54F4632C6EF6_Export(Any p0, Any p1)
	{
		return OBJECT::_0xCEAB54F4632C6EF6(p0, p1);
	}
	void TRACK_OBJECT_VISIBILITY_Export(Object ObjectID)
	{
		return OBJECT::TRACK_OBJECT_VISIBILITY(ObjectID);
	}
	BOOL IS_OBJECT_VISIBLE_Export(Object ObjectID)
	{
		return OBJECT::IS_OBJECT_VISIBLE(ObjectID);
	}
	void SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS_Export(Object ObjectIndex, BOOL bTakesDamage)
	{
		return OBJECT::SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS(ObjectIndex, bTakesDamage);
	}
	void ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS_Export(BOOL enabled)
	{
		return OBJECT::ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS(enabled);
	}
	void _0x6579860A5558524A_Export(Any p0, Any p1)
	{
		return OBJECT::_0x6579860A5558524A(p0, p1);
	}
	void _0xDFA1237F5228263F_Export(Any p0, Any p1)
	{
		return OBJECT::_0xDFA1237F5228263F(p0, p1);
	}
	float _GET_LIGHT_INTENSITY_FROM_OBJECT_Export(Object object)
	{
		return OBJECT::_GET_LIGHT_INTENSITY_FROM_OBJECT(object);
	}
	void _SET_LIGHT_INTENSITY_FOR_OBJECT_Export(Object object, float lightIntensity)
	{
		return OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(object, lightIntensity);
	}
	void _SET_LIGHT_TRANSLUCENCY_FOR_OBJECT_Export(Object object, float value)
	{
		return OBJECT::_SET_LIGHT_TRANSLUCENCY_FOR_OBJECT(object, value);
	}
	void _SET_LIGHT_SCATTERING_DISABLED_FOR_OBJECT_Export(Object object, BOOL disable)
	{
		return OBJECT::_SET_LIGHT_SCATTERING_DISABLED_FOR_OBJECT(object, disable);
	}
	void _0x7FCD49388BC9B775_Export(Any p0, Any p1)
	{
		return OBJECT::_0x7FCD49388BC9B775(p0, p1);
	}
	Any _0xFA99E8E575F2FEF8_Export(Any p0)
	{
		return OBJECT::_0xFA99E8E575F2FEF8(p0);
	}
	Object GET_RAYFIRE_MAP_OBJECT_Export(float PosX, float PosY, float PosZ, float fRadius, const char* RayfireName)
	{
		return OBJECT::GET_RAYFIRE_MAP_OBJECT(PosX, PosY, PosZ, fRadius, RayfireName);
	}
	void SET_STATE_OF_RAYFIRE_MAP_OBJECT_Export(Object RayFireObject, int state)
	{
		return OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(RayFireObject, state);
	}
	int GET_STATE_OF_RAYFIRE_MAP_OBJECT_Export(Object RayFireObject)
	{
		return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(RayFireObject);
	}
	BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST_Export(Object RayFireObject)
	{
		return OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(RayFireObject);
	}
	float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE_Export(Object RayFireObject)
	{
		return OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(RayFireObject);
	}
	Pickup CREATE_PICKUP_Export(Hash Type, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, int PlacementFlags, int Amount, BOOL ScriptHostObject, Hash CustomModel, int p8, float p9, Any p10)
	{
		return OBJECT::CREATE_PICKUP(Type, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, PlacementFlags, Amount, ScriptHostObject, CustomModel, p8, p9, p10);
	}
	Pickup CREATE_PICKUP_ROTATE_Export(Hash Type, float CoorsX, float CoorsY, float CoorsZ, float OrientationX, float OrientationY, float OrientationZ, int PlacementFlags, int Amount, int RotOrder, BOOL ScriptHostObject, Hash CustomModel, int p12, float p13, Any p14)
	{
		return OBJECT::CREATE_PICKUP_ROTATE(Type, CoorsX, CoorsY, CoorsZ, OrientationX, OrientationY, OrientationZ, PlacementFlags, Amount, RotOrder, ScriptHostObject, CustomModel, p12, p13, p14);
	}
	Object CREATE_AMBIENT_PICKUP_Export(Hash Type, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, int PlacementFlags, int Amount, Hash CustomModel, BOOL bCreateAsScriptObject, BOOL ScriptHostObject, int p9, float p10)
	{
		return OBJECT::CREATE_AMBIENT_PICKUP(Type, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, PlacementFlags, Amount, CustomModel, bCreateAsScriptObject, ScriptHostObject, p9, p10);
	}
	Object CREATE_PORTABLE_PICKUP_Export(Hash Type, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, BOOL SnapToGround, Hash CustomModel)
	{
		return OBJECT::CREATE_PORTABLE_PICKUP(Type, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, SnapToGround, CustomModel);
	}
	void ATTACH_PORTABLE_PICKUP_TO_PED_Export(Object PickupID, Ped PedID)
	{
		return OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(PickupID, PedID);
	}
	void DETACH_PORTABLE_PICKUP_FROM_PED_Export(Object PickupID)
	{
		return OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(PickupID);
	}
	void _HIDE_PICKUP_OBJECT_Export(Object pickupObject, BOOL toggle)
	{
		return OBJECT::_HIDE_PICKUP_OBJECT(pickupObject, toggle);
	}
	void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER_Export(Hash modelName, int MaxPickups)
	{
		return OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(modelName, MaxPickups);
	}
	Any _0x3E2616E7EA539480_Export(Any p0)
	{
		return OBJECT::_0x3E2616E7EA539480(p0);
	}
	void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS_Export(BOOL CanCollect)
	{
		return OBJECT::SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(CanCollect);
	}
	scrVector GET_SAFE_PICKUP_COORDS_Export(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ, float minDist, float maxDist, Any p5)
	{
		return OBJECT::GET_SAFE_PICKUP_COORDS(VecInCoorsX, VecInCoorsY, VecInCoorsZ, minDist, maxDist, p5);
	}
	scrVector GET_PICKUP_COORDS_Export(Pickup PickupID)
	{
		return OBJECT::GET_PICKUP_COORDS(PickupID);
	}
	void REMOVE_ALL_PICKUPS_OF_TYPE_Export(Hash Type)
	{
		return OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(Type);
	}
	BOOL HAS_PICKUP_BEEN_COLLECTED_Export(Pickup PickupID)
	{
		return OBJECT::HAS_PICKUP_BEEN_COLLECTED(PickupID);
	}
	void REMOVE_PICKUP_Export(Pickup PickupID)
	{
		return OBJECT::REMOVE_PICKUP(PickupID);
	}
	void SET_PICKUP_DO_NOT_AUTO_PLACE_ON_GROUND_Export(Object pickupObject)
	{
		return OBJECT::SET_PICKUP_DO_NOT_AUTO_PLACE_ON_GROUND(pickupObject);
	}
	BOOL DOES_PICKUP_EXIST_Export(Pickup PickupID)
	{
		return OBJECT::DOES_PICKUP_EXIST(PickupID);
	}
	BOOL DOES_PICKUP_OBJECT_EXIST_Export(Pickup PickupID)
	{
		return OBJECT::DOES_PICKUP_OBJECT_EXIST(PickupID);
	}
	Object GET_PICKUP_OBJECT_Export(Pickup PickupID)
	{
		return OBJECT::GET_PICKUP_OBJECT(PickupID);
	}
	BOOL IS_OBJECT_A_PORTABLE_PICKUP_Export(Object ObjectID)
	{
		return OBJECT::IS_OBJECT_A_PORTABLE_PICKUP(ObjectID);
	}
	BOOL _IS_PICKUP_TYPE_VALID_Export(Hash pickupHash)
	{
		return OBJECT::_IS_PICKUP_TYPE_VALID(pickupHash);
	}
	BOOL DOES_PICKUP_OF_TYPE_EXIST_IN_AREA_Export(Hash PickupType, float VecCoordsX, float VecCoordsY, float VecCoordsZ, float Radius)
	{
		return OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(PickupType, VecCoordsX, VecCoordsY, VecCoordsZ, Radius);
	}
	void SET_PICKUP_REGENERATION_TIME_Export(Pickup PickupID, int RegenTime)
	{
		return OBJECT::SET_PICKUP_REGENERATION_TIME(PickupID, RegenTime);
	}
	void FORCE_PICKUP_REGENERATE_Export(Pickup PickupID)
	{
		return OBJECT::FORCE_PICKUP_REGENERATE(PickupID);
	}
	void _SET_NETWORK_PICKUP_USABLE_FOR_PLAYER_Export(Player player, Hash pickupHash, BOOL isUsable)
	{
		return OBJECT::_SET_NETWORK_PICKUP_USABLE_FOR_PLAYER(player, pickupHash, isUsable);
	}
	void SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL_Export(Hash CustomModel, BOOL Allow)
	{
		return OBJECT::SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(CustomModel, Allow);
	}
	void BLOCK_PICKUP_FROM_PLAYER_COLLECTION_Export(Any p0, Any p1)
	{
		return OBJECT::BLOCK_PICKUP_FROM_PLAYER_COLLECTION(p0, p1);
	}
	void SET_PICKUP_NOT_LOOTABLE_Export(Any p0, Any p1)
	{
		return OBJECT::SET_PICKUP_NOT_LOOTABLE(p0, p1);
	}
	void _0x1F5E07E14A86FAFC_Export(BOOL p0)
	{
		return OBJECT::_0x1F5E07E14A86FAFC(p0);
	}
	void SET_TEAM_PICKUP_OBJECT_Export(Object PickupID, int Team, BOOL bSet)
	{
		return OBJECT::SET_TEAM_PICKUP_OBJECT(PickupID, Team, bSet);
	}
	Any _0x9F52AD67D1A91BAD_Export(Any p0, Any p1)
	{
		return OBJECT::_0x9F52AD67D1A91BAD(p0, p1);
	}
	void PREVENT_COLLECTION_OF_PORTABLE_PICKUP_Export(Object PickupID, BOOL bPrevent, BOOL bLocalOnly)
	{
		return OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(PickupID, bPrevent, bLocalOnly);
	}
	void SET_PICKUP_GENERATION_RANGE_MULTIPLIER_Export(float multiplier)
	{
		return OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(multiplier);
	}
	void SET_PICKUP_UNCOLLECTABLE_Export(Pickup PickupID, BOOL bSet)
	{
		return OBJECT::SET_PICKUP_UNCOLLECTABLE(PickupID, bSet);
	}
	void SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE_Export(Pickup PickupID, BOOL bSet)
	{
		return OBJECT::SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(PickupID, bSet);
	}
	void _SET_AMBIENT_PICKUP_LIFETIME_Export(int lifetime)
	{
		return OBJECT::_SET_AMBIENT_PICKUP_LIFETIME(lifetime);
	}
	void SET_PICKUP_PARTICLE_FX_SPAWN_Export(Any p0, Any p1)
	{
		return OBJECT::SET_PICKUP_PARTICLE_FX_SPAWN(p0, p1);
	}
	void SET_PICKUP_PARTICLE_FX_HIGHLIGHT_Export(Any p0, Any p1)
	{
		return OBJECT::SET_PICKUP_PARTICLE_FX_HIGHLIGHT(p0, p1);
	}
	void SUPPRESS_PICKUP_REWARD_TYPE_Export(int pickupFlag, BOOL bClearPreviousFlags)
	{
		return OBJECT::SUPPRESS_PICKUP_REWARD_TYPE(pickupFlag, bClearPreviousFlags);
	}
	Any _0x20135AF9C10D2A3D_Export(Any p0)
	{
		return OBJECT::_0x20135AF9C10D2A3D(p0);
	}
	void _SET_PICKUP_COLLECTABLE_ON_MOUNT_Export(Object object)
	{
		return OBJECT::_SET_PICKUP_COLLECTABLE_ON_MOUNT(object);
	}
	void _0xDE116ECFFDD4B997_Export(Any p0, Any p1)
	{
		return OBJECT::_0xDE116ECFFDD4B997(p0, p1);
	}
	Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE_Export(Hash ePickupType)
	{
		return OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(ePickupType);
	}
	Hash _GET_AMMO_TYPE_FROM_PICKUP_TYPE_Export(Hash pickupHash)
	{
		return OBJECT::_GET_AMMO_TYPE_FROM_PICKUP_TYPE(pickupHash);
	}
	void SET_OBJECT_TINT_INDEX_Export(Object ObjectIndex, int TintIndex)
	{
		return OBJECT::SET_OBJECT_TINT_INDEX(ObjectIndex, TintIndex);
	}
	float _GET_OBJECT_LIGHT_INTENSITY_Export(Object object)
	{
		return OBJECT::_GET_OBJECT_LIGHT_INTENSITY(object);
	}
	void _SET_OBJECT_BURN_OPACITY_Export(Object object, float opacity)
	{
		return OBJECT::_SET_OBJECT_BURN_OPACITY(object, opacity);
	}
	void _SET_OBJECT_BURN_INTENSITY_Export(Object object, float intensity)
	{
		return OBJECT::_SET_OBJECT_BURN_INTENSITY(object, intensity);
	}
	void _SET_OBJECT_BURN_LEVEL_Export(Object object, float burnLevel, BOOL affectAsh)
	{
		return OBJECT::_SET_OBJECT_BURN_LEVEL(object, burnLevel, affectAsh);
	}
	void _0x9A74A9CADFA8A598_Export(Any p0)
	{
		return OBJECT::_0x9A74A9CADFA8A598(p0);
	}
	void _RESET_OBJECT_VELOCITY_Export(Object object)
	{
		return OBJECT::_RESET_OBJECT_VELOCITY(object);
	}
	void _SET_OBJECT_BURN_SPEED_Export(Object object, float speed, float p2)
	{
		return OBJECT::_SET_OBJECT_BURN_SPEED(object, speed, p2);
	}
	void _0xCBFBD38F2E0A263B_Export(Any p0, Any p1)
	{
		return OBJECT::_0xCBFBD38F2E0A263B(p0, p1);
	}
	Hash CONVERT_OLD_PICKUP_TYPE_TO_NEW_Export(Hash OldPickupType)
	{
		return OBJECT::CONVERT_OLD_PICKUP_TYPE_TO_NEW(OldPickupType);
	}
	void SET_FORCE_OBJECT_THIS_FRAME_Export(float posX, float posY, float posZ, float radius)
	{
		return OBJECT::SET_FORCE_OBJECT_THIS_FRAME(posX, posY, posZ, radius);
	}
	Any _0xD91E55B6C005EB09_Export(Any p0, Any p1)
	{
		return OBJECT::_0xD91E55B6C005EB09(p0, p1);
	}
	void ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE_Export(Object ObjectIndex)
	{
		return OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(ObjectIndex);
	}
	void _0xCAAF2BCCFEF37F77_Export(Object object, Any p1)
	{
		return OBJECT::_0xCAAF2BCCFEF37F77(object, p1);
	}
	Any _0x08C5825A2932EA7B_Export(Any p0)
	{
		return OBJECT::_0x08C5825A2932EA7B(p0);
	}
	Any _0x7D4411D6736CD295_Export(Any p0, Any p1)
	{
		return OBJECT::_0x7D4411D6736CD295(p0, p1);
	}
	Any _0x250EBB11E81A10BE_Export(Any p0)
	{
		return OBJECT::_0x250EBB11E81A10BE(p0);
	}
	Any _0x2BF1953C0C21AC88_Export(Any p0)
	{
		return OBJECT::_0x2BF1953C0C21AC88(p0);
	}
	BOOL CREATE_OBJECT_SKELETON_Export(Object object)
	{
		return OBJECT::CREATE_OBJECT_SKELETON(object);
	}
	void _MAKE_ITEM_CARRIABLE_Export(Object object)
	{
		return OBJECT::_MAKE_ITEM_CARRIABLE(object);
	}
	void _0xF65EDE5D02A7A760_Export(Any p0, Any p1)
	{
		return OBJECT::_0xF65EDE5D02A7A760(p0, p1);
	}
	void _SET_AUTO_JUMPABLE_BY_HORSE_Export(Object object, BOOL p1)
	{
		return OBJECT::_SET_AUTO_JUMPABLE_BY_HORSE(object, p1);
	}
	void _SET_NOT_JUMPABLE_BY_HORSE_Export(Object object, BOOL p1)
	{
		return OBJECT::_SET_NOT_JUMPABLE_BY_HORSE(object, p1);
	}
	void _SET_OBJECT_KICKABLE_Export(Object object, BOOL kickable)
	{
		return OBJECT::_SET_OBJECT_KICKABLE(object, kickable);
	}
	void SET_CUSTOM_TEXTURES_ON_OBJECT_Export(Object object, Hash txdHash, Any p2, Any p3)
	{
		return OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(object, txdHash, p2, p3);
	}
	void _0xD503D6F0986D58BC_Export(Any p0, Any p1)
	{
		return OBJECT::_0xD503D6F0986D58BC(p0, p1);
	}
	void _0xAEE6C800E124CFE1_Export(Any p0, Any p1)
	{
		return OBJECT::_0xAEE6C800E124CFE1(p0, p1);
	}
	void _0x3DF1A0A58498E209_Export(Object object, Any p1)
	{
		return OBJECT::_0x3DF1A0A58498E209(object, p1);
	}
	void _SET_CONTROL_CONTEXT_Export(int control, Hash context)
	{
		return PAD::_SET_CONTROL_CONTEXT(control, context);
	}
	Hash _GET_CURRENT_CONTROL_CONTEXT_Export(int control)
	{
		return PAD::_GET_CURRENT_CONTROL_CONTEXT(control);
	}
	BOOL _IS_CONTROL_ACTION_VALID_Export(Hash action, int control)
	{
		return PAD::_IS_CONTROL_ACTION_VALID(action, control);
	}
	BOOL IS_CONTROL_ENABLED_Export(int control, Hash action)
	{
		return PAD::IS_CONTROL_ENABLED(control, action);
	}
	BOOL IS_CONTROL_PRESSED_Export(int control, Hash action)
	{
		return PAD::IS_CONTROL_PRESSED(control, action);
	}
	BOOL IS_CONTROL_RELEASED_Export(int control, Hash action)
	{
		return PAD::IS_CONTROL_RELEASED(control, action);
	}
	BOOL IS_CONTROL_JUST_PRESSED_Export(int control, Hash action)
	{
		return PAD::IS_CONTROL_JUST_PRESSED(control, action);
	}
	BOOL IS_CONTROL_JUST_RELEASED_Export(int control, Hash action)
	{
		return PAD::IS_CONTROL_JUST_RELEASED(control, action);
	}
	int GET_CONTROL_VALUE_Export(int control, Hash action)
	{
		return PAD::GET_CONTROL_VALUE(control, action);
	}
	float GET_CONTROL_NORMAL_Export(int control, Hash action)
	{
		return PAD::GET_CONTROL_NORMAL(control, action);
	}
	float GET_CONTROL_UNBOUND_NORMAL_Export(int control, Hash action)
	{
		return PAD::GET_CONTROL_UNBOUND_NORMAL(control, action);
	}
	BOOL SET_CONTROL_VALUE_NEXT_FRAME_Export(int control, Hash action, float value)
	{
		return PAD::SET_CONTROL_VALUE_NEXT_FRAME(control, action, value);
	}
	BOOL IS_DISABLED_CONTROL_PRESSED_Export(int control, Hash action)
	{
		return PAD::IS_DISABLED_CONTROL_PRESSED(control, action);
	}
	BOOL IS_DISABLED_CONTROL_JUST_PRESSED_Export(int control, Hash action)
	{
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(control, action);
	}
	BOOL IS_DISABLED_CONTROL_JUST_RELEASED_Export(int control, Hash action)
	{
		return PAD::IS_DISABLED_CONTROL_JUST_RELEASED(control, action);
	}
	float GET_DISABLED_CONTROL_NORMAL_Export(int control, Hash action)
	{
		return PAD::GET_DISABLED_CONTROL_NORMAL(control, action);
	}
	float GET_DISABLED_CONTROL_UNBOUND_NORMAL_Export(int control, Hash action)
	{
		return PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(control, action);
	}
	int GET_CONTROL_HOW_LONG_AGO_Export(int control)
	{
		return PAD::GET_CONTROL_HOW_LONG_AGO(control);
	}
	int _GET_DISABLED_CONTROL_HOW_LONG_AGO_Export(int control)
	{
		return PAD::_GET_DISABLED_CONTROL_HOW_LONG_AGO(control);
	}
	BOOL IS_USING_KEYBOARD_AND_MOUSE_Export(int control)
	{
		return PAD::IS_USING_KEYBOARD_AND_MOUSE(control);
	}
	Any _0x43F35DDB2905D945_Export(Any p0, Any p1)
	{
		return PAD::_0x43F35DDB2905D945(p0, p1);
	}
	Any _0xBD629C1C4F501C80_Export(Any p0)
	{
		return PAD::_0xBD629C1C4F501C80(p0);
	}
	BOOL HAVE_CONTROLS_CHANGED_Export(int control)
	{
		return PAD::HAVE_CONTROLS_CHANGED(control);
	}
	void SET_CONTROL_LIGHT_EFFECT_COLOR_Export(int control, int red, int green, int blue)
	{
		return PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(control, red, green, blue);
	}
	void CLEAR_CONTROL_LIGHT_EFFECT_Export(int control)
	{
		return PAD::CLEAR_CONTROL_LIGHT_EFFECT(control);
	}
	void SET_CONTROL_LIGHT_EFFECT_FLASHING_COLOR_Export(int control, int red, int green, int blue)
	{
		return PAD::SET_CONTROL_LIGHT_EFFECT_FLASHING_COLOR(control, red, green, blue);
	}
	void SET_CONTROL_SHAKE_Export(int control, int Duration, int Frequency)
	{
		return PAD::SET_CONTROL_SHAKE(control, Duration, Frequency);
	}
	void SET_CONTROL_TRIGGER_SHAKE_Export(int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency)
	{
		return PAD::SET_CONTROL_TRIGGER_SHAKE(control, leftDuration, leftFrequency, rightDuration, rightFrequency);
	}
	void STOP_CONTROL_SHAKE_Export(int control)
	{
		return PAD::STOP_CONTROL_SHAKE(control);
	}
	void SET_CONTROL_SHAKE_SUPPRESSED_ID_Export(int control, int SupressId)
	{
		return PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(control, SupressId);
	}
	void CLEAR_CONTROL_SHAKE_SUPPRESSED_ID_Export(int control)
	{
		return PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(control);
	}
	BOOL IS_LOOK_INVERTED_Export()
	{
		return PAD::IS_LOOK_INVERTED();
	}
	void SET_INPUT_EXCLUSIVE_Export(int control, Hash action)
	{
		return PAD::SET_INPUT_EXCLUSIVE(control, action);
	}
	void DISABLE_CONTROL_ACTION_Export(int control, Hash action, BOOL disableRelatedActions)
	{
		return PAD::DISABLE_CONTROL_ACTION(control, action, disableRelatedActions);
	}
	void ENABLE_CONTROL_ACTION_Export(int control, Hash action, BOOL enableRelatedActions)
	{
		return PAD::ENABLE_CONTROL_ACTION(control, action, enableRelatedActions);
	}
	void DISABLE_ALL_CONTROL_ACTIONS_Export(int control)
	{
		return PAD::DISABLE_ALL_CONTROL_ACTIONS(control);
	}
	void _0x5F217BC1190503D8_Export(const char* rumbleCurve, float p1)
	{
		return PAD::_0x5F217BC1190503D8(rumbleCurve, p1);
	}
	void _0x709BA8C08C5C008D_Export()
	{
		return PAD::_0x709BA8C08C5C008D();
	}
	BOOL _0x1252C029FC8EBB4D_Export()
	{
		return PAD::_0x1252C029FC8EBB4D();
	}
	void _0x52C68E92D6E23ADD_Export(Any p0)
	{
		return PAD::_0x52C68E92D6E23ADD(p0);
	}
	void SET_ROADS_IN_AREA_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, Any p6, BOOL bNetwork, Any p8)
	{
		return PATHFIND::SET_ROADS_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, p6, bNetwork, p8);
	}
	void SET_ROADS_IN_ANGLED_AREA_Export(float vVec1X, float vVec1Y, float vVec1Z, float vVec2X, float vVec2Y, float vVec2Z, float fAreaWidth, Any p7, Any p8, BOOL bNetwork, Any p10)
	{
		return PATHFIND::SET_ROADS_IN_ANGLED_AREA(vVec1X, vVec1Y, vVec1Z, vVec2X, vVec2Y, vVec2Z, fAreaWidth, p7, p8, bNetwork, p10);
	}
	void SET_ROADS_IN_VOLUME_Export(Volume volume, BOOL p1, BOOL p2, BOOL p3)
	{
		return PATHFIND::SET_ROADS_IN_VOLUME(volume, p1, p2, p3);
	}
	void RESET_ROADS_IN_VOLUME_Export(Volume volume, BOOL p1)
	{
		return PATHFIND::RESET_ROADS_IN_VOLUME(volume, p1);
	}
	void SET_ROADS_BACK_TO_ORIGINAL_Export(float VecCoorsMinX, float VecCoorsMinY, float VecCoorsMinZ, float VecCoorsMaxX, float VecCoorsMaxY, float VecCoorsMaxZ, Any p6, BOOL bNetwork)
	{
		return PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(VecCoorsMinX, VecCoorsMinY, VecCoorsMinZ, VecCoorsMaxX, VecCoorsMaxY, VecCoorsMaxZ, p6, bNetwork);
	}
	void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA_Export(float vVec1X, float vVec1Y, float vVec1Z, float vVec2X, float vVec2Y, float vVec2Z, float fAreaWidth, Any p7, BOOL bNetwork)
	{
		return PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vVec1X, vVec1Y, vVec1Z, vVec2X, vVec2Y, vVec2Z, fAreaWidth, p7, bNetwork);
	}
	void _0xAFE2AE66F6251C66_Export(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, int p6, Any p7)
	{
		return PATHFIND::_0xAFE2AE66F6251C66(xMin, yMin, zMin, xMax, yMax, zMax, p6, p7);
	}
	void _0x4358BCF14C91761C_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return PATHFIND::_0x4358BCF14C91761C(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0xB03944057FD735BA_Export(Any p0, Any p1, Any p2)
	{
		return PATHFIND::_0xB03944057FD735BA(p0, p1, p2);
	}
	void _0x6C3F12ECEB6D2E2A_Export(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, Any p6, Any p7)
	{
		return PATHFIND::_0x6C3F12ECEB6D2E2A(xMin, yMin, zMin, xMax, yMax, zMax, p6, p7);
	}
	void _0x5A4E1A41E3A02AD0_Export(Any p0, Any p1, Any p2)
	{
		return PATHFIND::_0x5A4E1A41E3A02AD0(p0, p1, p2);
	}
	BOOL GET_CLOSEST_VEHICLE_NODE_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, scrVector* VecReturnNearestNodeCoors, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		return PATHFIND::GET_CLOSEST_VEHICLE_NODE(VecCoorsX, VecCoorsY, VecCoorsZ, VecReturnNearestNodeCoors, nodeFlags, zMeasureMult, zTolerance);
	}
	Any _0xCA27A86CAA4E98ED_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return PATHFIND::_0xCA27A86CAA4E98ED(p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, scrVector* VecReturnNearestNodeCoors, float* ReturnHeading, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		return PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(VecCoorsX, VecCoorsY, VecCoorsZ, VecReturnNearestNodeCoors, ReturnHeading, nodeFlags, zMeasureMult, zTolerance);
	}
	BOOL GET_NTH_CLOSEST_VEHICLE_NODE_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, scrVector* VecReturnNearestNodeCoors, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		return PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, VecReturnNearestNodeCoors, nodeFlags, zMeasureMult, zTolerance);
	}
	int GET_NTH_CLOSEST_VEHICLE_NODE_ID_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		return PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, nodeFlags, zMeasureMult, zTolerance);
	}
	BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, scrVector* VecReturnNearestNodeCoors, float* ReturnHeading, int* ReturnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		return PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, VecReturnNearestNodeCoors, ReturnHeading, ReturnNumLanes, nodeFlags, zMeasureMult, zTolerance);
	}
	int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, float* ReturnHeading, int* ReturnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		return PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, ReturnHeading, ReturnNumLanes, nodeFlags, zMeasureMult, zTolerance);
	}
	BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float FaceCoorsX, float FaceCoorsY, float FaceCoorsZ, int NodeNumber, scrVector* VecReturnNearestNodeCoors, float* ReturnHeading, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		return PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(VecCoorsX, VecCoorsY, VecCoorsZ, FaceCoorsX, FaceCoorsY, FaceCoorsZ, NodeNumber, VecReturnNearestNodeCoors, ReturnHeading, nodeFlags, zMeasureMult, zTolerance);
	}
	BOOL IS_VEHICLE_NODE_ID_VALID_Export(int NodeId)
	{
		return PATHFIND::IS_VEHICLE_NODE_ID_VALID(NodeId);
	}
	void GET_VEHICLE_NODE_POSITION_Export(int nodeId, scrVector* VecNodePosition)
	{
		return PATHFIND::GET_VEHICLE_NODE_POSITION(nodeId, VecNodePosition);
	}
	BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF_Export(int nodeId)
	{
		return PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nodeId);
	}
	BOOL GET_CLOSEST_ROAD_Export(float TestCoorsX, float TestCoorsY, float TestCoorsZ, float MinLength, int MinLanes, scrVector* SouthEndNode, scrVector* NorthEndNode, int* LanesGoingSouth, int* LanesGoingNorth, float* CentralReservationWidth, BOOL bIgnoreSwitchedOffNodes)
	{
		return PATHFIND::GET_CLOSEST_ROAD(TestCoorsX, TestCoorsY, TestCoorsZ, MinLength, MinLanes, SouthEndNode, NorthEndNode, LanesGoingSouth, LanesGoingNorth, CentralReservationWidth, bIgnoreSwitchedOffNodes);
	}
	BOOL ARE_NODES_LOADED_FOR_AREA_Export(float MinX, float MinY, float MaxX, float MaxY)
	{
		return PATHFIND::ARE_NODES_LOADED_FOR_AREA(MinX, MinY, MaxX, MaxY);
	}
	BOOL REQUEST_PATH_NODES_IN_AREA_THIS_FRAME_Export(float MinX, float MinY, float MaxX, float MaxY)
	{
		return PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(MinX, MinY, MaxX, MaxY);
	}
	BOOL GET_RANDOM_VEHICLE_NODE_Export(float centrePointX, float centrePointY, float centrePointZ, float radius, int MinLanes, BOOL bAvoidDeadEnds, BOOL bAvoidHighways, scrVector* vecReturn, int* NodeAddress)
	{
		return PATHFIND::GET_RANDOM_VEHICLE_NODE(centrePointX, centrePointY, centrePointZ, radius, MinLanes, bAvoidDeadEnds, bAvoidHighways, vecReturn, NodeAddress);
	}
	void _GET_SPAWN_DATA_FOR_ROAD_NODE_Export(int nodeId, float x, float y, float z, scrVector* outCoords, float* heading)
	{
		return PATHFIND::_GET_SPAWN_DATA_FOR_ROAD_NODE(nodeId, x, y, z, outCoords, heading);
	}
	BOOL IS_POINT_ON_ROAD_Export(float vPosX, float vPosY, float vPosZ, Vehicle VehicleIndex)
	{
		return PATHFIND::IS_POINT_ON_ROAD(vPosX, vPosY, vPosZ, VehicleIndex);
	}
	void SET_PED_PATHS_IN_AREA_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, BOOL bActive, BOOL bForceAbortCurrentPath)
	{
		return PATHFIND::SET_PED_PATHS_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bActive, bForceAbortCurrentPath);
	}
	void _0xE5EF9DE716FF737E_Export(Any p0, Any p1, Any p2)
	{
		return PATHFIND::_0xE5EF9DE716FF737E(p0, p1, p2);
	}
	BOOL GET_SAFE_COORD_FOR_PED_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, BOOL bOnlyOnPavement, scrVector* VecReturnSafeCoors, int iFlags)
	{
		return PATHFIND::GET_SAFE_COORD_FOR_PED(VecCoorsX, VecCoorsY, VecCoorsZ, bOnlyOnPavement, VecReturnSafeCoors, iFlags);
	}
	void SET_PED_PATHS_BACK_TO_ORIGINAL_Export(float VecCoorsMinX, float VecCoorsMinY, float VecCoorsMinZ, float VecCoorsMaxX, float VecCoorsMaxY, float VecCoorsMaxZ, BOOL bForceAbortCurrentPath)
	{
		return PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(VecCoorsMinX, VecCoorsMinY, VecCoorsMinZ, VecCoorsMaxX, VecCoorsMaxY, VecCoorsMaxZ, bForceAbortCurrentPath);
	}
	void _0xCF213A5FC3ABFC08_Export(Any p0, Any p1, Any p2)
	{
		return PATHFIND::_0xCF213A5FC3ABFC08(p0, p1, p2);
	}
	void ADD_NAVMESH_REQUIRED_REGION_Export(float x, float y, float radius)
	{
		return PATHFIND::ADD_NAVMESH_REQUIRED_REGION(x, y, radius);
	}
	BOOL IS_NAVMESH_LOADED_IN_AREA_Export(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ)
	{
		return PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ);
	}
	int GET_NUM_NAVMESHES_EXISTING_IN_AREA_Export(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ)
	{
		return PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ);
	}
	BOOL _NAVMESH_ACTIVATE_SWAP_Export(const char* name)
	{
		return PATHFIND::_NAVMESH_ACTIVATE_SWAP(name);
	}
	BOOL _NAVMESH_DEACTIVATE_SWAP_Export(const char* name)
	{
		return PATHFIND::_NAVMESH_DEACTIVATE_SWAP(name);
	}
	BOOL _NAVMESH_IS_SWAP_ACTIVE_Export(const char* name)
	{
		return PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(name);
	}
	BOOL _NAVMESH_DOES_SWAP_EXIST_Export(const char* name)
	{
		return PATHFIND::_NAVMESH_DOES_SWAP_EXIST(name);
	}
	int _0x5A3B54ADDF5472A3_Export(const char* p0)
	{
		return PATHFIND::_0x5A3B54ADDF5472A3(p0);
	}
	void* _0xA33914B00CA55756_Export(const char* p0, int p1)
	{
		return PATHFIND::_0xA33914B00CA55756(p0, p1);
	}
	BOOL _NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE_Export(Vehicle vehicle, const char* navMeshName)
	{
		return PATHFIND::_NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE(vehicle, navMeshName);
	}
	int ADD_NAVMESH_BLOCKING_OBJECT_Export(float vPositionX, float vPositionY, float vPositionZ, float vSizeXYZX, float vSizeXYZY, float vSizeXYZZ, float fHeading, BOOL bPermanent, int iFlags)
	{
		return PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(vPositionX, vPositionY, vPositionZ, vSizeXYZX, vSizeXYZY, vSizeXYZZ, fHeading, bPermanent, iFlags);
	}
	void REMOVE_NAVMESH_BLOCKING_OBJECT_Export(int iObjectId)
	{
		return PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iObjectId);
	}
	BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST_Export(int iObjectId)
	{
		return PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iObjectId);
	}
	BOOL _ADD_NAVMESH_BLOCKING_VOLUME_Export(Volume volume, int flags)
	{
		return PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volume, flags);
	}
	void _REMOVE_NAVMESH_BLOCKING_VOLUME_Export(Volume volume)
	{
		return PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volume);
	}
	BOOL _DOES_NAVMESH_BLOCKING_VOLUME_EXIST_Export(Volume volume)
	{
		return PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(volume);
	}
	void _0x6DAD6630AE4A74CB_Export(Any p0, Any p1)
	{
		return PATHFIND::_0x6DAD6630AE4A74CB(p0, p1);
	}
	int NAVMESH_REQUEST_PATH_Export(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int bitFlag)
	{
		return PATHFIND::NAVMESH_REQUEST_PATH(ped, x1, y1, z1, x2, y2, z2, bitFlag);
	}
	BOOL _NAVMESH_CLEAR_REQUESTED_PATH_Export(int path)
	{
		return PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(path);
	}
	int _NAVMESH_REQUESTED_QUERY_STATUS_Export(int path)
	{
		return PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(path);
	}
	BOOL _NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND_Export(int path)
	{
		return PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND(path);
	}
	int _NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN_Export(int path)
	{
		return PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(path);
	}
	int _NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS_Export(int path)
	{
		return PATHFIND::_NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS(path);
	}
	scrVector _NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX_Export(int path, int waypointIndex)
	{
		return PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX(path, waypointIndex);
	}
	float GET_APPROX_FLOOR_FOR_POINT_Export(float x, float y)
	{
		return PATHFIND::GET_APPROX_FLOOR_FOR_POINT(x, y);
	}
	void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME_Export(float fMultiplier)
	{
		return PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(fMultiplier);
	}
	void SET_IGNORE_NO_GPS_FLAG_Export(BOOL bIgnore)
	{
		return PATHFIND::SET_IGNORE_NO_GPS_FLAG(bIgnore);
	}
	int GET_GPS_BLIP_ROUTE_LENGTH_Export()
	{
		return PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
	}
	Any _0xEFC535C9FAF563B3_Export(Any p0)
	{
		return PATHFIND::_0xEFC535C9FAF563B3(p0);
	}
	Any _0x665B21666351CB37_Export(Any p0, Any p1, Any p2)
	{
		return PATHFIND::_0x665B21666351CB37(p0, p1, p2);
	}
	BOOL GET_GPS_BLIP_ROUTE_FOUND_Export()
	{
		return PATHFIND::GET_GPS_BLIP_ROUTE_FOUND();
	}
	Any _0x54F4D7B6670FBB5A_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PATHFIND::_0x54F4D7B6670FBB5A(p0, p1, p2, p3, p4);
	}
	void _0x34C9AF25649172D0_Export(Any p0)
	{
		return PATHFIND::_0x34C9AF25649172D0(p0);
	}
	void _0xF2A2177AC848B3A8_Export(Volume volume, int p1, int p2)
	{
		return PATHFIND::_0xF2A2177AC848B3A8(volume, p1, p2);
	}
	void _0x4BDEBEA5702B97A9_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return PATHFIND::_0x4BDEBEA5702B97A9(p0, p1, p2, p3, p4, p5);
	}
	void _0x264E9A5CD78C338F_Export(Any p0)
	{
		return PATHFIND::_0x264E9A5CD78C338F(p0);
	}
	void _0x869A7015BD4606E9_Export(Any p0)
	{
		return PATHFIND::_0x869A7015BD4606E9(p0);
	}
	Any _SIMULATED_ROUTE_CREATE_Export(float x1, float y1, float z1, float x2, float y2, float z2, int p6)
	{
		return PATHFIND::_SIMULATED_ROUTE_CREATE(x1, y1, z1, x2, y2, z2, p6);
	}
	void _SIMULATED_ROUTE_DELETE_Export(Any p0)
	{
		return PATHFIND::_SIMULATED_ROUTE_DELETE(p0);
	}
	BOOL _SIMULATED_ROUTE_EXISTS_Export(Any p0)
	{
		return PATHFIND::_SIMULATED_ROUTE_EXISTS(p0);
	}
	BOOL SIMULATED_ROUTE_IS_LOADED_Export(Any p0)
	{
		return PATHFIND::SIMULATED_ROUTE_IS_LOADED(p0);
	}
	void SIMULATED_ROUTE_TRAVEL_TO_POINT_Export(Any p0, float p1, float p2)
	{
		return PATHFIND::SIMULATED_ROUTE_TRAVEL_TO_POINT(p0, p1, p2);
	}
	float SIMULATED_ROUTE_GET_ETA_Export(Any p0)
	{
		return PATHFIND::SIMULATED_ROUTE_GET_ETA(p0);
	}
	Ped CREATE_PED_Export(Hash PedModelHashKey, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, float fPedHeading, BOOL RegisterAsNetworkObject, BOOL ScriptHostObject, BOOL p7, BOOL p8)
	{
		return PED::CREATE_PED(PedModelHashKey, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, fPedHeading, RegisterAsNetworkObject, ScriptHostObject, p7, p8);
	}
	void DELETE_PED_Export(Ped* PedIndex)
	{
		return PED::DELETE_PED(PedIndex);
	}
	void _SET_REMOVE_PED_NETWORKED_Export(Ped ped, int p1)
	{
		return PED::_SET_REMOVE_PED_NETWORKED(ped, p1);
	}
	void _0x7C08E7CB8D951B70_Export(Ped ped, float p1)
	{
		return PED::_0x7C08E7CB8D951B70(ped, p1);
	}
	void _SET_PED_TO_BE_REMOVED_Export(Ped ped, float p1, float p2, int p3, Any p4)
	{
		return PED::_SET_PED_TO_BE_REMOVED(ped, p1, p2, p3, p4);
	}
	Ped CLONE_PED_Export(Ped PedIndex, BOOL bRegisterAsNetworkObject, BOOL bScriptHostObject, BOOL bLinkBlends)
	{
		return PED::CLONE_PED(PedIndex, bRegisterAsNetworkObject, bScriptHostObject, bLinkBlends);
	}
	void CLONE_PED_TO_TARGET_Export(Ped PedIndexSource, Ped PedIndexTarget)
	{
		return PED::CLONE_PED_TO_TARGET(PedIndexSource, PedIndexTarget);
	}
	BOOL IS_PED_IN_VEHICLE_Export(Ped PedIndex, Vehicle VehicleIndex, BOOL ConsiderEnteringAsInVehicle)
	{
		return PED::IS_PED_IN_VEHICLE(PedIndex, VehicleIndex, ConsiderEnteringAsInVehicle);
	}
	BOOL IS_PED_IN_MODEL_Export(Ped PedIndex, Hash VehicleModelHashKey)
	{
		return PED::IS_PED_IN_MODEL(PedIndex, VehicleModelHashKey);
	}
	BOOL IS_PED_IN_ANY_VEHICLE_Export(Ped PedIndex, BOOL ConsiderEnteringAsInVehicle)
	{
		return PED::IS_PED_IN_ANY_VEHICLE(PedIndex, ConsiderEnteringAsInVehicle);
	}
	void _0x9851DE7AEC10B4E1_Export(float x, float y, float z, float p3, int p4, Any p5)
	{
		return PED::_0x9851DE7AEC10B4E1(x, y, z, p3, p4, p5);
	}
	BOOL IS_PED_INJURED_Export(Ped PedIndex)
	{
		return PED::IS_PED_INJURED(PedIndex);
	}
	BOOL IS_PED_FATALLY_INJURED_Export(Ped PedIndex)
	{
		return PED::IS_PED_FATALLY_INJURED(PedIndex);
	}
	BOOL IS_PED_DEAD_OR_DYING_Export(Ped PedIndex, BOOL CheckMeleeDeathFlags)
	{
		return PED::IS_PED_DEAD_OR_DYING(PedIndex, CheckMeleeDeathFlags);
	}
	void _SET_PED_BLEEDOUT_PROFILE_Export(Ped ped, Hash bleedoutProfile)
	{
		return PED::_SET_PED_BLEEDOUT_PROFILE(ped, bleedoutProfile);
	}
	BOOL IS_PED_AIMING_FROM_COVER_Export(Ped PedIndex)
	{
		return PED::IS_PED_AIMING_FROM_COVER(PedIndex);
	}
	BOOL IS_PED_RELOADING_Export(Ped PedIndex)
	{
		return PED::IS_PED_RELOADING(PedIndex);
	}
	BOOL IS_PED_A_PLAYER_Export(Ped PedIndex)
	{
		return PED::IS_PED_A_PLAYER(PedIndex);
	}
	BOOL _IS_ANIMAL_CONTROLLED_BY_A_PLAYER_Export(Ped ped)
	{
		return PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(ped);
	}
	Ped CREATE_PED_INSIDE_VEHICLE_Export(Vehicle VehicleIndex, Hash PedModelHashKey, int Seat, BOOL RegisterAsNetworkObject, BOOL ScriptHostObject, BOOL p5)
	{
		return PED::CREATE_PED_INSIDE_VEHICLE(VehicleIndex, PedModelHashKey, Seat, RegisterAsNetworkObject, ScriptHostObject, p5);
	}
	void SET_PED_DESIRED_HEADING_Export(Ped PedIndex, float DesiredHeading)
	{
		return PED::SET_PED_DESIRED_HEADING(PedIndex, DesiredHeading);
	}
	void FORCE_ALL_HEADING_VALUES_TO_ALIGN_Export(Ped PedIndex)
	{
		return PED::FORCE_ALL_HEADING_VALUES_TO_ALIGN(PedIndex);
	}
	BOOL IS_PED_FACING_PED_Export(Ped PedIndex1, Ped PedIndex2, float Degrees)
	{
		return PED::IS_PED_FACING_PED(PedIndex1, PedIndex2, Degrees);
	}
	BOOL IS_PED_IN_MELEE_COMBAT_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_MELEE_COMBAT(PedIndex);
	}
	Any _0x6DB875AFC584FA32_Export(Ped ped, int p1)
	{
		return PED::_0x6DB875AFC584FA32(ped, p1);
	}
	BOOL IS_PED_STOPPED_Export(Ped PedIndex)
	{
		return PED::IS_PED_STOPPED(PedIndex);
	}
	BOOL IS_PED_SITTING_Export(Ped ped)
	{
		return PED::IS_PED_SITTING(ped);
	}
	BOOL _0x09D7AFD3716DA8E1_Export(Ped ped, int p1)
	{
		return PED::_0x09D7AFD3716DA8E1(ped, p1);
	}
	BOOL _0x9C81338B2E62CE0A_Export(Player player, Ped ped, int shotNearRecentlyTime)
	{
		return PED::_0x9C81338B2E62CE0A(player, ped, shotNearRecentlyTime);
	}
	BOOL _0xB7DBB2986B87E230_Export(Ped ped, float p1)
	{
		return PED::_0xB7DBB2986B87E230(ped, p1);
	}
	BOOL _0xD355E2F1BB41087E_Export(Ped ped, float p1)
	{
		return PED::_0xD355E2F1BB41087E(ped, p1);
	}
	BOOL IS_ANY_PED_SHOOTING_IN_AREA_Export(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ, BOOL HighlightArea, BOOL bDo3DCheck)
	{
		return PED::IS_ANY_PED_SHOOTING_IN_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ, HighlightArea, bDo3DCheck);
	}
	BOOL IS_PED_SHOOTING_Export(Ped PedIndex)
	{
		return PED::IS_PED_SHOOTING(PedIndex);
	}
	float TIME_SINCE_PED_LAST_SHOT_Export(Ped ped)
	{
		return PED::TIME_SINCE_PED_LAST_SHOT(ped);
	}
	void SET_PED_ACCURACY_Export(Ped PedIndex, int NewAccuracy)
	{
		return PED::SET_PED_ACCURACY(PedIndex, NewAccuracy);
	}
	int GET_PED_ACCURACY_Export(Ped PedIndex)
	{
		return PED::GET_PED_ACCURACY(PedIndex);
	}
	BOOL IS_PED_MODEL_Export(Ped PedIndex, Hash PedModelHashKey)
	{
		return PED::IS_PED_MODEL(PedIndex, PedModelHashKey);
	}
	void EXPLODE_PED_HEAD_Export(Ped PedIndex, Hash wtWeapon)
	{
		return PED::EXPLODE_PED_HEAD(PedIndex, wtWeapon);
	}
	void ADD_ARMOUR_TO_PED_Export(Ped PedIndex, int ArmourToAdd)
	{
		return PED::ADD_ARMOUR_TO_PED(PedIndex, ArmourToAdd);
	}
	void _0x5CA20FBE49891BBD_Export(Ped ped, int p1)
	{
		return PED::_0x5CA20FBE49891BBD(ped, p1);
	}
	void SET_PED_INTO_VEHICLE_Export(Ped PedIndex, Vehicle VehicleIndex, int seat)
	{
		return PED::SET_PED_INTO_VEHICLE(PedIndex, VehicleIndex, seat);
	}
	void SET_PED_MOVE_ANIMS_BLEND_OUT_Export(Ped PedIndex)
	{
		return PED::SET_PED_MOVE_ANIMS_BLEND_OUT(PedIndex);
	}
	void _0x606D529DADA3C940_Export(Ped ped, Any p1)
	{
		return PED::_0x606D529DADA3C940(ped, p1);
	}
	BOOL IS_PED_MALE_Export(Ped PedIndex)
	{
		return PED::IS_PED_MALE(PedIndex);
	}
	BOOL IS_PED_HUMAN_Export(Ped PedIndex)
	{
		return PED::IS_PED_HUMAN(PedIndex);
	}
	Vehicle GET_VEHICLE_PED_IS_IN_Export(Ped PedIndex, BOOL ConsiderEnteringAsInVehicle)
	{
		return PED::GET_VEHICLE_PED_IS_IN(PedIndex, ConsiderEnteringAsInVehicle);
	}
	void RESET_PED_LAST_VEHICLE_Export(Ped PedIndex)
	{
		return PED::RESET_PED_LAST_VEHICLE(PedIndex);
	}
	void _0xC6136B40FFFB778B_Export(BOOL p0)
	{
		return PED::_0xC6136B40FFFB778B(p0);
	}
	void _0x6E8B87139854022D_Export(Ped ped, const char* clipset)
	{
		return PED::_0x6E8B87139854022D(ped, clipset);
	}
	int _GET_NUM_FREE_SLOTS_IN_PED_POOL_Export()
	{
		return PED::_GET_NUM_FREE_SLOTS_IN_PED_POOL();
	}
	void _RESERVE_AMBIENT_PEDS_Export(int numPeds)
	{
		return PED::_RESERVE_AMBIENT_PEDS(numPeds);
	}
	void _RESERVE_AMBIENT_PEDS_TOTAL_Export(int numPeds)
	{
		return PED::_RESERVE_AMBIENT_PEDS_TOTAL(numPeds);
	}
	void _UNRESERVE_AMBIENT_PEDS_Export(int numPeds)
	{
		return PED::_UNRESERVE_AMBIENT_PEDS(numPeds);
	}
	int _GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED_Export()
	{
		return PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	}
	int _GET_NUM_RESERVED_AMBIENT_PEDS_READY_Export()
	{
		return PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY();
	}
	BOOL _ARE_ALL_AMBIENT_PED_RESERVATIONS_READY_Export()
	{
		return PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
	}
	void _SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME_Export(float multiplier)
	{
		return PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(multiplier);
	}
	void _0x9E3842E5DAD69F80_Export(Volume volume)
	{
		return PED::_0x9E3842E5DAD69F80(volume);
	}
	void _SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME_Export(float multiplier)
	{
		return PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}
	void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME_Export(float multiplier)
	{
		return PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}
	void _SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_Export(float multiplier)
	{
		return PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}
	void _SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_Export(float multiplier)
	{
		return PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}
	void _SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_Export(float multiplier)
	{
		return PED::_SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}
	void _SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_Export(float multiplier)
	{
		return PED::_SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}
	void _SET_SCENARIO_PED_DENSITY_THIS_FRAME_Export(Hash configHash)
	{
		return PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(configHash);
	}
	void INSTANTLY_FILL_PED_POPULATION_Export()
	{
		return PED::INSTANTLY_FILL_PED_POPULATION();
	}
	void _0xBFA6B7731C3BAF02_Export()
	{
		return PED::_0xBFA6B7731C3BAF02();
	}
	BOOL IS_INSTANTLY_FILL_PED_POPULATION_FINISHED_Export()
	{
		return PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED();
	}
	void SET_PED_NON_CREATION_AREA_Export(float MinX, float MinY, float MinZ, float MaxX, float MaxY, float MaxZ)
	{
		return PED::SET_PED_NON_CREATION_AREA(MinX, MinY, MinZ, MaxX, MaxY, MaxZ);
	}
	void CLEAR_PED_NON_CREATION_AREA_Export()
	{
		return PED::CLEAR_PED_NON_CREATION_AREA();
	}
	void _ATTACH_VOLUME_TO_ENTITY_Export(Volume volume, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int p8, BOOL p9)
	{
		return PED::_ATTACH_VOLUME_TO_ENTITY(volume, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, p8, p9);
	}
	void _DETACH_VOLUME_FROM_ENTITY_Export(Volume volume, Entity entity)
	{
		return PED::_DETACH_VOLUME_FROM_ENTITY(volume, entity);
	}
	void SET_PED_ONTO_MOUNT_Export(Ped ped, Ped mount, int seatIndex, BOOL p3)
	{
		return PED::SET_PED_ONTO_MOUNT(ped, mount, seatIndex, p3);
	}
	void _REMOVE_PED_FROM_MOUNT_Export(Ped ped, BOOL p1, BOOL p2)
	{
		return PED::_REMOVE_PED_FROM_MOUNT(ped, p1, p2);
	}
	Ped CREATE_PED_ON_MOUNT_Export(Ped mount, Hash modelHash, int index, BOOL p3, BOOL p4, BOOL p5, BOOL p6)
	{
		return PED::CREATE_PED_ON_MOUNT(mount, modelHash, index, p3, p4, p5, p6);
	}
	BOOL _IS_MOUNT_SEAT_FREE_Export(Ped mount, int seat)
	{
		return PED::_IS_MOUNT_SEAT_FREE(mount, seat);
	}
	BOOL IS_PED_ON_MOUNT_Export(Ped PedIndex)
	{
		return PED::IS_PED_ON_MOUNT(PedIndex);
	}
	BOOL IS_PED_FULLY_ON_MOUNT_Export(Ped ped, BOOL p1)
	{
		return PED::IS_PED_FULLY_ON_MOUNT(ped, p1);
	}
	Ped GET_MOUNT_Export(Ped PedIndex)
	{
		return PED::GET_MOUNT(PedIndex);
	}
	Ped _GET_LAST_LED_MOUNT_Export(Ped ped)
	{
		return PED::_GET_LAST_LED_MOUNT(ped);
	}
	Ped _GET_LAST_MOUNT_Export(Ped ped)
	{
		return PED::_GET_LAST_MOUNT(ped);
	}
	void _0xED1C764997A86D5A_Export(Ped ped1, Ped ped2)
	{
		return PED::_0xED1C764997A86D5A(ped1, ped2);
	}
	void _0xB8AB265426CFE6DD_Export(Ped ped, BOOL p1)
	{
		return PED::_0xB8AB265426CFE6DD(ped, p1);
	}
	int _0xE8D1CCB9375C101B_Export(Ped mount, Player player)
	{
		return PED::_0xE8D1CCB9375C101B(mount, player);
	}
	void _0xA691C10054275290_Export(Ped mount, Player player, int dismountedTimestamp)
	{
		return PED::_0xA691C10054275290(mount, player, dismountedTimestamp);
	}
	void _0x6734F0A6A52C371C_Export(Player player, int horseSlot)
	{
		return PED::_0x6734F0A6A52C371C(player, horseSlot);
	}
	void _0x024EC9B649111915_Export(Ped ped, BOOL p1)
	{
		return PED::_0x024EC9B649111915(ped, p1);
	}
	void SET_PED_OWNS_ANIMAL_Export(Ped ped, Ped animal, BOOL p2)
	{
		return PED::SET_PED_OWNS_ANIMAL(ped, animal, p2);
	}
	Ped _GET_ACTIVE_ANIMAL_OWNER_Export(Ped animal)
	{
		return PED::_GET_ACTIVE_ANIMAL_OWNER(animal);
	}
	void _CLEAR_ACTIVE_ANIMAL_OWNER_Export(Ped horse, BOOL clear)
	{
		return PED::_CLEAR_ACTIVE_ANIMAL_OWNER(horse, clear);
	}
	int _GET_HORSE_TAMING_STATE_Export(Ped horse)
	{
		return PED::_GET_HORSE_TAMING_STATE(horse);
	}
	void _0x54D3CD482742C482_Export(Ped animal, float p2)
	{
		return PED::_0x54D3CD482742C482(animal, p2);
	}
	void _0x5CB2EBB467BE3ED6_Export(Ped animal, float p2)
	{
		return PED::_0x5CB2EBB467BE3ED6(animal, p2);
	}
	void _0x9F0F28B42C4EE80A_Export(Ped animal, float p2)
	{
		return PED::_0x9F0F28B42C4EE80A(animal, p2);
	}
	void _SET_MOUNT_BONDING_LEVEL_Export(Ped ped, int bondingLevel)
	{
		return PED::_SET_MOUNT_BONDING_LEVEL(ped, bondingLevel);
	}
	void _SET_MOUNT_SECURITY_ENABLED_Export(Ped ped, BOOL toggle)
	{
		return PED::_SET_MOUNT_SECURITY_ENABLED(ped, toggle);
	}
	void _0x9B65444C07B782BF_Export(Ped ped, const char* p1)
	{
		return PED::_0x9B65444C07B782BF(ped, p1);
	}
	BOOL IS_ANIMAL_INTERACTION_POSSIBLE_Export(Ped ped, Ped animal)
	{
		return PED::IS_ANIMAL_INTERACTION_POSSIBLE(ped, animal);
	}
	BOOL _IS_ANIMAL_INTERACTION_RUNNING_Export(Ped ped)
	{
		return PED::_IS_ANIMAL_INTERACTION_RUNNING(ped);
	}
	Ped _0x8BE24D74D74C6E9B_Export(Ped ped)
	{
		return PED::_0x8BE24D74D74C6E9B(ped);
	}
	BOOL _0x77243ED4F7CAAA55_Export(Ped ped)
	{
		return PED::_0x77243ED4F7CAAA55(ped);
	}
	BOOL IS_PED_ON_VEHICLE_Export(Ped PedIndex, BOOL p1)
	{
		return PED::IS_PED_ON_VEHICLE(PedIndex, p1);
	}
	BOOL IS_PED_ON_SPECIFIC_VEHICLE_Export(Ped PedIndex, Vehicle VehicleIndex)
	{
		return PED::IS_PED_ON_SPECIFIC_VEHICLE(PedIndex, VehicleIndex);
	}
	void _WARP_PED_OUT_OF_VEHICLE_Export(Ped ped)
	{
		return PED::_WARP_PED_OUT_OF_VEHICLE(ped);
	}
	void SET_PED_MONEY_Export(Ped PedIndex, int MoneyToSet)
	{
		return PED::SET_PED_MONEY(PedIndex, MoneyToSet);
	}
	int GET_PED_MONEY_Export(Ped PedIndex)
	{
		return PED::GET_PED_MONEY(PedIndex);
	}
	void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME_Export(BOOL Block)
	{
		return PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(Block);
	}
	void _0x34EDDD59364AD74A_Export(Ped ped, void* p1)
	{
		return PED::_0x34EDDD59364AD74A(ped, p1);
	}
	void _0x2D976DBDC731DF80_Export(Ped ped)
	{
		return PED::_0x2D976DBDC731DF80(ped);
	}
	BOOL IS_PED_SITTING_IN_VEHICLE_Export(Ped PedIndex, Vehicle VehicleIndex)
	{
		return PED::IS_PED_SITTING_IN_VEHICLE(PedIndex, VehicleIndex);
	}
	BOOL IS_PED_SITTING_IN_ANY_VEHICLE_Export(Ped PedIndex)
	{
		return PED::IS_PED_SITTING_IN_ANY_VEHICLE(PedIndex);
	}
	BOOL IS_PED_ON_FOOT_Export(Ped PedIndex)
	{
		return PED::IS_PED_ON_FOOT(PedIndex);
	}
	BOOL IS_PED_PLANTING_BOMB_Export(Ped PedIndex)
	{
		return PED::IS_PED_PLANTING_BOMB(PedIndex);
	}
	scrVector GET_DEAD_PED_PICKUP_COORDS_Export(Ped PedIndex, float minDist, float maxDist)
	{
		return PED::GET_DEAD_PED_PICKUP_COORDS(PedIndex, minDist, maxDist);
	}
	BOOL IS_PED_IN_ANY_BOAT_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_ANY_BOAT(PedIndex);
	}
	BOOL IS_PED_IN_ANY_HELI_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_ANY_HELI(PedIndex);
	}
	BOOL IS_PED_IN_ANY_PLANE_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_ANY_PLANE(PedIndex);
	}
	BOOL IS_PED_IN_FLYING_VEHICLE_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_FLYING_VEHICLE(PedIndex);
	}
	BOOL _0x256EDD55C6BE1482_Export(Ped ped)
	{
		return PED::_0x256EDD55C6BE1482(ped);
	}
	BOOL GET_PED_LAST_DAMAGE_BONE_Export(Ped PedIndex, int* ReturnBoneTag)
	{
		return PED::GET_PED_LAST_DAMAGE_BONE(PedIndex, ReturnBoneTag);
	}
	void CLEAR_PED_LAST_DAMAGE_BONE_Export(Ped PedIndex)
	{
		return PED::CLEAR_PED_LAST_DAMAGE_BONE(PedIndex);
	}
	int _GET_PED_DAMAGE_CLEANLINESS_Export(Ped ped)
	{
		return PED::_GET_PED_DAMAGE_CLEANLINESS(ped);
	}
	void _SET_PED_DAMAGE_CLEANLINESS_Export(Ped ped, int damageCleanliness)
	{
		return PED::_SET_PED_DAMAGE_CLEANLINESS(ped, damageCleanliness);
	}
	BOOL _GET_PED_DAMAGED_Export(Ped ped)
	{
		return PED::_GET_PED_DAMAGED(ped);
	}
	void _SET_PED_DAMAGED_Export(Ped ped, BOOL damaged)
	{
		return PED::_SET_PED_DAMAGED(ped, damaged);
	}
	Any _SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_Export(Player player, float modifier, int p2, int p3)
	{
		return PED::_SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(player, modifier, p2, p3);
	}
	void _UPDATE_ANIMAL_DAMAGE_MODIFIER_Export(Player player)
	{
		return PED::_UPDATE_ANIMAL_DAMAGE_MODIFIER(player);
	}
	float _GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_Export(Player player)
	{
		return PED::_GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(player);
	}
	Any _0xB29C553BA582D09E_Export(void* p0, Hash model, int damageCleanliness, int p3)
	{
		return PED::_0xB29C553BA582D09E(p0, model, damageCleanliness, p3);
	}
	BOOL _0x101B45C5F56D970F_Export(void* p0, Ped ped, int damageCleanliness, int p3)
	{
		return PED::_0x101B45C5F56D970F(p0, ped, damageCleanliness, p3);
	}
	int _COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS_Export(void* outInventoryItemArray, Ped ped, int damageCleanliness, int skinningQuality)
	{
		return PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(outInventoryItemArray, ped, damageCleanliness, skinningQuality);
	}
	BOOL COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE_Export(Any p0, Ped pedAttached, int damageCleanliness)
	{
		return PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(p0, pedAttached, damageCleanliness);
	}
	void SET_AI_WEAPON_DAMAGE_MODIFIER_Export(float Modifier)
	{
		return PED::SET_AI_WEAPON_DAMAGE_MODIFIER(Modifier);
	}
	void RESET_AI_WEAPON_DAMAGE_MODIFIER_Export()
	{
		return PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	}
	void _SET_TOTAL_PED_DAMAGE_FROM_AI_Export(Ped ped, float totalDamage)
	{
		return PED::_SET_TOTAL_PED_DAMAGE_FROM_AI(ped, totalDamage);
	}
	void _0xA6D6F03095C88F59_Export(Ped ped)
	{
		return PED::_0xA6D6F03095C88F59(ped);
	}
	float _GET_TOTAL_PED_DAMAGE_FROM_AI_Export(Ped ped)
	{
		return PED::_GET_TOTAL_PED_DAMAGE_FROM_AI(ped);
	}
	void SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER_Export(Ped ped, float damageModifier)
	{
		return PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(ped, damageModifier);
	}
	float GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER_Export(Ped ped)
	{
		return PED::GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(ped);
	}
	void _SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER_Export(Ped horse, float modifier)
	{
		return PED::_SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER(horse, modifier);
	}
	float _0x763FA8A9D76EE3A7_Export(Ped ped)
	{
		return PED::_0x763FA8A9D76EE3A7(ped);
	}
	void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER_Export(float Modifier)
	{
		return PED::SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(Modifier);
	}
	void _SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_Export(Ped ped, float modifier)
	{
		return PED::_SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER(ped, modifier);
	}
	float _GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_Export(Ped ped)
	{
		return PED::_GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER(ped);
	}
	void _SET_PED_HEADSHOT_DAMAGE_MULTIPLIER_Export(Ped ped, float multiplier)
	{
		return PED::_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(ped, multiplier);
	}
	void _0xDEE8D30AA5C2E28D_Export(Ped ped, Hash p1, BOOL p2)
	{
		return PED::_0xDEE8D30AA5C2E28D(ped, p1, p2);
	}
	void _0xE1B3BE07D3AADDED_Export(Ped ped, int p1, BOOL p2)
	{
		return PED::_0xE1B3BE07D3AADDED(ped, p1, p2);
	}
	void _0x32CEDA9A0AB4CEF7_Export(Ped ped, Hash p1, BOOL p2)
	{
		return PED::_0x32CEDA9A0AB4CEF7(ped, p1, p2);
	}
	void _0x52A24D8A1DA89658_Export(Ped ped, int p1, BOOL p2)
	{
		return PED::_0x52A24D8A1DA89658(ped, p1, p2);
	}
	void _0x34B5CEAC180A5D6E_Export(Ped ped, Hash p1, BOOL p2)
	{
		return PED::_0x34B5CEAC180A5D6E(ped, p1, p2);
	}
	void _0x4F27603E44A8E4C0_Export(Ped ped, int p1, BOOL p2)
	{
		return PED::_0x4F27603E44A8E4C0(ped, p1, p2);
	}
	void _0x3FDCC1F8C17E303E_Export(Ped ped, int p1, float p2)
	{
		return PED::_0x3FDCC1F8C17E303E(ped, p1, p2);
	}
	void _0xE50C9816B3F22D8B_Export(Ped ped, Hash p1, float p2)
	{
		return PED::_0xE50C9816B3F22D8B(ped, p1, p2);
	}
	void _SET_DEFENSE_MODIFIER_FOR_PED_Export(Ped ped, float modifier)
	{
		return PED::_SET_DEFENSE_MODIFIER_FOR_PED(ped, modifier);
	}
	void _SET_MIN_PED_HEALTH_THRESHOLD_Export(Ped ped, float healthAmount)
	{
		return PED::_SET_MIN_PED_HEALTH_THRESHOLD(ped, healthAmount);
	}
	void _0xC5B78E41DCF8227C_Export(Ped ped, BOOL p1)
	{
		return PED::_0xC5B78E41DCF8227C(ped, p1);
	}
	void SET_PED_CAN_BE_TARGETTED_Export(Ped PedIndex, BOOL bAllowTargetted)
	{
		return PED::SET_PED_CAN_BE_TARGETTED(PedIndex, bAllowTargetted);
	}
	void SET_PED_CAN_BE_TARGETTED_BY_TEAM_Export(Ped PedIndex, int team, BOOL bAllowTargetted)
	{
		return PED::SET_PED_CAN_BE_TARGETTED_BY_TEAM(PedIndex, team, bAllowTargetted);
	}
	void SET_PED_CAN_BE_TARGETTED_BY_PLAYER_Export(Ped PedIndex, Player PlayerIndex, BOOL bAllowTargetted)
	{
		return PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(PedIndex, PlayerIndex, bAllowTargetted);
	}
	void _SET_INTERACTION_LOCKON_FLAG_Export(Ped ped, Player player, int flag, BOOL enable)
	{
		return PED::_SET_INTERACTION_LOCKON_FLAG(ped, player, flag, enable);
	}
	BOOL IS_PED_FALLING_Export(Ped PedIndex)
	{
		return PED::IS_PED_FALLING(PedIndex);
	}
	BOOL _IS_PED_SLIDING_Export(Ped ped)
	{
		return PED::_IS_PED_SLIDING(ped);
	}
	BOOL IS_PED_JUMPING_Export(Ped PedIndex)
	{
		return PED::IS_PED_JUMPING(PedIndex);
	}
	BOOL IS_PED_CLIMBING_Export(Ped PedIndex)
	{
		return PED::IS_PED_CLIMBING(PedIndex);
	}
	BOOL _IS_PED_CLIMBING_LADDER_Export(Ped ped)
	{
		return PED::_IS_PED_CLIMBING_LADDER(ped);
	}
	BOOL _0x577C60BA06D0EA64_Export(Ped ped)
	{
		return PED::_0x577C60BA06D0EA64(ped);
	}
	BOOL IS_PED_VAULTING_Export(Ped PedIndex)
	{
		return PED::IS_PED_VAULTING(PedIndex);
	}
	BOOL IS_PED_DIVING_Export(Ped PedIndex)
	{
		return PED::IS_PED_DIVING(PedIndex);
	}
	BOOL IS_PED_OPENING_DOOR_Export(Ped PedIndex)
	{
		return PED::IS_PED_OPENING_DOOR(PedIndex);
	}
	BOOL _0x5C6C7C70CA302801_Export(Ped ped)
	{
		return PED::_0x5C6C7C70CA302801(ped);
	}
	BOOL _0xB91AB3BE7F655D49_Export(Ped ped)
	{
		return PED::_0xB91AB3BE7F655D49(ped);
	}
	BOOL IS_PED_IN_ANY_TAXI_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_ANY_TAXI(PedIndex);
	}
	void SET_PED_ID_RANGE_Export(Ped PedIndex, float IdRange)
	{
		return PED::SET_PED_ID_RANGE(PedIndex, IdRange);
	}
	float _GET_PED_ID_RANGE_Export(Ped ped)
	{
		return PED::_GET_PED_ID_RANGE(ped);
	}
	void SET_PED_HIGHLY_PERCEPTIVE_Export(Ped PedIndex, BOOL bHighlyPerceptive)
	{
		return PED::SET_PED_HIGHLY_PERCEPTIVE(PedIndex, bHighlyPerceptive);
	}
	void SET_PED_INJURED_ON_GROUND_BEHAVIOUR_Export(Ped PedIndex, float duration)
	{
		return PED::SET_PED_INJURED_ON_GROUND_BEHAVIOUR(PedIndex, duration);
	}
	void DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR_Export(Ped PedIndex)
	{
		return PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(PedIndex);
	}
	void _0x028E7B3BBA0BD2FC_Export(Ped ped)
	{
		return PED::_0x028E7B3BBA0BD2FC(ped);
	}
	BOOL _0xFA8C10DCE0706D43_Export(Ped ped)
	{
		return PED::_0xFA8C10DCE0706D43(ped);
	}
	void _SET_PED_ANIMAL_DETECTION_MODIFIER_Export(Ped ped, float modifier)
	{
		return PED::_SET_PED_ANIMAL_DETECTION_MODIFIER(ped, modifier);
	}
	float _0x2BA9D7BF629F920C_Export(Ped ped)
	{
		return PED::_0x2BA9D7BF629F920C(ped);
	}
	void SET_PED_SEEING_RANGE_Export(Ped PedIndex, float SeeingRange)
	{
		return PED::SET_PED_SEEING_RANGE(PedIndex, SeeingRange);
	}
	float _0x900CA00CE703E1E2_Export(Ped ped)
	{
		return PED::_0x900CA00CE703E1E2(ped);
	}
	void SET_PED_HEARING_RANGE_Export(Ped PedIndex, float HearingRange)
	{
		return PED::SET_PED_HEARING_RANGE(PedIndex, HearingRange);
	}
	void SET_PED_VISUAL_FIELD_MIN_ANGLE_Export(Ped PedIndex, float fAngle)
	{
		return PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(PedIndex, fAngle);
	}
	void SET_PED_VISUAL_FIELD_MAX_ANGLE_Export(Ped PedIndex, float fAngle)
	{
		return PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(PedIndex, fAngle);
	}
	void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE_Export(Ped PedIndex, float fDistance)
	{
		return PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(PedIndex, fDistance);
	}
	void SET_PED_VISUAL_FIELD_CENTER_ANGLE_Export(Ped PedIndex, float fAngle)
	{
		return PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(PedIndex, fAngle);
	}
	void _0x9AB33CB5834885B3_Export(Ped ped, float p1, float p2, float p3, float p4)
	{
		return PED::_0x9AB33CB5834885B3(ped, p1, p2, p3, p4);
	}
	void _0x899DFA0009AC93DE_Export(Ped ped, float p1)
	{
		return PED::_0x899DFA0009AC93DE(ped, p1);
	}
	void _0x3A5697B80FED5EBE_Export(Ped ped, float p1, float p2, float p3, float p4)
	{
		return PED::_0x3A5697B80FED5EBE(ped, p1, p2, p3, p4);
	}
	void SET_PED_STEALTH_MOVEMENT_Export(Ped PedIndex, BOOL bStealth, Any p2, Any p3)
	{
		return PED::SET_PED_STEALTH_MOVEMENT(PedIndex, bStealth, p2, p3);
	}
	BOOL GET_PED_STEALTH_MOVEMENT_Export(Ped PedIndex)
	{
		return PED::GET_PED_STEALTH_MOVEMENT(PedIndex);
	}
	void _SET_PED_CROUCH_MOVEMENT_Export(Ped ped, BOOL state, int p2, BOOL immediately)
	{
		return PED::_SET_PED_CROUCH_MOVEMENT(ped, state, p2, immediately);
	}
	BOOL GET_PED_CROUCH_MOVEMENT_Export(Ped ped)
	{
		return PED::GET_PED_CROUCH_MOVEMENT(ped);
	}
	BOOL GET_PED_IS_DOING_COMBAT_ROLL_Export(Ped ped)
	{
		return PED::GET_PED_IS_DOING_COMBAT_ROLL(ped);
	}
	int CREATE_GROUP_Export(int DefaultTaskType)
	{
		return PED::CREATE_GROUP(DefaultTaskType);
	}
	void SET_PED_AS_GROUP_LEADER_Export(Ped PedIndex, int GroupUniqueID, BOOL p2)
	{
		return PED::SET_PED_AS_GROUP_LEADER(PedIndex, GroupUniqueID, p2);
	}
	void SET_PED_AS_GROUP_MEMBER_Export(Ped PedIndex, int GroupUniqueID)
	{
		return PED::SET_PED_AS_GROUP_MEMBER(PedIndex, GroupUniqueID);
	}
	void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER_Export(Ped PedIndex, int GroupUniqueID, BOOL bEnabled)
	{
		return PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(PedIndex, GroupUniqueID, bEnabled);
	}
	void REMOVE_GROUP_Export(int UniqueGroupID)
	{
		return PED::REMOVE_GROUP(UniqueGroupID);
	}
	void REMOVE_PED_FROM_GROUP_Export(Ped PedIndex)
	{
		return PED::REMOVE_PED_FROM_GROUP(PedIndex);
	}
	BOOL IS_PED_GROUP_MEMBER_Export(Ped PedIndex, int UniqueGroupID, BOOL p2)
	{
		return PED::IS_PED_GROUP_MEMBER(PedIndex, UniqueGroupID, p2);
	}
	BOOL _IS_PED_GROUP_LEADER_Export(Ped ped, int groupId)
	{
		return PED::_IS_PED_GROUP_LEADER(ped, groupId);
	}
	BOOL IS_PED_HANGING_ON_TO_VEHICLE_Export(Ped PedIndex)
	{
		return PED::IS_PED_HANGING_ON_TO_VEHICLE(PedIndex);
	}
	void SET_GROUP_SEPARATION_RANGE_Export(int UniqueGroupID, float SeparationRange)
	{
		return PED::SET_GROUP_SEPARATION_RANGE(UniqueGroupID, SeparationRange);
	}
	void _0x89E59DBD15E21177_Export(int groupId, int p1)
	{
		return PED::_0x89E59DBD15E21177(groupId, p1);
	}
	BOOL IS_PED_PRONE_Export(Ped PedIndex)
	{
		return PED::IS_PED_PRONE(PedIndex);
	}
	BOOL _IS_PED_INVESTIGATING_Export(Ped ped)
	{
		return PED::_IS_PED_INVESTIGATING(ped);
	}
	BOOL IS_PED_IN_COMBAT_Export(Ped PedIndex, Ped TargetPedIndex)
	{
		return PED::IS_PED_IN_COMBAT(PedIndex, TargetPedIndex);
	}
	BOOL CAN_PED_IN_COMBAT_SEE_TARGET_Export(Ped PedIndex, Ped TargetPedIndex)
	{
		return PED::CAN_PED_IN_COMBAT_SEE_TARGET(PedIndex, TargetPedIndex);
	}
	BOOL IS_PED_JACKING_Export(Ped PedIndex)
	{
		return PED::IS_PED_JACKING(PedIndex);
	}
	BOOL IS_PED_BEING_JACKED_Export(Ped PedIndex)
	{
		return PED::IS_PED_BEING_JACKED(PedIndex);
	}
	BOOL IS_PED_BEING_STUNNED_Export(Ped PedIndex, Hash WeaponType)
	{
		return PED::IS_PED_BEING_STUNNED(PedIndex, WeaponType);
	}
	Ped GET_PEDS_JACKER_Export(Ped PedIndex)
	{
		return PED::GET_PEDS_JACKER(PedIndex);
	}
	Ped GET_JACK_TARGET_Export(Ped PedIndex)
	{
		return PED::GET_JACK_TARGET(PedIndex);
	}
	BOOL IS_PED_FLEEING_Export(Ped PedIndex)
	{
		return PED::IS_PED_FLEEING(PedIndex);
	}
	BOOL IS_PED_IN_COVER_Export(Ped PedIndex, BOOL p1, BOOL p2)
	{
		return PED::IS_PED_IN_COVER(PedIndex, p1, p2);
	}
	BOOL _0x2DD4E0E26DFAD97D_Export(Ped ped1, Ped ped2, float p2)
	{
		return PED::_0x2DD4E0E26DFAD97D(ped1, ped2, p2);
	}
	BOOL _PED_WAS_KILLED_BY_HEADSHOT_Export(Ped ped)
	{
		return PED::_PED_WAS_KILLED_BY_HEADSHOT(ped);
	}
	BOOL _PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT_Export(Ped ped)
	{
		return PED::_PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT(ped);
	}
	BOOL IS_PED_IN_COVER_FACING_LEFT_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_COVER_FACING_LEFT(PedIndex);
	}
	BOOL IS_PED_GOING_INTO_COVER_Export(Ped PedIndex)
	{
		return PED::IS_PED_GOING_INTO_COVER(PedIndex);
	}
	BOOL IS_PED_RESPONDING_TO_THREAT_Export(Ped ped)
	{
		return PED::IS_PED_RESPONDING_TO_THREAT(ped);
	}
	Hash _GET_ACTIVE_DYNAMIC_SCENARIO_2_Export(Ped ped)
	{
		return PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(ped);
	}
	Hash _GET_ACTIVE_DYNAMIC_SCENARIO_Export(Ped ped)
	{
		return PED::_GET_ACTIVE_DYNAMIC_SCENARIO(ped);
	}
	BOOL _GIVE_PED_SCENARIO_PROP_Export(Ped ped, Object object, const char* conditionalAnim, const char* p3, const char* p4, BOOL p5)
	{
		return PED::_GIVE_PED_SCENARIO_PROP(ped, object, conditionalAnim, p3, p4, p5);
	}
	BOOL GIVE_PED_HASH_SCENARIO_PROP_Export(Ped ped, Object object, const char* conditionalAnim, Hash scenarioType, Hash p4, BOOL p5)
	{
		return PED::GIVE_PED_HASH_SCENARIO_PROP(ped, object, conditionalAnim, scenarioType, p4, p5);
	}
	BOOL _GIVE_PED_SCENARIO_PROP_DYNAMIC_Export(Ped ped, Object object, const char* p2, const char* p3, BOOL p4)
	{
		return PED::_GIVE_PED_SCENARIO_PROP_DYNAMIC(ped, object, p2, p3, p4);
	}
	Any _REQUEST_PROP_SCENARIO_PED_Export(Ped ped, Object object, const char* p2, const char* p3, const char* p4, BOOL p5)
	{
		return PED::_REQUEST_PROP_SCENARIO_PED(ped, object, p2, p3, p4, p5);
	}
	Any _REQUEST_PED_FOR_SCENARIO_TYPE_Export(Ped ped, Object object, const char* p2, Hash scenarioType, const char* p4, BOOL p5)
	{
		return PED::_REQUEST_PED_FOR_SCENARIO_TYPE(ped, object, p2, scenarioType, p4, p5);
	}
	Entity _GET_PED_REGISTER_PROP_Export(Ped ped, const char* propName, BOOL detachProp)
	{
		return PED::_GET_PED_REGISTER_PROP(ped, propName, detachProp);
	}
	int GET_SEAT_PED_IS_TRYING_TO_ENTER_Export(Ped PedIndex)
	{
		return PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(PedIndex);
	}
	Entity GET_PED_SOURCE_OF_DEATH_Export(Ped PedIndex)
	{
		return PED::GET_PED_SOURCE_OF_DEATH(PedIndex);
	}
	Hash GET_PED_CAUSE_OF_DEATH_Export(Ped PedIndex)
	{
		return PED::GET_PED_CAUSE_OF_DEATH(PedIndex);
	}
	int GET_PED_TIME_OF_DEATH_Export(Ped PedIndex)
	{
		return PED::GET_PED_TIME_OF_DEATH(PedIndex);
	}
	int COUNT_PEDS_IN_COMBAT_WITH_TARGET_Export(Ped TargetIndex, int flag)
	{
		return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(TargetIndex, flag);
	}
	int _GET_PEDS_IN_COMBAT_WITH_TARGET_Export(Ped ped, ItemSet itemset, int flag)
	{
		return PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(ped, itemset, flag);
	}
	int COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS_Export(Ped TargetIndex, float vecSearchCenterX, float vecSearchCenterY, float vecSearchCenterZ, float fSearchRadius, int flag)
	{
		return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(TargetIndex, vecSearchCenterX, vecSearchCenterY, vecSearchCenterZ, fSearchRadius, flag);
	}
	Entity GET_CURRENT_TARGET_FOR_PED_Export(Ped ped)
	{
		return PED::GET_CURRENT_TARGET_FOR_PED(ped);
	}
	void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH_Export(Ped PedIndex, Hash relGroup)
	{
		return PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PedIndex, relGroup);
	}
	Hash _GET_DEFAULT_RELATIONSHIP_GROUP_HASH_Export(Hash modelHash)
	{
		return PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(modelHash);
	}
	void SET_PED_RELATIONSHIP_GROUP_HASH_Export(Ped PedIndex, Hash relGroup)
	{
		return PED::SET_PED_RELATIONSHIP_GROUP_HASH(PedIndex, relGroup);
	}
	void SET_RELATIONSHIP_BETWEEN_GROUPS_Export(int RelationshipType, Hash relGroup, Hash otherRelGroup)
	{
		return PED::SET_RELATIONSHIP_BETWEEN_GROUPS(RelationshipType, relGroup, otherRelGroup);
	}
	void CLEAR_RELATIONSHIP_BETWEEN_GROUPS_Export(int RelationshipType, Hash relGroup, Hash otherRelGroup)
	{
		return PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(RelationshipType, relGroup, otherRelGroup);
	}
	BOOL ADD_RELATIONSHIP_GROUP_Export(const char* sName, Hash* group)
	{
		return PED::ADD_RELATIONSHIP_GROUP(sName, group);
	}
	void REMOVE_RELATIONSHIP_GROUP_Export(Hash group)
	{
		return PED::REMOVE_RELATIONSHIP_GROUP(group);
	}
	int GET_RELATIONSHIP_BETWEEN_PEDS_Export(Ped PedIndex, Ped SecondPedIndex)
	{
		return PED::GET_RELATIONSHIP_BETWEEN_PEDS(PedIndex, SecondPedIndex);
	}
	Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH_Export(Ped PedIndex)
	{
		return PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PedIndex);
	}
	Hash GET_PED_RELATIONSHIP_GROUP_HASH_Export(Ped PedIndex)
	{
		return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PedIndex);
	}
	int GET_RELATIONSHIP_BETWEEN_GROUPS_Export(Hash relGroupA, Hash relGroupB)
	{
		return PED::GET_RELATIONSHIP_BETWEEN_GROUPS(relGroupA, relGroupB);
	}
	void _0xDC91F22F09BC6C2F_Export(Hash group, BOOL p1)
	{
		return PED::_0xDC91F22F09BC6C2F(group, p1);
	}
	void _0x9629FAF6460D35CB_Export(Hash group, BOOL p1)
	{
		return PED::_0x9629FAF6460D35CB(group, p1);
	}
	void _0x4E68C7EF706DF35D_Export(Ped ped, float x, float y, float z, float p4, Hash relationshipGroup)
	{
		return PED::_0x4E68C7EF706DF35D(ped, x, y, z, p4, relationshipGroup);
	}
	int _0x3ACCE14DFA6BA8C2_Export(Ped ped, int p1, float x, float y, float z, float p5, ItemSet itemset)
	{
		return PED::_0x3ACCE14DFA6BA8C2(ped, p1, x, y, z, p5, itemset);
	}
	void SET_PED_TO_INFORM_RESPECTED_FRIENDS_Export(Ped PedIndex, float Distance, int MaximumNumber)
	{
		return PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(PedIndex, Distance, MaximumNumber);
	}
	BOOL _0x40C9155AF8BC13F3_Export(Ped ped)
	{
		return PED::_0x40C9155AF8BC13F3(ped);
	}
	int _0xF4860514AD354226_Export(ScrHandle shockingEvent, float x, float y, float z, float p4, int* p5)
	{
		return PED::_0xF4860514AD354226(shockingEvent, x, y, z, p4, p5);
	}
	BOOL IS_PED_RESPONDING_TO_EVENT_Export(Ped PedIndex, Hash EventType)
	{
		return PED::IS_PED_RESPONDING_TO_EVENT(PedIndex, EventType);
	}
	Entity _0x5E9FAF6C513347B4_Export(Ped ped, Hash eventType)
	{
		return PED::_0x5E9FAF6C513347B4(ped, eventType);
	}
	Any _0x326F7951EF0D7F75_Export(Ped ped, Hash eventType)
	{
		return PED::_0x326F7951EF0D7F75(ped, eventType);
	}
	Entity _0xE76687023D8C8505_Export(Hash perscharModel, int p1)
	{
		return PED::_0xE76687023D8C8505(perscharModel, p1);
	}
	BOOL _0xCB8F4C9343EBE240_Export(Ped ped, Hash eventType, scrVector* coords)
	{
		return PED::_0xCB8F4C9343EBE240(ped, eventType, coords);
	}
	void SET_PED_FIRING_PATTERN_Export(Ped PedIndex, Hash FiringPatternHash)
	{
		return PED::SET_PED_FIRING_PATTERN(PedIndex, FiringPatternHash);
	}
	void _SET_PED_FIRING_PATTERN_2_Export(Ped ped, Hash patternHash)
	{
		return PED::_SET_PED_FIRING_PATTERN_2(ped, patternHash);
	}
	void _SET_PED_FIRING_PATTERN_3_Export(Ped ped, Hash patternHash)
	{
		return PED::_SET_PED_FIRING_PATTERN_3(ped, patternHash);
	}
	void SET_PED_SHOOT_RATE_Export(Ped PedIndex, int ShootRate)
	{
		return PED::SET_PED_SHOOT_RATE(PedIndex, ShootRate);
	}
	void _0x3C529A827998F9B3_Export(Ped ped, int p1, int p2)
	{
		return PED::_0x3C529A827998F9B3(ped, p1, p2);
	}
	void _0x1F44B7E283C09EDE_Export(Ped ped, float p1, int p2)
	{
		return PED::_0x1F44B7E283C09EDE(ped, p1, p2);
	}
	void SET_COMBAT_FLOAT_Export(Ped PedIndex, int combatAttribute, float fNewValue)
	{
		return PED::SET_COMBAT_FLOAT(PedIndex, combatAttribute, fNewValue);
	}
	float GET_COMBAT_FLOAT_Export(Ped PedIndex, int combatAttribute)
	{
		return PED::GET_COMBAT_FLOAT(PedIndex, combatAttribute);
	}
	void GET_GROUP_SIZE_Export(int UniqueGroupID, int* ReturnHasLeader, int* ReturnNumberOfFollowers)
	{
		return PED::GET_GROUP_SIZE(UniqueGroupID, ReturnHasLeader, ReturnNumberOfFollowers);
	}
	BOOL DOES_GROUP_EXIST_Export(int UniqueGroupID)
	{
		return PED::DOES_GROUP_EXIST(UniqueGroupID);
	}
	BOOL _0x0455546F23FF08E4_Export(int groupId)
	{
		return PED::_0x0455546F23FF08E4(groupId);
	}
	BOOL IS_GROUP_LOCALLY_CONTROLLED_Export(int groupId)
	{
		return PED::IS_GROUP_LOCALLY_CONTROLLED(groupId);
	}
	int GET_PED_GROUP_INDEX_Export(Ped PedIndex)
	{
		return PED::GET_PED_GROUP_INDEX(PedIndex);
	}
	BOOL IS_PED_IN_GROUP_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_GROUP(PedIndex);
	}
	BOOL _IS_PED_LEADING_ANY_GROUP_Export(Ped ped)
	{
		return PED::_IS_PED_LEADING_ANY_GROUP(ped);
	}
	Player GET_PLAYER_PED_IS_FOLLOWING_Export(Ped PedIndex)
	{
		return PED::GET_PLAYER_PED_IS_FOLLOWING(PedIndex);
	}
	void SET_GROUP_FORMATION_Export(int UniqueGroupID, int GroupFormation)
	{
		return PED::SET_GROUP_FORMATION(UniqueGroupID, GroupFormation);
	}
	int _GET_GROUP_FORMATION_Export(int groupId)
	{
		return PED::_GET_GROUP_FORMATION(groupId);
	}
	void SET_GROUP_FORMATION_SPACING_Export(int UniqueGroupID, float Spacing, float AdjustSpeedMinDist, float AdjustSpeedMaxDist)
	{
		return PED::SET_GROUP_FORMATION_SPACING(UniqueGroupID, Spacing, AdjustSpeedMinDist, AdjustSpeedMaxDist);
	}
	void RESET_GROUP_FORMATION_DEFAULT_SPACING_Export(int UniqueGroupID)
	{
		return PED::RESET_GROUP_FORMATION_DEFAULT_SPACING(UniqueGroupID);
	}
	BOOL _0xB05CC690CDE8A4A9_Export(int groupId, float p1)
	{
		return PED::_0xB05CC690CDE8A4A9(groupId, p1);
	}
	void ADD_CUSTOM_FORMATION_LOCATION_Export(int groupId, float x, float y, float z, int position)
	{
		return PED::ADD_CUSTOM_FORMATION_LOCATION(groupId, x, y, z, position);
	}
	BOOL ADD_FORMATION_LOCATION_Export(int groupId, float p1, float p2, float p3)
	{
		return PED::ADD_FORMATION_LOCATION(groupId, p1, p2, p3);
	}
	BOOL SET_FORMATION_POSITIONS_TARGET_RADIUS_Export(int groupId, float radius)
	{
		return PED::SET_FORMATION_POSITIONS_TARGET_RADIUS(groupId, radius);
	}
	void _SET_FORMATION_AUTO_ASSIGN_POSITION_Export(int groupId, BOOL toggle)
	{
		return PED::_SET_FORMATION_AUTO_ASSIGN_POSITION(groupId, toggle);
	}
	void _SET_PED_FORMATION_POSITION_Export(Ped ped, int position, BOOL toggle)
	{
		return PED::_SET_PED_FORMATION_POSITION(ped, position, toggle);
	}
	int _0x8AF8E647D6B2A649_Export(int groupId, Ped ped)
	{
		return PED::_0x8AF8E647D6B2A649(groupId, ped);
	}
	void _0x87C2724A56F66020_Export(Ped ped)
	{
		return PED::_0x87C2724A56F66020(ped);
	}
	void _0xD5BD1B5318A81994_Export(int groupId, BOOL p1)
	{
		return PED::_0xD5BD1B5318A81994(groupId, p1);
	}
	void _0x9BBEAF8B0C007F1E_Export(Ped ped, BOOL p1)
	{
		return PED::_0x9BBEAF8B0C007F1E(ped, p1);
	}
	void _0xC99F104BDF8C7F5A_Export(Ped ped, BOOL p1)
	{
		return PED::_0xC99F104BDF8C7F5A(ped, p1);
	}
	void _0x02E741E19E39628C_Export(Ped ped, float p1)
	{
		return PED::_0x02E741E19E39628C(ped, p1);
	}
	void _0x97C475212B327666_Export(int groupId, BOOL p1)
	{
		return PED::_0x97C475212B327666(groupId, p1);
	}
	void _0x154B7E841AC7412F_Export(int groupId, BOOL p1)
	{
		return PED::_0x154B7E841AC7412F(groupId, p1);
	}
	void _0x8AFCCC0F18D70018_Export(int groupId, BOOL p1)
	{
		return PED::_0x8AFCCC0F18D70018(groupId, p1);
	}
	void _0xE1103300F3456DE7_Export(int groupId, float p1, float p2)
	{
		return PED::_0xE1103300F3456DE7(groupId, p1, p2);
	}
	void _0xA8A95CECB1906EA2_Export(int groupId, BOOL p1)
	{
		return PED::_0xA8A95CECB1906EA2(groupId, p1);
	}
	void _0xDDFAD4DEAA7FA362_Export(int groupId, float p1, float p2, float p3, float p4)
	{
		return PED::_0xDDFAD4DEAA7FA362(groupId, p1, p2, p3, p4);
	}
	void _0x966DE09688A1DE39_Export(int groupId, float p1, float p2, float p3, float p4)
	{
		return PED::_0x966DE09688A1DE39(groupId, p1, p2, p3, p4);
	}
	void _0x7E5185B979706210_Export(int groupId, int p1)
	{
		return PED::_0x7E5185B979706210(groupId, p1);
	}
	void _0x40C3524D4ED83554_Export(int groupId, BOOL p1)
	{
		return PED::_0x40C3524D4ED83554(groupId, p1);
	}
	void _0x86FAFC18E3D4380C_Export(int groupId, BOOL p1)
	{
		return PED::_0x86FAFC18E3D4380C(groupId, p1);
	}
	void _0x07EA5B053FA60AC7_Export(int groupId, BOOL p1)
	{
		return PED::_0x07EA5B053FA60AC7(groupId, p1);
	}
	void _0xF9CBD46433E36713_Export(Ped ped, Entity targetEntity, float p2, float p3, float p4, float p5, float p6, float p7, float p8, const char* p9)
	{
		return PED::_0xF9CBD46433E36713(ped, targetEntity, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Vehicle GET_VEHICLE_PED_IS_USING_Export(Ped PedIndex)
	{
		return PED::GET_VEHICLE_PED_IS_USING(PedIndex);
	}
	Vehicle GET_VEHICLE_PED_IS_ENTERING_Export(Ped PedIndex)
	{
		return PED::GET_VEHICLE_PED_IS_ENTERING(PedIndex);
	}
	Vehicle _GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO_Export(Ped horse)
	{
		return PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(horse);
	}
	Vehicle _GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO_Export(Ped horse)
	{
		return PED::_GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO(horse);
	}
	int GET_SEAT_PED_IS_USING_Export(Ped ped)
	{
		return PED::GET_SEAT_PED_IS_USING(ped);
	}
	Entity _GET_TRANSPORT_PED_IS_SEATED_ON_Export(Ped ped)
	{
		return PED::_GET_TRANSPORT_PED_IS_SEATED_ON(ped);
	}
	BOOL IS_PED_ENTERING_ANY_TRANSPORT_Export(Ped ped)
	{
		return PED::IS_PED_ENTERING_ANY_TRANSPORT(ped);
	}
	void SET_PED_GRAVITY_Export(Ped PedIndex, BOOL isAffectedByGravity)
	{
		return PED::SET_PED_GRAVITY(PedIndex, isAffectedByGravity);
	}
	void _0x96595B36D6A2279B_Export(Ped animal, BOOL toggle)
	{
		return PED::_0x96595B36D6A2279B(animal, toggle);
	}
	void _SET_PED_IMMERSION_FLAG_Export(Ped ped, BOOL toggle)
	{
		return PED::_SET_PED_IMMERSION_FLAG(ped, toggle);
	}
	void _0xA90684ED185CCB4B_Export(Ped animal, BOOL p1, float p2, float p3)
	{
		return PED::_0xA90684ED185CCB4B(animal, p1, p2, p3);
	}
	void _FAKE_SET_PED_LOCO_INJURED_Export(Ped ped, BOOL enabled)
	{
		return PED::_FAKE_SET_PED_LOCO_INJURED(ped, enabled);
	}
	void _FORCE_PED_DEATH_Export(Ped ped, Ped pedKiller, Hash weapon)
	{
		return PED::_FORCE_PED_DEATH(ped, pedKiller, weapon);
	}
	void APPLY_DAMAGE_TO_PED_Export(Ped PedIndex, int Damage, BOOL DamageArmourFlag, int boneId, Entity InstigatorIndex)
	{
		return PED::APPLY_DAMAGE_TO_PED(PedIndex, Damage, DamageArmourFlag, boneId, InstigatorIndex);
	}
	void _0xBAD2A311667A50D7_Export(Ped ped, BOOL p1)
	{
		return PED::_0xBAD2A311667A50D7(ped, p1);
	}
	int GET_PED_TYPE_Export(Ped PedIndex)
	{
		return PED::GET_PED_TYPE(PedIndex);
	}
	void SET_PED_AS_COP_Export(Ped PedIndex, BOOL bSetRelationshipGroup)
	{
		return PED::SET_PED_AS_COP(PedIndex, bSetRelationshipGroup);
	}
	void _0x405180B14DA5A935_Export(Ped ped, BOOL p1)
	{
		return PED::_0x405180B14DA5A935(ped, p1);
	}
	void _SET_PED_INTERACTION_PERSONALITY_Export(Ped ped, Hash personality)
	{
		return PED::_SET_PED_INTERACTION_PERSONALITY(ped, personality);
	}
	Hash _GET_PED_INTERACTION_PERSONALITY_Export(Ped ped)
	{
		return PED::_GET_PED_INTERACTION_PERSONALITY(ped);
	}
	void _SET_PED_PERSONALITY_Export(Ped ped, Hash personality)
	{
		return PED::_SET_PED_PERSONALITY(ped, personality);
	}
	void _0x329772C47DBB2FBC_Export(Ped ped)
	{
		return PED::_0x329772C47DBB2FBC(ped);
	}
	BOOL _GET_IS_PED_IN_DISPUTE_WITH_PED_Export(Ped ped, Ped pedInDisputeWith)
	{
		return PED::_GET_IS_PED_IN_DISPUTE_WITH_PED(ped, pedInDisputeWith);
	}
	BOOL _0x94132D7C8D3575C4_Export(Ped ped)
	{
		return PED::_0x94132D7C8D3575C4(ped);
	}
	void _0x8AF46E5159A5B620_Export(Ped ped, Hash speechParams)
	{
		return PED::_0x8AF46E5159A5B620(ped, speechParams);
	}
	void _0x45FEA6D5539BD474_Export(Ped ped, const char* p1)
	{
		return PED::_0x45FEA6D5539BD474(ped, p1);
	}
	void _SET_PED_INTERACTION_POSITIVE_RESPONSE_Export(Ped ped, const char* speech)
	{
		return PED::_SET_PED_INTERACTION_POSITIVE_RESPONSE(ped, speech);
	}
	void _0xE37ACEE15AC50C7E_Export(Ped ped, const char* p1)
	{
		return PED::_0xE37ACEE15AC50C7E(ped, p1);
	}
	void _SET_PED_INTERACTION_NEGATIVE_RESPONSE_Export(Ped ped, const char* speech)
	{
		return PED::_SET_PED_INTERACTION_NEGATIVE_RESPONSE(ped, speech);
	}
	void _0x41C23A8E6B344867_Export(Ped ped, const char* p1)
	{
		return PED::_0x41C23A8E6B344867(ped, p1);
	}
	BOOL GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION_Export(Ped ped, Player player)
	{
		return PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(ped, player);
	}
	BOOL GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION_Export(Ped ped, Player player)
	{
		return PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(ped, player);
	}
	void _0xA7DC9266ED6A4E51_Export(Ped ped)
	{
		return PED::_0xA7DC9266ED6A4E51(ped);
	}
	Any _0x89816B58C3466262_Export(Ped ped)
	{
		return PED::_0x89816B58C3466262(ped);
	}
	void _0x97B06669AC569003_Export(Ped ped1, Ped ped2)
	{
		return PED::_0x97B06669AC569003(ped1, ped2);
	}
	void _0x85F500F4E24CA43E_Export(Ped ped, float p1)
	{
		return PED::_0x85F500F4E24CA43E(ped, p1);
	}
	void _0x9B9B9FA0EA283E3D_Export(Ped ped, float p1)
	{
		return PED::_0x9B9B9FA0EA283E3D(ped, p1);
	}
	void _0xEC60D1D225BC50AA_Export(Ped ped, float p1)
	{
		return PED::_0xEC60D1D225BC50AA(ped, p1);
	}
	void _0x12F2D161BF4031FC_Export(Ped ped, float p1)
	{
		return PED::_0x12F2D161BF4031FC(ped, p1);
	}
	void _0x0ADA3EC589E1736E_Export()
	{
		return PED::_0x0ADA3EC589E1736E();
	}
	BOOL _GET_IS_PED_BEING_ROBBED_Export(Ped ped, Player player, BOOL trueUntilPlayerPocketsItem)
	{
		return PED::_GET_IS_PED_BEING_ROBBED(ped, player, trueUntilPlayerPocketsItem);
	}
	BOOL _0xD55DB4466D00A258_Export(Ped legendaryAnimal)
	{
		return PED::_0xD55DB4466D00A258(legendaryAnimal);
	}
	void SET_PED_MAX_HEALTH_Export(Ped PedIndex, int MaxHealth)
	{
		return PED::SET_PED_MAX_HEALTH(PedIndex, MaxHealth);
	}
	int GET_PED_MAX_HEALTH_Export(Ped PedIndex)
	{
		return PED::GET_PED_MAX_HEALTH(PedIndex);
	}
	void _SET_PED_HEALTH_CONFIG_Export(Ped ped, Hash configHash)
	{
		return PED::_SET_PED_HEALTH_CONFIG(ped, configHash);
	}
	void INIT_PED_DEFAULT_HEALTH_Export(Ped ped)
	{
		return PED::INIT_PED_DEFAULT_HEALTH(ped);
	}
	void SET_PED_MAX_TIME_IN_WATER_Export(Ped PedIndex, float fMaxTime)
	{
		return PED::SET_PED_MAX_TIME_IN_WATER(PedIndex, fMaxTime);
	}
	void SET_PED_MAX_TIME_UNDERWATER_Export(Ped PedIndex, float fMaxTime)
	{
		return PED::SET_PED_MAX_TIME_UNDERWATER(PedIndex, fMaxTime);
	}
	void _0xAF041C10756C30FB_Export(Ped ped, BOOL p1, BOOL p2, BOOL p3)
	{
		return PED::_0xAF041C10756C30FB(ped, p1, p2, p3);
	}
	void _0x5AF24CA9C974E51A_Export(Ped ped1, Ped ped2)
	{
		return PED::_0x5AF24CA9C974E51A(ped1, ped2);
	}
	void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE_Export(Ped PedIndex, int CanBeKnockedOffFlag)
	{
		return PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PedIndex, CanBeKnockedOffFlag);
	}
	BOOL CAN_KNOCK_PED_OFF_VEHICLE_Export(Ped PedIndex)
	{
		return PED::CAN_KNOCK_PED_OFF_VEHICLE(PedIndex);
	}
	void KNOCK_PED_OFF_VEHICLE_Export(Ped PedIndex)
	{
		return PED::KNOCK_PED_OFF_VEHICLE(PedIndex);
	}
	Ped GET_PED_AS_GROUP_MEMBER_Export(int UniqueGroupID, int MemberNumber)
	{
		return PED::GET_PED_AS_GROUP_MEMBER(UniqueGroupID, MemberNumber);
	}
	Ped GET_PED_AS_GROUP_LEADER_Export(int UniqueGroupID)
	{
		return PED::GET_PED_AS_GROUP_LEADER(UniqueGroupID);
	}
	void SET_PED_KEEP_TASK_Export(Ped PedIndex, BOOL KeepTasksFlag)
	{
		return PED::SET_PED_KEEP_TASK(PedIndex, KeepTasksFlag);
	}
	BOOL IS_PED_SWIMMING_Export(Ped PedIndex)
	{
		return PED::IS_PED_SWIMMING(PedIndex);
	}
	BOOL IS_PED_SWIMMING_UNDER_WATER_Export(Ped PedIndex)
	{
		return PED::IS_PED_SWIMMING_UNDER_WATER(PedIndex);
	}
	BOOL _0xDC88D06719070C39_Export(Ped ped)
	{
		return PED::_0xDC88D06719070C39(ped);
	}
	void SET_CREATE_RANDOM_COPS_Export(BOOL CreateRandomCopsFlag)
	{
		return PED::SET_CREATE_RANDOM_COPS(CreateRandomCopsFlag);
	}
	BOOL IS_PED_IN_ANY_TRAIN_Export(Ped PedIndex)
	{
		return PED::IS_PED_IN_ANY_TRAIN(PedIndex);
	}
	BOOL IS_PED_GETTING_INTO_A_VEHICLE_Export(Ped PedIndex)
	{
		return PED::IS_PED_GETTING_INTO_A_VEHICLE(PedIndex);
	}
	BOOL _0x550CB89DD7F4FA3D_Export(Ped ped1, Ped ped2)
	{
		return PED::_0x550CB89DD7F4FA3D(ped1, ped2);
	}
	void SET_ENABLE_HANDCUFFS_Export(Ped PedIndex, BOOL bEnable, BOOL p2)
	{
		return PED::SET_ENABLE_HANDCUFFS(PedIndex, bEnable, p2);
	}
	void SET_ENABLE_BOUND_ANKLES_Export(Ped PedIndex, BOOL bEnable)
	{
		return PED::SET_ENABLE_BOUND_ANKLES(PedIndex, bEnable);
	}
	BOOL _0x8822F139408B8D0A_Export(Ped ped)
	{
		return PED::_0x8822F139408B8D0A(ped);
	}
	void _0x8822F124788B8D0A_Export(Ped ped, BOOL p1)
	{
		return PED::_0x8822F124788B8D0A(ped, p1);
	}
	void RESET_PED_WEAPON_MOVEMENT_CLIPSET_Export(Ped PedIndex)
	{
		return PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PedIndex);
	}
	void _SET_PED_GETUP_ANIMATION_Export(Ped ped, const char* animName, BOOL p2)
	{
		return PED::_SET_PED_GETUP_ANIMATION(ped, animName, p2);
	}
	void _0x88A95BB640FC186F_Export(Ped ped)
	{
		return PED::_0x88A95BB640FC186F(ped);
	}
	void RESET_PED_IN_VEHICLE_CONTEXT_Export(Ped PedIndex)
	{
		return PED::RESET_PED_IN_VEHICLE_CONTEXT(PedIndex);
	}
	void _0x878E8104FA27CDAE_Export(Vehicle vehicle, Hash p1)
	{
		return PED::_0x878E8104FA27CDAE(vehicle, p1);
	}
	void SET_PED_GESTURE_GROUP_Export(Ped PedIndex, const char* GestureGroup, int p2)
	{
		return PED::SET_PED_GESTURE_GROUP(PedIndex, GestureGroup, p2);
	}
	void _SET_PED_DESIRED_LOCO_FOR_MODEL_Export(Ped ped, const char* locomotionArchetype)
	{
		return PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(ped, locomotionArchetype);
	}
	void _CLEAR_PED_DESIRED_LOCO_FOR_MODEL_Export(Ped ped)
	{
		return PED::_CLEAR_PED_DESIRED_LOCO_FOR_MODEL(ped);
	}
	void _SET_PED_DESIRED_LOCO_MOTION_TYPE_Export(Ped ped, const char* locoMotionType)
	{
		return PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(ped, locoMotionType);
	}
	void _CLEAR_PED_DESIRED_LOCO_MOTION_TYPE_Export(Ped ped)
	{
		return PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(ped);
	}
	void _0x2371C39D4F91C288_Export(Ped ped)
	{
		return PED::_0x2371C39D4F91C288(ped);
	}
	void _REQUEST_PED_GETUP_ANIMATION_Export(Ped ped, const char* getUpType)
	{
		return PED::_REQUEST_PED_GETUP_ANIMATION(ped, getUpType);
	}
	void PED_COWER_IN_PLACE_Export(Ped ped, Ped ped2)
	{
		return PED::PED_COWER_IN_PLACE(ped, ped2);
	}
	void PED_COWER_MOVE_TO_POINT_Export(Ped ped, float p1, float p2, float p3, Ped ped2, float p5)
	{
		return PED::PED_COWER_MOVE_TO_POINT(ped, p1, p2, p3, ped2, p5);
	}
	void _0x16F798A05BB9E3B5_Export(Ped ped)
	{
		return PED::_0x16F798A05BB9E3B5(ped);
	}
	void _PED_EMOTIONAL_PRESET_LOCO_MOTION_Export(Ped ped, const char* presetName, Ped targetPed, int duration, int flag)
	{
		return PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(ped, presetName, targetPed, duration, flag);
	}
	void _PED_CLEAR_LOCO_MOTION_Export(Ped ped)
	{
		return PED::_PED_CLEAR_LOCO_MOTION(ped);
	}
	void _0x32CCAD8A981B53D3_Export(Ped ped)
	{
		return PED::_0x32CCAD8A981B53D3(ped);
	}
	void _SET_PED_DRUNKNESS_Export(Ped ped, BOOL enabled, float drunknessLevel)
	{
		return PED::_SET_PED_DRUNKNESS(ped, enabled, drunknessLevel);
	}
	BOOL _IS_PED_DRUNK_Export(Ped ped)
	{
		return PED::_IS_PED_DRUNK(ped);
	}
	float _GET_PED_DRUNKNESS_Export(Ped ped)
	{
		return PED::_GET_PED_DRUNKNESS(ped);
	}
	scrVector GET_ANIM_INITIAL_OFFSET_POSITION_Export(const char* pAnimDictName, const char* pAnimName, float scenePositionX, float scenePositionY, float scenePositionZ, float sceneOrientationX, float sceneOrientationY, float sceneOrientationZ, float phase, int RotOrder)
	{
		return PED::GET_ANIM_INITIAL_OFFSET_POSITION(pAnimDictName, pAnimName, scenePositionX, scenePositionY, scenePositionZ, sceneOrientationX, sceneOrientationY, sceneOrientationZ, phase, RotOrder);
	}
	scrVector GET_ANIM_INITIAL_OFFSET_ROTATION_Export(const char* pAnimDictName, const char* pAnimName, float scenePositionX, float scenePositionY, float scenePositionZ, float sceneOrientationX, float sceneOrientationY, float sceneOrientationZ, float phase, int RotOrder)
	{
		return PED::GET_ANIM_INITIAL_OFFSET_ROTATION(pAnimDictName, pAnimName, scenePositionX, scenePositionY, scenePositionZ, sceneOrientationX, sceneOrientationY, sceneOrientationZ, phase, RotOrder);
	}
	void SET_PED_RANDOM_COMPONENT_VARIATION_Export(Ped PedIndex, int race)
	{
		return PED::SET_PED_RANDOM_COMPONENT_VARIATION(PedIndex, race);
	}
	void KNOCK_OFF_PED_PROP_Export(Ped PedIndex, BOOL bDamaged, BOOL bHats, BOOL bGlasses, BOOL bHelmets)
	{
		return PED::KNOCK_OFF_PED_PROP(PedIndex, bDamaged, bHats, bGlasses, bHelmets);
	}
	void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_Export(Ped PedIndex, BOOL bBlockEvents)
	{
		return PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PedIndex, bBlockEvents);
	}
	BOOL _GET_BLOCKING_OF_NON_TEMPORARY_EVENTS_Export(Ped ped)
	{
		return PED::_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped);
	}
	void _0xC17A94CC8FC3C61A_Export(Entity entity, int boneId, float p2, float p3, float p4)
	{
		return PED::_0xC17A94CC8FC3C61A(entity, boneId, p2, p3, p4);
	}
	void _SET_PED_SCALE_Export(Ped ped, float scale)
	{
		return PED::_SET_PED_SCALE(ped, scale);
	}
	float _0x134775B093AD5C38_Export(Ped ped)
	{
		return PED::_0x134775B093AD5C38(ped);
	}
	float _GET_PED_HEIGHT_Export(Ped ped)
	{
		return PED::_GET_PED_HEIGHT(ped);
	}
	int _GET_PED_MODEL_SIZE_FROM_HASH_Export(Hash modelHash)
	{
		return PED::_GET_PED_MODEL_SIZE_FROM_HASH(modelHash);
	}
	void REGISTER_TARGET_Export(Ped PedIndex, Ped TargetPedIndex, BOOL p2)
	{
		return PED::REGISTER_TARGET(PedIndex, TargetPedIndex, p2);
	}
	void _REGISTER_HATED_TARGETS_IN_AREA_Export(Ped ped, float x, float y, float z, float radius)
	{
		return PED::_REGISTER_HATED_TARGETS_IN_AREA(ped, x, y, z, radius);
	}
	void REGISTER_HATED_TARGETS_AROUND_PED_Export(Ped PedIndex, float Radius)
	{
		return PED::REGISTER_HATED_TARGETS_AROUND_PED(PedIndex, Radius);
	}
	BOOL _IS_TARGET_Export(Ped ped, Ped targetPed)
	{
		return PED::_IS_TARGET(ped, targetPed);
	}
	void _REMOVE_TARGET_Export(Ped ped, Ped targetPed)
	{
		return PED::_REMOVE_TARGET(ped, targetPed);
	}
	BOOL GET_CLOSEST_PED_Export(float VecCentreCoorsX, float VecCentreCoorsY, float VecCentreCoorsZ, float Range, BOOL bScanRandomPeds, BOOL bScanMissionPeds, Ped* ClosestPedIndex, BOOL p7, BOOL p8, BOOL p9, int ExclusionPedType)
	{
		return PED::GET_CLOSEST_PED(VecCentreCoorsX, VecCentreCoorsY, VecCentreCoorsZ, Range, bScanRandomPeds, bScanMissionPeds, ClosestPedIndex, p7, p8, p9, ExclusionPedType);
	}
	BOOL CAN_PED_RAGDOLL_Export(Ped PedIndex)
	{
		return PED::CAN_PED_RAGDOLL(PedIndex);
	}
	BOOL SET_PED_TO_RAGDOLL_Export(Ped PedIndex, int MinTime, int MaxTime, int StartTask, BOOL bAbortIfInjured, BOOL bAbortIfDead, const char* nmTaskMessageParameterName)
	{
		return PED::SET_PED_TO_RAGDOLL(PedIndex, MinTime, MaxTime, StartTask, bAbortIfInjured, bAbortIfDead, nmTaskMessageParameterName);
	}
	BOOL SET_PED_TO_RAGDOLL_WITH_FALL_Export(Ped PedIndex, int MinTime, int MaxTime, int nFallType, float vecDirectionX, float vecDirectionY, float vecDirectionZ, float fGroundHeight, float vecGrab1X, float vecGrab1Y, float vecGrab1Z, float vecGrab2X, float vecGrab2Y, float vecGrab2Z)
	{
		return PED::SET_PED_TO_RAGDOLL_WITH_FALL(PedIndex, MinTime, MaxTime, nFallType, vecDirectionX, vecDirectionY, vecDirectionZ, fGroundHeight, vecGrab1X, vecGrab1Y, vecGrab1Z, vecGrab2X, vecGrab2Y, vecGrab2Z);
	}
	void SET_PED_RAGDOLL_ON_COLLISION_Export(Ped PedIndex, BOOL RagdollOnCollision, BOOL p2)
	{
		return PED::SET_PED_RAGDOLL_ON_COLLISION(PedIndex, RagdollOnCollision, p2);
	}
	void _SET_PED_TO_DISABLE_RAGDOLL_Export(Ped ped, BOOL toggle)
	{
		return PED::_SET_PED_TO_DISABLE_RAGDOLL(ped, toggle);
	}
	BOOL IS_PED_RAGDOLL_Export(Ped PedIndex)
	{
		return PED::IS_PED_RAGDOLL(PedIndex);
	}
	BOOL IS_PED_RUNNING_RAGDOLL_TASK_Export(Ped PedIndex)
	{
		return PED::IS_PED_RUNNING_RAGDOLL_TASK(PedIndex);
	}
	void SET_PED_RAGDOLL_FORCE_FALL_Export(Ped PedIndex)
	{
		return PED::SET_PED_RAGDOLL_FORCE_FALL(PedIndex);
	}
	void _0x8CB2553C559102C1_Export(Ped ped, int p1, BOOL p2)
	{
		return PED::_0x8CB2553C559102C1(ped, p1, p2);
	}
	void _0xFD3C31A2E45671E7_Export(Ped ped, int p1)
	{
		return PED::_0xFD3C31A2E45671E7(ped, p1);
	}
	void RESET_PED_RAGDOLL_TIMER_Export(Ped PedIndex)
	{
		return PED::RESET_PED_RAGDOLL_TIMER(PedIndex);
	}
	void SET_PED_CAN_RAGDOLL_Export(Ped PedIndex, BOOL bUnlock)
	{
		return PED::SET_PED_CAN_RAGDOLL(PedIndex, bUnlock);
	}
	BOOL _0x3AEC4A410ECAF30D_Export(Ped ped)
	{
		return PED::_0x3AEC4A410ECAF30D(ped);
	}
	BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK_Export(Ped PedIndex)
	{
		return PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PedIndex);
	}
	void SET_RAGDOLL_BLOCKING_FLAGS_Export(Ped PedIndex, int flags)
	{
		return PED::SET_RAGDOLL_BLOCKING_FLAGS(PedIndex, flags);
	}
	void CLEAR_RAGDOLL_BLOCKING_FLAGS_Export(Ped PedIndex, int flags)
	{
		return PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PedIndex, flags);
	}
	void _0x9F933E0985E12C51_Export(Ped ped, float p1, float p2, float p3)
	{
		return PED::_0x9F933E0985E12C51(ped, p1, p2, p3);
	}
	void _0x88B2026A3B0BE33D_Export(Ped ped, float p1)
	{
		return PED::_0x88B2026A3B0BE33D(ped, p1);
	}
	void SET_PED_DEFENSIVE_AREA_VOLUME_Export(Ped ped, Volume volume, BOOL p2, BOOL p3, BOOL p4)
	{
		return PED::SET_PED_DEFENSIVE_AREA_VOLUME(ped, volume, p2, p3, p4);
	}
	void SET_PED_SPHERE_DEFENSIVE_AREA_Export(Ped PedIndex, float vCentreX, float vCentreY, float vCentreZ, float fRadius, BOOL p5, BOOL p6, BOOL p7)
	{
		return PED::SET_PED_SPHERE_DEFENSIVE_AREA(PedIndex, vCentreX, vCentreY, vCentreZ, fRadius, p5, p6, p7);
	}
	void _SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY_Export(Ped ped, Entity entity, float x, float y, float z, float radius, int p6, BOOL p7)
	{
		return PED::_SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY(ped, entity, x, y, z, radius, p6, p7);
	}
	void _SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA_Export(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8, BOOL p9, Entity entity, BOOL p11)
	{
		return PED::_SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA(ped, x1, y1, z1, x2, y2, z2, p7, p8, p9, entity, p11);
	}
	void SET_PED_DEFENSIVE_AREA_DIRECTION_Export(Ped PedIndex, float vDefendFromPosX, float vDefendFromPosY, float vDefendFromPosZ, BOOL bApplyToSecondaryDefensiveArea)
	{
		return PED::SET_PED_DEFENSIVE_AREA_DIRECTION(PedIndex, vDefendFromPosX, vDefendFromPosY, vDefendFromPosZ, bApplyToSecondaryDefensiveArea);
	}
	void REMOVE_PED_DEFENSIVE_AREA_Export(Ped PedIndex, BOOL bRemoveSecondaryDefensiveArea)
	{
		return PED::REMOVE_PED_DEFENSIVE_AREA(PedIndex, bRemoveSecondaryDefensiveArea);
	}
	scrVector GET_PED_DEFENSIVE_AREA_POSITION_Export(Ped PedIndex, BOOL bApplyToSecondaryDefensiveArea)
	{
		return PED::GET_PED_DEFENSIVE_AREA_POSITION(PedIndex, bApplyToSecondaryDefensiveArea);
	}
	BOOL IS_PED_DEFENSIVE_AREA_ACTIVE_Export(Ped PedIndex, BOOL bCheckSecondaryDefensiveArea)
	{
		return PED::IS_PED_DEFENSIVE_AREA_ACTIVE(PedIndex, bCheckSecondaryDefensiveArea);
	}
	Volume _GET_PED_DEFENSIVE_VOLUME_Export(Ped ped, Any p1)
	{
		return PED::_GET_PED_DEFENSIVE_VOLUME(ped, p1);
	}
	void _0x4EC4EA2F72B36358_Export(Ped ped, BOOL p1)
	{
		return PED::_0x4EC4EA2F72B36358(ped, p1);
	}
	void _0xCF0B19806473D324_Export(Ped ped, float x, float y, float z)
	{
		return PED::_0xCF0B19806473D324(ped, x, y, z);
	}
	void _0xB4B7C92FCE7347B7_Export(Ped ped)
	{
		return PED::_0xB4B7C92FCE7347B7(ped);
	}
	void REVIVE_INJURED_PED_Export(Ped PedIndex)
	{
		return PED::REVIVE_INJURED_PED(PedIndex);
	}
	void RESURRECT_PED_Export(Ped PedIndex)
	{
		return PED::RESURRECT_PED(PedIndex);
	}
	void SET_PED_NAME_DEBUG_Export(Ped PedIndex, const char* debugName)
	{
		return PED::SET_PED_NAME_DEBUG(PedIndex, debugName);
	}
	void SPECIAL_FUNCTION_DO_NOT_USE_Export(Ped PedIndex, BOOL bNoCollisionUntilClear)
	{
		return PED::SPECIAL_FUNCTION_DO_NOT_USE(PedIndex, bNoCollisionUntilClear);
	}
	BOOL _0x7020839C7302D8AC_Export(Ped ped)
	{
		return PED::_0x7020839C7302D8AC(ped);
	}
	void _0xE1AADD0055D76603_Export(Ped ped, Entity entity, int boneIndex1, int boneIndex2, float x, float y, float z, float p7, BOOL p8, BOOL p9, int p10)
	{
		return PED::_0xE1AADD0055D76603(ped, entity, boneIndex1, boneIndex2, x, y, z, p7, p8, p9, p10);
	}
	void _0x5A1A929C8B729B4A_Export(Ped ped)
	{
		return PED::_0x5A1A929C8B729B4A(ped);
	}
	void _0x97A38B65EBDA3D50_Export(Ped ped, BOOL p1)
	{
		return PED::_0x97A38B65EBDA3D50(ped, p1);
	}
	BOOL _0x06A10B4D7F50B0C3_Export(Ped ped)
	{
		return PED::_0x06A10B4D7F50B0C3(ped);
	}
	BOOL _0x88A5564B19C15391_Export(Ped ped)
	{
		return PED::_0x88A5564B19C15391(ped);
	}
	int _0x354CA4DDDEEC397A_Export(Ped ped)
	{
		return PED::_0x354CA4DDDEEC397A(ped);
	}
	void _0xFEA6126C34DF2532_Export(Ped ped, BOOL p1)
	{
		return PED::_0xFEA6126C34DF2532(ped, p1);
	}
	void _0xA967D6A8ED2D713B_Export(Ped ped, BOOL p1)
	{
		return PED::_0xA967D6A8ED2D713B(ped, p1);
	}
	void APPLY_PED_BLOOD_SPECIFIC_Export(Ped pedIndex, int component, float u, float v, float rotation, float scale, int forcedFrame, float preAge, const char* bloodName)
	{
		return PED::APPLY_PED_BLOOD_SPECIFIC(pedIndex, component, u, v, rotation, scale, forcedFrame, preAge, bloodName);
	}
	void _0x58D32261AE0F0843_Export(Ped ped, int boneId, float p2, float p3, float p4, float p5, float p6, float p7, const char* p8)
	{
		return PED::_0x58D32261AE0F0843(ped, boneId, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0x735662994E60A710_Export(Ped ped, BOOL p1)
	{
		return PED::_0x735662994E60A710(ped, p1);
	}
	void _0x91BAB9E064F036CD_Export(Any p0, Any p1)
	{
		return PED::_0x91BAB9E064F036CD(p0, p1);
	}
	void _0x897934E868EDDD6C_Export(Ped ped, int p1, float p2, float p3, float p4)
	{
		return PED::_0x897934E868EDDD6C(ped, p1, p2, p3, p4);
	}
	void _SET_PED_ACTIVATE_WOUND_EFFECT_Export(Ped ped, int p1, int boneId, float moveWoundLeftRight, float bloodFountainPressure, float yaw, float bloodFountainDirection, float bloodFountainPulse, float p8, float p9)
	{
		return PED::_SET_PED_ACTIVATE_WOUND_EFFECT(ped, p1, boneId, moveWoundLeftRight, bloodFountainPressure, yaw, bloodFountainDirection, bloodFountainPulse, p8, p9);
	}
	void _UPDATE_PED_WOUND_EFFECT_Export(Ped ped, float value)
	{
		return PED::_UPDATE_PED_WOUND_EFFECT(ped, value);
	}
	void APPLY_PED_DAMAGE_PACK_Export(Ped PedIndex, const char* packName, float preAge, float alpha_param)
	{
		return PED::APPLY_PED_DAMAGE_PACK(PedIndex, packName, preAge, alpha_param);
	}
	void CLEAR_PED_BLOOD_DAMAGE_Export(Ped pedIndex)
	{
		return PED::CLEAR_PED_BLOOD_DAMAGE(pedIndex);
	}
	void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE_Export(Ped PedIndex, int zone)
	{
		return PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PedIndex, zone);
	}
	void CLEAR_PED_DAMAGE_DECAL_BY_ZONE_Export(Ped PedIndex, int zone, const char* damageDecalName)
	{
		return PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PedIndex, zone, damageDecalName);
	}
	void _CLEAR_PED_BLOOD_DAMAGE_FACIAL_Export(Ped ped, int p1)
	{
		return PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(ped, p1);
	}
	void _0x34C11114887150FD_Export(Any p0, Any p1)
	{
		return PED::_0x34C11114887150FD(p0, p1);
	}
	void _0xD8544F6260F5F01E_Export(Ped ped, int p1)
	{
		return PED::_0xD8544F6260F5F01E(ped, p1);
	}
	void _0xEB8886E1065654CD_Export(Ped ped, int p1, const char* p2, float p3)
	{
		return PED::_0xEB8886E1065654CD(ped, p1, p2, p3);
	}
	void FADE_AND_DESTROY_PED_Export(Ped* ped)
	{
		return PED::FADE_AND_DESTROY_PED(ped);
	}
	BOOL _IS_PED_QUEUED_FOR_DELETION_Export(Ped ped)
	{
		return PED::_IS_PED_QUEUED_FOR_DELETION(ped);
	}
	void CLEAR_PED_WETNESS_Export(Ped pedIndex)
	{
		return PED::CLEAR_PED_WETNESS(pedIndex);
	}
	void SET_PED_WETNESS_HEIGHT_Export(Ped pedIndex, float height)
	{
		return PED::SET_PED_WETNESS_HEIGHT(pedIndex, height);
	}
	void _0xF9CFF5BB70E8A2CB_Export(Ped ped, float p1)
	{
		return PED::_0xF9CFF5BB70E8A2CB(ped, p1);
	}
	void SET_PED_WETNESS_ENABLED_THIS_FRAME_Export(Ped pedIndex)
	{
		return PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(pedIndex);
	}
	void _0xA7A806677F8DE138_Export(Ped ped)
	{
		return PED::_0xA7A806677F8DE138(ped);
	}
	void _0xA064BBABB064446F_Export(Any p0)
	{
		return PED::_0xA064BBABB064446F(p0);
	}
	void CLEAR_PED_ENV_DIRT_Export(Ped pedIndex)
	{
		return PED::CLEAR_PED_ENV_DIRT(pedIndex);
	}
	void SET_PED_SWEAT_Export(Ped pedIndex, float amount)
	{
		return PED::SET_PED_SWEAT(pedIndex, amount);
	}
	void CLEAR_PED_DECORATIONS_Export(Ped PedIndex)
	{
		return PED::CLEAR_PED_DECORATIONS(PedIndex);
	}
	BOOL WAS_PED_SKELETON_UPDATED_Export(Ped PedIndex)
	{
		return PED::WAS_PED_SKELETON_UPDATED(PedIndex);
	}
	scrVector GET_PED_BONE_COORDS_Export(Ped PedIndex, int bone, float vecOffsetX, float vecOffsetY, float vecOffsetZ)
	{
		return PED::GET_PED_BONE_COORDS(PedIndex, bone, vecOffsetX, vecOffsetY, vecOffsetZ);
	}
	int ADD_SCENARIO_BLOCKING_AREA_Export(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ, BOOL bNetwork, int blockingFlags)
	{
		return PED::ADD_SCENARIO_BLOCKING_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ, bNetwork, blockingFlags);
	}
	void REMOVE_SCENARIO_BLOCKING_AREAS_Export()
	{
		return PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	void REMOVE_SCENARIO_BLOCKING_AREA_Export(int ScenarioBlockingIndex, BOOL bNetwork)
	{
		return PED::REMOVE_SCENARIO_BLOCKING_AREA(ScenarioBlockingIndex, bNetwork);
	}
	Any _ADD_SCENARIO_BLOCKING_VOLUME_Export(Volume volume, BOOL p1, int flag)
	{
		return PED::_ADD_SCENARIO_BLOCKING_VOLUME(volume, p1, flag);
	}
	Any _0x6F46F8ACB44C4FC1_Export(Any p0)
	{
		return PED::_0x6F46F8ACB44C4FC1(p0);
	}
	BOOL _IS_SCENARIO_BLOCKING_AREA_VALID_Export(Any p0)
	{
		return PED::_IS_SCENARIO_BLOCKING_AREA_VALID(p0);
	}
	BOOL IS_PED_USING_SCENARIO_HASH_Export(Ped ped, Hash scenarioHash)
	{
		return PED::IS_PED_USING_SCENARIO_HASH(ped, scenarioHash);
	}
	BOOL IS_PED_USING_ANY_SCENARIO_Export(Ped PedIndex)
	{
		return PED::IS_PED_USING_ANY_SCENARIO(PedIndex);
	}
	BOOL IS_PED_USING_THIS_SCENARIO_Export(Ped ped, int scenario)
	{
		return PED::IS_PED_USING_THIS_SCENARIO(ped, scenario);
	}
	BOOL _CAN_PED_USE_SCENARIO_POINT_Export(Ped ped, int scenario, Any p2, Any p3, Any p4)
	{
		return PED::_CAN_PED_USE_SCENARIO_POINT(ped, scenario, p2, p3, p4);
	}
	BOOL _0x1148F706CF4EBDDA_Export(Ped ped, Hash p1, int p2)
	{
		return PED::_0x1148F706CF4EBDDA(ped, p1, p2);
	}
	BOOL SET_PED_PANIC_EXIT_SCENARIO_Export(Ped PedIndex, float vDangerPositionX, float vDangerPositionY, float vDangerPositionZ)
	{
		return PED::SET_PED_PANIC_EXIT_SCENARIO(PedIndex, vDangerPositionX, vDangerPositionY, vDangerPositionZ);
	}
	void TOGGLE_SCENARIO_PED_COWER_IN_PLACE_Export(Ped PedIndex, BOOL bStart)
	{
		return PED::TOGGLE_SCENARIO_PED_COWER_IN_PLACE(PedIndex, bStart);
	}
	void _0xD8CEEED54C672B5D_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return PED::_0xD8CEEED54C672B5D(p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT_Export(Ped PedIndex, float vReactPositionX, float vReactPositionY, float vReactPositionZ)
	{
		return PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(PedIndex, vReactPositionX, vReactPositionY, vReactPositionZ);
	}
	void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT_Export(Ped PedIndex)
	{
		return PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(PedIndex);
	}
	void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT_Export(Ped PedIndex)
	{
		return PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PedIndex);
	}
	BOOL SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT_Export(Ped PedIndex, float vDangerPositionX, float vDangerPositionY, float vDangerPositionZ, int lookIntensity)
	{
		return PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(PedIndex, vDangerPositionX, vDangerPositionY, vDangerPositionZ, lookIntensity);
	}
	BOOL SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT_Export(Ped ped, float x, float y, float z, int lookIntensity)
	{
		return PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(ped, x, y, z, lookIntensity);
	}
	BOOL SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT_Export(Ped ped, float x, float y, float z, int lookIntensity, BOOL p5)
	{
		return PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(ped, x, y, z, lookIntensity, p5);
	}
	BOOL SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT_Export(Ped ped, float x, float y, float z, int lookIntensity, BOOL p5)
	{
		return PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(ped, x, y, z, lookIntensity, p5);
	}
	BOOL _0xF9331B3A314EB49D_Export(Ped ped)
	{
		return PED::_0xF9331B3A314EB49D(ped);
	}
	void _0xE735A7DA22E88359_Export(Any p0)
	{
		return PED::_0xE735A7DA22E88359(p0);
	}
	Any _0x82CB0F3F0C7785E5_Export(Any p0)
	{
		return PED::_0x82CB0F3F0C7785E5(p0);
	}
	void _0xCA95C156C14B2054_Export(Any p0, Any p1)
	{
		return PED::_0xCA95C156C14B2054(p0, p1);
	}
	void SET_FACIAL_IDLE_ANIM_OVERRIDE_Export(Ped PedIndex, const char* pOverrideIdleClipName, const char* pOverrideIdleClipDictName)
	{
		return PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PedIndex, pOverrideIdleClipName, pOverrideIdleClipDictName);
	}
	void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE_Export(Ped PedIndex)
	{
		return PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PedIndex);
	}
	void _REQUEST_PED_FACIAL_MOOD_THIS_FRAME_Export(Ped ped, Hash mood, int p2)
	{
		return PED::_REQUEST_PED_FACIAL_MOOD_THIS_FRAME(ped, mood, p2);
	}
	void _0xD2F0FE8805D91647_Export(Any p0, Any p1)
	{
		return PED::_0xD2F0FE8805D91647(p0, p1);
	}
	void SET_PED_CAN_PLAY_GESTURE_ANIMS_Export(Ped PedIndex, BOOL p1, Any p2)
	{
		return PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PedIndex, p1, p2);
	}
	void _0x7EDB3C766B0D073F_Export(Ped ped)
	{
		return PED::_0x7EDB3C766B0D073F(ped);
	}
	void SET_PED_CAN_PLAY_AMBIENT_ANIMS_Export(Ped PedIndex, BOOL bAlllowAmbientAnims)
	{
		return PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PedIndex, bAlllowAmbientAnims);
	}
	void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS_Export(Ped PedIndex, BOOL bAlllowAmbientAnims)
	{
		return PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PedIndex, bAlllowAmbientAnims);
	}
	void _0x4F63433CE3C08230_Export(Ped ped, BOOL p1)
	{
		return PED::_0x4F63433CE3C08230(ped, p1);
	}
	void SET_PED_CAN_ARM_IK_Export(Ped PedIndex, BOOL bEnableIK)
	{
		return PED::SET_PED_CAN_ARM_IK(PedIndex, bEnableIK);
	}
	void _SET_PED_CAN_UNK_BODYPART_IK_Export(Ped ped, BOOL toggle)
	{
		return PED::_SET_PED_CAN_UNK_BODYPART_IK(ped, toggle);
	}
	void SET_PED_CAN_HEAD_IK_Export(Ped PedIndex, BOOL bEnableIK)
	{
		return PED::SET_PED_CAN_HEAD_IK(PedIndex, bEnableIK);
	}
	void SET_PED_CAN_LEG_IK_Export(Ped PedIndex, BOOL bEnableIK)
	{
		return PED::SET_PED_CAN_LEG_IK(PedIndex, bEnableIK);
	}
	void SET_PED_CAN_TORSO_IK_Export(Ped PedIndex, BOOL bEnableIK)
	{
		return PED::SET_PED_CAN_TORSO_IK(PedIndex, bEnableIK);
	}
	void SET_PED_CAN_TORSO_REACT_IK_Export(Ped PedIndex, BOOL bEnableIK)
	{
		return PED::SET_PED_CAN_TORSO_REACT_IK(PedIndex, bEnableIK);
	}
	void SET_PED_CAN_TORSO_VEHICLE_IK_Export(Ped PedIndex, BOOL bEnableIK)
	{
		return PED::SET_PED_CAN_TORSO_VEHICLE_IK(PedIndex, bEnableIK);
	}
	void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT_Export(Ped PedIndex, BOOL bAllowAutoConversationLookAts)
	{
		return PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PedIndex, bAllowAutoConversationLookAts);
	}
	BOOL IS_PED_HEADTRACKING_PED_Export(Ped FirstPedIndex, Ped SecondPedIndex)
	{
		return PED::IS_PED_HEADTRACKING_PED(FirstPedIndex, SecondPedIndex);
	}
	BOOL IS_PED_HEADTRACKING_ENTITY_Export(Ped PedIndex, Entity EntityIndex)
	{
		return PED::IS_PED_HEADTRACKING_ENTITY(PedIndex, EntityIndex);
	}
	void _DISABLE_AMBIENT_LOOK_AT_REQUESTS_Export(Any p0, Any p1)
	{
		return PED::_DISABLE_AMBIENT_LOOK_AT_REQUESTS(p0, p1);
	}
	void _DISABLE_ALL_LOOK_AT_REQUESTS_Export(Ped ped, int p1)
	{
		return PED::_DISABLE_ALL_LOOK_AT_REQUESTS(ped, p1);
	}
	void _0xCD9E5F94A2F38683_Export(Ped ped, BOOL p1)
	{
		return PED::_0xCD9E5F94A2F38683(ped, p1);
	}
	void SET_PED_CLOTH_PIN_FRAMES_Export(Ped PedIndex, int pinFrames)
	{
		return PED::SET_PED_CLOTH_PIN_FRAMES(PedIndex, pinFrames);
	}
	void _0x1D4636C90BBEFACB_Export(Ped ped, int p1)
	{
		return PED::_0x1D4636C90BBEFACB(ped, p1);
	}
	void _0xEF371232BC6053E1_Export(Ped ped)
	{
		return PED::_0xEF371232BC6053E1(ped);
	}
	void _0x86F0B6730C32AC14_Export(Ped ped, BOOL p1)
	{
		return PED::_0x86F0B6730C32AC14(ped, p1);
	}
	void _0x8101BA1C0B462412_Export(Ped ped, int ropeId)
	{
		return PED::_0x8101BA1C0B462412(ped, ropeId);
	}
	void SET_PED_CONFIG_FLAG_Export(Ped PedIndex, int ConfigFlag, BOOL bTrue)
	{
		return PED::SET_PED_CONFIG_FLAG(PedIndex, ConfigFlag, bTrue);
	}
	void SET_PED_RESET_FLAG_Export(Ped PedIndex, int ResetFlag, BOOL bTrue)
	{
		return PED::SET_PED_RESET_FLAG(PedIndex, ResetFlag, bTrue);
	}
	BOOL GET_PED_CONFIG_FLAG_Export(Ped PedIndex, int ConfigFlag, BOOL DoDeadCheck)
	{
		return PED::GET_PED_CONFIG_FLAG(PedIndex, ConfigFlag, DoDeadCheck);
	}
	BOOL GET_PED_RESET_FLAG_Export(Ped PedIndex, int ResetFlag)
	{
		return PED::GET_PED_RESET_FLAG(PedIndex, ResetFlag);
	}
	void _0xC6981AFF6D2A71C2_Export(Any p0)
	{
		return PED::_0xC6981AFF6D2A71C2(p0);
	}
	void _0xE0FE107AB174D64A_Export(Any p0, Any p1)
	{
		return PED::_0xE0FE107AB174D64A(p0, p1);
	}
	void SET_PED_GROUP_MEMBER_PASSENGER_INDEX_Export(Ped PedIndex, int seat)
	{
		return PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(PedIndex, seat);
	}
	BOOL IS_PED_EVASIVE_DIVING_Export(Ped PedIndex, Entity* EntityDivingFromIndex)
	{
		return PED::IS_PED_EVASIVE_DIVING(PedIndex, EntityDivingFromIndex);
	}
	Any _SHOOT_TRIGGER_AT_COORDS_Export(Ped ped, float x, float y, float z, int p4, float p5, int p6, float p7)
	{
		return PED::_SHOOT_TRIGGER_AT_COORDS(ped, x, y, z, p4, p5, p6, p7);
	}
	BOOL _IS_THIS_MODEL_A_HORSE_Export(Hash model)
	{
		return PED::_IS_THIS_MODEL_A_HORSE(model);
	}
	void SET_PED_MODEL_IS_SUPPRESSED_Export(Hash PedModelHashKey, BOOL bSurpressModel)
	{
		return PED::SET_PED_MODEL_IS_SUPPRESSED(PedModelHashKey, bSurpressModel);
	}
	BOOL _IS_PED_MODEL_SUPPRESSED_Export(Hash model)
	{
		return PED::_IS_PED_MODEL_SUPPRESSED(model);
	}
	void _0x7ABBD9E449E0DB00_Export(Ped ped, BOOL p1)
	{
		return PED::_0x7ABBD9E449E0DB00(ped, p1);
	}
	void _SET_PED_DISABLE_KICK_MOVE_Export(Ped ped, BOOL disable)
	{
		return PED::_SET_PED_DISABLE_KICK_MOVE(ped, disable);
	}
	void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT_Export(Ped PedIndex, BOOL bAllow)
	{
		return PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PedIndex, bAllow);
	}
	void _0xE6CB36F43A95D75F_Export(Any p0)
	{
		return PED::_0xE6CB36F43A95D75F(p0);
	}
	void SET_PED_LEG_IK_MODE_Export(Ped PedIndex, int nLegIkMode)
	{
		return PED::SET_PED_LEG_IK_MODE(PedIndex, nLegIkMode);
	}
	BOOL _IS_PED_IN_POINT_Export(Ped ped, float x, float y, float z, float radius, BOOL p5)
	{
		return PED::_IS_PED_IN_POINT(ped, x, y, z, radius, p5);
	}
	void _SET_PED_CAN_BE_LASSOED_Export(Ped ped, BOOL toggle)
	{
		return PED::_SET_PED_CAN_BE_LASSOED(ped, toggle);
	}
	void SET_PED_COMBAT_MOVEMENT_Export(Ped PedIndex, int PedCombatMoveType)
	{
		return PED::SET_PED_COMBAT_MOVEMENT(PedIndex, PedCombatMoveType);
	}
	int GET_PED_COMBAT_MOVEMENT_Export(Ped PedIndex)
	{
		return PED::GET_PED_COMBAT_MOVEMENT(PedIndex);
	}
	void _0x815C0074A1BC0D93_Export(Ped ped, int p1)
	{
		return PED::_0x815C0074A1BC0D93(ped, p1);
	}
	int _0xFFDE295662405B25_Export(Ped ped)
	{
		return PED::_0xFFDE295662405B25(ped);
	}
	void SET_PED_COMBAT_ABILITY_Export(Ped PedIndex, int PedCombatAbilityType)
	{
		return PED::SET_PED_COMBAT_ABILITY(PedIndex, PedCombatAbilityType);
	}
	void SET_PED_COMBAT_RANGE_Export(Ped PedIndex, int CombatRange)
	{
		return PED::SET_PED_COMBAT_RANGE(PedIndex, CombatRange);
	}
	void SET_PED_COMBAT_ATTRIBUTES_Export(Ped PedIndex, int CombatAttribute, BOOL bActiveSkill)
	{
		return PED::SET_PED_COMBAT_ATTRIBUTES(PedIndex, CombatAttribute, bActiveSkill);
	}
	BOOL _GET_PED_COMBAT_ATTRIBUTE_Export(Ped ped, int attributeIndex)
	{
		return PED::_GET_PED_COMBAT_ATTRIBUTE(ped, attributeIndex);
	}
	void _SET_PED_COMBAT_ATTRIBUTE_HASH_Export(Ped ped, Hash p1)
	{
		return PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(ped, p1);
	}
	void SET_PED_TARGET_LOSS_RESPONSE_Export(Ped PedIndex, int TargetLossResponse)
	{
		return PED::SET_PED_TARGET_LOSS_RESPONSE(PedIndex, TargetLossResponse);
	}
	void _0x0A4618FFD517E24D_Export(Any p0, Any p1)
	{
		return PED::_0x0A4618FFD517E24D(p0, p1);
	}
	void _0x712B2C2B2471B493_Export(Ped ped, Hash p1)
	{
		return PED::_0x712B2C2B2471B493(ped, p1);
	}
	void _0x00B380FF2DF6AB7A_Export(Any p0, Any p1)
	{
		return PED::_0x00B380FF2DF6AB7A(p0, p1);
	}
	void _SET_PED_COMBAT_STYLE_Export(Ped ped, Hash combatStyleHash, int p2, float duration)
	{
		return PED::_SET_PED_COMBAT_STYLE(ped, combatStyleHash, p2, duration);
	}
	void _CLEAR_PED_COMBAT_STYLE_Export(Ped ped, int p1)
	{
		return PED::_CLEAR_PED_COMBAT_STYLE(ped, p1);
	}
	void _SET_PED_COMBAT_STYLE_MOD_Export(Ped ped, Hash combatStyleModHash, float duration)
	{
		return PED::_SET_PED_COMBAT_STYLE_MOD(ped, combatStyleModHash, duration);
	}
	void _CLEAR_PED_COMBAT_STYLE_MOD_Export(Ped ped, Hash combatStyleModHash)
	{
		return PED::_CLEAR_PED_COMBAT_STYLE_MOD(ped, combatStyleModHash);
	}
	BOOL _0x5BF0B9D9A8E227A0_Export(Ped ped)
	{
		return PED::_0x5BF0B9D9A8E227A0(ped);
	}
	void _0x642720D8D69328B6_Export(Ped ped, Hash p1)
	{
		return PED::_0x642720D8D69328B6(ped, p1);
	}
	BOOL IS_PED_PERFORMING_MELEE_ACTION_Export(Ped PedIndex, int p1, Hash p2)
	{
		return PED::IS_PED_PERFORMING_MELEE_ACTION(PedIndex, p1, p2);
	}
	BOOL _0x99DF2639DA76C1DC_Export(Ped ped1, Ped ped2, int p2)
	{
		return PED::_0x99DF2639DA76C1DC(ped1, ped2, p2);
	}
	float _GET_PED_MELEE_ACTION_PHASE_Export(Ped ped)
	{
		return PED::_GET_PED_MELEE_ACTION_PHASE(ped);
	}
	BOOL IS_PED_BEING_STEALTH_KILLED_Export(Ped PedIndex)
	{
		return PED::IS_PED_BEING_STEALTH_KILLED(PedIndex);
	}
	Ped GET_MELEE_TARGET_FOR_PED_Export(Ped PedIndex)
	{
		return PED::GET_MELEE_TARGET_FOR_PED(PedIndex);
	}
	void _0xDEDBED3020DA49DC_Export(Any p0)
	{
		return PED::_0xDEDBED3020DA49DC(p0);
	}
	void _0xA405BF9F01960C16_Export(Any p0)
	{
		return PED::_0xA405BF9F01960C16(p0);
	}
	Hash _GET_PED_BRAWLING_STYLE_Export(Ped ped)
	{
		return PED::_GET_PED_BRAWLING_STYLE(ped);
	}
	void _SET_PED_BRAWLING_STYLE_Export(Ped ped, Hash brawlingStyle)
	{
		return PED::_SET_PED_BRAWLING_STYLE(ped, brawlingStyle);
	}
	void _0x9D8DFE2DE9CB4DFC_Export(Ped ped)
	{
		return PED::_0x9D8DFE2DE9CB4DFC(ped);
	}
	Any _0xC48AF420371C7407_Export(Ped ped, Hash grapple)
	{
		return PED::_0xC48AF420371C7407(ped, grapple);
	}
	Any _0x5EFA8A3D8A60D662_Export(Any p0, Any p1)
	{
		return PED::_0x5EFA8A3D8A60D662(p0, p1);
	}
	Any _0x242EDF85D4E87B65_Export(Any p0)
	{
		return PED::_0x242EDF85D4E87B65(p0);
	}
	void _SET_PED_COMBAT_BEHAVIOUR_Export(Ped ped, Hash behaviour)
	{
		return PED::_SET_PED_COMBAT_BEHAVIOUR(ped, behaviour);
	}
	void _0x9A4AC116CC1EEE14_Export(Any p0)
	{
		return PED::_0x9A4AC116CC1EEE14(p0);
	}
	void _0xE20027B414BFE6C7_Export(Any p0, Any p1)
	{
		return PED::_0xE20027B414BFE6C7(p0, p1);
	}
	void _SET_PED_BEAT_MULTIPLIER_Export(Ped ped, float p1)
	{
		return PED::_SET_PED_BEAT_MULTIPLIER(ped, p1);
	}
	void _SET_PED_ACTION_DISABLE_FLAG_Export(Ped ped, int actionDisableFlag)
	{
		return PED::_SET_PED_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}
	void _CLEAR_PED_ACTION_DISABLE_FLAG_Export(Ped ped, int actionDisableFlag)
	{
		return PED::_CLEAR_PED_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}
	BOOL _IS_PED_ACTION_DISABLE_FLAG_ENABLED_Export(Ped ped, int actionDisableFlag)
	{
		return PED::_IS_PED_ACTION_DISABLE_FLAG_ENABLED(ped, actionDisableFlag);
	}
	void _SET_PED_TARGET_ACTION_DISABLE_FLAG_Export(Ped ped, int actionDisableFlag)
	{
		return PED::_SET_PED_TARGET_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}
	void _CLEAR_PED_TARGET_ACTION_DISABLE_FLAG_Export(Ped ped, int actionDisableFlag)
	{
		return PED::_CLEAR_PED_TARGET_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}
	BOOL _IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED_Export(Ped ped, int actionDisableFlag)
	{
		return PED::_IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED(ped, actionDisableFlag);
	}
	void _0x57F35552E771BE9D_Export(Ped ped, int p1)
	{
		return PED::_0x57F35552E771BE9D(ped, p1);
	}
	void _0x7C10221CE718AA72_Export(Ped ped, int p1)
	{
		return PED::_0x7C10221CE718AA72(ped, p1);
	}
	BOOL _0x0D3B1568917EBDA0_Export(Ped ped, int p1)
	{
		return PED::_0x0D3B1568917EBDA0(ped, p1);
	}
	void _0x29F3539189D3E277_Export(Any p0, Any p1)
	{
		return PED::_0x29F3539189D3E277(p0, p1);
	}
	void _0xE9E06EA514A69061_Export(Any p0, Any p1)
	{
		return PED::_0xE9E06EA514A69061(p0, p1);
	}
	void _SET_PED_WRITHING_DURATION_Export(Ped ped, float writhingDuration1, float writhingDuration2, int p3)
	{
		return PED::_SET_PED_WRITHING_DURATION(ped, writhingDuration1, writhingDuration2, p3);
	}
	float _GET_PED_REMAINING_REVIVAL_TIME_Export(Ped ped, BOOL normalized)
	{
		return PED::_GET_PED_REMAINING_REVIVAL_TIME(ped, normalized);
	}
	void SET_PAUSE_PED_WRITHE_BLEEDOUT_Export(Ped ped, BOOL toggle)
	{
		return PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(ped, toggle);
	}
	BOOL _0x12EB4E31F092C9B3_Export(Ped ped)
	{
		return PED::_0x12EB4E31F092C9B3(ped);
	}
	BOOL GET_PED_IS_GRAPPLING_Export(Ped ped)
	{
		return PED::GET_PED_IS_GRAPPLING(ped);
	}
	BOOL GET_PED_IS_BEING_GRAPPLED_Export(Ped ped)
	{
		return PED::GET_PED_IS_BEING_GRAPPLED(ped);
	}
	Ped _GET_PED_GRAPPLER_Export(Ped ped)
	{
		return PED::_GET_PED_GRAPPLER(ped);
	}
	int GET_PED_GRAPPLE_STATE_Export(Ped ped)
	{
		return PED::GET_PED_GRAPPLE_STATE(ped);
	}
	Hash _GET_PED_GRAPPLE_STYLE_Export(Ped ped)
	{
		return PED::_GET_PED_GRAPPLE_STYLE(ped);
	}
	Any _SET_PED_GRAPPLE_STYLE_Export(Ped ped, Hash style)
	{
		return PED::_SET_PED_GRAPPLE_STYLE(ped, style);
	}
	void _SET_PED_GRAPPLE_SEQUENCE_Export(Ped ped, const char* grappleSequence)
	{
		return PED::_SET_PED_GRAPPLE_SEQUENCE(ped, grappleSequence);
	}
	void _SET_PED_GRAPPLE_FLAG_Export(Ped ped, int flag, BOOL enable)
	{
		return PED::_SET_PED_GRAPPLE_FLAG(ped, flag, enable);
	}
	void _CLEAR_PED_GRAPPLE_FLAG_Export(Ped ped, int flag)
	{
		return PED::_CLEAR_PED_GRAPPLE_FLAG(ped, flag);
	}
	int _GET_PED_GRAPPLE_FLAG_Export(Ped ped)
	{
		return PED::_GET_PED_GRAPPLE_FLAG(ped);
	}
	void _SET_PED_GRAPPLE_ACTION_Export(Ped ped, Hash grappleAction)
	{
		return PED::_SET_PED_GRAPPLE_ACTION(ped, grappleAction);
	}
	Any _SET_PED_GRAPPLE_EFFECT_MULTIPLIER_Export(Ped ped, float multiplier)
	{
		return PED::_SET_PED_GRAPPLE_EFFECT_MULTIPLIER(ped, multiplier);
	}
	void _SET_PED_GRAPPLE_ANIMATION_Export(Ped ped, Hash grappleAnim)
	{
		return PED::_SET_PED_GRAPPLE_ANIMATION(ped, grappleAnim);
	}
	void SET_PED_FLEE_ATTRIBUTES_Export(Ped PedIndex, int FleeAttribute, BOOL bActiveSkill)
	{
		return PED::SET_PED_FLEE_ATTRIBUTES(PedIndex, FleeAttribute, bActiveSkill);
	}
	BOOL _IS_PED_COWERING_Export(Ped ped)
	{
		return PED::_IS_PED_COWERING(ped);
	}
	BOOL IS_ANY_PED_NEAR_POINT_Export(float pointX, float pointY, float pointZ, float radius)
	{
		return PED::IS_ANY_PED_NEAR_POINT(pointX, pointY, pointZ, radius);
	}
	void FORCE_PED_AI_AND_ANIMATION_UPDATE_Export(Ped PedIndex, BOOL ForceAIPreCameraUpdate, BOOL ForceZeroTimestep)
	{
		return PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PedIndex, ForceAIPreCameraUpdate, ForceZeroTimestep);
	}
	void _0xC2722B252C79E641_Export(Ped ped, Any p1, Any p2, BOOL p3)
	{
		return PED::_0xC2722B252C79E641(ped, p1, p2, p3);
	}
	BOOL _IS_PED_DOING_SCENARIO_TRANSITION_Export(Ped ped)
	{
		return PED::_IS_PED_DOING_SCENARIO_TRANSITION(ped);
	}
	BOOL _0x2DC0E8DCBD3546E9_Export(Ped ped)
	{
		return PED::_0x2DC0E8DCBD3546E9(ped);
	}
	void _ADD_SCENARIO_TRANSITION_Export(Ped ped)
	{
		return PED::_ADD_SCENARIO_TRANSITION(ped);
	}
	void _GIVE_PED_HASH_COMMAND_Export(Ped ped, Hash commandHash, float activationDuration)
	{
		return PED::_GIVE_PED_HASH_COMMAND(ped, commandHash, activationDuration);
	}
	BOOL _GET_IS_PED_COMMAND_HASH_PRESENT_Export(Ped ped, Hash commandHash)
	{
		return PED::_GET_IS_PED_COMMAND_HASH_PRESENT(ped, commandHash);
	}
	BOOL IS_PED_HEADING_TOWARDS_POSITION_Export(Ped iPedIndex, float vPointX, float vPointY, float vPointZ, float fDegreesDelta)
	{
		return PED::IS_PED_HEADING_TOWARDS_POSITION(iPedIndex, vPointX, vPointY, vPointZ, fDegreesDelta);
	}
	void _0x600BBDD29820370C_Export(Ped ped)
	{
		return PED::_0x600BBDD29820370C(ped);
	}
	void REQUEST_PED_VISIBILITY_TRACKING_Export(Ped ped)
	{
		return PED::REQUEST_PED_VISIBILITY_TRACKING(ped);
	}
	void RELEASE_PED_VISIBILITY_TRACKING_Export(Ped ped)
	{
		return PED::RELEASE_PED_VISIBILITY_TRACKING(ped);
	}
	void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING_Export(Ped ped, BOOL trackvehicle)
	{
		return PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ped, trackvehicle);
	}
	void REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING_Export(Ped ped, BOOL useSmallBox)
	{
		return PED::REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(ped, useSmallBox);
	}
	int GET_TRACKED_PED_PIXELCOUNT_Export(Ped ped)
	{
		return PED::GET_TRACKED_PED_PIXELCOUNT(ped);
	}
	BOOL IS_TRACKED_PED_VISIBLE_Export(Ped ped)
	{
		return PED::IS_TRACKED_PED_VISIBLE(ped);
	}
	BOOL _IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN_Export(Ped ped, float percent)
	{
		return PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ped, percent);
	}
	BOOL _IS_PED_VISIBILITY_TRACKED_Export(Ped ped)
	{
		return PED::_IS_PED_VISIBILITY_TRACKED(ped);
	}
	BOOL CAN_PED_BE_MOUNTED_Export(Ped ped)
	{
		return PED::CAN_PED_BE_MOUNTED(ped);
	}
	BOOL _IS_META_PED_FISH_Export(Ped ped)
	{
		return PED::_IS_META_PED_FISH(ped);
	}
	BOOL IS_EVENT_IN_QUEUE_Export(Ped ped, Hash eventType)
	{
		return PED::IS_EVENT_IN_QUEUE(ped, eventType);
	}
	int CAN_PED_SEE_ENTITY_Export(Ped ped, Entity targetEntity, BOOL p2, BOOL p3)
	{
		return PED::CAN_PED_SEE_ENTITY(ped, targetEntity, p2, p3);
	}
	int CAN_PED_SEE_PED_CACHED_Export(Ped ped, Ped targetPed, BOOL p2)
	{
		return PED::CAN_PED_SEE_PED_CACHED(ped, targetPed, p2);
	}
	float _0x0EA9EACBA3B01601_Export(Ped ped1, Ped ped2, BOOL p2)
	{
		return PED::_0x0EA9EACBA3B01601(ped1, ped2, p2);
	}
	int GET_PED_BONE_INDEX_Export(Ped iPedIndex, int boneTag)
	{
		return PED::GET_PED_BONE_INDEX(iPedIndex, boneTag);
	}
	int _0xC5303F460A40D21D_Export(Ped ped, int p1)
	{
		return PED::_0xC5303F460A40D21D(ped, p1);
	}
	void _0xE29D8CD66553DBAA_Export(Ped horse)
	{
		return PED::_0xE29D8CD66553DBAA(horse);
	}
	void _0xB06F5F1DEF417216_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0xB06F5F1DEF417216(p0, p1, p2, p3);
	}
	void _0xFC23348F0F4E245F_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0xFC23348F0F4E245F(p0, p1, p2, p3);
	}
	void _0x9184788BFF1EDAD7_Export(Any p0, Any p1)
	{
		return PED::_0x9184788BFF1EDAD7(p0, p1);
	}
	void _SET_PED_DIRT_CLEANED_Export(Ped ped, float p1, int p2, BOOL p3, BOOL p4)
	{
		return PED::_SET_PED_DIRT_CLEANED(ped, p1, p2, p3, p4);
	}
	Any _0x0105FEE8F9091255_Export(Any p0, Any p1)
	{
		return PED::_0x0105FEE8F9091255(p0, p1);
	}
	void _0xD049920CD29F6CC8_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PED::_0xD049920CD29F6CC8(p0, p1, p2, p3, p4);
	}
	Any _0xBB3E5370EBB6BE28_Export(Any p0, Any p1)
	{
		return PED::_0xBB3E5370EBB6BE28(p0, p1);
	}
	void _0x2FA568BFA725F8D6_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0x2FA568BFA725F8D6(p0, p1, p2, p3);
	}
	Any _0x56E4BAD93D33453C_Export(Any p0, Any p1)
	{
		return PED::_0x56E4BAD93D33453C(p0, p1);
	}
	void _0x75A082563B4452E5_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0x75A082563B4452E5(p0, p1, p2, p3);
	}
	void _0x16802C32B2FCA06B_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0x16802C32B2FCA06B(p0, p1, p2, p3);
	}
	void _0x8BA0C65AC15A7D33_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0x8BA0C65AC15A7D33(p0, p1, p2, p3);
	}
	void _0x0FFDF937E5C11382_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return PED::_0x0FFDF937E5C11382(p0, p1, p2, p3, p4, p5);
	}
	void _0x5FCF25D584065BFD_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0x5FCF25D584065BFD(p0, p1, p2, p3);
	}
	void _0xA2116C1E4ED85C24_Export(Ped ped, BOOL inverted)
	{
		return PED::_0xA2116C1E4ED85C24(ped, inverted);
	}
	BOOL FORCE_PED_MOTION_STATE_Export(Ped PedIndex, Hash state, BOOL shouldRestart, int exitstate, BOOL ForceAIPreCameraUpdate)
	{
		return PED::FORCE_PED_MOTION_STATE(PedIndex, state, shouldRestart, exitstate, ForceAIPreCameraUpdate);
	}
	void _0x75D3333409CD33CE_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x75D3333409CD33CE(p0, p1, p2);
	}
	BOOL GET_PED_CURRENT_MOVE_BLEND_RATIO_Export(Ped PedIndex, float* MbrXOut, float* MbrYOut)
	{
		return PED::GET_PED_CURRENT_MOVE_BLEND_RATIO(PedIndex, MbrXOut, MbrYOut);
	}
	void SET_PED_MAX_MOVE_BLEND_RATIO_Export(Ped PedIndex, float MoveBlendRatio)
	{
		return PED::SET_PED_MAX_MOVE_BLEND_RATIO(PedIndex, MoveBlendRatio);
	}
	void SET_PED_MIN_MOVE_BLEND_RATIO_Export(Ped PedIndex, float MoveBlendRatio)
	{
		return PED::SET_PED_MIN_MOVE_BLEND_RATIO(PedIndex, MoveBlendRatio);
	}
	void _0xBC1DC48270468444_Export(Any p0)
	{
		return PED::_0xBC1DC48270468444(p0);
	}
	float _0x46BF2A810679D6E6_Export(Ped ped, float maxMoveBlendRatio)
	{
		return PED::_0x46BF2A810679D6E6(ped, maxMoveBlendRatio);
	}
	float _0xCA95924C893A0C91_Export(Ped ped, float p1)
	{
		return PED::_0xCA95924C893A0C91(ped, p1);
	}
	void _HORSE_AGITATE_Export(Ped mount, BOOL kickOffRider)
	{
		return PED::_HORSE_AGITATE(mount, kickOffRider);
	}
	void _0x413697EC260AABBF_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x413697EC260AABBF(p0, p1, p2);
	}
	void _0xCAC43D060099EA72_Export(Ped ped)
	{
		return PED::_0xCAC43D060099EA72(ped);
	}
	void _0xC9151483CC06A414_Export(Ped ped)
	{
		return PED::_0xC9151483CC06A414(ped);
	}
	void _0xAD3330E3C3E98007_Export(Any p0, Any p1)
	{
		return PED::_0xAD3330E3C3E98007(p0, p1);
	}
	Any _0xB8E2D655E1D5BD39_Export(Any p0)
	{
		return PED::_0xB8E2D655E1D5BD39(p0);
	}
	Any _0x7BB810E8B343AC7B_Export(Any p0)
	{
		return PED::_0x7BB810E8B343AC7B(p0);
	}
	void SET_PED_MOVE_RATE_OVERRIDE_Export(Ped PedIndex, float DesiredRate)
	{
		return PED::SET_PED_MOVE_RATE_OVERRIDE(PedIndex, DesiredRate);
	}
	int GET_PED_NEARBY_VEHICLES_Export(Ped PedIndex, Vehicle* array)
	{
		return PED::GET_PED_NEARBY_VEHICLES(PedIndex, array);
	}
	int GET_PED_NEARBY_PEDS_Export(Ped PedIndex, void* array, int ExclusionPedType, int p3)
	{
		return PED::GET_PED_NEARBY_PEDS(PedIndex, array, ExclusionPedType, p3);
	}
	BOOL IS_PED_READY_TO_RENDER_Export(Ped ped)
	{
		return PED::IS_PED_READY_TO_RENDER(ped);
	}
	void _0x6A489892E813951A_Export(Any p0)
	{
		return PED::_0x6A489892E813951A(p0);
	}
	BOOL IS_PED_USING_ACTION_MODE_Export(Ped PedIndex)
	{
		return PED::IS_PED_USING_ACTION_MODE(PedIndex);
	}
	BOOL _IS_PED_USING_ACTION_MODE_2_Export(Ped ped)
	{
		return PED::_IS_PED_USING_ACTION_MODE_2(ped);
	}
	void SET_PED_USING_ACTION_MODE_Export(Ped PedIndex, BOOL UsingActionMode, int ActionModeTime, const char* ActionModeName)
	{
		return PED::SET_PED_USING_ACTION_MODE(PedIndex, UsingActionMode, ActionModeTime, ActionModeName);
	}
	void SET_PED_CAPSULE_Export(Ped PedIndex, float Radius)
	{
		return PED::SET_PED_CAPSULE(PedIndex, Radius);
	}
	Ped _GET_RIDER_OF_MOUNT_Export(Ped mount, BOOL p1)
	{
		return PED::_GET_RIDER_OF_MOUNT(mount, p1);
	}
	void SPAWNPOINTS_START_SEARCH_Export(float vSearchOriginX, float vSearchOriginY, float vSearchOriginZ, float fSearchRadius, float fMaxDistZ, int iFlags, float fMinimumSpacing, int iMaxSearchDurationMS, float p8)
	{
		return PED::SPAWNPOINTS_START_SEARCH(vSearchOriginX, vSearchOriginY, vSearchOriginZ, fSearchRadius, fMaxDistZ, iFlags, fMinimumSpacing, iMaxSearchDurationMS, p8);
	}
	void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA_Export(float vPoint1X, float vPoint1Y, float vPoint1Z, float vPoint2X, float vPoint2Y, float vPoint2Z, float fWidth, int iFlags, float fMinimumSpacing, int iMaxSearchDurationMS, float p10)
	{
		return PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(vPoint1X, vPoint1Y, vPoint1Z, vPoint2X, vPoint2Y, vPoint2Z, fWidth, iFlags, fMinimumSpacing, iMaxSearchDurationMS, p10);
	}
	void _SPAWNPOINTS_START_SEARCH_WITH_VOLUME_Export(Volume volume, int spawnpointsFlag, float p2, int duration, float p4)
	{
		return PED::_SPAWNPOINTS_START_SEARCH_WITH_VOLUME(volume, spawnpointsFlag, p2, duration, p4);
	}
	void SPAWNPOINTS_CANCEL_SEARCH_Export()
	{
		return PED::SPAWNPOINTS_CANCEL_SEARCH();
	}
	BOOL SPAWNPOINTS_IS_SEARCH_ACTIVE_Export()
	{
		return PED::SPAWNPOINTS_IS_SEARCH_ACTIVE();
	}
	BOOL SPAWNPOINTS_IS_SEARCH_COMPLETE_Export()
	{
		return PED::SPAWNPOINTS_IS_SEARCH_COMPLETE();
	}
	BOOL SPAWNPOINTS_IS_SEARCH_FAILED_Export()
	{
		return PED::SPAWNPOINTS_IS_SEARCH_FAILED();
	}
	int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS_Export()
	{
		return PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
	}
	void SPAWNPOINTS_GET_SEARCH_RESULT_Export(int iResultIndex, float* fOut_X, float* fOut_Y, float* fOut_Z)
	{
		return PED::SPAWNPOINTS_GET_SEARCH_RESULT(iResultIndex, fOut_X, fOut_Y, fOut_Z);
	}
	void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS_Export(int iResultIndex, int* iOut_Flags)
	{
		return PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iResultIndex, iOut_Flags);
	}
	void SET_IK_TARGET_Export(Ped PedIndex, int IKPart, Entity TargetEntityIndex, int TargetBone, float TargetOffsetX, float TargetOffsetY, float TargetOffsetZ, int Flags, int BlendInTimeMS, int BlendOutTimeMS)
	{
		return PED::SET_IK_TARGET(PedIndex, IKPart, TargetEntityIndex, TargetBone, TargetOffsetX, TargetOffsetY, TargetOffsetZ, Flags, BlendInTimeMS, BlendOutTimeMS);
	}
	void _REQUEST_PED_EMOTIONAL_PRESET_Export(Ped ped, const char* name)
	{
		return PED::_REQUEST_PED_EMOTIONAL_PRESET(ped, name);
	}
	BOOL _HAS_PED_EMOTIONAL_PRESET_LOADED_Export(Ped ped, const char* name)
	{
		return PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(ped, name);
	}
	void _REMOVE_PED_EMOTIONAL_PRESET_Export(Ped ped, const char* name)
	{
		return PED::_REMOVE_PED_EMOTIONAL_PRESET(ped, name);
	}
	void _REQUEST_MOTION_TYPE_ASSET_Export(Hash nameHash, Ped ped)
	{
		return PED::_REQUEST_MOTION_TYPE_ASSET(nameHash, ped);
	}
	BOOL HAS_MOTION_TYPE_ASSET_LOADED_Export(Hash nameHash, Ped ped)
	{
		return PED::HAS_MOTION_TYPE_ASSET_LOADED(nameHash, ped);
	}
	void _REMOVE_MOTION_TYPE_ASSET_Export(Hash nameHash, Ped ped)
	{
		return PED::_REMOVE_MOTION_TYPE_ASSET(nameHash, ped);
	}
	BOOL _0x290B2E6CCDE532E1_Export(Ped ped)
	{
		return PED::_0x290B2E6CCDE532E1(ped);
	}
	BOOL _0x0EEF7A81C17679DB_Export(Ped ped)
	{
		return PED::_0x0EEF7A81C17679DB(ped);
	}
	void SET_PED_LOD_MULTIPLIER_Export(Ped PedIndex, float multiplier)
	{
		return PED::SET_PED_LOD_MULTIPLIER(PedIndex, multiplier);
	}
	float _GET_PED_LOD_MULTIPLIER_Export(Ped ped)
	{
		return PED::_GET_PED_LOD_MULTIPLIER(ped);
	}
	Any _0xA218D2BBCAA7388C_Export(Any p0, Any p1)
	{
		return PED::_0xA218D2BBCAA7388C(p0, p1);
	}
	BOOL IS_ANY_HOSTILE_PED_NEAR_POINT_Export(Ped iPedIndex, float pointX, float pointY, float pointZ, float radius)
	{
		return PED::IS_ANY_HOSTILE_PED_NEAR_POINT(iPedIndex, pointX, pointY, pointZ, radius);
	}
	void _0xCBDE59C48F2B06F5_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xCBDE59C48F2B06F5(p0, p1, p2);
	}
	void _0x6A190B94C2541A99_Export(Any p0)
	{
		return PED::_0x6A190B94C2541A99(p0);
	}
	BOOL IS_TARGET_PED_IN_PERCEPTION_AREA_Export(Ped PedIndex, Ped TargetPedIndex, float fFocusAngle, float fFocusDistance, float fPeripheralAngle, float fPeripheralDistance)
	{
		return PED::IS_TARGET_PED_IN_PERCEPTION_AREA(PedIndex, TargetPedIndex, fFocusAngle, fFocusDistance, fPeripheralAngle, fPeripheralDistance);
	}
	void SET_POP_CONTROL_SPHERE_THIS_FRAME_Export(float centerX, float centerY, float centerZ, float pedRadius, float vehRadius)
	{
		return PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(centerX, centerY, centerZ, pedRadius, vehRadius);
	}
	BOOL IS_PED_HOGTIED_Export(Ped ped)
	{
		return PED::IS_PED_HOGTIED(ped);
	}
	BOOL IS_PED_BEING_HOGTIED_Export(Ped ped)
	{
		return PED::IS_PED_BEING_HOGTIED(ped);
	}
	Ped _0x3D9F958834AB9C30_Export(Ped ped)
	{
		return PED::_0x3D9F958834AB9C30(ped);
	}
	BOOL _0x913D04A5176F84C9_Export(Ped ped)
	{
		return PED::_0x913D04A5176F84C9(ped);
	}
	BOOL IS_PED_HOGTYING_Export(Ped ped)
	{
		return PED::IS_PED_HOGTYING(ped);
	}
	BOOL _GET_PED_LASSO_HOGTIE_FLAG_Export(Ped ped, int flagId)
	{
		return PED::_GET_PED_LASSO_HOGTIE_FLAG(ped, flagId);
	}
	void SET_PED_LASSO_HOGTIE_FLAG_Export(Ped ped, int flagId, BOOL value)
	{
		return PED::SET_PED_LASSO_HOGTIE_FLAG(ped, flagId, value);
	}
	int _0x4642182A298187D0_Export(Ped ped, int p1, void* p2, int p3, int p4)
	{
		return PED::_0x4642182A298187D0(ped, p1, p2, p3, p4);
	}
	void _0x6B67320E0D57856A_Export(Ped ped, void* p1, int p2, BOOL p3)
	{
		return PED::_0x6B67320E0D57856A(ped, p1, p2, p3);
	}
	Entity _GET_FIRST_ENTITY_PED_IS_CARRYING_Export(Ped ped)
	{
		return PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(ped);
	}
	void _0xAA6C49AE90A32299_Export(Ped ped, Hash p1)
	{
		return PED::_0xAA6C49AE90A32299(ped, p1);
	}
	Ped _GET_CARRIER_AS_PED_Export(Entity entity)
	{
		return PED::_GET_CARRIER_AS_PED(entity);
	}
	Ped _GET_CARRIER_AS_MOUNT_Export(Entity entity)
	{
		return PED::_GET_CARRIER_AS_MOUNT(entity);
	}
	Ped _GET_CARRIER_AS_HUMAN_Export(Entity entity)
	{
		return PED::_GET_CARRIER_AS_HUMAN(entity);
	}
	Any GET_CARRIED_ATTACHED_INFO_FOR_SLOT_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(p0, p1, p2, p3);
	}
	void DETACH_CARRIABLE_ENTITY_Export(Entity entity, BOOL p1, BOOL p2)
	{
		return PED::DETACH_CARRIABLE_ENTITY(entity, p1, p2);
	}
	void FIND_ALL_ATTACHED_CARRIABLE_ENTITIES_Export(Ped ped, ItemSet itemset)
	{
		return PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	}
	BOOL IS_PED_CARRYING_SOMETHING_Export(Ped ped)
	{
		return PED::IS_PED_CARRYING_SOMETHING(ped);
	}
	BOOL _0xB65927F861E7AE39_Export(Ped ped, int p1)
	{
		return PED::_0xB65927F861E7AE39(ped, p1);
	}
	BOOL _0xA1FBAC56D38563E2_Export(Volume volume)
	{
		return PED::_0xA1FBAC56D38563E2(volume);
	}
	Any _0x6F43C351A5D51E2F_Export(Ped ped, void* p1)
	{
		return PED::_0x6F43C351A5D51E2F(ped, p1);
	}
	BOOL IS_PED_LASSOED_Export(Ped ped)
	{
		return PED::IS_PED_LASSOED(ped);
	}
	Entity _GET_LASSOER_OF_PED_Export(Ped ped)
	{
		return PED::_GET_LASSOER_OF_PED(ped);
	}
	Entity _GET_LASSO_TARGET_Export(Ped ped)
	{
		return PED::_GET_LASSO_TARGET(ped);
	}
	Ped _GET_LASSOED_LASSOER_Export(Ped ped)
	{
		return PED::_GET_LASSOED_LASSOER(ped);
	}
	void SET_LOOTING_FLAG_Export(Ped ped, int lootFlag, BOOL enabled)
	{
		return PED::SET_LOOTING_FLAG(ped, lootFlag, enabled);
	}
	BOOL _GET_LOOTING_FLAG_Export(Ped ped, int lootFlag)
	{
		return PED::_GET_LOOTING_FLAG(ped, lootFlag);
	}
	int _REFRESH_LOOT_STATE_FOR_PED_Export(Ped ped, int p1, Ped* lootTarget, int p3, int p4)
	{
		return PED::_REFRESH_LOOT_STATE_FOR_PED(ped, p1, lootTarget, p3, p4);
	}
	int GET_PED_LOOT_STATUS_MP_Export(Ped ped)
	{
		return PED::GET_PED_LOOT_STATUS_MP(ped);
	}
	Ped _0x4B19F171450E0D4F_Export(Ped ped)
	{
		return PED::_0x4B19F171450E0D4F(ped);
	}
	BOOL _0x758F081DB204DDDE_Export(Ped ped)
	{
		return PED::_0x758F081DB204DDDE(ped);
	}
	Entity GET_LOOTING_PICKUP_TARGET_ENTITY_Export(Ped ped)
	{
		return PED::GET_LOOTING_PICKUP_TARGET_ENTITY(ped);
	}
	Any _0x7B5C293238EE4F20_Export(Any p0)
	{
		return PED::_0x7B5C293238EE4F20(p0);
	}
	void _0xAE6B68A83ABBE7C0_Export(Any p0)
	{
		return PED::_0xAE6B68A83ABBE7C0(p0);
	}
	BOOL _0xA4B6432E3880F2F9_Export(Ped ped)
	{
		return PED::_0xA4B6432E3880F2F9(ped);
	}
	BOOL _ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_Export(Ped ped)
	{
		return PED::_ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(ped);
	}
	BOOL _REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_Export(Ped ped)
	{
		return PED::_REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(ped);
	}
	BOOL IS_PED_INCAPACITATED_Export(Ped ped)
	{
		return PED::IS_PED_INCAPACITATED(ped);
	}
	void _SET_PED_INCAPACITATION_MODIFIERS_Export(Ped ped, BOOL canBeIncapacitated, int threshold, int bleedoutTime, int p4)
	{
		return PED::_SET_PED_INCAPACITATION_MODIFIERS(ped, canBeIncapacitated, threshold, bleedoutTime, p4);
	}
	BOOL _GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME_Export(Ped ped)
	{
		return PED::_GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME(ped);
	}
	void SET_PED_CAN_BE_INCAPACITATED_Export(Ped ped, BOOL toggle)
	{
		return PED::SET_PED_CAN_BE_INCAPACITATED(ped, toggle);
	}
	int _GET_PED_INCAPACITATION_HEALTH_Export(Ped ped)
	{
		return PED::_GET_PED_INCAPACITATION_HEALTH(ped);
	}
	void _SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION_Export(Ped ped, float duration)
	{
		return PED::_SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION(ped, duration);
	}
	void _RESET_PED_INCAPACITATION_BLEED_OUT_DURATION_Export(Ped ped)
	{
		return PED::_RESET_PED_INCAPACITATION_BLEED_OUT_DURATION(ped);
	}
	void _SET_PED_INCAPACITATION_FLAGS_Export(Ped ped, int flags)
	{
		return PED::_SET_PED_INCAPACITATION_FLAGS(ped, flags);
	}
	void _0x92A1B55A59720395_Export(Any p0, Any p1)
	{
		return PED::_0x92A1B55A59720395(p0, p1);
	}
	void _INCAPACITATED_REVIVE_Export(Ped ped, Ped ped2)
	{
		return PED::_INCAPACITATED_REVIVE(ped, ped2);
	}
	int _GET_INCAPACITATION_TIME_REMAINING_Export(Ped ped)
	{
		return PED::_GET_INCAPACITATION_TIME_REMAINING(ped);
	}
	void _SET_PED_KNOCKED_BY_ONE_HIT_Export(Ped ped, float p1)
	{
		return PED::_SET_PED_KNOCKED_BY_ONE_HIT(ped, p1);
	}
	void _0x2E5B5D1F1453E08E_Export(Ped ped, int p1)
	{
		return PED::_0x2E5B5D1F1453E08E(ped, p1);
	}
	void _0x29924EB8EE9DB926_Export(Ped ped, float p1)
	{
		return PED::_0x29924EB8EE9DB926(ped, p1);
	}
	void _SET_PED_ACTIVE_PLAYER_TYPE_Export(Ped ped, Hash playerType)
	{
		return PED::_SET_PED_ACTIVE_PLAYER_TYPE(ped, playerType);
	}
	Any _0xCB86D3E3E3708901_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PED::_0xCB86D3E3E3708901(p0, p1, p2, p3, p4);
	}
	void _0x633F83B301C87994_Export(Any p0, Any p1)
	{
		return PED::_0x633F83B301C87994(p0, p1);
	}
	BOOL _0x5203038FF8BAE577_Export(Ped ped, int p1, int p2)
	{
		return PED::_0x5203038FF8BAE577(ped, p1, p2);
	}
	BOOL _0x7F090958AE95B61B_Export(Ped ped, int p1)
	{
		return PED::_0x7F090958AE95B61B(ped, p1);
	}
	void _0xC494C76A34266E82_Export(Ped ped, int p1)
	{
		return PED::_0xC494C76A34266E82(ped, p1);
	}
	BOOL _0xC3995D396F1D97B6_Export(Ped ped, int p1, int p2)
	{
		return PED::_0xC3995D396F1D97B6(ped, p1, p2);
	}
	void _0x15F4732C357B1D6D_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x15F4732C357B1D6D(p0, p1, p2);
	}
	BOOL _0x947E43F544B6AB34_Export(Ped ped, Player player, int flag, int ms)
	{
		return PED::_0x947E43F544B6AB34(ped, player, flag, ms);
	}
	Any _0x32417CB860A3BDC4_Export(Any p0, Any p1)
	{
		return PED::_0x32417CB860A3BDC4(p0, p1);
	}
	void _0xE737D5F14304A2EC_Export(Ped ped, Player player, int p2)
	{
		return PED::_0xE737D5F14304A2EC(ped, player, p2);
	}
	void _0xEBD49472BCCF7642_Export(Any p0, Any p1)
	{
		return PED::_0xEBD49472BCCF7642(p0, p1);
	}
	void _SET_PLAYER_GREET_DISABLED_FOR_PED_Export(Ped ped, Player player, int duration)
	{
		return PED::_SET_PLAYER_GREET_DISABLED_FOR_PED(ped, player, duration);
	}
	void _SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED_Export(Ped ped, Player player, int duration)
	{
		return PED::_SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED(ped, player, duration);
	}
	void _0xB9BDFAE609DFB7C5_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xB9BDFAE609DFB7C5(p0, p1, p2);
	}
	Any _0xF7327ACC7A89AEF1_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xF7327ACC7A89AEF1(p0, p1, p2);
	}
	int _GET_PED_ATTITUDE_Export(Ped ped, Player player)
	{
		return PED::_GET_PED_ATTITUDE(ped, player);
	}
	BOOL _0x1E017404784AA6A3_Export(Ped ped, Hash p1)
	{
		return PED::_0x1E017404784AA6A3(ped, p1);
	}
	void _0x2B4CE170DE09F346_Export(Ped ped, Hash p1)
	{
		return PED::_0x2B4CE170DE09F346(ped, p1);
	}
	Any _0x7C8AA850617651D9_Export(Any p0, Any p1)
	{
		return PED::_0x7C8AA850617651D9(p0, p1);
	}
	float _GET_PED_MOTIVATION_Export(Ped ped, int motivationState, Ped targetPed)
	{
		return PED::_GET_PED_MOTIVATION(ped, motivationState, targetPed);
	}
	void _SET_PED_MOTIVATION_Export(Ped ped, int motivationState, float threshold, Ped targetPed)
	{
		return PED::_SET_PED_MOTIVATION(ped, motivationState, threshold, targetPed);
	}
	void _0x23BDE06596A22CEC_Export(Ped ped, int p1, float p2, Any p3)
	{
		return PED::_0x23BDE06596A22CEC(ped, p1, p2, p3);
	}
	void _0xCDFB8C04D4C95D9B_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0xCDFB8C04D4C95D9B(p0, p1, p2, p3);
	}
	BOOL _GET_IS_PED_MOTIVATION_STATE_ENABLED_Export(Ped ped, int motivationState)
	{
		return PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(ped, motivationState);
	}
	void _SET_PED_MOTIVATION_STATE_OVERRIDE_Export(Ped ped, int motivationState, BOOL enabled)
	{
		return PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(ped, motivationState, enabled);
	}
	void _SET_PED_MOTIVATION_MODIFIER_Export(Ped ped, int motivationState, float modifier)
	{
		return PED::_SET_PED_MOTIVATION_MODIFIER(ped, motivationState, modifier);
	}
	void _0xFD8E853F0BC2E942_Export(Any p0, Any p1)
	{
		return PED::_0xFD8E853F0BC2E942(p0, p1);
	}
	void _SET_PED_SCENT_Export(Ped ped, float scent)
	{
		return PED::_SET_PED_SCENT(ped, scent);
	}
	void _SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_Export(Ped ped, float p1)
	{
		return PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(ped, p1);
	}
	void _RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_Export(Ped ped)
	{
		return PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(ped);
	}
	void _0xC6C4E15CF7D52FEA_Export(Any p0, Any p1)
	{
		return PED::_0xC6C4E15CF7D52FEA(p0, p1);
	}
	void _SET_PED_VOICE_VOLUME_Export(Ped ped, float volume)
	{
		return PED::_SET_PED_VOICE_VOLUME(ped, volume);
	}
	void _0x0F967019CC853BCC_Export(Any p0, Any p1)
	{
		return PED::_0x0F967019CC853BCC(p0, p1);
	}
	BOOL _IS_PED_DRAGGING_Export(Ped ped)
	{
		return PED::_IS_PED_DRAGGING(ped);
	}
	BOOL IS_PED_BEING_DRAGGED_Export(Ped ped)
	{
		return PED::IS_PED_BEING_DRAGGED(ped);
	}
	void _0x070A3841406C43D5_Export(Any p0, Any p1)
	{
		return PED::_0x070A3841406C43D5(p0, p1);
	}
	BOOL _ADD_PED_STAY_OUT_VOLUME_Export(Ped ped, Volume volume)
	{
		return PED::_ADD_PED_STAY_OUT_VOLUME(ped, volume);
	}
	BOOL _REMOVE_PED_STAY_OUT_VOLUME_Export(Ped ped, Volume volume)
	{
		return PED::_REMOVE_PED_STAY_OUT_VOLUME(ped, volume);
	}
	void _0x9E66708B2B41F14A_Export(Any p0, Any p1)
	{
		return PED::_0x9E66708B2B41F14A(p0, p1);
	}
	void _0xF634E2892220EF34_Export(Ped ped, Any p1)
	{
		return PED::_0xF634E2892220EF34(ped, p1);
	}
	void _0xAAC0EE3B4999ABB5_Export(Ped ped, Ped targetPed)
	{
		return PED::_0xAAC0EE3B4999ABB5(ped, targetPed);
	}
	Entity GET_PED_MOTION_FOCUS_ENTITY_Export(Ped ped)
	{
		return PED::GET_PED_MOTION_FOCUS_ENTITY(ped);
	}
	void _SET_CHAR_EXPRESSION_Export(Ped ped, int index, float value)
	{
		return PED::_SET_CHAR_EXPRESSION(ped, index, value);
	}
	float _GET_CHAR_EXPRESSION_Export(Ped ped, int index)
	{
		return PED::_GET_CHAR_EXPRESSION(ped, index);
	}
	void _0x5BB04BC74A474B47_Export(Any p0, Any p1)
	{
		return PED::_0x5BB04BC74A474B47(p0, p1);
	}
	void _0x9078FB0557364099_Export(Any p0)
	{
		return PED::_0x9078FB0557364099(p0);
	}
	BOOL IS_PED_FALLING_OVER_Export(Ped ped)
	{
		return PED::IS_PED_FALLING_OVER(ped);
	}
	BOOL _HAS_PED_BEEN_SHOVED_RECENTLY_Export(Ped ped, int ms)
	{
		return PED::_HAS_PED_BEEN_SHOVED_RECENTLY(ped, ms);
	}
	Ped _GET_PED_TRANQUILIZER_Export(Ped ped)
	{
		return PED::_GET_PED_TRANQUILIZER(ped);
	}
	void _0x0D497AA69059FE40_Export(Any p0, Any p1)
	{
		return PED::_0x0D497AA69059FE40(p0, p1);
	}
	void _0xD7D2F45C56A4F4DF_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xD7D2F45C56A4F4DF(p0, p1, p2);
	}
	void _SET_PED_CULL_RANGE_Export(Ped ped, float p1, float p2)
	{
		return PED::_SET_PED_CULL_RANGE(ped, p1, p2);
	}
	void _0x1D23D3F70606D788_Export(Any p0, Any p1)
	{
		return PED::_0x1D23D3F70606D788(p0, p1);
	}
	int _GET_META_PED_TYPE_Export(Ped ped)
	{
		return PED::_GET_META_PED_TYPE(ped);
	}
	BOOL _IS_META_PED_USING_COMPONENT_Export(Ped ped, Hash component)
	{
		return PED::_IS_META_PED_USING_COMPONENT(ped, component);
	}
	BOOL _0xBD0E4F52F6D95242_Export(Ped ped)
	{
		return PED::_0xBD0E4F52F6D95242(ped);
	}
	BOOL _IS_PED_CHILD_Export(Ped ped)
	{
		return PED::_IS_PED_CHILD(ped);
	}
	void _0xFFA1594703ED27CA_Export(Ped ped, int p1)
	{
		return PED::_0xFFA1594703ED27CA(ped, p1);
	}
	void _SET_META_PED_TAG_Export(Ped ped, Hash drawable, Hash albedo, Hash normal, Hash material, Hash palette, int tint0, int tint1, int tint2)
	{
		return PED::_SET_META_PED_TAG(ped, drawable, albedo, normal, material, palette, tint0, tint1, tint2);
	}
	void REMOVE_TAG_FROM_META_PED_Export(Ped ped, Hash component, int p2)
	{
		return PED::REMOVE_TAG_FROM_META_PED(ped, component, p2);
	}
	void _0xA2B8E47442C76CEC_Export(Any p0, Any p1)
	{
		return PED::_0xA2B8E47442C76CEC(p0, p1);
	}
	int _GET_NUM_COMPONENT_CATEGORIES_IN_PED_Export(Ped ped)
	{
		return PED::_GET_NUM_COMPONENT_CATEGORIES_IN_PED(ped);
	}
	Hash _GET_PED_COMPONENT_CATEGORY_BY_INDEX_Export(Ped ped, int index)
	{
		return PED::_GET_PED_COMPONENT_CATEGORY_BY_INDEX(ped, index);
	}
	int _GET_NUM_COMPONENTS_IN_PED_Export(Ped ped)
	{
		return PED::_GET_NUM_COMPONENTS_IN_PED(ped);
	}
	Any _0x9B90842304C938A7_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x9B90842304C938A7(p0, p1, p2);
	}
	void _UPDATE_PED_VARIATION_Export(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5)
	{
		return PED::_UPDATE_PED_VARIATION(ped, p1, p2, p3, p4, p5);
	}
	void _0xCB1A3864C524F784_Export(Any p0, Any p1)
	{
		return PED::_0xCB1A3864C524F784(p0, p1);
	}
	void _0xFA0D206B489A6846_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PED::_0xFA0D206B489A6846(p0, p1, p2, p3, p4);
	}
	Any _0xA4AC05B1A364EBC5_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xA4AC05B1A364EBC5(p0, p1, p2);
	}
	void _0x1298B3D8E4C2409F_Export(Any p0)
	{
		return PED::_0x1298B3D8E4C2409F(p0);
	}
	Any _0xA274F51EF7E34B95_Export(Any p0, Any p1)
	{
		return PED::_0xA274F51EF7E34B95(p0, p1);
	}
	Any _0xC2EF407645BEECDC_Export(Any p0)
	{
		return PED::_0xC2EF407645BEECDC(p0);
	}
	void _EQUIP_META_PED_OUTFIT_Export(Ped ped, Hash hash)
	{
		return PED::_EQUIP_META_PED_OUTFIT(ped, hash);
	}
	void _0xFA742B82D093D848_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xFA742B82D093D848(p0, p1, p2);
	}
	Hash _GET_PED_META_OUTFIT_HASH_Export(Ped ped)
	{
		return PED::_GET_PED_META_OUTFIT_HASH(ped);
	}
	void _0xA2F8B3B5FEDFC100_Export(Any p0, Any p1)
	{
		return PED::_0xA2F8B3B5FEDFC100(p0, p1);
	}
	void _EQUIP_META_PED_SUBOUTFIT_Export(Ped ped, Hash suboutfit, int p2)
	{
		return PED::_EQUIP_META_PED_SUBOUTFIT(ped, suboutfit, p2);
	}
	BOOL _DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL_Export(Hash outfit, Hash model)
	{
		return PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(outfit, model);
	}
	BOOL _DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL_Export(Hash outfit, Hash suboutfit, Hash model)
	{
		return PED::_DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL(outfit, suboutfit, model);
	}
	Any _0x62FDF4E678E40CC6_Export(Entity entity, Any p1)
	{
		return PED::_0x62FDF4E678E40CC6(entity, p1);
	}
	void _RESET_PED_COMPONENTS_Export(Ped ped)
	{
		return PED::_RESET_PED_COMPONENTS(ped);
	}
	void _0x370A973252741AC4_Export(Ped ped, BOOL p1)
	{
		return PED::_0x370A973252741AC4(ped, p1);
	}
	void _SET_RANDOM_OUTFIT_VARIATION_Export(Ped ped, BOOL p1)
	{
		return PED::_SET_RANDOM_OUTFIT_VARIATION(ped, p1);
	}
	int GET_NUM_META_PED_OUTFITS_Export(Ped ped)
	{
		return PED::GET_NUM_META_PED_OUTFITS(ped);
	}
	void _EQUIP_META_PED_OUTFIT_PRESET_Export(Ped ped, int presetId, BOOL p2)
	{
		return PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, presetId, p2);
	}
	void _EQUIP_META_PED_OUTFIT_EXTRA_Export(Ped ped, int component, Any p2, Any p3)
	{
		return PED::_EQUIP_META_PED_OUTFIT_EXTRA(ped, component, p2, p3);
	}
	BOOL _IS_META_PED_OUTFIT_EQUIPPED_Export(Ped ped, Hash outfit)
	{
		return PED::_IS_META_PED_OUTFIT_EQUIPPED(ped, outfit);
	}
	void _0x851966E1E35AF491_Export(Any p0, Any p1)
	{
		return PED::_0x851966E1E35AF491(p0, p1);
	}
	void _SET_TEXTURE_OUTFIT_TINTS_Export(Ped ped, Hash componentCategory, Hash palette, int tint0, int tint1, int tint2)
	{
		return PED::_SET_TEXTURE_OUTFIT_TINTS(ped, componentCategory, palette, tint0, tint1, tint2);
	}
	int _REQUEST_META_PED_Export(Hash model, int p1)
	{
		return PED::_REQUEST_META_PED(model, p1);
	}
	BOOL _HAS_META_PED_REQUEST_LOADED_Export(int requestId)
	{
		return PED::_HAS_META_PED_REQUEST_LOADED(requestId);
	}
	BOOL _IS_META_PED_REQUEST_VALID_Export(int requestId)
	{
		return PED::_IS_META_PED_REQUEST_VALID(requestId);
	}
	Ped _CREATE_META_PED_Export(int requestId, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9)
	{
		return PED::_CREATE_META_PED(requestId, x, y, z, heading, p5, p6, p7, p8, p9);
	}
	void _RELEASE_META_PED_REQUEST_Export(int requestId)
	{
		return PED::_RELEASE_META_PED_REQUEST(requestId);
	}
	int _REQUEST_META_PED_OUTFIT_Export(Hash model, Hash outfit)
	{
		return PED::_REQUEST_META_PED_OUTFIT(model, outfit);
	}
	Any _0x27E8A84C12B0B7D1_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x27E8A84C12B0B7D1(p0, p1, p2);
	}
	Any _0x273915CE30780986_Export(Any p0, Any p1)
	{
		return PED::_0x273915CE30780986(p0, p1);
	}
	void _RELEASE_META_PED_OUTFIT_REQUEST_Export(int requestId)
	{
		return PED::_RELEASE_META_PED_OUTFIT_REQUEST(requestId);
	}
	int _0x3FCBB5FCFD968698_Export(Hash drawable, Hash albedo, Hash normal, Hash material, Any p4)
	{
		return PED::_0x3FCBB5FCFD968698(drawable, albedo, normal, material, p4);
	}
	int _REQUEST_META_PED_ASSET_BUNDLE_Export(Hash asset, int p1)
	{
		return PED::_REQUEST_META_PED_ASSET_BUNDLE(asset, p1);
	}
	Any _REQUEST_META_PED_COMPONENT_Export(int metaPedType, Any p1, int p2, int p3, int p4)
	{
		return PED::_REQUEST_META_PED_COMPONENT(metaPedType, p1, p2, p3, p4);
	}
	void _RELEASE_META_PED_ASSET_REQUEST_Export(int requestId)
	{
		return PED::_RELEASE_META_PED_ASSET_REQUEST(requestId);
	}
	BOOL _HAS_META_PED_ASSET_LOADED_Export(int requestId)
	{
		return PED::_HAS_META_PED_ASSET_LOADED(requestId);
	}
	BOOL _IS_META_PED_ASSET_VALID_Export(int requestId)
	{
		return PED::_IS_META_PED_ASSET_VALID(requestId);
	}
	Entity _CREATE_META_PED_ASSET_Export(Hash asset, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, BOOL p7, BOOL p8, BOOL p9)
	{
		return PED::_CREATE_META_PED_ASSET(asset, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9);
	}
	BOOL _HAS_META_PED_OUTFIT_LOADED_Export(int requestId)
	{
		return PED::_HAS_META_PED_OUTFIT_LOADED(requestId);
	}
	BOOL _IS_META_PED_OUTFIT_REQUEST_VALID_Export(int requestId)
	{
		return PED::_IS_META_PED_OUTFIT_REQUEST_VALID(requestId);
	}
	Ped _CREATE_META_PED_OUTFIT_PED_Export(int requestId, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8)
	{
		return PED::_CREATE_META_PED_OUTFIT_PED(requestId, x, y, z, heading, p5, p6, p7, p8);
	}
	BOOL _APPLY_PED_META_PED_OUTFIT_Export(int requestId, Ped ped, BOOL p2, BOOL p3)
	{
		return PED::_APPLY_PED_META_PED_OUTFIT(requestId, ped, p2, p3);
	}
	void _SET_META_PED_WEARINESS_Export(Ped ped, float weariness)
	{
		return PED::_SET_META_PED_WEARINESS(ped, weariness);
	}
	void _0xF47D54B986F0A346_Export(Ped ped, int danceIntensity)
	{
		return PED::_0xF47D54B986F0A346(ped, danceIntensity);
	}
	void _0x3EFED081B4834BA1_Export(Any p0)
	{
		return PED::_0x3EFED081B4834BA1(p0);
	}
	void _0x0FB1BA7FF73B41E1_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x0FB1BA7FF73B41E1(p0, p1, p2);
	}
	Any _0xB292203008EBBAAC_Export(Any p0)
	{
		return PED::_0xB292203008EBBAAC(p0);
	}
	BOOL _0xD4D403EA031F351C_Export(Ped ped)
	{
		return PED::_0xD4D403EA031F351C(ped);
	}
	int _GET_PELT_FROM_HORSE_Export(Ped horse, int index)
	{
		return PED::_GET_PELT_FROM_HORSE(horse, index);
	}
	void _SET_PELT_FOR_HORSE_Export(Ped horse, int peltId)
	{
		return PED::_SET_PELT_FOR_HORSE(horse, peltId);
	}
	void _0xC412AA1C73111FE0_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PED::_0xC412AA1C73111FE0(p0, p1, p2, p3, p4);
	}
	void _CLEAR_PELT_FROM_HORSE_Export(Ped horse, int peltId)
	{
		return PED::_CLEAR_PELT_FROM_HORSE(horse, peltId);
	}
	void _SET_PED_LIGHTS_Export(Ped ped, BOOL toggle)
	{
		return PED::_SET_PED_LIGHTS(ped, toggle);
	}
	void _0xD049FDAF089FDDB0_Export(Ped ped, Hash p1, float p2)
	{
		return PED::_0xD049FDAF089FDDB0(ped, p1, p2);
	}
	void _0xDD9540E7B1C9714F_Export(Ped ped, Hash p1, float r, float g, float b)
	{
		return PED::_0xDD9540E7B1C9714F(ped, p1, r, g, b);
	}
	void _0x55546004A244302A_Export(Any p0, Any p1)
	{
		return PED::_0x55546004A244302A(p0, p1);
	}
	void _SET_HEALTH_RECHARGE_MULTIPLIER_Export(Ped ped, int multiplier)
	{
		return PED::_SET_HEALTH_RECHARGE_MULTIPLIER(ped, multiplier);
	}
	float _GET_HEALTH_RECHARGE_MULTIPLIER_Export(Ped ped)
	{
		return PED::_GET_HEALTH_RECHARGE_MULTIPLIER(ped);
	}
	void _SET_STAMINA_DEPLETION_MULTIPLIER_Export(Ped ped, int multiplier)
	{
		return PED::_SET_STAMINA_DEPLETION_MULTIPLIER(ped, multiplier);
	}
	float _GET_STAMINA_DEPLETION_MULTIPLIER_Export(Ped ped)
	{
		return PED::_GET_STAMINA_DEPLETION_MULTIPLIER(ped);
	}
	void _SET_STAMINA_RECHARGE_MULTIPLIER_Export(Ped ped, int multiplier)
	{
		return PED::_SET_STAMINA_RECHARGE_MULTIPLIER(ped, multiplier);
	}
	float _GET_STAMINA_RECHARGE_MULTIPLIER_Export(Ped ped)
	{
		return PED::_GET_STAMINA_RECHARGE_MULTIPLIER(ped);
	}
	BOOL _CHANGE_PED_STAMINA_Export(Ped ped, float amount)
	{
		return PED::_CHANGE_PED_STAMINA(ped, amount);
	}
	float _GET_PED_STAMINA_Export(Ped ped)
	{
		return PED::_GET_PED_STAMINA(ped);
	}
	float _GET_PED_STAMINA_NORMALIZED_Export(Ped ped)
	{
		return PED::_GET_PED_STAMINA_NORMALIZED(ped);
	}
	float _GET_PED_MAX_STAMINA_Export(Ped ped)
	{
		return PED::_GET_PED_MAX_STAMINA(ped);
	}
	void _0x36513AFFC703C60D_Export(Any p0)
	{
		return PED::_0x36513AFFC703C60D(p0);
	}
	void _RESTORE_PED_STAMINA_Export(Ped ped, float stamina)
	{
		return PED::_RESTORE_PED_STAMINA(ped, stamina);
	}
	int _0xFC3B580C4380B5B7_Export(Ped ped)
	{
		return PED::_0xFC3B580C4380B5B7(ped);
	}
	void _0xEA8763E505AFD49A_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xEA8763E505AFD49A(p0, p1, p2);
	}
	void _0xE4EF4382E22C780C_Export(Any p0)
	{
		return PED::_0xE4EF4382E22C780C(p0);
	}
	void _0xD61FCF9FCFD515B7_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xD61FCF9FCFD515B7(p0, p1, p2);
	}
	void _0x8D9DB115FBA8E23D_Export(Any p0)
	{
		return PED::_0x8D9DB115FBA8E23D(p0);
	}
	Any _GET_NUM_RESERVED_HEALTH_Export(Ped ped)
	{
		return PED::_GET_NUM_RESERVED_HEALTH(ped);
	}
	Any _0xD97BC27AC039F681_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0xD97BC27AC039F681(p0, p1, p2, p3);
	}
	Any _0xF6A8C4B4A11AE89C_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return PED::_0xF6A8C4B4A11AE89C(p0, p1, p2, p3, p4, p5);
	}
	void _0xE4C95E0AE31C6512_Export(Ped ped, Any p1)
	{
		return PED::_0xE4C95E0AE31C6512(ped, p1);
	}
	Object _GET_PED_LAST_DROPPED_HAT_Export(Ped ped)
	{
		return PED::_GET_PED_LAST_DROPPED_HAT(ped);
	}
	void _0x5D4CD22A8C82A81A_Export(Ped ped, BOOL p1)
	{
		return PED::_0x5D4CD22A8C82A81A(ped, p1);
	}
	void _0xBF567DF2BEF211A6_Export(Any p0, Any p1)
	{
		return PED::_0xBF567DF2BEF211A6(p0, p1);
	}
	int _CREATE_GRAVITY_WELL_Export(float xPos, float yPos, float zPos, float heading, float radius, float p5, float p6, float p7, BOOL stopAtDestination)
	{
		return PED::_CREATE_GRAVITY_WELL(xPos, yPos, zPos, heading, radius, p5, p6, p7, stopAtDestination);
	}
	void _REMOVE_GRAVITY_WELL_Export(int handle)
	{
		return PED::_REMOVE_GRAVITY_WELL(handle);
	}
	BOOL _IS_PED_INTIMIDATED_Export(Ped ped)
	{
		return PED::_IS_PED_INTIMIDATED(ped);
	}
	BOOL _0x7EE3A8660F38797E_Export(Ped ped)
	{
		return PED::_0x7EE3A8660F38797E(ped);
	}
	Any _0xA180FBD502A03125_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0xA180FBD502A03125(p0, p1, p2);
	}
	int _REQUEST_TEXTURE_Export(Hash albedoHash, Hash normalHash, Hash materialHash)
	{
		return PED::_REQUEST_TEXTURE(albedoHash, normalHash, materialHash);
	}
	void _APPLY_TEXTURE_ON_PED_Export(Ped ped, Hash componentHash, int textureId)
	{
		return PED::_APPLY_TEXTURE_ON_PED(ped, componentHash, textureId);
	}
	void _RELEASE_TEXTURE_Export(int textureId)
	{
		return PED::_RELEASE_TEXTURE(textureId);
	}
	void _UPDATE_PED_TEXTURE_Export(int textureId)
	{
		return PED::_UPDATE_PED_TEXTURE(textureId);
	}
	void _RESET_PED_TEXTURE_Export(int textureId)
	{
		return PED::_RESET_PED_TEXTURE(textureId);
	}
	BOOL _IS_TEXTURE_VALID_Export(int textureId)
	{
		return PED::_IS_TEXTURE_VALID(textureId);
	}
	int _ADD_TEXTURE_LAYER_Export(int textureId, Hash albedoHash, Hash normalHash, Hash materialHash, int blendType, float texAlpha, int sheetGridIndex)
	{
		return PED::_ADD_TEXTURE_LAYER(textureId, albedoHash, normalHash, materialHash, blendType, texAlpha, sheetGridIndex);
	}
	void _REMOVE_PED_OVERLAY_Export(int textureId, int overlayId)
	{
		return PED::_REMOVE_PED_OVERLAY(textureId, overlayId);
	}
	void _SET_TEXTURE_LAYER_SHEET_GRID_INDEX_Export(int textureId, int layerId, int sheetGridIndex)
	{
		return PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(textureId, layerId, sheetGridIndex);
	}
	void _SET_TEXTURE_LAYER_ALPHA_Export(int textureId, int layerId, float texAlpha)
	{
		return PED::_SET_TEXTURE_LAYER_ALPHA(textureId, layerId, texAlpha);
	}
	void _SET_TEXTURE_LAYER_ROUGHNESS_Export(int textureId, int layerId, float texRough)
	{
		return PED::_SET_TEXTURE_LAYER_ROUGHNESS(textureId, layerId, texRough);
	}
	void _SET_TEXTURE_LAYER_PALLETE_Export(int textureId, int layerId, Hash paletteHash)
	{
		return PED::_SET_TEXTURE_LAYER_PALLETE(textureId, layerId, paletteHash);
	}
	void _SET_TEXTURE_LAYER_TINT_Export(int textureId, int layerId, int tint0, int tint1, int tint2)
	{
		return PED::_SET_TEXTURE_LAYER_TINT(textureId, layerId, tint0, tint1, tint2);
	}
	void _SET_TEXTURE_LAYER_MOD_Export(int textureId, int layerId, Hash modTextureHash, float modAlpha, int modChannel)
	{
		return PED::_SET_TEXTURE_LAYER_MOD(textureId, layerId, modTextureHash, modAlpha, modChannel);
	}
	void _SET_TEXTURE_LAYER_TEXTURE_MAP_Export(int textureId, int layerId, Hash albedoHash, Hash normalHash, Hash materialHash)
	{
		return PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(textureId, layerId, albedoHash, normalHash, materialHash);
	}
	void _CLEAR_PED_TEXTURE_Export(int textureId)
	{
		return PED::_CLEAR_PED_TEXTURE(textureId);
	}
	void _0xC991EF46FE323867_Export(Ped ped, Any p1)
	{
		return PED::_0xC991EF46FE323867(ped, p1);
	}
	void _0x1F8215D0E446F593_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x1F8215D0E446F593(p0, p1, p2);
	}
	BOOL IS_LOCATION_SPAWN_SAFE_Export(Ped ped, float p1)
	{
		return PED::IS_LOCATION_SPAWN_SAFE(ped, p1);
	}
	void _0x53BA7D96B9A421D9_Export(Any p0, Any p1)
	{
		return PED::_0x53BA7D96B9A421D9(p0, p1);
	}
	void _0x96C7B659854DE629_Export(Any p0, Any p1)
	{
		return PED::_0x96C7B659854DE629(p0, p1);
	}
	void SET_HORSE_AVOIDANCE_LEVEL_Export(Ped horse, int avoidanceLevel)
	{
		return PED::SET_HORSE_AVOIDANCE_LEVEL(horse, avoidanceLevel);
	}
	void RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT_Export(Ped horse)
	{
		return PED::RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT(horse);
	}
	Any _SET_PED_USE_HORSE_MAP_COLLISION_Export(Ped ped, BOOL toggle)
	{
		return PED::_SET_PED_USE_HORSE_MAP_COLLISION(ped, toggle);
	}
	void _0x5B73975B4F12F7F3_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PED::_0x5B73975B4F12F7F3(p0, p1, p2, p3, p4);
	}
	BOOL GET_META_PED_ASSET_GUIDS_Export(Ped ped, int index, Hash* drawable, Hash* albedo, Hash* normal, Hash* material)
	{
		return PED::GET_META_PED_ASSET_GUIDS(ped, index, drawable, albedo, normal, material);
	}
	BOOL GET_META_PED_ASSET_TINT_Export(Ped ped, int index, Hash* pallete, int* tint0, int* tint1, int* tint2)
	{
		return PED::GET_META_PED_ASSET_TINT(ped, index, pallete, tint0, tint1, tint2);
	}
	void _SET_PED_BLACKBOARD_INT_Export(Ped ped, const char* variableName, int value, int removeTimer)
	{
		return PED::_SET_PED_BLACKBOARD_INT(ped, variableName, value, removeTimer);
	}
	void _SET_PED_BLACKBOARD_BOOL_Export(Ped ped, const char* variableName, BOOL value, int removeTimer)
	{
		return PED::_SET_PED_BLACKBOARD_BOOL(ped, variableName, value, removeTimer);
	}
	void _SET_PED_BLACKBOARD_FLOAT_Export(Ped ped, const char* variableName, float value, int removeTimer)
	{
		return PED::_SET_PED_BLACKBOARD_FLOAT(ped, variableName, value, removeTimer);
	}
	void _SET_PED_BLACKBOARD_HASH_Export(Ped ped, const char* variableName, const char* value, int removeTimer)
	{
		return PED::_SET_PED_BLACKBOARD_HASH(ped, variableName, value, removeTimer);
	}
	void _REMOVE_PED_BLACKBOARD_INT_Export(Ped ped, const char* variableName)
	{
		return PED::_REMOVE_PED_BLACKBOARD_INT(ped, variableName);
	}
	void _REMOVE_PED_BLACKBOARD_BOOL_Export(Ped ped, const char* variableName)
	{
		return PED::_REMOVE_PED_BLACKBOARD_BOOL(ped, variableName);
	}
	void _REMOVE_PED_BLACKBOARD_FLOAT_Export(Ped ped, const char* variableName)
	{
		return PED::_REMOVE_PED_BLACKBOARD_FLOAT(ped, variableName);
	}
	void _REMOVE_PED_BLACKBOARD_HASH_Export(Ped ped, const char* variableName)
	{
		return PED::_REMOVE_PED_BLACKBOARD_HASH(ped, variableName);
	}
	BOOL _GET_PED_BLACKBOARD_BOOL_Export(Ped ped, const char* variableName)
	{
		return PED::_GET_PED_BLACKBOARD_BOOL(ped, variableName);
	}
	float _GET_PED_BLACKBOARD_FLOAT_Export(Ped ped, const char* variableName)
	{
		return PED::_GET_PED_BLACKBOARD_FLOAT(ped, variableName);
	}
	Hash _GET_PED_BLACKBOARD_HASH_Export(Ped ped, const char* variableName)
	{
		return PED::_GET_PED_BLACKBOARD_HASH(ped, variableName);
	}
	int GET_PED_BLACKBOARD_SCRIPT_INT_Export(Ped ped, const char* variableName)
	{
		return PED::GET_PED_BLACKBOARD_SCRIPT_INT(ped, variableName);
	}
	BOOL GET_PED_BLACKBOARD_SCRIPT_BOOL_Export(Ped ped, const char* variableName)
	{
		return PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(ped, variableName);
	}
	float GET_PED_BLACKBOARD_SCRIPT_FLOAT_Export(Ped ped, const char* variableName)
	{
		return PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(ped, variableName);
	}
	void _SET_TANK_ATTRIBUTE_SIZE_Export(Ped ped, int attributeIndex, float size)
	{
		return PED::_SET_TANK_ATTRIBUTE_SIZE(ped, attributeIndex, size);
	}
	Any _0xA31D350D66FA1855_Export(Any p0)
	{
		return PED::_0xA31D350D66FA1855(p0);
	}
	BOOL _IS_USING_SLIPSTREAM_Export(Ped ped)
	{
		return PED::_IS_USING_SLIPSTREAM(ped);
	}
	void _0xEEDC9B29314B2733_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return PED::_0xEEDC9B29314B2733(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0x5C90E20C25E6D83C_Export(Any p0)
	{
		return PED::_0x5C90E20C25E6D83C(p0);
	}
	void _0x10F96086123B939F_Export(Ped legendaryPed, Ped preyPed, float p2)
	{
		return PED::_0x10F96086123B939F(legendaryPed, preyPed, p2);
	}
	void _0x3FDBB99EFD8CE4AF_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x3FDBB99EFD8CE4AF(p0, p1, p2);
	}
	void _0x7E8F9949B7AABBF0_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x7E8F9949B7AABBF0(p0, p1, p2);
	}
	Any _0x5DA36CCCB63C0895_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x5DA36CCCB63C0895(p0, p1, p2);
	}
	void _0x56076667E7C2DCD6_Export(Any p0, Any p1)
	{
		return PED::_0x56076667E7C2DCD6(p0, p1);
	}
	void _APPLY_SHOP_ITEM_TO_PED_Export(Ped ped, Hash componentHash, BOOL immediately, BOOL isMp, BOOL p4)
	{
		return PED::_APPLY_SHOP_ITEM_TO_PED(ped, componentHash, immediately, isMp, p4);
	}
	void _REMOVE_SHOP_ITEM_FROM_PED_Export(Ped ped, Hash componentHash, int p2, BOOL p3)
	{
		return PED::_REMOVE_SHOP_ITEM_FROM_PED(ped, componentHash, p2, p3);
	}
	void REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY_Export(Ped ped, Hash componentCategory, int p2, BOOL p3)
	{
		return PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(ped, componentCategory, p2, p3);
	}
	void _UPDATE_SHOP_ITEM_WEARABLE_STATE_Export(Ped ped, Hash componentHash, Hash wearableState, int p3, BOOL p4, int p5)
	{
		return PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(ped, componentHash, wearableState, p3, p4, p5);
	}
	Hash _GET_SHOP_ITEM_COMPONENT_AT_INDEX_Export(Ped ped, int index, BOOL p2, void* argStruct, void* argStruct2)
	{
		return PED::_GET_SHOP_ITEM_COMPONENT_AT_INDEX(ped, index, p2, argStruct, argStruct2);
	}
	int _GET_SHOP_ITEM_NUM_WEARABLE_STATES_Export(Hash componentHash, BOOL isMpFemale, BOOL p2)
	{
		return PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(componentHash, isMpFemale, p2);
	}
	Hash _GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX_Export(Hash componentHash, int wearableStateIndex, BOOL isMpFemale, BOOL p3)
	{
		return PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(componentHash, wearableStateIndex, isMpFemale, p3);
	}
	Hash _GET_SHOP_ITEM_COMPONENT_CATEGORY_Export(Hash componentHash, int metapedType, BOOL isMP)
	{
		return PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metapedType, isMP);
	}
	Any _0x31B2E7F2E3C58B89_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0x31B2E7F2E3C58B89(p0, p1, p2, p3);
	}
	BOOL _GET_SHOP_ITEM_BASE_LAYERS_Export(Hash shopItem, Any p1, Ped ped, int metapedType, BOOL p4, Hash* drawable, Hash* albedo, Hash* normal, Hash* material, Hash* p9, Hash* p10, Hash* p11, Hash* p12)
	{
		return PED::_GET_SHOP_ITEM_BASE_LAYERS(shopItem, p1, ped, metapedType, p4, drawable, albedo, normal, material, p9, p10, p11, p12);
	}
	Any _0xAAB86462966168CE_Export(Ped ped, BOOL isMP)
	{
		return PED::_0xAAB86462966168CE(ped, isMP);
	}
	Any _GET_SHOP_ITEM_HAT_COMPONENT_Export(Ped ped, int metapedType, BOOL p2)
	{
		return PED::_GET_SHOP_ITEM_HAT_COMPONENT(ped, metapedType, p2);
	}
	void _REFRESH_META_PED_SHOP_ITEMS_Export(Ped ped, int p1)
	{
		return PED::_REFRESH_META_PED_SHOP_ITEMS(ped, p1);
	}
	void _0xD103F6DBB5442BE8_Export(Ped ped, int p1)
	{
		return PED::_0xD103F6DBB5442BE8(ped, p1);
	}
	void _SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_Export(Ped ped, Hash gxtEntryHash)
	{
		return PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(ped, gxtEntryHash);
	}
	void _SET_PED_PROMPT_NAME_Export(Ped ped, const char* name)
	{
		return PED::_SET_PED_PROMPT_NAME(ped, name);
	}
	void _SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2_Export(Ped ped, Hash gxtEntryHash)
	{
		return PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2(ped, gxtEntryHash);
	}
	void _SET_PED_PROMPT_NAME_2_Export(Ped ped, const char* name)
	{
		return PED::_SET_PED_PROMPT_NAME_2(ped, name);
	}
	void _0xF917F92BF22ECBAB_Export(Any p0)
	{
		return PED::_0xF917F92BF22ECBAB(p0);
	}
	void _0x49DADFC4CD808B0A_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x49DADFC4CD808B0A(p0, p1, p2);
	}
	BOOL _HAS_PED_TAKEN_GORE_DAMAGE_Export(Ped ped, int limb)
	{
		return PED::_HAS_PED_TAKEN_GORE_DAMAGE(ped, limb);
	}
	void _0x704C908E9C405136_Export(Ped ped)
	{
		return PED::_0x704C908E9C405136(ped);
	}
	void _0x7406C71F4AC2FFCC_Export(Any p0)
	{
		return PED::_0x7406C71F4AC2FFCC(p0);
	}
	void _0x28508173C6A7CC18_Export(Any p0)
	{
		return PED::_0x28508173C6A7CC18(p0);
	}
	Any _0x52250B92EA70BE3D_Export(Any p0)
	{
		return PED::_0x52250B92EA70BE3D(p0);
	}
	void _SET_PED_QUALITY_Export(Ped ped, int quality)
	{
		return PED::_SET_PED_QUALITY(ped, quality);
	}
	int _GET_PED_QUALITY_Export(Ped ped)
	{
		return PED::_GET_PED_QUALITY(ped);
	}
	void _0xCE7A6C1D5CDE1F9D_Export(Ped ped, Object object, const char* propName, const char* animName)
	{
		return PED::_0xCE7A6C1D5CDE1F9D(ped, object, propName, animName);
	}
	void _0x604E1010E3162E86_Export(Any p0, Any p1, Any p2)
	{
		return PED::_0x604E1010E3162E86(p0, p1, p2);
	}
	void _0xE8ABE3B73FC7FE17_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PED::_0xE8ABE3B73FC7FE17(p0, p1, p2, p3);
	}
	void _REMOVE_PED_PROP_Export(Ped ped, const char* propName)
	{
		return PED::_REMOVE_PED_PROP(ped, propName);
	}
	void _SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS_Export(Ped ped, float bonus)
	{
		return PED::_SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS(ped, bonus);
	}
	Any _0x095C2277FED731DB_Export(Any p0)
	{
		return PED::_0x095C2277FED731DB(p0);
	}
	void _0x09171A6F8FDE5DC1_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PED::_0x09171A6F8FDE5DC1(p0, p1, p2, p3, p4);
	}
	void _0x09E378C52B1433B5_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PED::_0x09E378C52B1433B5(p0, p1, p2, p3, p4);
	}
	BOOL _0x6507AC3BD7C99009_Export(float x, float y, float z, float p3)
	{
		return PED::_0x6507AC3BD7C99009(x, y, z, p3);
	}
	float _GET_PLAYER_PED_WATER_DEPTH_Export(Ped ped)
	{
		return PED::_GET_PLAYER_PED_WATER_DEPTH(ped);
	}
	void _SET_PED_TRAIL_EFFECT_Export(Ped ped, BOOL p1, float duration)
	{
		return PED::_SET_PED_TRAIL_EFFECT(ped, p1, duration);
	}
	BOOL _0xEBAAC9A750E7563B_Export(Ped ped)
	{
		return PED::_0xEBAAC9A750E7563B(ped);
	}
	void _0x992187D975635DF5_Export(Any p0, Any p1)
	{
		return PED::_0x992187D975635DF5(p0, p1);
	}
	void _0x0B787A37EEDD226F_Export(Any p0, Any p1)
	{
		return PED::_0x0B787A37EEDD226F(p0, p1);
	}
	void _0x63AA2B8EB087886A_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x63AA2B8EB087886A(p0, p1);
	}
	Hash _GET_PERSCHAR_MODEL_NAME_Export(Hash persCharHash)
	{
		return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	}
	void _0x8BC555034A5A5E8C_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x8BC555034A5A5E8C(p0, p1);
	}
	void _0x70605812ABC9FF0F_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x70605812ABC9FF0F(p0, p1);
	}
	Any _0xDC9655D47DEC0353_Export(Any p0)
	{
		return PERSCHAR::_0xDC9655D47DEC0353(p0);
	}
	void _0x2DF89CD2ED1D0BDE_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x2DF89CD2ED1D0BDE(p0, p1);
	}
	void _0x535A66AAD2BF68F9_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x535A66AAD2BF68F9(p0, p1);
	}
	Any _0xCEB40B678E403759_Export(Any p0)
	{
		return PERSCHAR::_0xCEB40B678E403759(p0);
	}
	void _SET_PERSCHAR_SCHEDULE_Export(Hash persCharHash, const char* schedule)
	{
		return PERSCHAR::_SET_PERSCHAR_SCHEDULE(persCharHash, schedule);
	}
	void _0x8B44273A92CD406C_Export(Any p0)
	{
		return PERSCHAR::_0x8B44273A92CD406C(p0);
	}
	void _0xE0E65E0D261F7507_Export(Any p0)
	{
		return PERSCHAR::_0xE0E65E0D261F7507(p0);
	}
	Any _0x112DDF56300BC6E5_Export(Any p0)
	{
		return PERSCHAR::_0x112DDF56300BC6E5(p0);
	}
	PersChar _CREATE_PERSISTENT_CHARACTER_Export(Hash hash)
	{
		return PERSCHAR::_CREATE_PERSISTENT_CHARACTER(hash);
	}
	BOOL _IS_PERSISTENT_CHARACTER_VALID_Export(PersChar persChar)
	{
		return PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);
	}
	void _DELETE_PERSCHAR_Export(PersChar persChar)
	{
		return PERSCHAR::_DELETE_PERSCHAR(persChar);
	}
	scrVector _0x5EE6FCCC9C832CA2_Export(Any p0)
	{
		return PERSCHAR::_0x5EE6FCCC9C832CA2(p0);
	}
	void _0x59C7AD6FEA2AC449_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PERSCHAR::_0x59C7AD6FEA2AC449(p0, p1, p2, p3);
	}
	void _0xBB68908CD11AEBDC_Export(PersChar persChar)
	{
		return PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	}
	scrVector _0x94995829ED15A598_Export(Any p0)
	{
		return PERSCHAR::_0x94995829ED15A598(p0);
	}
	Ped _GET_PERSCHAR_PED_INDEX_Export(PersChar persChar)
	{
		return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	}
	PersChar _GET_PERSCHAR_INDEX_FROM_PED_INDEX_Export(Ped ped)
	{
		return PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(ped);
	}
	Any _0xF8DE7154F7D1458F_Export(Any p0)
	{
		return PERSCHAR::_0xF8DE7154F7D1458F(p0);
	}
	void _0x669C25840C6F7AE2_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x669C25840C6F7AE2(p0, p1);
	}
	void _RETASK_PERSISTENT_CHARACTER_Export(PersChar persChar)
	{
		return PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	}
	void _0x0B3A99AB6713AA52_Export(Any p0)
	{
		return PERSCHAR::_0x0B3A99AB6713AA52(p0);
	}
	BOOL _IS_PERSISTENT_CHARACTER_DEAD_Export(PersChar persChar)
	{
		return PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar);
	}
	BOOL _REVIVE_PERSCHAR_Export(PersChar persChar)
	{
		return PERSCHAR::_REVIVE_PERSCHAR(persChar);
	}
	void _0xD4B614179BCD0654_Export(Any p0)
	{
		return PERSCHAR::_0xD4B614179BCD0654(p0);
	}
	void _0x406808610220405B_Export(Any p0)
	{
		return PERSCHAR::_0x406808610220405B(p0);
	}
	void _0xA2B18FF8D39F6D87_Export(Any p0)
	{
		return PERSCHAR::_0xA2B18FF8D39F6D87(p0);
	}
	Any _0xE4C51A8A3BD1664C_Export(Any p0)
	{
		return PERSCHAR::_0xE4C51A8A3BD1664C(p0);
	}
	void _0x8AE4EFA464DAE42D_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x8AE4EFA464DAE42D(p0, p1);
	}
	void _0xA4DCB3F0DD7488BD_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PERSCHAR::_0xA4DCB3F0DD7488BD(p0, p1, p2, p3, p4);
	}
	void _0xD95D777F828B2BBB_Export(Any p0)
	{
		return PERSCHAR::_0xD95D777F828B2BBB(p0);
	}
	void _0x92690B0822493CE0_Export()
	{
		return PERSCHAR::_0x92690B0822493CE0();
	}
	void _0xEFC5C6670E0B99BA_Export()
	{
		return PERSCHAR::_0xEFC5C6670E0B99BA();
	}
	void _0x2E957AA81F2C61C9_Export()
	{
		return PERSCHAR::_0x2E957AA81F2C61C9();
	}
	void _0xB173599D61FAEB31_Export()
	{
		return PERSCHAR::_0xB173599D61FAEB31();
	}
	Entity _0x08FC896D2CB31FCC_Export(Any p0, BOOL p1)
	{
		return PERSCHAR::_0x08FC896D2CB31FCC(p0, p1);
	}
	Entity _FORCE_SPAWN_PERSCHAR_Export(PersChar persChar, BOOL p1)
	{
		return PERSCHAR::_FORCE_SPAWN_PERSCHAR(persChar, p1);
	}
	void _FORCE_DESPAWN_PERSCHAR_Export(PersChar persChar)
	{
		return PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	}
	void _0xFCC6DB8DBE709BC8_Export(PersChar persChar)
	{
		return PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
	}
	void _0xA8C406C2A56EDC16_Export(PersChar persChar)
	{
		return PERSCHAR::_0xA8C406C2A56EDC16(persChar);
	}
	void _0x4F81EAD1DE8FA19B_Export(PersChar persChar)
	{
		return PERSCHAR::_0x4F81EAD1DE8FA19B(persChar);
	}
	void _0x6759BEE6762E140B_Export(PersChar persChar)
	{
		return PERSCHAR::_0x6759BEE6762E140B(persChar);
	}
	void _0xB65E7F733956CF25_Export(PersChar persChar)
	{
		return PERSCHAR::_0xB65E7F733956CF25(persChar);
	}
	Any _0x4AFC7288C77238B3_Export(Any p0)
	{
		return PERSCHAR::_0x4AFC7288C77238B3(p0);
	}
	Any _0xA8120EBEAF290C7A_Export(Any p0)
	{
		return PERSCHAR::_0xA8120EBEAF290C7A(p0);
	}
	Any _0x69786495C92A3044_Export(Any p0)
	{
		return PERSCHAR::_0x69786495C92A3044(p0);
	}
	Any _0xEC254C2C9B0F08F1_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0xEC254C2C9B0F08F1(p0, p1);
	}
	Any _0x9C7F95946E304778_Export(Any p0, Any p1)
	{
		return PERSCHAR::_0x9C7F95946E304778(p0, p1);
	}
	void _0x7A1BD123E5CDB6E5_Export()
	{
		return PERSISTENCE::_0x7A1BD123E5CDB6E5();
	}
	void PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA_Export(float x, float y, float z, float radius)
	{
		return PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(x, y, z, radius);
	}
	void _0x065887B694359799_Export(Any p0)
	{
		return PERSISTENCE::_0x065887B694359799(p0);
	}
	void _0xFC9806DA9A460093_Export(float x1, float y1, float z1, float x2, float y2, float z2)
	{
		return PERSISTENCE::_0xFC9806DA9A460093(x1, y1, z1, x2, y2, z2);
	}
	void _0xB03140014ACA6C40_Export(Any p0, Any p1)
	{
		return PERSISTENCE::_0xB03140014ACA6C40(p0, p1);
	}
	void _0xE225CEF1901F6108_Export(Any p0, Any p1)
	{
		return PERSISTENCE::_0xE225CEF1901F6108(p0, p1);
	}
	void _0x8DE104BEC243A73B_Export(Any p0)
	{
		return PERSISTENCE::_0x8DE104BEC243A73B(p0);
	}
	void _PERSISTENCE_REFRESH_TOWN_VOLUME_Export(Volume volume)
	{
		return PERSISTENCE::_PERSISTENCE_REFRESH_TOWN_VOLUME(volume);
	}
	Any _0xBA2C49EA6A8D24FF_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return PERSISTENCE::_0xBA2C49EA6A8D24FF(p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0x2E545965DF98D476_Export(Any p0)
	{
		return PERSISTENCE::_0x2E545965DF98D476(p0);
	}
	void _0xF5622FA6ACFCA7DB_Export(Any p0, Any p1)
	{
		return PERSISTENCE::_0xF5622FA6ACFCA7DB(p0, p1);
	}
	void _0x3CA5E58C9731A16B_Export(Any p0, Any p1)
	{
		return PERSISTENCE::_0x3CA5E58C9731A16B(p0, p1);
	}
	void _0xDC0A1F0ECEC9F0C0_Export(Any p0, Any p1)
	{
		return PERSISTENCE::_0xDC0A1F0ECEC9F0C0(p0, p1);
	}
	Any _0x5A79220F6D38D7C3_Export(Any p0)
	{
		return PERSISTENCE::_0x5A79220F6D38D7C3(p0);
	}
	Any _0xCFDA2518F322D836_Export(Any p0)
	{
		return PERSISTENCE::_0xCFDA2518F322D836(p0);
	}
	Any _0x1F56FB3FDB4EAF65_Export(Any p0)
	{
		return PERSISTENCE::_0x1F56FB3FDB4EAF65(p0);
	}
	void _0x291CC21D1FB6790E_Export(Any p0)
	{
		return PERSISTENCE::_0x291CC21D1FB6790E(p0);
	}
	void PERSISTENCE_ADD_SCENARIO_LOOTED_Export(int scenario)
	{
		return PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(scenario);
	}
	BOOL _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_Export(int scenario)
	{
		return PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(scenario);
	}
	BOOL _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_Export(float x, float y, float z)
	{
		return PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(x, y, z);
	}
	BOOL _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_WITH_MODEL_Export(float x, float y, float z, Hash model)
	{
		return PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_WITH_MODEL(x, y, z, model);
	}
	void _0x66DAA3A9274E8E82_Export()
	{
		return PERSISTENCE::_0x66DAA3A9274E8E82();
	}
	int ADD_ROPE_Export(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float len, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, void* unkPtr, BOOL p17)
	{
		return PHYSICS::ADD_ROPE(posX, posY, posZ, rotX, rotY, rotZ, len, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr, p17);
	}
	int _ADD_ROPE_2_Export(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, BOOL isNetworked, int p9, float p10)
	{
		return PHYSICS::_ADD_ROPE_2(x, y, z, rotX, rotY, rotZ, length, ropeType, isNetworked, p9, p10);
	}
	void DELETE_ROPE_Export(int* ropeID)
	{
		return PHYSICS::DELETE_ROPE(ropeID);
	}
	void _RELEASE_ROPE_Export(int ropeId)
	{
		return PHYSICS::_RELEASE_ROPE(ropeId);
	}
	void DELETE_CHILD_ROPE_Export(int ropeID)
	{
		return PHYSICS::DELETE_CHILD_ROPE(ropeID);
	}
	void _BREAK_ROPE_Export(int* ropeId, int* ropeTop, int* ropeBottom, float offsetX, float offsetY, float offsetZ, int p6)
	{
		return PHYSICS::_BREAK_ROPE(ropeId, ropeTop, ropeBottom, offsetX, offsetY, offsetZ, p6);
	}
	BOOL DOES_ROPE_EXIST_Export(int ropeID)
	{
		return PHYSICS::DOES_ROPE_EXIST(ropeID);
	}
	BOOL _IS_ROPE_BROKEN_Export(int ropeId)
	{
		return PHYSICS::_IS_ROPE_BROKEN(ropeId);
	}
	void _ROPE_CHANGE_VISIBILITY_Export(int* ropeId, BOOL visible)
	{
		return PHYSICS::_ROPE_CHANGE_VISIBILITY(ropeId, visible);
	}
	void ROPE_DRAW_SHADOW_ENABLED_Export(int* ropeID, BOOL isDrawEnabled)
	{
		return PHYSICS::ROPE_DRAW_SHADOW_ENABLED(ropeID, isDrawEnabled);
	}
	int GET_ROPE_VERTEX_COUNT_Export(int ropeID)
	{
		return PHYSICS::GET_ROPE_VERTEX_COUNT(ropeID);
	}
	void _0xE54BF2CE6C7D23A9_Export(int ropeId, int p1, float x, float y, float z)
	{
		return PHYSICS::_0xE54BF2CE6C7D23A9(ropeId, p1, x, y, z);
	}
	void _0x9C24846D0A4A2776_Export(Any p0)
	{
		return PHYSICS::_0x9C24846D0A4A2776(p0);
	}
	void _0x0CB16D05E03FB525_Export(Any p0)
	{
		return PHYSICS::_0x0CB16D05E03FB525(p0);
	}
	void _0xF27F1A8DE4F50A1B_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return PHYSICS::_0xF27F1A8DE4F50A1B(p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x21D0890D88DFB0B0_Export(int ropeId, BOOL p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, int p10)
	{
		return PHYSICS::_0x21D0890D88DFB0B0(ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void ATTACH_ENTITIES_TO_ROPE_Export(int ropeID, Entity iEntityAID, Entity iEntityBID, float worldPositionAX, float worldPositionAY, float worldPositionAZ, float worldPositionBX, float worldPositionBY, float worldPositionBZ, float ropeLength, int componentPartA, int componentPartB, const char* boneNamePartA, const char* boneNamePartB, BOOL p14, int boneId1, int boneId2, int alwaysZero3, int alwaysZero4, BOOL p19, BOOL p20)
	{
		return PHYSICS::ATTACH_ENTITIES_TO_ROPE(ropeID, iEntityAID, iEntityBID, worldPositionAX, worldPositionAY, worldPositionAZ, worldPositionBX, worldPositionBY, worldPositionBZ, ropeLength, componentPartA, componentPartB, boneNamePartA, boneNamePartB, p14, boneId1, boneId2, alwaysZero3, alwaysZero4, p19, p20);
	}
	void _ATTACH_ENTITIES_TO_ROPE_2_Export(int ropeId, Entity entity1, Entity entity2, float ent1X, float ent1Y, float ent1Z, float ent2X, float ent2Y, float ent2Z, const char* boneName1, const char* boneName2)
	{
		return PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(ropeId, entity1, entity2, ent1X, ent1Y, ent1Z, ent2X, ent2Y, ent2Z, boneName1, boneName2);
	}
	void _ATTACH_ENTITES_TO_ROPE_3_Export(int ropeId, Entity entity1, Entity entity2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10)
	{
		return PHYSICS::_ATTACH_ENTITES_TO_ROPE_3(ropeId, entity1, entity2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void _0x69C810B72291D831_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return PHYSICS::_0x69C810B72291D831(p0, p1, p2, p3, p4, p5, p6);
	}
	void _0xB7469CB9AC3C0FD4_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return PHYSICS::_0xB7469CB9AC3C0FD4(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0xC64E7A62632AD2FE_Export(int ropeId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return PHYSICS::_0xC64E7A62632AD2FE(ropeId, p1, p2, p3, p4, p5, p6, p7);
	}
	BOOL _IS_ROPE_ATTACHED_TO_ENTITY_Export(int ropeId, Entity entity)
	{
		return PHYSICS::_IS_ROPE_ATTACHED_TO_ENTITY(ropeId, entity);
	}
	void DETACH_ROPE_FROM_ENTITY_Export(int ropeID, Entity iEntityID)
	{
		return PHYSICS::DETACH_ROPE_FROM_ENTITY(ropeID, iEntityID);
	}
	void _HITCH_HORSE_Export(Ped horse, float x, float y, float z)
	{
		return PHYSICS::_HITCH_HORSE(horse, x, y, z);
	}
	void _UNHITCH_HORSE_Export(Ped horse)
	{
		return PHYSICS::_UNHITCH_HORSE(horse);
	}
	void _0x6EA0E93CFFA472CC_Export(Any p0)
	{
		return PHYSICS::_0x6EA0E93CFFA472CC(p0);
	}
	void _0xBDDA142759307528_Export(Any p0)
	{
		return PHYSICS::_0xBDDA142759307528(p0);
	}
	void _0x32F4DBFDFCCCC735_Export(Any p0, Any p1, Any p2)
	{
		return PHYSICS::_0x32F4DBFDFCCCC735(p0, p1, p2);
	}
	void _0xF8CA39D5C0D1D9A1_Export(Any p0, Any p1)
	{
		return PHYSICS::_0xF8CA39D5C0D1D9A1(p0, p1);
	}
	void _0xEAF529446488EB18_Export(Any p0)
	{
		return PHYSICS::_0xEAF529446488EB18(p0);
	}
	void _0x31160EC47E7C9549_Export(Any p0, Any p1)
	{
		return PHYSICS::_0x31160EC47E7C9549(p0, p1);
	}
	void _0x5E981C764DF33117_Export(Any p0, Any p1)
	{
		return PHYSICS::_0x5E981C764DF33117(p0, p1);
	}
	void ROPE_SET_UPDATE_ORDER_Export(int ropeID, int iUpdateOrder)
	{
		return PHYSICS::ROPE_SET_UPDATE_ORDER(ropeID, iUpdateOrder);
	}
	void _0xFB9153A54AC713E8_Export(int ropeId, BOOL p1)
	{
		return PHYSICS::_0xFB9153A54AC713E8(ropeId, p1);
	}
	void _0xD699E688B49C0FD2_Export(int ropeId, float p1, float p2, float p3, BOOL p4)
	{
		return PHYSICS::_0xD699E688B49C0FD2(ropeId, p1, p2, p3, p4);
	}
	void _0xBB3E9B073E66C3C9_Export(int ropeId, BOOL p1, BOOL p2, BOOL p3, BOOL p4)
	{
		return PHYSICS::_0xBB3E9B073E66C3C9(ropeId, p1, p2, p3, p4);
	}
	void _0x522FA3F490E2F7AC_Export(int ropeId, Any p1, Any p2)
	{
		return PHYSICS::_0x522FA3F490E2F7AC(ropeId, p1, p2);
	}
	void _0x3900491C0D61ED4B_Export(Any p0, Any p1)
	{
		return PHYSICS::_0x3900491C0D61ED4B(p0, p1);
	}
	void _0xC89E7410A93AC19A_Export(int ropeId, float p1)
	{
		return PHYSICS::_0xC89E7410A93AC19A(ropeId, p1);
	}
	void _0x1D97DA8ACB5D2582_Export(int ropeId, int p1)
	{
		return PHYSICS::_0x1D97DA8ACB5D2582(ropeId, p1);
	}
	void _CREATE_ROPE_WINDING_ABILITY_Export(int ropeId, const char* p1, const char* ropeModelType, float length, BOOL p4)
	{
		return PHYSICS::_CREATE_ROPE_WINDING_ABILITY(ropeId, p1, ropeModelType, length, p4);
	}
	scrVector GET_ROPE_LAST_VERTEX_COORD_Export(int ropeID)
	{
		return PHYSICS::GET_ROPE_LAST_VERTEX_COORD(ropeID);
	}
	scrVector GET_ROPE_VERTEX_COORD_Export(int ropeID, int vtxIndex)
	{
		return PHYSICS::GET_ROPE_VERTEX_COORD(ropeID, vtxIndex);
	}
	void START_ROPE_WINDING_Export(int ropeID)
	{
		return PHYSICS::START_ROPE_WINDING(ropeID);
	}
	void STOP_ROPE_WINDING_Export(int ropeID)
	{
		return PHYSICS::STOP_ROPE_WINDING(ropeID);
	}
	void START_ROPE_UNWINDING_FRONT_Export(int ropeID)
	{
		return PHYSICS::START_ROPE_UNWINDING_FRONT(ropeID);
	}
	void STOP_ROPE_UNWINDING_FRONT_Export(int ropeID)
	{
		return PHYSICS::STOP_ROPE_UNWINDING_FRONT(ropeID);
	}
	void _START_ROPE_UNWINDING_BACK_Export(int ropeId)
	{
		return PHYSICS::_START_ROPE_UNWINDING_BACK(ropeId);
	}
	void _STOP_ROPE_UNWINDING_BACK_Export(int ropeId)
	{
		return PHYSICS::_STOP_ROPE_UNWINDING_BACK(ropeId);
	}
	void _0x461FCBDEB4D06717_Export(int ropeId, BOOL p1)
	{
		return PHYSICS::_0x461FCBDEB4D06717(ropeId, p1);
	}
	void _0x423C6B1F3786D28B_Export(Any p0, Any p1)
	{
		return PHYSICS::_0x423C6B1F3786D28B(p0, p1);
	}
	void _0x76BAD9D538BCA1AA_Export(int ropeId, float p1)
	{
		return PHYSICS::_0x76BAD9D538BCA1AA(ropeId, p1);
	}
	void _0xB40EA9E0D2E2F7F3_Export(int ropeId, float p1)
	{
		return PHYSICS::_0xB40EA9E0D2E2F7F3(ropeId, p1);
	}
	float _ROPE_GET_FORCED_LENGTH_Export(int ropeId)
	{
		return PHYSICS::_ROPE_GET_FORCED_LENGTH(ropeId);
	}
	void _0x751DF00EEFF122E3_Export(Any p0)
	{
		return PHYSICS::_0x751DF00EEFF122E3(p0);
	}
	void ROPE_FORCE_LENGTH_Export(int ropeID, float len)
	{
		return PHYSICS::ROPE_FORCE_LENGTH(ropeID, len);
	}
	void _0x8D59079C37C21D78_Export(int ropeId, float p1)
	{
		return PHYSICS::_0x8D59079C37C21D78(ropeId, p1);
	}
	void _0x814D453FCFDF119F_Export(Any p0, Any p1, Any p2)
	{
		return PHYSICS::_0x814D453FCFDF119F(p0, p1, p2);
	}
	void _0x1FC92BDBA1106BD2_Export(int ropeId, float p1)
	{
		return PHYSICS::_0x1FC92BDBA1106BD2(ropeId, p1);
	}
	void _0xDEDE679ED29DD4E7_Export(int ropeId, BOOL p1)
	{
		return PHYSICS::_0xDEDE679ED29DD4E7(ropeId, p1);
	}
	void _0xF1EA2A881EB7F2CD_Export(int ropeId, BOOL p1)
	{
		return PHYSICS::_0xF1EA2A881EB7F2CD(ropeId, p1);
	}
	void _0x5A989B7EE3672A56_Export(Any p0, Any p1)
	{
		return PHYSICS::_0x5A989B7EE3672A56(p0, p1);
	}
	void _0x483D4E917B0D35A9_Export(Any p0, Any p1)
	{
		return PHYSICS::_0x483D4E917B0D35A9(p0, p1);
	}
	Player _ROPE_GET_BREAKER_OF_ROPE_Export(int ropeId)
	{
		return PHYSICS::_ROPE_GET_BREAKER_OF_ROPE(ropeId);
	}
	void SET_DAMPING_Export(Entity entityID, int dampingType, float dampingValue)
	{
		return PHYSICS::SET_DAMPING(entityID, dampingType, dampingValue);
	}
	void ACTIVATE_PHYSICS_Export(Entity entityID)
	{
		return PHYSICS::ACTIVATE_PHYSICS(entityID);
	}
	void BREAK_ENTITY_GLASS_Export(Entity entityId, float impactPositionX, float impactPositionY, float impactPositionZ, float impactRadius, float impulseX, float impulseY, float impulseZ, float damage, int crackType, BOOL silent)
	{
		return PHYSICS::BREAK_ENTITY_GLASS(entityId, impactPositionX, impactPositionY, impactPositionZ, impactRadius, impulseX, impulseY, impulseZ, damage, crackType, silent);
	}
	void _0x8EEDFD8921389928_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return PHYSICS::_0x8EEDFD8921389928(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void SET_DISABLE_BREAKING_Export(Entity entityId, BOOL disableBreaking)
	{
		return PHYSICS::SET_DISABLE_BREAKING(entityId, disableBreaking);
	}
	void SET_DISABLE_FRAG_DAMAGE_Export(Entity entityId, BOOL disableDamage)
	{
		return PHYSICS::SET_DISABLE_FRAG_DAMAGE(entityId, disableDamage);
	}
	void _0x5BD7457221CC5FF4_Export(Any p0, Any p1)
	{
		return PHYSICS::_0x5BD7457221CC5FF4(p0, p1);
	}
	Ped GET_PLAYER_PED_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_PED(PlayerIndex);
	}
	Ped _GET_PLAYER_PED_2_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_PED_2(player);
	}
	void _0x325434C68358D282_Export(BOOL toggle)
	{
		return PLAYER::_0x325434C68358D282(toggle);
	}
	Ped GET_PLAYER_PED_SCRIPT_INDEX_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PlayerIndex);
	}
	void SET_PLAYER_MODEL_Export(Player PlayerIndex, Hash PlayerModelHashKey, BOOL p2)
	{
		return PLAYER::SET_PLAYER_MODEL(PlayerIndex, PlayerModelHashKey, p2);
	}
	BOOL _NETWORK_HAS_PLAYER_VALID_PED_Export(Player player)
	{
		return PLAYER::_NETWORK_HAS_PLAYER_VALID_PED(player);
	}
	int GET_PLAYER_TEAM_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_TEAM(PlayerIndex);
	}
	void SET_PLAYER_TEAM_Export(Player PlayerIndex, int Team, BOOL bRestrictToThisScript)
	{
		return PLAYER::SET_PLAYER_TEAM(PlayerIndex, Team, bRestrictToThisScript);
	}
	const char* GET_PLAYER_NAME_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_NAME(PlayerIndex);
	}
	const char* _FORMAT_PLAYER_NAME_STRING_Export(const char* string)
	{
		return PLAYER::_FORMAT_PLAYER_NAME_STRING(string);
	}
	float GET_WANTED_LEVEL_RADIUS_Export(int WantedLevel)
	{
		return PLAYER::GET_WANTED_LEVEL_RADIUS(WantedLevel);
	}
	int GET_WANTED_LEVEL_THRESHOLD_Export(int wantedLevel)
	{
		return PLAYER::GET_WANTED_LEVEL_THRESHOLD(wantedLevel);
	}
	void SET_PLAYER_WANTED_LEVEL_Export(Player PlayerIndex, int WantedLevel, BOOL bDelayLawResponse)
	{
		return PLAYER::SET_PLAYER_WANTED_LEVEL(PlayerIndex, WantedLevel, bDelayLawResponse);
	}
	BOOL IS_PLAYER_WANTED_LEVEL_GREATER_Export(Player PlayerIndex, int WantedLevel)
	{
		return PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PlayerIndex, WantedLevel);
	}
	void CLEAR_PLAYER_WANTED_LEVEL_Export(Player PlayerIndex)
	{
		return PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PlayerIndex);
	}
	BOOL IS_PLAYER_DEAD_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_DEAD(PlayerIndex);
	}
	void SET_PLAYER_CONTROL_Export(Player iPlayerIndex, BOOL bSetControlOn, int iFlags, BOOL bPreventHeadingChange)
	{
		return PLAYER::SET_PLAYER_CONTROL(iPlayerIndex, bSetControlOn, iFlags, bPreventHeadingChange);
	}
	int GET_PLAYER_WANTED_LEVEL_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_WANTED_LEVEL(PlayerIndex);
	}
	void SET_MAX_WANTED_LEVEL_Export(int NewMaxLevel)
	{
		return PLAYER::SET_MAX_WANTED_LEVEL(NewMaxLevel);
	}
	void _SET_MAX_WANTED_LEVEL_2_Export(int maxWantedLevel)
	{
		return PLAYER::_SET_MAX_WANTED_LEVEL_2(maxWantedLevel);
	}
	void SET_POLICE_RADAR_BLIPS_Export(BOOL bBlips)
	{
		return PLAYER::SET_POLICE_RADAR_BLIPS(bBlips);
	}
	BOOL IS_PLAYER_PLAYING_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_PLAYING(PlayerIndex);
	}
	void SET_EVERYONE_IGNORE_PLAYER_Export(Player PlayerIndex, BOOL IgnorePlayer)
	{
		return PLAYER::SET_EVERYONE_IGNORE_PLAYER(PlayerIndex, IgnorePlayer);
	}
	BOOL GET_IS_PLAYER_UI_PROMPT_ACTIVE_Export(Player player, int p1)
	{
		return PLAYER::GET_IS_PLAYER_UI_PROMPT_ACTIVE(player, p1);
	}
	void _MODIFY_PLAYER_UI_PROMPT_Export(Player player, int promptType, int promptMode, BOOL disabled)
	{
		return PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, promptMode, disabled);
	}
	BOOL _GET_PLAYER_UI_PROMPT_IS_DISABLED_Export(Player player, int promptType, int promptMode)
	{
		return PLAYER::_GET_PLAYER_UI_PROMPT_IS_DISABLED(player, promptType, promptMode);
	}
	void _MODIFY_PLAYER_UI_PROMPT_FOR_PED_Export(Player player, Ped ped, int promptType, int promptMode, BOOL enabled)
	{
		return PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, promptType, promptMode, enabled);
	}
	BOOL _GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED_Export(Player player, Ped ped, int promptType, int promptMode)
	{
		return PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, ped, promptType, promptMode);
	}
	void _0x93624B36E8851B42_Export(Player player)
	{
		return PLAYER::_0x93624B36E8851B42(player);
	}
	void _0x9073EC5456651A90_Export(Any p0, Any p1)
	{
		return PLAYER::_0x9073EC5456651A90(p0, p1);
	}
	void _0x2E67707BEC52CA4B_Export(Any p0)
	{
		return PLAYER::_0x2E67707BEC52CA4B(p0);
	}
	void SET_ALL_RANDOM_PEDS_FLEE_Export(Player PlayerIndex, BOOL PedsFlee)
	{
		return PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PlayerIndex, PedsFlee);
	}
	void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME_Export(Player PlayerIndex)
	{
		return PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PlayerIndex);
	}
	void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME_Export(Player PlayerIndex)
	{
		return PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PlayerIndex);
	}
	void _0x1D256EED194F5B58_Export(Any p0)
	{
		return PLAYER::_0x1D256EED194F5B58(p0);
	}
	Any _0x5B7B97E99F84138B_Export(Any p0)
	{
		return PLAYER::_0x5B7B97E99F84138B(p0);
	}
	void _SET_DISABLE_PLAYER_WANTED_LEVEL_Export(Player player, BOOL disable)
	{
		return PLAYER::_SET_DISABLE_PLAYER_WANTED_LEVEL(player, disable);
	}
	float _GET_WANTED_LEVEL_MULTIPLIER_Export()
	{
		return PLAYER::_GET_WANTED_LEVEL_MULTIPLIER();
	}
	void SET_WANTED_LEVEL_MULTIPLIER_Export(float Multiplier)
	{
		return PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Multiplier);
	}
	void RESET_WANTED_LEVEL_DIFFICULTY_Export(Player PlayerIndex)
	{
		return PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PlayerIndex);
	}
	void UPDATE_WANTED_POSITION_THIS_FRAME_Export(Player PlayerIndex)
	{
		return PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PlayerIndex);
	}
	void SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME_Export(Player PlayerIndex)
	{
		return PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PlayerIndex);
	}
	void REPORT_POLICE_SPOTTED_PLAYER_Export(Player PlayerIndex)
	{
		return PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PlayerIndex);
	}
	void SET_LAW_RESPONSE_DELAY_OVERRIDE_Export(float fLawResponseDelay)
	{
		return PLAYER::SET_LAW_RESPONSE_DELAY_OVERRIDE(fLawResponseDelay);
	}
	void RESET_LAW_RESPONSE_DELAY_OVERRIDE_Export()
	{
		return PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
	}
	BOOL CAN_PLAYER_START_MISSION_Export(Player PlayerIndex)
	{
		return PLAYER::CAN_PLAYER_START_MISSION(PlayerIndex);
	}
	BOOL IS_PLAYER_READY_FOR_CUTSCENE_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PlayerIndex);
	}
	BOOL IS_PLAYER_TARGETTING_ENTITY_Export(Player PlayerIndex, Entity EntityIndex, BOOL p2)
	{
		return PLAYER::IS_PLAYER_TARGETTING_ENTITY(PlayerIndex, EntityIndex, p2);
	}
	BOOL GET_PLAYER_TARGET_ENTITY_Export(Player PlayerIndex, Entity* EntityIndex)
	{
		return PLAYER::GET_PLAYER_TARGET_ENTITY(PlayerIndex, EntityIndex);
	}
	BOOL _0x927861B2C08DBEA5_Export(Player player)
	{
		return PLAYER::_0x927861B2C08DBEA5(player);
	}
	BOOL _IS_PLAYER_FREE_FOCUSING_Export(Player player)
	{
		return PLAYER::_IS_PLAYER_FREE_FOCUSING(player);
	}
	BOOL GET_PLAYER_INTERACTION_TARGET_ENTITY_Export(Player player, Entity* outEntity, BOOL p2, BOOL p3)
	{
		return PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(player, outEntity, p2, p3);
	}
	Any _0xBEA3A6E5F5F79A6F_Export(Any p0, Any p1)
	{
		return PLAYER::_0xBEA3A6E5F5F79A6F(p0, p1);
	}
	BOOL _IS_PLAYER_IN_SCOPE_Export(Player player)
	{
		return PLAYER::_IS_PLAYER_IN_SCOPE(player);
	}
	BOOL IS_PLAYER_FREE_AIMING_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_FREE_AIMING(PlayerIndex);
	}
	BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY_Export(Player PlayerIndex, Entity EntityIndex)
	{
		return PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PlayerIndex, EntityIndex);
	}
	BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT_Export(Player PlayerIndex, Entity* EntityIndex)
	{
		return PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PlayerIndex, EntityIndex);
	}
	void _0x3DAABE78A23694BC_Export(Any p0, Any p1)
	{
		return PLAYER::_0x3DAABE78A23694BC(p0, p1);
	}
	BOOL _0x7AE93C45EC14A166_Export(Player player, Ped* ped)
	{
		return PLAYER::_0x7AE93C45EC14A166(player, ped);
	}
	void SET_PLAYER_LOCKON_RANGE_OVERRIDE_Export(Player PlayerIndex, float Range)
	{
		return PLAYER::SET_PLAYER_LOCKON_RANGE_OVERRIDE(PlayerIndex, Range);
	}
	void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS_Export(Player PlayerIndex, BOOL bCanBeHassled)
	{
		return PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PlayerIndex, bCanBeHassled);
	}
	void SET_PLAYER_CAN_USE_COVER_Export(Player PlayerIndex, BOOL CanUseCover)
	{
		return PLAYER::SET_PLAYER_CAN_USE_COVER(PlayerIndex, CanUseCover);
	}
	void _0xD1A70C1E8D1031FE_Export(Any p0, Any p1)
	{
		return PLAYER::_0xD1A70C1E8D1031FE(p0, p1);
	}
	void _0xACA45DDCEF6071C4_Export(Player player, BOOL p1)
	{
		return PLAYER::_0xACA45DDCEF6071C4(player, p1);
	}
	void _0xA0C683284DF027C7_Export(Player player, int p1, BOOL enable)
	{
		return PLAYER::_0xA0C683284DF027C7(player, p1, enable);
	}
	void _SET_PLAYER_CAN_MERCY_KILL_Export(Player player, BOOL toggle)
	{
		return PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, toggle);
	}
	void _0x4EC8BE63B8A5D4EF_Export(Player player, int p1)
	{
		return PLAYER::_0x4EC8BE63B8A5D4EF(player, p1);
	}
	int GET_MAX_WANTED_LEVEL_Export()
	{
		return PLAYER::GET_MAX_WANTED_LEVEL();
	}
	BOOL IS_PLAYER_TARGETTING_ANYTHING_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PlayerIndex);
	}
	void RESTORE_PLAYER_STAMINA_Export(Player PlayerIndex, float fPercent)
	{
		return PLAYER::RESTORE_PLAYER_STAMINA(PlayerIndex, fPercent);
	}
	void _0x8591EE69CC3ED257_Export(Player player, BOOL toggle)
	{
		return PLAYER::_0x8591EE69CC3ED257(player, toggle);
	}
	int GET_PLAYER_GROUP_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_GROUP(PlayerIndex);
	}
	void _0x3D9DA5C9EFD20D88_Export(Any p0, Any p1)
	{
		return PLAYER::_0x3D9DA5C9EFD20D88(p0, p1);
	}
	void _0x2BEED53B912537D0_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0x2BEED53B912537D0(p0, p1, p2);
	}
	void _0x908D4B72854C8F62_Export(Any p0)
	{
		return PLAYER::_0x908D4B72854C8F62(p0);
	}
	Any _0xD1F6B912785BFD35_Export(Any p0)
	{
		return PLAYER::_0xD1F6B912785BFD35(p0);
	}
	void _0xC4873B053054C04B_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return PLAYER::_0xC4873B053054C04B(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _0xCA59808E51FD67C4_Export(Any p0, Any p1)
	{
		return PLAYER::_0xCA59808E51FD67C4(p0, p1);
	}
	void _0xBA5CA1FEB5DE0DF6_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return PLAYER::_0xBA5CA1FEB5DE0DF6(p0, p1, p2, p3, p4, p5);
	}
	void _0x0869D499A7848309_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return PLAYER::_0x0869D499A7848309(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	BOOL _0xB331D8A73F9D2BDF_Export(Player player, void* p1)
	{
		return PLAYER::_0xB331D8A73F9D2BDF(player, p1);
	}
	void _ADD_PLAYER_AS_FOLLOW_TARGET_Export(Player player, Ped ped, float p2, float p3, int followMode, int followPriority, BOOL p6)
	{
		return PLAYER::_ADD_PLAYER_AS_FOLLOW_TARGET(player, ped, p2, p3, followMode, followPriority, p6);
	}
	void _REMOVE_PLAYER_AS_FOLLOW_TARGET_Export(Player player, Ped ped)
	{
		return PLAYER::_REMOVE_PLAYER_AS_FOLLOW_TARGET(player, ped);
	}
	void _0x12E09E278C6C29B7_Export(Any p0)
	{
		return PLAYER::_0x12E09E278C6C29B7(p0);
	}
	void _0xDD33A82352C4652F_Export(Player player, Ped ped, int p2)
	{
		return PLAYER::_0xDD33A82352C4652F(player, ped, p2);
	}
	void _0x1FDA57E8908F2609_Export(Player player, Ped ped, BOOL useSteerassist)
	{
		return PLAYER::_0x1FDA57E8908F2609(player, ped, useSteerassist);
	}
	void _0x84481018E668E1B8_Export(Player player, Ped ped, Any p2)
	{
		return PLAYER::_0x84481018E668E1B8(player, ped, p2);
	}
	BOOL _0x2009F8AB7A5E9D6D_Export(Player player)
	{
		return PLAYER::_0x2009F8AB7A5E9D6D(player);
	}
	BOOL _IS_PLAYER_FOLLOWING_TARGET_Export(Player player, Ped ped)
	{
		return PLAYER::_IS_PLAYER_FOLLOWING_TARGET(player, ped);
	}
	BOOL _0xE7F8707269544B29_Export(Player player, Ped ped)
	{
		return PLAYER::_0xE7F8707269544B29(player, ped);
	}
	Any _0xE631EAF35828FA67_Export(Any p0)
	{
		return PLAYER::_0xE631EAF35828FA67(p0);
	}
	void _0x086549F3B0381CB1_Export(Any p0, Any p1)
	{
		return PLAYER::_0x086549F3B0381CB1(p0, p1);
	}
	BOOL IS_PLAYER_CONTROL_ON_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_CONTROL_ON(PlayerIndex);
	}
	BOOL IS_PLAYER_SCRIPT_CONTROL_ON_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PlayerIndex);
	}
	BOOL IS_PLAYER_CLIMBING_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_CLIMBING(PlayerIndex);
	}
	void _0xEBB6E27AC2FF32DA_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return PLAYER::_0xEBB6E27AC2FF32DA(p0, p1, p2, p3, p4);
	}
	Any _0xB15CD2F9932C9AB5_Export(Any p0)
	{
		return PLAYER::_0xB15CD2F9932C9AB5(p0);
	}
	BOOL _0x621D1B289CAF5978_Export(Player player)
	{
		return PLAYER::_0x621D1B289CAF5978(player);
	}
	BOOL IS_PLAYER_BEING_ARRESTED_Export(Player PlayerIndex, BOOL CheckBustedTask)
	{
		return PLAYER::IS_PLAYER_BEING_ARRESTED(PlayerIndex, CheckBustedTask);
	}
	void RESET_PLAYER_ARREST_STATE_Export(Player PlayerIndex)
	{
		return PLAYER::RESET_PLAYER_ARREST_STATE(PlayerIndex);
	}
	void _0xCBB54CC7FFFFAB86_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PLAYER::_0xCBB54CC7FFFFAB86(p0, p1, p2, p3);
	}
	void _0xBED386157F65942C_Export(Any p0, Any p1)
	{
		return PLAYER::_0xBED386157F65942C(p0, p1);
	}
	Any _0xDAB6A2FC56B7DE65_Export(Any p0)
	{
		return PLAYER::_0xDAB6A2FC56B7DE65(p0);
	}
	Any _0x0F4EAF69DA41AF43_Export(Any p0)
	{
		return PLAYER::_0x0F4EAF69DA41AF43(p0);
	}
	void _SET_BOUNTY_TARGET_Export(Player player, Player target)
	{
		return PLAYER::_SET_BOUNTY_TARGET(player, target);
	}
	void _CLEAR_BOUNTY_TARGET_Export(Player player)
	{
		return PLAYER::_CLEAR_BOUNTY_TARGET(player);
	}
	Vehicle GET_PLAYERS_LAST_VEHICLE_Export()
	{
		return PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	Player GET_PLAYER_INDEX_Export()
	{
		return PLAYER::GET_PLAYER_INDEX();
	}
	Player INT_TO_PLAYERINDEX_Export(int Arg)
	{
		return PLAYER::INT_TO_PLAYERINDEX(Arg);
	}
	int INT_TO_PARTICIPANTINDEX_Export(int Arg)
	{
		return PLAYER::INT_TO_PARTICIPANTINDEX(Arg);
	}
	Player PLAYER_ID_Export()
	{
		return PLAYER::PLAYER_ID();
	}
	Ped PLAYER_PED_ID_Export()
	{
		return PLAYER::PLAYER_PED_ID();
	}
	int NETWORK_PLAYER_ID_TO_INT_Export()
	{
		return PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	BOOL HAS_FORCE_CLEANUP_OCCURRED_Export(int ForceCleanupBitField)
	{
		return PLAYER::HAS_FORCE_CLEANUP_OCCURRED(ForceCleanupBitField);
	}
	void FORCE_CLEANUP_Export(int ForceCleanupBitField)
	{
		return PLAYER::FORCE_CLEANUP(ForceCleanupBitField);
	}
	void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME_Export(const char* pName, int ForceCleanupBitField)
	{
		return PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(pName, ForceCleanupBitField);
	}
	void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID_Export(int Thread_Id, int ForceCleanupBitField)
	{
		return PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Thread_Id, ForceCleanupBitField);
	}
	int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP_Export()
	{
		return PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	}
	void _SET_PLAYER_MOOD_Export(Player player, int mood)
	{
		return PLAYER::_SET_PLAYER_MOOD(player, mood);
	}
	int _GET_PLAYER_MOOD_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_MOOD(player);
	}
	void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE_Export(Player PlayerIndex, Vehicle iVehicleID)
	{
		return PLAYER::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(PlayerIndex, iVehicleID);
	}
	void _0xC71D07C96946E263_Export(Any p0, Any p1)
	{
		return PLAYER::_0xC71D07C96946E263(p0, p1);
	}
	void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE_Export(Player PlayerIndex)
	{
		return PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PlayerIndex);
	}
	BOOL IS_SYSTEM_UI_BEING_DISPLAYED_Export()
	{
		return PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED();
	}
	void _0xD48227263E3D06AE_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return PLAYER::_0xD48227263E3D06AE(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _0x3946FC742AC305CD_Export(Player player, Ped ped, const char* p2, float x, float y, float z, Entity targetEntity, const char* p7)
	{
		return PLAYER::_0x3946FC742AC305CD(player, ped, p2, x, y, z, targetEntity, p7);
	}
	void _0xA28056CD1B04B250_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		return PLAYER::_0xA28056CD1B04B250(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void _0xC67A4910425F11F1_Export(Player player, const char* name)
	{
		return PLAYER::_0xC67A4910425F11F1(player, name);
	}
	void SET_PLAYER_INVINCIBLE_Export(Player PlayerIndex, BOOL Invincible)
	{
		return PLAYER::SET_PLAYER_INVINCIBLE(PlayerIndex, Invincible);
	}
	BOOL GET_PLAYER_INVINCIBLE_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_INVINCIBLE(PlayerIndex);
	}
	void SET_PLAYER_LOCKON_Export(Player PlayerIndex, BOOL bActive)
	{
		return PLAYER::SET_PLAYER_LOCKON(PlayerIndex, bActive);
	}
	void SET_LOCKON_TO_FRIENDLY_PLAYERS_Export(Player player, BOOL toggle)
	{
		return PLAYER::SET_LOCKON_TO_FRIENDLY_PLAYERS(player, toggle);
	}
	void SET_PLAYER_TARGETING_MODE_Export(int TargetMode)
	{
		return PLAYER::SET_PLAYER_TARGETING_MODE(TargetMode);
	}
	void _SET_PLAYER_IN_VEHICLE_TARGETING_MODE_Export(int targetMode)
	{
		return PLAYER::_SET_PLAYER_IN_VEHICLE_TARGETING_MODE(targetMode);
	}
	Any _0x747257807B8721CE_Export(Any p0, Any p1)
	{
		return PLAYER::_0x747257807B8721CE(p0, p1);
	}
	Any _0x8702D9150D9FBB3D_Export(Any p0, Any p1)
	{
		return PLAYER::_0x8702D9150D9FBB3D(p0, p1);
	}
	void _0xCB0B9506BC91E441_Export(Any p0, Any p1)
	{
		return PLAYER::_0xCB0B9506BC91E441(p0, p1);
	}
	void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED_Export(Player PlayerIndex)
	{
		return PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PlayerIndex);
	}
	BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED_Export(Player PlayerIndex)
	{
		return PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PlayerIndex);
	}
	void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED_Export(Player PlayerIndex)
	{
		return PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PlayerIndex);
	}
	BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED_Export(Player PlayerIndex)
	{
		return PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PlayerIndex);
	}
	void _0xEACEBAAE0A33FB3F_Export(Any p0)
	{
		return PLAYER::_0xEACEBAAE0A33FB3F(p0);
	}
	BOOL _0x72AD59F7B7FB6E24_Export(Player player, int p1)
	{
		return PLAYER::_0x72AD59F7B7FB6E24(player, p1);
	}
	BOOL _0x1A6E84F13C952094_Export(Player player, int p1, void* p2)
	{
		return PLAYER::_0x1A6E84F13C952094(player, p1, p2);
	}
	void _SET_PLAYER_DAMAGE_INFO_OVERRIDE_Export(Player player, const char* damageInfo)
	{
		return PLAYER::_SET_PLAYER_DAMAGE_INFO_OVERRIDE(player, damageInfo);
	}
	void _0x1F488807BC8E0630_Export(Player player)
	{
		return PLAYER::_0x1F488807BC8E0630(player);
	}
	void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE_Export(Player PlayerIndex, float fDragMult)
	{
		return PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PlayerIndex, fDragMult);
	}
	void SET_SWIM_MULTIPLIER_FOR_PLAYER_Export(Player PlayerIndex, float fMultiplier)
	{
		return PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PlayerIndex, fMultiplier);
	}
	BOOL _0x73EB2EF2E92D23BF_Export()
	{
		return PLAYER::_0x73EB2EF2E92D23BF();
	}
	void SET_PLAYER_FORCED_AIM_Export(Player PlayerIndex, BOOL ForcedAim, Ped ped, int p3, BOOL p4)
	{
		return PLAYER::SET_PLAYER_FORCED_AIM(PlayerIndex, ForcedAim, ped, p3, p4);
	}
	void _0x310CE349E0C0EC4B_Export(Player player, Ped ped, int p2)
	{
		return PLAYER::_0x310CE349E0C0EC4B(player, ped, p2);
	}
	void DISABLE_PLAYER_FIRING_Export(Player PlayerIndex, BOOL disable)
	{
		return PLAYER::DISABLE_PLAYER_FIRING(PlayerIndex, disable);
	}
	void _0xEBFF94328FF7A18A_Export(Any p0, Any p1)
	{
		return PLAYER::_0xEBFF94328FF7A18A(p0, p1);
	}
	void _0xF993373285053D77_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0xF993373285053D77(p0, p1, p2);
	}
	Any _0xE956C2340A76272E_Export(Any p0)
	{
		return PLAYER::_0xE956C2340A76272E(p0);
	}
	void _ENABLE_CUSTOM_DEADEYE_ABILITY_Export(Player player, BOOL enable)
	{
		return PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(player, enable);
	}
	Any _0xDE6C85975F9D4894_Export(Any p0)
	{
		return PLAYER::_0xDE6C85975F9D4894(p0);
	}
	void _0xBBA140062B15A8AC_Export(Player player)
	{
		return PLAYER::_0xBBA140062B15A8AC(player);
	}
	void _SPECIAL_ABILITY_SET_DISABLED_Export(Player player, BOOL disabled)
	{
		return PLAYER::_SPECIAL_ABILITY_SET_DISABLED(player, disabled);
	}
	BOOL _IS_SPECIAL_ABILITY_ACTIVE_Export(Player player)
	{
		return PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player);
	}
	void _MODIFY_INFINITE_TRAIL_VISION_Export(Player player, BOOL toggle)
	{
		return PLAYER::_MODIFY_INFINITE_TRAIL_VISION(player, toggle);
	}
	void _SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED_Export(Player player)
	{
		return PLAYER::_SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED(player);
	}
	void _SPECIAL_ABILITY_RESTORE_BY_AMOUNT_Export(Player player, float amount, int p2, int p3, int p4)
	{
		return PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, amount, p2, p3, p4);
	}
	void _0xFA437FA0738C370C_Export(Player player, float p1, int p2, int p3, int p4)
	{
		return PLAYER::_0xFA437FA0738C370C(player, p1, p2, p3, p4);
	}
	void _SPECIAL_ABILITY_RESTORE_OUTER_RING_Export(Player player, float amount)
	{
		return PLAYER::_SPECIAL_ABILITY_RESTORE_OUTER_RING(player, amount);
	}
	float _GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT(player);
	}
	float _SPECIAL_ABILITY_GET_AMOUNT_CACHED_Export(Player player)
	{
		return PLAYER::_SPECIAL_ABILITY_GET_AMOUNT_CACHED(player);
	}
	void _SPECIAL_ABILITY_DRAIN_BY_AMOUNT_Export(Player player, float amount, Any p2)
	{
		return PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, amount, p2);
	}
	void _SPECIAL_ABILITY_START_RESTORE_Export(Player player, int p1, BOOL p2)
	{
		return PLAYER::_SPECIAL_ABILITY_START_RESTORE(player, p1, p2);
	}
	void _SET_SPECIAL_ABILITY_MULTIPLIER_Export(Player player, float multiplier)
	{
		return PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, multiplier);
	}
	float _GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);
	}
	void _SET_SPECIAL_ABILITY_TYPE_Export(Player player, int type)
	{
		return PLAYER::_SET_SPECIAL_ABILITY_TYPE(player, type);
	}
	void _0x22B3CABEDDB538B2_Export(Player player, float p1)
	{
		return PLAYER::_0x22B3CABEDDB538B2(player, p1);
	}
	void _SET_SPECIAL_ABILITY_DURATION_COST_Export(Player player, float durationCost)
	{
		return PLAYER::_SET_SPECIAL_ABILITY_DURATION_COST(player, durationCost);
	}
	void _SET_SPECIAL_ABILITY_DISABLE_TIMER_Export(Player player, float timer)
	{
		return PLAYER::_SET_SPECIAL_ABILITY_DISABLE_TIMER(player, timer);
	}
	Any _0x57D9991DC1334151_Export(Any p0)
	{
		return PLAYER::_0x57D9991DC1334151(p0);
	}
	Any _0x21091B4BEB6376EE_Export(Any p0)
	{
		return PLAYER::_0x21091B4BEB6376EE(p0);
	}
	void _SET_SPECIAL_ABILITY_ACTIVATION_COST_Export(Player player, float activationCost, int p2)
	{
		return PLAYER::_SET_SPECIAL_ABILITY_ACTIVATION_COST(player, activationCost, p2);
	}
	void _0x4D1699543B1C023C_Export(Player player, float p1)
	{
		return PLAYER::_0x4D1699543B1C023C(player, p1);
	}
	float _GET_PLAYER_DEAD_EYE_METER_LEVEL_Export(Player player, BOOL p1)
	{
		return PLAYER::_GET_PLAYER_DEAD_EYE_METER_LEVEL(player, p1);
	}
	float _GET_PLAYER_DEAD_EYE_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_DEAD_EYE(player);
	}
	float _GET_PLAYER_CACHED_DEAD_EYE_AMOUNT_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(player);
	}
	float _GET_PLAYER_MAX_DEAD_EYE_Export(Player player, Any p1)
	{
		return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(player, p1);
	}
	float _GET_PLAYER_HEALTH_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_HEALTH(player);
	}
	float _GET_PLAYER_STAMINA_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_STAMINA(player);
	}
	void _SET_PLAYER_STAT_FLAG_HASH_Export(Player player, Hash p1)
	{
		return PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, p1);
	}
	void _SET_USED_ITEM_EFFECT_Export(float health, float stamina, float deadeye, int healthCore, int staminaCore, int deadeyeCore)
	{
		return PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, healthCore, staminaCore, deadeyeCore);
	}
	void _0x08E22898A6AF4905_Export(Any p0, Any p1)
	{
		return PLAYER::_0x08E22898A6AF4905(p0, p1);
	}
	Any _0xBEFED69CE8317F91_Export(Any p0)
	{
		return PLAYER::_0xBEFED69CE8317F91(p0);
	}
	void _ENABLE_EAGLEEYE_Export(Player player, BOOL enable)
	{
		return PLAYER::_ENABLE_EAGLEEYE(player, enable);
	}
	BOOL _IS_SECONDARY_SPECIAL_ABILITY_ENABLED_Export(Player player)
	{
		return PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ENABLED(player);
	}
	void _SECONDARY_SPECIAL_ABILITY_SET_ACTIVE_Export(Player player)
	{
		return PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_ACTIVE(player);
	}
	void _SECONDARY_SPECIAL_ABILITY_SET_DISABLED_Export(Player player, BOOL disabled)
	{
		return PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(player, disabled);
	}
	BOOL _IS_SECONDARY_SPECIAL_ABILITY_ACTIVE_Export(Player player)
	{
		return PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(player);
	}
	void _0x107F2A66E1C4C83A_Export(Any p0)
	{
		return PLAYER::_0x107F2A66E1C4C83A(p0);
	}
	void START_PLAYER_TELEPORT_Export(Player PlayerIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8)
	{
		return PLAYER::START_PLAYER_TELEPORT(PlayerIndex, VecCoorsX, VecCoorsY, VecCoorsZ, heading, p5, p6, p7, p8);
	}
	void _0x2C2D287748E8E9B7_Export(BOOL p0)
	{
		return PLAYER::_0x2C2D287748E8E9B7(p0);
	}
	BOOL UPDATE_PLAYER_TELEPORT_Export(Player PlayerIndex)
	{
		return PLAYER::UPDATE_PLAYER_TELEPORT(PlayerIndex);
	}
	void STOP_PLAYER_TELEPORT_Export()
	{
		return PLAYER::STOP_PLAYER_TELEPORT();
	}
	BOOL IS_PLAYER_TELEPORT_ACTIVE_Export()
	{
		return PLAYER::IS_PLAYER_TELEPORT_ACTIVE();
	}
	float GET_PLAYER_CURRENT_STEALTH_NOISE_Export(Player PlayerIndex)
	{
		return PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PlayerIndex);
	}
	void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER_Export(Player PlayerIndex, float Mult)
	{
		return PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PlayerIndex, Mult);
	}
	float _GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(player);
	}
	void _SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER_Export(Player player, float modifier)
	{
		return PLAYER::_SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER(player, modifier);
	}
	void SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER_Export(Player player, float multiplier)
	{
		return PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(player, multiplier);
	}
	float _GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(player);
	}
	void _SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER_Export(Player player, float multiplier)
	{
		return PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(player, multiplier);
	}
	float _GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER(player);
	}
	void _SET_PED_ACTIVE_PLAYER_HORSE_Export(Player player, Ped horse)
	{
		return PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(player, horse);
	}
	Ped _GET_ACTIVE_HORSE_FOR_PLAYER_Export(Player player)
	{
		return PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(player);
	}
	void _SET_PED_AS_SADDLE_HORSE_FOR_PLAYER_Export(Player player, Ped mount)
	{
		return PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
	}
	Ped _GET_SADDLE_HORSE_FOR_PLAYER_Export(Player player)
	{
		return PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(player);
	}
	BOOL SET_PED_AS_TEMP_PLAYER_HORSE_Export(Player player, Ped horse)
	{
		return PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(player, horse);
	}
	Ped _GET_TEMP_PLAYER_HORSE_Export(Player player)
	{
		return PLAYER::_GET_TEMP_PLAYER_HORSE(player);
	}
	void _0x77B0B6D17A3AC9AA_Export(Any p0, Any p1)
	{
		return PLAYER::_0x77B0B6D17A3AC9AA(p0, p1);
	}
	void _SET_PLAYER_MOUNT_STATE_ACTIVE_Export(Player player, BOOL active)
	{
		return PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(player, active);
	}
	void _0x694FFA4308060CD1_Export(Any p0, Any p1)
	{
		return PLAYER::_0x694FFA4308060CD1(p0, p1);
	}
	void BOOST_PLAYER_HORSE_SPEED_FOR_TIME_Export(Player player, float speedBoost, int duration)
	{
		return PLAYER::BOOST_PLAYER_HORSE_SPEED_FOR_TIME(player, speedBoost, duration);
	}
	void SET_PLAYER_WEAPON_DAMAGE_MODIFIER_Export(Player PlayerIndex, float Modifier)
	{
		return PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PlayerIndex, Modifier);
	}
	void SET_PLAYER_WEAPON_DEFENSE_MODIFIER_Export(Player PlayerIndex, float Modifier)
	{
		return PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PlayerIndex, Modifier);
	}
	void _0x818241B3EDA84191_Export(Player player, BOOL p1)
	{
		return PLAYER::_0x818241B3EDA84191(player, p1);
	}
	void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER_Export(Player PlayerIndex, float Modifier)
	{
		return PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PlayerIndex, Modifier);
	}
	void _SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER_Export(Player player, float modifier)
	{
		return PLAYER::_SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER(player, modifier);
	}
	void _0x83C989D5B5B5B466_Export(Any p0, Any p1)
	{
		return PLAYER::_0x83C989D5B5B5B466(p0, p1);
	}
	Any _0x03B4B759A8990505_Export(Any p0)
	{
		return PLAYER::_0x03B4B759A8990505(p0);
	}
	void _0x67659A8F248E0141_Export(Any p0, Any p1)
	{
		return PLAYER::_0x67659A8F248E0141(p0, p1);
	}
	void _SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE_Export(Player player, float damageDecrease)
	{
		return PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(player, damageDecrease);
	}
	void _SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_Export(Player player, float modifier)
	{
		return PLAYER::_SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(player, modifier);
	}
	float _GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_Export(Player player)
	{
		return PLAYER::_GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(player);
	}
	Any _0x19B2C7A6C34FAD54_Export(Any p0, Any p1)
	{
		return PLAYER::_0x19B2C7A6C34FAD54(p0, p1);
	}
	Any _0x9422743A5BA50E10_Export(Any p0)
	{
		return PLAYER::_0x9422743A5BA50E10(p0);
	}
	void _SET_PLAYER_DEFENSE_MODIFIER_Export(Player player, float weaponDefenseMod, float meleeDefenseMod)
	{
		return PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(player, weaponDefenseMod, meleeDefenseMod);
	}
	void _SET_PLAYER_DEFENSE_TYPE_MODIFIER_Export(Player player, int type, float defenseModifier)
	{
		return PLAYER::_SET_PLAYER_DEFENSE_TYPE_MODIFIER(player, type, defenseModifier);
	}
	void SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER_Export(Player player, Hash weaponHash, float damageModifier)
	{
		return PLAYER::SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER(player, weaponHash, damageModifier);
	}
	float _GET_PLAYER_WEAPON_DAMAGE_Export(Player player, Hash weaponHash)
	{
		return PLAYER::_GET_PLAYER_WEAPON_DAMAGE(player, weaponHash);
	}
	void _0x5C2E5E3CAEEB1F58_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0x5C2E5E3CAEEB1F58(p0, p1, p2);
	}
	void _SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER_Export(Player player, Hash weaponGroup, float modifier)
	{
		return PLAYER::_SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER(player, weaponGroup, modifier);
	}
	void _SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL_Export(Player player, Hash weaponGroup, BOOL toggle)
	{
		return PLAYER::_SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL(player, weaponGroup, toggle);
	}
	void _SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER_Export(Player player, float modifier)
	{
		return PLAYER::_SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER(player, modifier);
	}
	void _SET_PLAYER_LASSO_DAMAGE_PER_SECOND_Export(Player player, float damage)
	{
		return PLAYER::_SET_PLAYER_LASSO_DAMAGE_PER_SECOND(player, damage);
	}
	void _SET_PLAYER_TOTAL_ACCURACY_MODIFIER_Export(Player player, float accuracy)
	{
		return PLAYER::_SET_PLAYER_TOTAL_ACCURACY_MODIFIER(player, accuracy);
	}
	void _SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER_Export(Player player, float accuracy)
	{
		return PLAYER::_SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER(player, accuracy);
	}
	void _SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER_Export(Player player, float accuracy)
	{
		return PLAYER::_SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER(player, accuracy);
	}
	void _0x3AD212429E095EFB_Export(Any p0, Any p1)
	{
		return PLAYER::_0x3AD212429E095EFB(p0, p1);
	}
	void SET_PLAYER_NOISE_MULTIPLIER_Export(Player PlayerIndex, float Mult)
	{
		return PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PlayerIndex, Mult);
	}
	void _0x113EF458AB6CDA67_Export(Any p0, Any p1)
	{
		return PLAYER::_0x113EF458AB6CDA67(p0, p1);
	}
	void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER_Export(Player PlayerIndex, float Mult)
	{
		return PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PlayerIndex, Mult);
	}
	void SIMULATE_PLAYER_INPUT_GAIT_Export(Player playerIdx, float moveBlendRatio, int timer, float heading, BOOL useRelativeHeading, BOOL noInputInterruption)
	{
		return PLAYER::SIMULATE_PLAYER_INPUT_GAIT(playerIdx, moveBlendRatio, timer, heading, useRelativeHeading, noInputInterruption);
	}
	void RESET_PLAYER_INPUT_GAIT_Export(Player playerIdx)
	{
		return PLAYER::RESET_PLAYER_INPUT_GAIT(playerIdx);
	}
	void SET_PLAYER_SIMULATE_AIMING_Export(Player PlayerIndex, BOOL SimulateAiming)
	{
		return PLAYER::SET_PLAYER_SIMULATE_AIMING(PlayerIndex, SimulateAiming);
	}
	void SET_PLAYER_CLOTH_PIN_FRAMES_Export(Player PlayerIndex, int pinFrames)
	{
		return PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PlayerIndex, pinFrames);
	}
	BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE_Export(Player PlayerIndex)
	{
		return PLAYER::HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(PlayerIndex);
	}
	BOOL GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY_Export(Player PlayerIndex, int nTime, BOOL bIncludeLocalEvents)
	{
		return PLAYER::GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(PlayerIndex, nTime, bIncludeLocalEvents);
	}
	void _SET_MOUNT_PROMPT_DISABLED_Export(BOOL disabled)
	{
		return PLAYER::_SET_MOUNT_PROMPT_DISABLED(disabled);
	}
	BOOL IS_PLAYER_RIDING_TRAIN_Export(Player PlayerIndex)
	{
		return PLAYER::IS_PLAYER_RIDING_TRAIN(PlayerIndex);
	}
	void _0x9AFCF9FE1884BF62_Export(Any p0, Any p1)
	{
		return PLAYER::_0x9AFCF9FE1884BF62(p0, p1);
	}
	Any _0x1E8099F449ABB0BA_Export(Any p0)
	{
		return PLAYER::_0x1E8099F449ABB0BA(p0);
	}
	int _GET_DEADEYE_ABILITY_LEVEL_Export(Player player)
	{
		return PLAYER::_GET_DEADEYE_ABILITY_LEVEL(player);
	}
	void _SET_DEADEYE_ABILITY_LEVEL_Export(Player player, int level)
	{
		return PLAYER::_SET_DEADEYE_ABILITY_LEVEL(player, level);
	}
	BOOL _IS_DEADEYE_ABILITY_LOCKED_Export(Player player, int abilityType)
	{
		return PLAYER::_IS_DEADEYE_ABILITY_LOCKED(player, abilityType);
	}
	void _SET_DEADEYE_ABILITY_LOCKED_Export(Player player, int abilityType, BOOL toggle)
	{
		return PLAYER::_SET_DEADEYE_ABILITY_LOCKED(player, abilityType, toggle);
	}
	void _SET_DEADEYE_TAGGING_ENABLED_Export(Player player, BOOL toggle)
	{
		return PLAYER::_SET_DEADEYE_TAGGING_ENABLED(player, toggle);
	}
	BOOL _GET_IS_DEADEYE_TAGGING_ENABLED_Export(Player player)
	{
		return PLAYER::_GET_IS_DEADEYE_TAGGING_ENABLED(player);
	}
	void _0x3C4AE8506638C7E2_Export(Any p0, Any p1)
	{
		return PLAYER::_0x3C4AE8506638C7E2(p0, p1);
	}
	Any _0x51139D8C17B16FBC_Export(Any p0)
	{
		return PLAYER::_0x51139D8C17B16FBC(p0);
	}
	void _0x8F44EBB3BA8F6D44_Export(Any p0, Any p1)
	{
		return PLAYER::_0x8F44EBB3BA8F6D44(p0, p1);
	}
	void _SET_DEADEYE_TAGGING_CONFIG_Export(Player player, int filter)
	{
		return PLAYER::_SET_DEADEYE_TAGGING_CONFIG(player, filter);
	}
	Any _0xE92261BD28C0878F_Export(Any p0)
	{
		return PLAYER::_0xE92261BD28C0878F(p0);
	}
	void _SET_DEADEYE_ABILITY_DEPLETION_DELAY_Export(Player player, float delay)
	{
		return PLAYER::_SET_DEADEYE_ABILITY_DEPLETION_DELAY(player, delay);
	}
	Any _0xA54000D4BFD90BDE_Export(Any p0)
	{
		return PLAYER::_0xA54000D4BFD90BDE(p0);
	}
	void _0x6EDB5D08CB03E763_Export(Any p0, Any p1)
	{
		return PLAYER::_0x6EDB5D08CB03E763(p0, p1);
	}
	Any _0x27AD7162D3FED01E_Export(Any p0, Any p1)
	{
		return PLAYER::_0x27AD7162D3FED01E(p0, p1);
	}
	int _GET_NUM_MARKED_DEADEYE_TARGETS_Export(Player player)
	{
		return PLAYER::_GET_NUM_MARKED_DEADEYE_TARGETS(player);
	}
	Any _0xC93A9A45430D484E_Export(Any p0)
	{
		return PLAYER::_0xC93A9A45430D484E(p0);
	}
	void _0x570A13A4CA2799BB_Export(Player player, BOOL p1)
	{
		return PLAYER::_0x570A13A4CA2799BB(player, p1);
	}
	void _0x3ACAC8832E77BC93_Export(Player player, BOOL p1)
	{
		return PLAYER::_0x3ACAC8832E77BC93(player, p1);
	}
	void _0x2B12B6FC8B8772AB_Export(Player player, int p1)
	{
		return PLAYER::_0x2B12B6FC8B8772AB(player, p1);
	}
	void _0xE910932F4B30BE23_Export(Player player)
	{
		return PLAYER::_0xE910932F4B30BE23(player);
	}
	void _0x131E294EF60160DF_Export(Player player, float p1, float p2, float p3, float p4, Any p5)
	{
		return PLAYER::_0x131E294EF60160DF(player, p1, p2, p3, p4, p5);
	}
	void _0x0E9057A9DA78D0F8_Export(Player player, int bitflag)
	{
		return PLAYER::_0x0E9057A9DA78D0F8(player, bitflag);
	}
	void _0x263D69767F76059C_Export(Player player, int p1)
	{
		return PLAYER::_0x263D69767F76059C(player, p1);
	}
	void _REGISTER_EAGLE_EYE_FOR_ENTITY_Export(Player player, Entity entity, BOOL p2)
	{
		return PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(player, entity, p2);
	}
	void _REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_Export(Player player, Entity entity, Any p2)
	{
		return PLAYER::_REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY(player, entity, p2);
	}
	void _UNREGISTER_EAGLE_EYE_FOR_ENTITY_Export(Player player, Entity entity)
	{
		return PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(player, entity);
	}
	void _UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_Export(Player player, Entity entity, Any p2)
	{
		return PLAYER::_UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY(player, entity, p2);
	}
	void _0xE5D3EB37ABC1EB03_Export(Player player)
	{
		return PLAYER::_0xE5D3EB37ABC1EB03(player);
	}
	BOOL _IS_EAGLE_EYE_REGISTERED_FOR_ENTITY_Export(Player player, Entity entity)
	{
		return PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(player, entity);
	}
	Any _0x6852288340B43239_Export(Any p0, Any p1)
	{
		return PLAYER::_0x6852288340B43239(p0, p1);
	}
	Any _0xE50A67C33514A390_Export(Any p0, Any p1)
	{
		return PLAYER::_0xE50A67C33514A390(p0, p1);
	}
	void _0xD288E02E364972D2_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0xD288E02E364972D2(p0, p1, p2);
	}
	void _EAGLE_EYE_DISABLE_TRACKING_TRAIL_Export(Entity entity, const char* trail, Any p2, Any p3)
	{
		return PLAYER::_EAGLE_EYE_DISABLE_TRACKING_TRAIL(entity, trail, p2, p3);
	}
	void _0x6ECFC621A168424C_Export(Entity entity1, Entity entity2, Any p2, float p3)
	{
		return PLAYER::_0x6ECFC621A168424C(entity1, entity2, p2, p3);
	}
	void _0xDC5E09D012D759C4_Export(Entity entity1, Entity entity2, Any p2)
	{
		return PLAYER::_0xDC5E09D012D759C4(entity1, entity2, p2);
	}
	void _0x00B156AFEBCC5AE0_Export(Any p0)
	{
		return PLAYER::_0x00B156AFEBCC5AE0(p0);
	}
	void _0xC58CE6824E604DEC_Export(Any p0)
	{
		return PLAYER::_0xC58CE6824E604DEC(p0);
	}
	void _0x330CA55A3647FA1C_Export(Any p0, Any p1)
	{
		return PLAYER::_0x330CA55A3647FA1C(p0, p1);
	}
	Any _0xA62BBAAE67A05BB0_Export(Any p0)
	{
		return PLAYER::_0xA62BBAAE67A05BB0(p0);
	}
	void _EAGLE_EYE_SET_COLOR_Export(Player player, BOOL p1, void* p2)
	{
		return PLAYER::_EAGLE_EYE_SET_COLOR(player, p1, p2);
	}
	void _0x22C8B10802301381_Export(Any p0, Any p1)
	{
		return PLAYER::_0x22C8B10802301381(p0, p1);
	}
	void _EAGLE_EYE_SET_DRAIN_RATE_MODIFIER_Export(Player player, float modifier)
	{
		return PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(player, modifier);
	}
	void _0x06E1FB78B1E59CA5_Export(Ped ped, BOOL p1)
	{
		return PLAYER::_0x06E1FB78B1E59CA5(ped, p1);
	}
	void _EAGLE_EYE_SET_PLUS_FLAG_DISABLED_Export(Ped ped, BOOL disabled)
	{
		return PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(ped, disabled);
	}
	Any _0x3813E11A378958A5_Export(Any p0)
	{
		return PLAYER::_0x3813E11A378958A5(p0);
	}
	void _EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL_Export(Player player, Entity linkedWaypointPed)
	{
		return PLAYER::_EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL(player, linkedWaypointPed);
	}
	void _0x0F9CF06986300875_Export(Any p0)
	{
		return PLAYER::_0x0F9CF06986300875(p0);
	}
	void _EAGLE_EYE_SET_TRACKING_UPGRADE_Export(Player player, float p1)
	{
		return PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, p1);
	}
	void _EAGLE_EYE_SET_TRACKING_UPGRADE_2_Export(Player player, float p1)
	{
		return PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, p1);
	}
	Any _0x1DA5C5B0923E1B85_Export(Any p0)
	{
		return PLAYER::_0x1DA5C5B0923E1B85(p0);
	}
	Any _0xAAED694CE814817F_Export(Any p0)
	{
		return PLAYER::_0xAAED694CE814817F(p0);
	}
	void EAGLE_EYE_SET_CUSTOM_ENTITY_TINT_Export(Entity entity, int red, int green, int blue)
	{
		return PLAYER::EAGLE_EYE_SET_CUSTOM_ENTITY_TINT(entity, red, green, blue);
	}
	void _0xBC02B3D151D3859F_Export(Entity entity, Any p1)
	{
		return PLAYER::_0xBC02B3D151D3859F(entity, p1);
	}
	void _EAGLE_EYE_SET_CUSTOM_DISTANCE_Export(Entity entity, float distance)
	{
		return PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(entity, distance);
	}
	void _0xF21C7A3F3FFBA629_Export(Player player)
	{
		return PLAYER::_0xF21C7A3F3FFBA629(player);
	}
	void _SET_PLAYER_MANAGE_BUFF_SUPER_JUMP_Export(Player player, float p1)
	{
		return PLAYER::_SET_PLAYER_MANAGE_BUFF_SUPER_JUMP(player, p1);
	}
	void _SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG_Export(int flagId, BOOL toggle)
	{
		return PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(flagId, toggle);
	}
	void _SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE_Export(Player player, Hash ammoType, int amount)
	{
		return PLAYER::_SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE(player, ammoType, amount);
	}
	void _0xC900A465364A85D6_Export(Player player)
	{
		return PLAYER::_0xC900A465364A85D6(player);
	}
	void _0xCFB2EED4FCB7BD77_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0xCFB2EED4FCB7BD77(p0, p1, p2);
	}
	void _0x2BB8D58E88777499_Export(Any p0)
	{
		return PLAYER::_0x2BB8D58E88777499(p0);
	}
	void _0x00EB5A760638DB55_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0x00EB5A760638DB55(p0, p1, p2);
	}
	void _0x65887EAC535A0B0C_Export(Any p0)
	{
		return PLAYER::_0x65887EAC535A0B0C(p0);
	}
	void _SET_WEAPON_DEGRADATION_MODIFIER_Export(Player player, float modifier)
	{
		return PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(player, modifier);
	}
	void _SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE_Export(Player player, float drawReductionTime)
	{
		return PLAYER::_SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE(player, drawReductionTime);
	}
	void _SET_BOW_STAMINA_DRAIN_SPEED_Export(Player player, float staminaDrain)
	{
		return PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(player, staminaDrain);
	}
	void _SET_DAMAGE_CLOSE_DISTANCE_BONUS_Export(Player player, float closeRangeLowerBound, float closeRangeUpperBound)
	{
		return PLAYER::_SET_DAMAGE_CLOSE_DISTANCE_BONUS(player, closeRangeLowerBound, closeRangeUpperBound);
	}
	void _SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL_Export(Player player, float closeDamageBonus)
	{
		return PLAYER::_SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL(player, closeDamageBonus);
	}
	void _SET_DAMAGE_FAR_DISTANCE_BONUS_Export(Player player, float farRangeLowerBound, float farRangeUpperBound)
	{
		return PLAYER::_SET_DAMAGE_FAR_DISTANCE_BONUS(player, farRangeLowerBound, farRangeUpperBound);
	}
	void _SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL_Export(Player player, float farDamageBonus)
	{
		return PLAYER::_SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL(player, farDamageBonus);
	}
	Any _0x6C54E69516CC56BD_Export(Any p0)
	{
		return PLAYER::_0x6C54E69516CC56BD(p0);
	}
	void _0x3A8611BD7BDE84F7_Export(Any p0, Any p1)
	{
		return PLAYER::_0x3A8611BD7BDE84F7(p0, p1);
	}
	void _0xC177C827CEFC0AA4_Export(Any p0, Any p1)
	{
		return PLAYER::_0xC177C827CEFC0AA4(p0, p1);
	}
	void _0xBD96185264DDAAEA_Export(Any p0, Any p1)
	{
		return PLAYER::_0xBD96185264DDAAEA(p0, p1);
	}
	void _0x628E742FE1F79C4A_Export(Any p0, Any p1)
	{
		return PLAYER::_0x628E742FE1F79C4A(p0, p1);
	}
	void _SET_PLAYER_INTERACTION_POSITIVE_RESPONSE_Export(Player player, const char* speech)
	{
		return PLAYER::_SET_PLAYER_INTERACTION_POSITIVE_RESPONSE(player, speech);
	}
	void _SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE_Export(Player player, const char* speech)
	{
		return PLAYER::_SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE(player, speech);
	}
	void _0x216BC0D3D2E413D2_Export(Player player, Any p1)
	{
		return PLAYER::_0x216BC0D3D2E413D2(player, p1);
	}
	void _0x45EF176B532CA851_Export(Any p0, Any p1)
	{
		return PLAYER::_0x45EF176B532CA851(p0, p1);
	}
	void _0xA342495F93B7B838_Export(Any p0, Any p1)
	{
		return PLAYER::_0xA342495F93B7B838(p0, p1);
	}
	void _0x3BB84F812E052C90_Export(Any p0)
	{
		return PLAYER::_0x3BB84F812E052C90(p0);
	}
	void _0x9FC5A003FB76EDBD_Export(Any p0, Any p1)
	{
		return PLAYER::_0x9FC5A003FB76EDBD(p0, p1);
	}
	void _0x0FAF95D71ED67ADE_Export(Player player, const char* p1)
	{
		return PLAYER::_0x0FAF95D71ED67ADE(player, p1);
	}
	void _0x988C9045531B9FCE_Export(Player player, const char* p1)
	{
		return PLAYER::_0x988C9045531B9FCE(player, p1);
	}
	void _0x06C3DB00B69D5435_Export(Player player, const char* p1)
	{
		return PLAYER::_0x06C3DB00B69D5435(player, p1);
	}
	void _0xBB6EA5D59E926095_Export(int category, Hash emote)
	{
		return PLAYER::_0xBB6EA5D59E926095(category, emote);
	}
	BOOL _0xE1D356F5A66D0FFA_Export(Hash emote)
	{
		return PLAYER::_0xE1D356F5A66D0FFA(emote);
	}
	void _0x929DDD5538F3DF1F_Export(Any p0, Any p1)
	{
		return PLAYER::_0x929DDD5538F3DF1F(p0, p1);
	}
	void _0xFA7DAAE3959E6C7B_Export(Any p0, Any p1)
	{
		return PLAYER::_0xFA7DAAE3959E6C7B(p0, p1);
	}
	void _0x9461A8FAB0378E5B_Export(Any p0, Any p1)
	{
		return PLAYER::_0x9461A8FAB0378E5B(p0, p1);
	}
	void _0xCB61A63AA53D7D22_Export(Any p0, Any p1)
	{
		return PLAYER::_0xCB61A63AA53D7D22(p0, p1);
	}
	void _0xCFFC3ECCD7A5CCEB_Export(Player player, Hash weapon, BOOL p2)
	{
		return PLAYER::_0xCFFC3ECCD7A5CCEB(player, weapon, p2);
	}
	void _0x76F7E1BCD623A429_Export(Any p0)
	{
		return PLAYER::_0x76F7E1BCD623A429(p0);
	}
	void _0x585CE159DB46FADB_Export(Any p0, Any p1)
	{
		return PLAYER::_0x585CE159DB46FADB(p0, p1);
	}
	void _SET_PLAYER_RESET_FLAG_Export(Player player, int playerResetFlag, BOOL p2)
	{
		return PLAYER::_SET_PLAYER_RESET_FLAG(player, playerResetFlag, p2);
	}
	BOOL _GET_PLAYER_RESET_FLAG_Export(Player player, int playerResetFlag)
	{
		return PLAYER::_GET_PLAYER_RESET_FLAG(player, playerResetFlag);
	}
	Ped GET_MOUNT_OWNED_BY_PLAYER_Export(Player player)
	{
		return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(player);
	}
	Player _GET_PLAYER_OWNER_OF_MOUNT_Export(Ped mount)
	{
		return PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(mount);
	}
	void _SET_PLAYER_OWNS_MOUNT_Export(Player player, Ped mount)
	{
		return PLAYER::_SET_PLAYER_OWNS_MOUNT(player, mount);
	}
	Vehicle _GET_VEHICLE_OWNED_BY_PLAYER_Export(Player player)
	{
		return PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(player);
	}
	Player _GET_PLAYER_OWNER_OF_VEHICLE_Export(Vehicle vehicle)
	{
		return PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(vehicle);
	}
	void _SET_PLAYER_OWNS_VEHICLE_Export(Player player, Vehicle vehicle)
	{
		return PLAYER::_SET_PLAYER_OWNS_VEHICLE(player, vehicle);
	}
	Vehicle _GET_PLAYER_HUNTING_WAGON_Export(Player player)
	{
		return PLAYER::_GET_PLAYER_HUNTING_WAGON(player);
	}
	void _SET_PLAYER_HUNTING_WAGON_Export(Player player, Vehicle wagon)
	{
		return PLAYER::_SET_PLAYER_HUNTING_WAGON(player, wagon);
	}
	void _0x9044835BE9D9DBFE_Export(Any p0, Any p1)
	{
		return PLAYER::_0x9044835BE9D9DBFE(p0, p1);
	}
	Hash GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY_Export(Entity entity, Hash* type)
	{
		return PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(entity, type);
	}
	Hash _GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME_Export(Hash p0, BOOL model, BOOL outfit)
	{
		return PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(p0, model, outfit);
	}
	Hash GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH_Export(Ped ped)
	{
		return PLAYER::GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH(ped);
	}
	const char* GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING_Export(Ped ped)
	{
		return PLAYER::GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING(ped);
	}
	Hash GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER_Export(Ped ped)
	{
		return PLAYER::GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER(ped);
	}
	Any _0xDA9D7BE231FE865F_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0xDA9D7BE231FE865F(p0, p1, p2);
	}
	void _SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP_Export(Player player, int p1, Hash discoveryHash)
	{
		return PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(player, p1, discoveryHash);
	}
	BOOL _GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP_Export(Player player, int p1, Hash discoveryHash)
	{
		return PLAYER::_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP(player, p1, discoveryHash);
	}
	void _0xCDDD4B74660E2335_Export(Any p0, Any p1, Any p2)
	{
		return PLAYER::_0xCDDD4B74660E2335(p0, p1, p2);
	}
	void _0x77E83C315A3B31CA_Export(Any p0)
	{
		return PLAYER::_0x77E83C315A3B31CA(p0);
	}
	void _SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP_Export(Hash discoveryHash)
	{
		return PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(discoveryHash);
	}
	BOOL GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP_Export(Hash discoveryHash)
	{
		return PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(discoveryHash);
	}
	void _MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED_Export(Hash discoveryHash)
	{
		return PLAYER::_MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED(discoveryHash);
	}
	void _SET_SHOW_INFO_CARD_Export(Player player, BOOL showingInfoCard)
	{
		return PLAYER::_SET_SHOW_INFO_CARD(player, showingInfoCard);
	}
	void _0x4DBC4873707E8FD6_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return PLAYER::_0x4DBC4873707E8FD6(p0, p1, p2, p3);
	}
	void _0xCEDC16930526F728_Export(Any p0)
	{
		return PLAYER::_0xCEDC16930526F728(p0);
	}
	void _0x14E57F88BA0A07FC_Export(Hash location)
	{
		return PLAYER::_0x14E57F88BA0A07FC(location);
	}
	Any _0x2E1ABE627C95ED9B_Export()
	{
		return PLAYER::_0x2E1ABE627C95ED9B();
	}
	void _0x497A18F8F88AA9D8_Export()
	{
		return PLAYER::_0x497A18F8F88AA9D8();
	}
	void _0x4F0D2256AAE94EDA_Export(int p0)
	{
		return PLAYER::_0x4F0D2256AAE94EDA(p0);
	}
	void _SET_LOCKON_FOCUS_FIRE_VFX_Export(Player player, const char* p1)
	{
		return PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, p1);
	}
	Any _0x0B7803F6F7BB43E0_Export()
	{
		return PLAYER::_0x0B7803F6F7BB43E0();
	}
	Any _0xC74EB3F2EC169F6B_Export(Any p0)
	{
		return PLAYER::_0xC74EB3F2EC169F6B(p0);
	}
	void _0x3B296934DB026873_Export(Any p0, Any p1)
	{
		return PLAYER::_0x3B296934DB026873(p0, p1);
	}
	void SET_MIN_TIME_BEFORE_HORSE_BUCKING_Export(Ped mount, int iMinBuckTime)
	{
		return PLAYER::SET_MIN_TIME_BEFORE_HORSE_BUCKING(mount, iMinBuckTime);
	}
	Any _0xF4CB347D7B5EB0FD_Export()
	{
		return PLAYER::_0xF4CB347D7B5EB0FD();
	}
	void _0xCD7CA3013FD12749_Export(Any p0, Any p1)
	{
		return PLAYER::_0xCD7CA3013FD12749(p0, p1);
	}
	void _FORCE_REST_SCENARIO_Export(BOOL toggle)
	{
		return PLAYER::_FORCE_REST_SCENARIO(toggle);
	}
	BOOL _0x57028FD99886F6F9_Export()
	{
		return PLAYER::_0x57028FD99886F6F9();
	}
	void _0x35A33783EC3C3448_Export(Any p0)
	{
		return PLAYER::_0x35A33783EC3C3448(p0);
	}
	void _0x39D8D7082BC34B72_Export(Any p0)
	{
		return PLAYER::_0x39D8D7082BC34B72(p0);
	}
	void _0x1AD8AD999C27F44A_Export(Any p0)
	{
		return PLAYER::_0x1AD8AD999C27F44A(p0);
	}
	int GET_NUM_MODELS_IN_POPULATION_SET_Export(Hash popSetHash)
	{
		return POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(popSetHash);
	}
	Hash GET_PED_MODEL_NAME_IN_POPULATION_SET_Export(Hash popSetHash, int index)
	{
		return POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(popSetHash, index);
	}
	Hash GET_RANDOM_MODEL_FROM_POPULATION_SET_Export(Hash popSetHash, int flags, Hash p2, BOOL p3, BOOL p4, float x, float y, float z)
	{
		return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(popSetHash, flags, p2, p3, p4, x, y, z);
	}
	PopZone _CREATE_POPZONE_FROM_VOLUME_Export(Volume volume)
	{
		return POPULATION::_CREATE_POPZONE_FROM_VOLUME(volume);
	}
	void _DELETE_SCRIPT_POPZONE_Export(PopZone popZone)
	{
		return POPULATION::_DELETE_SCRIPT_POPZONE(popZone);
	}
	BOOL _IS_POPZONE_VALID_Export(PopZone popZone)
	{
		return POPULATION::_IS_POPZONE_VALID(popZone);
	}
	void SET_POPZONE_POPULATION_SET_Export(PopZone popZone, Hash populationSetHash)
	{
		return POPULATION::SET_POPZONE_POPULATION_SET(popZone, populationSetHash);
	}
	void _0x7E6BC0B94F5928F0_Export(PopZone popZone, int p1, int p2)
	{
		return POPULATION::_0x7E6BC0B94F5928F0(popZone, p1, p2);
	}
	void _0x578E2FA64E847C60_Export(PopZone popZone, int p1)
	{
		return POPULATION::_0x578E2FA64E847C60(popZone, p1);
	}
	void _0x08892122769770D5_Export(PopZone popZone, BOOL p1)
	{
		return POPULATION::_0x08892122769770D5(popZone, p1);
	}
	void _0x0F1861101C9A9944_Export(PopZone popZone, BOOL p1)
	{
		return POPULATION::_0x0F1861101C9A9944(popZone, p1);
	}
	void SET_SPAWNER_INFO_PRIORITY_Export(Hash p0, Hash p1, int priority)
	{
		return POPULATION::SET_SPAWNER_INFO_PRIORITY(p0, p1, priority);
	}
	void CLEAR_SPAWNER_INFO_PRIORITY_Export(Hash p0, Hash p1)
	{
		return POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(p0, p1);
	}
	void _0x638FCFC6042A9473_Export(Any p0, Any p1)
	{
		return POPULATION::_0x638FCFC6042A9473(p0, p1);
	}
	void _ADD_AMBIENT_AVOIDANCE_RESTRICTION_Export(Volume volume, int includeFlags, int excludeFlags, Hash p3, Hash p4, Hash p5, int p6)
	{
		return POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volume, includeFlags, excludeFlags, p3, p4, p5, p6);
	}
	void _REMOVE_AMBIENT_AVOIDANCE_RESTRICTION_Export(Volume volume)
	{
		return POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volume);
	}
	void _ADD_AMBIENT_SPAWN_RESTRICTION_Export(Volume volume, int includeFlags, int excludeFlags, Hash p3, Hash p4, Hash p5, int p6)
	{
		return POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volume, includeFlags, excludeFlags, p3, p4, p5, p6);
	}
	void _REMOVE_AMBIENT_SPAWN_RESTRICTION_Export(Volume volume)
	{
		return POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volume);
	}
	void _0x2161278C6322F740_Export(int includeFlags, int excludeFlags, int p2, Hash p3, int p4, Volume volume)
	{
		return POPULATION::_0x2161278C6322F740(includeFlags, excludeFlags, p2, p3, p4, volume);
	}
	void _0xF45E46DEECF7DF6E_Export(int bitFlag, Any p1, Any p2, Any p3, Any p4)
	{
		return POPULATION::_0xF45E46DEECF7DF6E(bitFlag, p1, p2, p3, p4);
	}
	void _0x8EC7CD701F872F87_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return POPULATION::_0x8EC7CD701F872F87(p0, p1, p2, p3, p4, p5);
	}
	void _0xC4533E3E87125C9E_Export(Any p0)
	{
		return POPULATION::_0xC4533E3E87125C9E(p0);
	}
	void _SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES_Export(Ped ped, int p1)
	{
		return POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(ped, p1);
	}
	void _0xDBBF12EA7C1029B2_Export(Any p0, Any p1)
	{
		return POPULATION::_0xDBBF12EA7C1029B2(p0, p1);
	}
	void _0x247F86595D396344_Export(Any p0)
	{
		return POPULATION::_0x247F86595D396344(p0);
	}
	void _0x324AB2A68AD8AEE5_Export()
	{
		return POPULATION::_0x324AB2A68AD8AEE5();
	}
	void DISABLE_AMBIENT_ROAD_POPULATION_Export(BOOL unk)
	{
		return POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(unk);
	}
	void ENABLE_AMBIENT_ROAD_POPULATION_Export()
	{
		return POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
	}
	void _0x2660E7720EDC4BD0_Export(Any p0, Any p1, Any p2)
	{
		return POPULATION::_0x2660E7720EDC4BD0(p0, p1, p2);
	}
	Hash _GET_RANDOM_FISH_TYPE_FOR_LOCATION_Export()
	{
		return POPULATION::_GET_RANDOM_FISH_TYPE_FOR_LOCATION();
	}
	void _0xEC116EDB683AD479_Export(BOOL p0)
	{
		return POPULATION::_0xEC116EDB683AD479(p0);
	}
	Any _0xC086FF658B2E51DB_Export()
	{
		return POSSE::_0xC086FF658B2E51DB();
	}
	Any _0xC086FF658B2E51DA_Export(Any p0)
	{
		return POSSE::_0xC086FF658B2E51DA(p0);
	}
	Any _0xC087FF658B2E51DA_Export(Any p0, Any p1)
	{
		return POSSE::_0xC087FF658B2E51DA(p0, p1);
	}
	int POSSE_GET_POSSE_MEMBERSHIP_COUNT_Export()
	{
		return POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT();
	}
	Any _0xC089FF658B2E51DA_Export(Any p0, Any p1)
	{
		return POSSE::_0xC089FF658B2E51DA(p0, p1);
	}
	void _0xC08AFF658B2E51DA_Export(Any p0)
	{
		return POSSE::_0xC08AFF658B2E51DA(p0);
	}
	Any _0xC08BFF658B2E51DA_Export(Any p0)
	{
		return POSSE::_0xC08BFF658B2E51DA(p0);
	}
	void _0xC08AFF658B2E51DB_Export(Any p0)
	{
		return POSSE::_0xC08AFF658B2E51DB(p0);
	}
	Any _0xC08CFF658B2E51DA_Export(Any p0, Any p1)
	{
		return POSSE::_0xC08CFF658B2E51DA(p0, p1);
	}
	Any _0xC09CFF658B2E51DA_Export(Any p0, Any p1, Any p2)
	{
		return POSSE::_0xC09CFF658B2E51DA(p0, p1, p2);
	}
	Any _0xC08DEF658B2E51DA_Export(Any p0)
	{
		return POSSE::_0xC08DEF658B2E51DA(p0);
	}
	Any _0xC08DFF658B2E51DA_Export()
	{
		return POSSE::_0xC08DFF658B2E51DA();
	}
	Any _0xC08DFF658B2E51DB_Export(Any p0)
	{
		return POSSE::_0xC08DFF658B2E51DB(p0);
	}
	Any _0xC08EFF658B2E51DB_Export(Any p0, Any p1)
	{
		return POSSE::_0xC08EFF658B2E51DB(p0, p1);
	}
	Any _0xC08FFF658B2E51DA_Export()
	{
		return POSSE::_0xC08FFF658B2E51DA();
	}
	Any _0xC08FFF658B2E51DB_Export(Any p0)
	{
		return POSSE::_0xC08FFF658B2E51DB(p0);
	}
	Any _0xC084FF658B2E61DA_Export(Any p0)
	{
		return POSSE::_0xC084FF658B2E61DA(p0);
	}
	Any _0xC084FF658B2E71DA_Export(Any p0, Any p1, Any p2)
	{
		return POSSE::_0xC084FF658B2E71DA(p0, p1, p2);
	}
	Any _0xC084FF658B2E81DA_Export(Any p0, Any p1, Any p2)
	{
		return POSSE::_0xC084FF658B2E81DA(p0, p1, p2);
	}
	Any _0xC084FF658B2E52DA_Export(Any p0)
	{
		return POSSE::_0xC084FF658B2E52DA(p0);
	}
	Any _0xC084FF658B2E53DA_Export()
	{
		return POSSE::_0xC084FF658B2E53DA();
	}
	Any _0xC084FF658B2E54DA_Export(Any p0)
	{
		return POSSE::_0xC084FF658B2E54DA(p0);
	}
	Any _0xC084FF658B2E55DA_Export(Any p0, Any p1)
	{
		return POSSE::_0xC084FF658B2E55DA(p0, p1);
	}
	void _0xC484FF658B2E55DA_Export(Any p0)
	{
		return POSSE::_0xC484FF658B2E55DA(p0);
	}
	void _0xC584FF658B2E55DA_Export(Any p0)
	{
		return POSSE::_0xC584FF658B2E55DA(p0);
	}
	void _0xC684FF658B2E55DA_Export(Any p0)
	{
		return POSSE::_0xC684FF658B2E55DA(p0);
	}
	Any _0xC184FF658B2E55DA_Export(Any p0, Any p1)
	{
		return POSSE::_0xC184FF658B2E55DA(p0, p1);
	}
	Any _0xC284FF658B2E55DA_Export(Any p0, Any p1, Any p2)
	{
		return POSSE::_0xC284FF658B2E55DA(p0, p1, p2);
	}
	Any _0xC394FF658B2E55DA_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return POSSE::_0xC394FF658B2E55DA(p0, p1, p2, p3);
	}
	Any _0xC07CFF658B2E51DA_Export(Any p0, Any p1)
	{
		return POSSE::_0xC07CFF658B2E51DA(p0, p1);
	}
	Any _0xC06CFF658B2E51DA_Export(Any p0, Any p1, Any p2)
	{
		return POSSE::_0xC06CFF658B2E51DA(p0, p1, p2);
	}
	BOOL _REQUEST_PROP_SET_Export(Hash hash)
	{
		return PROPSET::_REQUEST_PROP_SET(hash);
	}
	BOOL _REQUEST_PROP_SET_2_Export(Hash hash)
	{
		return PROPSET::_REQUEST_PROP_SET_2(hash);
	}
	BOOL _HAS_PROP_SET_LOADED_Export(Hash hash)
	{
		return PROPSET::_HAS_PROP_SET_LOADED(hash);
	}
	BOOL _HAS_PROP_SET_LOADED_2_Export(Hash hash)
	{
		return PROPSET::_HAS_PROP_SET_LOADED_2(hash);
	}
	void _SET_PROP_SET_AS_NO_LONGER_NEEDED_Export(PropSet propSet)
	{
		return PROPSET::_SET_PROP_SET_AS_NO_LONGER_NEEDED(propSet);
	}
	void _DELETE_PROP_SET_Export(PropSet propSet, BOOL p1, BOOL p2)
	{
		return PROPSET::_DELETE_PROP_SET(propSet, p1, p2);
	}
	BOOL _RELEASE_PROP_SET_Export(Hash hash)
	{
		return PROPSET::_RELEASE_PROP_SET(hash);
	}
	PropSet _CREATE_PROP_SET_Export(Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, BOOL p7, BOOL useVegMod)
	{
		return PROPSET::_CREATE_PROP_SET(propsetType, x, y, z, placementType, heading, zProbe, p7, useVegMod);
	}
	PropSet _CREATE_PROP_SET_2_Export(Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, BOOL p7, BOOL useVegMod)
	{
		return PROPSET::_CREATE_PROP_SET_2(propsetType, x, y, z, placementType, heading, zProbe, p7, useVegMod);
	}
	PropSet CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_Export(Hash hash, float x, float y, float z, Entity entity, float p5, BOOL p6, int p7, BOOL p8)
	{
		return PROPSET::CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY(hash, x, y, z, entity, p5, p6, p7, p8);
	}
	PropSet _CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2_Export(Hash hash, float x, float y, float z, Entity entity, float p5, BOOL p6, int p7, BOOL p8)
	{
		return PROPSET::_CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2(hash, x, y, z, entity, p5, p6, p7, p8);
	}
	BOOL DOES_PROP_SET_EXIST_Export(PropSet propSet)
	{
		return PROPSET::DOES_PROP_SET_EXIST(propSet);
	}
	BOOL _DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS_Export(Hash propsetHash, float x, float y, float z)
	{
		return PROPSET::_DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS(propsetHash, x, y, z);
	}
	BOOL IS_PROP_SET_FULLY_LOADED_Export(PropSet propSet)
	{
		return PROPSET::IS_PROP_SET_FULLY_LOADED(propSet);
	}
	void _SET_PROP_SET_VISIBLE_Export(PropSet propSet, BOOL toggle)
	{
		return PROPSET::_SET_PROP_SET_VISIBLE(propSet, toggle);
	}
	BOOL _IS_PROP_SET_VISIBLE_Export(PropSet propSet)
	{
		return PROPSET::_IS_PROP_SET_VISIBLE(propSet);
	}
	Hash _GET_PROP_SET_MODEL_Export(PropSet propSet)
	{
		return PROPSET::_GET_PROP_SET_MODEL(propSet);
	}
	Hash _GET_VEHICLE_PROP_SET_HASH_Export(Vehicle vehicle)
	{
		return PROPSET::_GET_VEHICLE_PROP_SET_HASH(vehicle);
	}
	int _GET_ENTITIES_FROM_PROP_SET_Export(PropSet propSet, ItemSet itemSet, Hash model, BOOL p3, BOOL p4)
	{
		return PROPSET::_GET_ENTITIES_FROM_PROP_SET(propSet, itemSet, model, p3, p4);
	}
	void _0xC4B67EF3FD65622D_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return PROPSET::_0xC4B67EF3FD65622D(p0, p1, p2, p3, p4, p5);
	}
	void _0x58E0B01D45CA7357_Export(Any p0)
	{
		return PROPSET::_0x58E0B01D45CA7357(p0);
	}
	void _SET_PROP_SET_FLAG_Export(PropSet propSet, int flag)
	{
		return PROPSET::_SET_PROP_SET_FLAG(propSet, flag);
	}
	PropSet _GET_VEHICLE_PROP_SET_Export(Vehicle vehicle)
	{
		return PROPSET::_GET_VEHICLE_PROP_SET(vehicle);
	}
	BOOL _DOES_VEHICLE_HAVE_ANY_PROP_SET_Export(Vehicle vehicle)
	{
		return PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(vehicle);
	}
	void _ADD_PROP_SET_FOR_VEHICLE_Export(Vehicle vehicle, Hash propset)
	{
		return PROPSET::_ADD_PROP_SET_FOR_VEHICLE(vehicle, propset);
	}
	void _REMOVE_VEHICLE_PROP_SETS_Export(Vehicle vehicle)
	{
		return PROPSET::_REMOVE_VEHICLE_PROP_SETS(vehicle);
	}
	BOOL _IS_VEHICLE_PROP_SET_LOADED_Export(Vehicle vehicle)
	{
		return PROPSET::_IS_VEHICLE_PROP_SET_LOADED(vehicle);
	}
	void _ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE_Export(Vehicle vehicle, Hash propset)
	{
		return PROPSET::_ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE(vehicle, propset);
	}
	BOOL _IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL_Export(Vehicle vehicle)
	{
		return PROPSET::_IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL(vehicle);
	}
	PropSet _GET_VEHICLE_LIGHT_PROP_SET_Export(Vehicle vehicle)
	{
		return PROPSET::_GET_VEHICLE_LIGHT_PROP_SET(vehicle);
	}
	BOOL _DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET_Export(Vehicle vehicle)
	{
		return PROPSET::_DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET(vehicle);
	}
	void _ADD_LIGHT_PROP_SET_TO_VEHICLE_Export(Vehicle vehicle, Hash lightPropset)
	{
		return PROPSET::_ADD_LIGHT_PROP_SET_TO_VEHICLE(vehicle, lightPropset);
	}
	void _REMOVE_VEHICLE_LIGHT_PROP_SETS_Export(Vehicle vehicle)
	{
		return PROPSET::_REMOVE_VEHICLE_LIGHT_PROP_SETS(vehicle);
	}
	BOOL _IS_VEHICLE_LIGHT_PROP_SET_LOADED_Export(Vehicle vehicle)
	{
		return PROPSET::_IS_VEHICLE_LIGHT_PROP_SET_LOADED(vehicle);
	}
	PropSet _GET_TRAIN_CARRIAGE_PROP_SET_Export(Entity trainCarriage)
	{
		return PROPSET::_GET_TRAIN_CARRIAGE_PROP_SET(trainCarriage);
	}
	BOOL _HAS_VEHICLE_TRAILER_PROP_SET_LOADED_Export(Vehicle vehicle, int wagonIndex)
	{
		return PROPSET::_HAS_VEHICLE_TRAILER_PROP_SET_LOADED(vehicle, wagonIndex);
	}
	PropSet _GET_PROP_SET_AT_COORDS_Export(Hash propsetHash, float x, float y, float z)
	{
		return PROPSET::_GET_PROP_SET_AT_COORDS(propsetHash, x, y, z);
	}
	BOOL _EVENT_QUEUE_IS_EMPTY_Export(Hash hash)
	{
		return QUEUE::_EVENT_QUEUE_IS_EMPTY(hash);
	}
	void _EVENT_QUEUE_POP_Export(Hash hash)
	{
		return QUEUE::_EVENT_QUEUE_POP(hash);
	}
	void REPLAY_PREVENT_RECORDING_THIS_FRAME_Export()
	{
		return RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	}
	BOOL REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP_Export()
	{
		return REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP();
	}
	void SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM_Export()
	{
		return REPLAY::SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM();
	}
	BOOL OPEN_VIDEO_EDITOR_Export()
	{
		return REPLAY::OPEN_VIDEO_EDITOR();
	}
	BOOL CLOSE_VIDEO_EDITOR_Export(Any p0)
	{
		return REPLAY::CLOSE_VIDEO_EDITOR(p0);
	}
	BOOL IS_VIDEO_EDITOR_RUNNING_Export()
	{
		return REPLAY::IS_VIDEO_EDITOR_RUNNING();
	}
	void _SET_PLAYER_BIT_AT_INDEX_Export(void* value, int bitIndex)
	{
		return SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(value, bitIndex);
	}
	void _CLEAR_PLAYER_BIT_AT_INDEX_Export(void* value, int bitIndex)
	{
		return SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(value, bitIndex);
	}
	void _0xE4ABE20DCE7C7CFE_Export(Any p0, Any p1, Any p2)
	{
		return SCRIPTS::_0xE4ABE20DCE7C7CFE(p0, p1, p2);
	}
	void _0xFFDDF802279BE128_Export(Any p0, Any p1, Any p2)
	{
		return SCRIPTS::_0xFFDDF802279BE128(p0, p1, p2);
	}
	void _0x64F765D9A1F8F02C_Export(void* p0, void* p1, void* p2)
	{
		return SCRIPTS::_0x64F765D9A1F8F02C(p0, p1, p2);
	}
	void _SET_ALL_PLAYER_BITS_Export(void* value)
	{
		return SCRIPTS::_SET_ALL_PLAYER_BITS(value);
	}
	void _CLEAR_ALL_PLAYER_BITS_Export(void* value)
	{
		return SCRIPTS::_CLEAR_ALL_PLAYER_BITS(value);
	}
	BOOL _IS_PLAYER_BIT_SET_AT_INDEX_Export(void* value, int bitIndex)
	{
		return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(value, bitIndex);
	}
	BOOL _IS_ANY_PLAYER_BIT_SET_Export(int* playerBits)
	{
		return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(playerBits);
	}
	int GET_BLOCK_OF_PLAYER_BITS_Export(void* value, int p1)
	{
		return SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(value, p1);
	}
	void SET_BLOCK_OF_PLAYER_BITS_Export(void* value, int p1, int p2)
	{
		return SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(value, p1, p2);
	}
	int COUNT_PLAYER_BITS_Export(void* value)
	{
		return SCRIPTS::COUNT_PLAYER_BITS(value);
	}
	void _0x1BDB5A07307F6929_Export(Any p0, Any p1)
	{
		return SCRIPTS::_0x1BDB5A07307F6929(p0, p1);
	}
	void _0x1C5EB3C27F7508CB_Export(Any p0, Any p1)
	{
		return SCRIPTS::_0x1C5EB3C27F7508CB(p0, p1);
	}
	void _0x42A429CDFED6D99D_Export(Any p0, Any p1, Any p2)
	{
		return SCRIPTS::_0x42A429CDFED6D99D(p0, p1, p2);
	}
	void _0x5827BE85A87B073D_Export(Any p0)
	{
		return SCRIPTS::_0x5827BE85A87B073D(p0);
	}
	Any _0x0A79C81C418F5D38_Export(Any p0, Any p1)
	{
		return SCRIPTS::_0x0A79C81C418F5D38(p0, p1);
	}
	Any _0xA88E1D7FA1E20080_Export(Any p0)
	{
		return SCRIPTS::_0xA88E1D7FA1E20080(p0);
	}
	int COUNT_PARTICIPANT_BITS_Export(void* value)
	{
		return SCRIPTS::COUNT_PARTICIPANT_BITS(value);
	}
	void REQUEST_SCRIPT_Export(const char* scriptname)
	{
		return SCRIPTS::REQUEST_SCRIPT(scriptname);
	}
	void SET_SCRIPT_AS_NO_LONGER_NEEDED_Export(const char* scriptname)
	{
		return SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptname);
	}
	BOOL HAS_SCRIPT_LOADED_Export(const char* scriptname)
	{
		return SCRIPTS::HAS_SCRIPT_LOADED(scriptname);
	}
	BOOL DOES_SCRIPT_EXIST_Export(const char* scriptname)
	{
		return SCRIPTS::DOES_SCRIPT_EXIST(scriptname);
	}
	void REQUEST_SCRIPT_WITH_NAME_HASH_Export(Hash hashOfScriptName)
	{
		return SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(hashOfScriptName);
	}
	void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED_Export(Hash hashOfScriptName)
	{
		return SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(hashOfScriptName);
	}
	BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED_Export(Hash hashOfScriptName)
	{
		return SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(hashOfScriptName);
	}
	BOOL DOES_SCRIPT_WITH_NAME_HASH_EXIST_Export(Hash hashOfScriptName)
	{
		return SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(hashOfScriptName);
	}
	void TERMINATE_THREAD_Export(int thread)
	{
		return SCRIPTS::TERMINATE_THREAD(thread);
	}
	BOOL IS_THREAD_ACTIVE_Export(int thread, BOOL ignoreKilledState)
	{
		return SCRIPTS::IS_THREAD_ACTIVE(thread, ignoreKilledState);
	}
	BOOL DOES_THREAD_EXIST_Export(int threadId)
	{
		return SCRIPTS::DOES_THREAD_EXIST(threadId);
	}
	void GET_THREAD_EXISTENCE_DETAILS_Export(int threadId, BOOL* threadExists, BOOL* hasScriptHandler)
	{
		return SCRIPTS::GET_THREAD_EXISTENCE_DETAILS(threadId, threadExists, hasScriptHandler);
	}
	Hash _GET_HASH_OF_THREAD_Export(int threadId)
	{
		return SCRIPTS::_GET_HASH_OF_THREAD(threadId);
	}
	void SCRIPT_THREAD_ITERATOR_RESET_Export()
	{
		return SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	}
	int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID_Export()
	{
		return SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
	BOOL _IS_BACKGROUND_SCRIPT_Export(int threadId)
	{
		return SCRIPTS::_IS_BACKGROUND_SCRIPT(threadId);
	}
	int GET_ID_OF_THIS_THREAD_Export()
	{
		return SCRIPTS::GET_ID_OF_THIS_THREAD();
	}
	void TERMINATE_THIS_THREAD_Export()
	{
		return SCRIPTS::TERMINATE_THIS_THREAD();
	}
	int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH_Export(Hash HashOfScriptName)
	{
		return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(HashOfScriptName);
	}
	void _REQUEST_THREAD_EXIT_Export(int threadId)
	{
		return SCRIPTS::_REQUEST_THREAD_EXIT(threadId);
	}
	void _REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME_Export(Hash nameHash)
	{
		return SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(nameHash);
	}
	BOOL IS_THREAD_EXIT_REQUESTED_Export()
	{
		return SCRIPTS::IS_THREAD_EXIT_REQUESTED();
	}
	BOOL _IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID_Export(int threadId)
	{
		return SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(threadId);
	}
	int _GET_THREAD_EXIT_REASON_Export()
	{
		return SCRIPTS::_GET_THREAD_EXIT_REASON();
	}
	Hash GET_HASH_OF_THIS_SCRIPT_NAME_Export()
	{
		return SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	}
	int GET_NUMBER_OF_EVENTS_Export(int eventQueue)
	{
		return SCRIPTS::GET_NUMBER_OF_EVENTS(eventQueue);
	}
	BOOL GET_EVENT_EXISTS_Export(int eventQueue, Hash eventType)
	{
		return SCRIPTS::GET_EVENT_EXISTS(eventQueue, eventType);
	}
	Hash GET_EVENT_AT_INDEX_Export(int eventQueue, int eventIndex)
	{
		return SCRIPTS::GET_EVENT_AT_INDEX(eventQueue, eventIndex);
	}
	BOOL GET_EVENT_DATA_Export(int eventQueue, int eventIndex, void* data, int dataSize)
	{
		return SCRIPTS::GET_EVENT_DATA(eventQueue, eventIndex, data, dataSize);
	}
	void SET_EVENT_FLAG_FOR_DELETION_Export(int eventGroup, int eventIndex, BOOL p2)
	{
		return SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(eventGroup, eventIndex, p2);
	}
	void TRIGGER_SCRIPT_EVENT_Export(int eventQueue, void* data, int sizeOfData, int scriptMetadataIndex, int* playerBits)
	{
		return SCRIPTS::TRIGGER_SCRIPT_EVENT(eventQueue, data, sizeOfData, scriptMetadataIndex, playerBits);
	}
	void _TRIGGER_SCRIPT_EVENT_2_Export(void* eventData, int eventDataSize, int scriptMetadataIndex, int threadId)
	{
		return SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(eventData, eventDataSize, scriptMetadataIndex, threadId);
	}
	Any _0xE7282390542F570D_Export(Any p0)
	{
		return SCRIPTS::_0xE7282390542F570D(p0);
	}
	void _0x11B0A0B282FA9B10_Export(BOOL p0)
	{
		return SCRIPTS::_0x11B0A0B282FA9B10(p0);
	}
	void _0x6F700A4BF7C3331B_Export(BOOL p0)
	{
		return SCRIPTS::_0x6F700A4BF7C3331B(p0);
	}
	void _0xF9E951A1E5517C06_Export()
	{
		return SCRIPTS::_0xF9E951A1E5517C06();
	}
	void _0x76CBCD9EADC00955_Export()
	{
		return SCRIPTS::_0x76CBCD9EADC00955();
	}
	void SHUTDOWN_LOADING_SCREEN_Export()
	{
		return SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}
	void SET_NO_LOADING_SCREEN_Export(BOOL state)
	{
		return SCRIPTS::SET_NO_LOADING_SCREEN(state);
	}
	BOOL GET_NO_LOADING_SCREEN_Export()
	{
		return SCRIPTS::GET_NO_LOADING_SCREEN();
	}
	void _DISPLAY_LOADING_SCREENS_Export(Hash p0, Hash p1, Hash p2, const char* gamemodeName, const char* title, const char* subtitle)
	{
		return SCRIPTS::_DISPLAY_LOADING_SCREENS(p0, p1, p2, gamemodeName, title, subtitle);
	}
	void _0x29FB4CE89472C3CB_Export(Any p0, Any p1, float p2, float p3, const char* p4, const char* p5, const char* p6, int p7)
	{
		return SCRIPTS::_0x29FB4CE89472C3CB(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS_Export(Any p0)
	{
		return SCRIPTS::STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(p0);
	}
	BOOL IS_LOADING_SCREEN_VISIBLE_Export()
	{
		return SCRIPTS::IS_LOADING_SCREEN_VISIBLE();
	}
	void BAIL_TO_LANDING_PAGE_Export(int bailCode)
	{
		return SCRIPTS::BAIL_TO_LANDING_PAGE(bailCode);
	}
	void BAIL_WITH_PASS_THROUGH_PARAMS_Export(const char* params)
	{
		return SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(params);
	}
	BOOL BG_IS_EXITFLAG_SET_Export()
	{
		return SCRIPTS::BG_IS_EXITFLAG_SET();
	}
	void BG_SET_EXITFLAG_RESPONSE_Export()
	{
		return SCRIPTS::BG_SET_EXITFLAG_RESPONSE();
	}
	void BG_START_CONTEXT_HASH_Export(Hash context)
	{
		return SCRIPTS::BG_START_CONTEXT_HASH(context);
	}
	void BG_END_CONTEXT_HASH_Export(Hash context)
	{
		return SCRIPTS::BG_END_CONTEXT_HASH(context);
	}
	void BG_START_CONTEXT_Export(const char* context)
	{
		return SCRIPTS::BG_START_CONTEXT(context);
	}
	void BG_END_CONTEXT_Export(const char* context)
	{
		return SCRIPTS::BG_END_CONTEXT(context);
	}
	BOOL BG_DOES_LAUNCH_PARAM_EXIST_Export(int bgScriptId, const char* paramName)
	{
		return SCRIPTS::BG_DOES_LAUNCH_PARAM_EXIST(bgScriptId, paramName);
	}
	int BG_GET_LAUNCH_PARAM_VALUE_Export(int bgScriptId, const char* paramName)
	{
		return SCRIPTS::BG_GET_LAUNCH_PARAM_VALUE(bgScriptId, paramName);
	}
	int BG_GET_SCRIPT_ID_FROM_NAME_HASH_Export(Hash scriptNameHash)
	{
		return SCRIPTS::BG_GET_SCRIPT_ID_FROM_NAME_HASH(scriptNameHash);
	}
	void _BG_RELOAD_ALL_BACKGROUND_SCRIPTS_Export()
	{
		return SCRIPTS::_BG_RELOAD_ALL_BACKGROUND_SCRIPTS();
	}
	void _ACTIVATE_GOAL_CONTEXT_Export(Hash goalContext)
	{
		return SCRIPTS::_ACTIVATE_GOAL_CONTEXT(goalContext);
	}
	void _DEACTIVATE_GOAL_CONTEXT_Export(Hash goalContext)
	{
		return SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(goalContext);
	}
	BOOL _IS_GOAL_CONTEXT_ACTIVE_Export(Hash goalContext)
	{
		return SCRIPTS::_IS_GOAL_CONTEXT_ACTIVE(goalContext);
	}
	const char* _NET_RPC_GUID_TO_STRING_Export(void* netRpcGuid)
	{
		return SCRIPTS::_NET_RPC_GUID_TO_STRING(netRpcGuid);
	}
	BOOL AWARDS_GET_RESULT_ITEM_Export(void* rpcGuid, Hash awardHash, int itemIndex, void* outResultItem)
	{
		return SCRIPTS::AWARDS_GET_RESULT_ITEM(rpcGuid, awardHash, itemIndex, outResultItem);
	}
	BOOL _AWARDS_GET_UNLOCK_CLAIM_DATA_Export(void* rpcGuid, Hash awardHash, int dataIndex, void* outUnlockData)
	{
		return SCRIPTS::_AWARDS_GET_UNLOCK_CLAIM_DATA(rpcGuid, awardHash, dataIndex, outUnlockData);
	}
	BOOL _LOOT_GET_RESULT_ITEM_Export(void* rpcGuid, int itemIndex, void* outResultItem)
	{
		return SCRIPTS::_LOOT_GET_RESULT_ITEM(rpcGuid, itemIndex, outResultItem);
	}
	BOOL _LOOT_GET_LOOT_CLAIM_DATA_Export(void* rpcGuid, int dataIndex, void* outLootData)
	{
		return SCRIPTS::_LOOT_GET_LOOT_CLAIM_DATA(rpcGuid, dataIndex, outLootData);
	}
	BOOL _STORE_GLOBAL_BLOCK_Export(int index)
	{
		return SCRIPTS::_STORE_GLOBAL_BLOCK(index);
	}
	BOOL _RESTORE_GLOBAL_BLOCK_Export(int index)
	{
		return SCRIPTS::_RESTORE_GLOBAL_BLOCK(index);
	}
	BOOL _DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST_Export(int index)
	{
		return SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(index);
	}
	void _SET_GLOBAL_BLOCK_CAN_BE_ACCESSED_Export(int index, BOOL toggle)
	{
		return SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(index, toggle);
	}
	BOOL _GET_GLOBAL_BLOCK_CAN_BE_ACCESSED_Export(int index)
	{
		return SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(index);
	}
	void _SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED_Export(BOOL toggle)
	{
		return SCRIPTS::_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(toggle);
	}
	BOOL HAVE_ALL_CHILD_SCRIPTS_TERMINATED_Export(int p0)
	{
		return SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(p0);
	}
	int START_NEW_SCRIPT_Export(const char* pScriptName, int stackSize)
	{
		return SCRIPTS::START_NEW_SCRIPT(pScriptName, stackSize);
	}
	int START_NEW_SCRIPT_WITH_ARGS_Export(const char* pScriptName, void* args, int argCount, int stackSize)
	{
		return SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(pScriptName, args, argCount, stackSize);
	}
	int START_NEW_SCRIPT_WITH_NAME_HASH_Export(Hash scriptHash, int stackSize)
	{
		return SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(scriptHash, stackSize);
	}
	int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS_Export(Hash scriptHash, void* args, int argCount, int stackSize)
	{
		return SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, args, argCount, stackSize);
	}
	void _0x4FB5869E2B37FC00_Export()
	{
		return SAVE::_0x4FB5869E2B37FC00();
	}
	BOOL SAVEGAME_SAVE_SP_Export(Hash savegameType)
	{
		return SAVE::SAVEGAME_SAVE_SP(savegameType);
	}
	BOOL SAVEGAME_SAVE_MP_Export(Hash savegameType)
	{
		return SAVE::SAVEGAME_SAVE_MP(savegameType);
	}
	BOOL SAVEGAME_IS_SAVE_PENDING_Export()
	{
		return SAVE::SAVEGAME_IS_SAVE_PENDING();
	}
	Any _0x1431540BCA1A1BD2_Export()
	{
		return SAVE::_0x1431540BCA1A1BD2();
	}
	Any _0xA7ECEBAFBAF997A5_Export(Hash savegameType)
	{
		return SAVE::_0xA7ECEBAFBAF997A5(savegameType);
	}
	void _0xED4B0C1057892B2E_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return SAVE::_0xED4B0C1057892B2E(p0, p1, p2, p3);
	}
	void _0x9BB83C4DD7BE0802_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return SAVE::_0x9BB83C4DD7BE0802(p0, p1, p2, p3, p4);
	}
	void _0xE8346E62FD7FB962_Export()
	{
		return SAVE::_0xE8346E62FD7FB962();
	}
	void _0xC0ABF784590798A9_Export(Any p0)
	{
		return SAVE::_0xC0ABF784590798A9(p0);
	}
	Any _0xB00CE33465B5406D_Export(Any p0, Any p1)
	{
		return SAVE::_0xB00CE33465B5406D(p0, p1);
	}
	void _SAVEGAME_GET_INT_2_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_INT_2(p0, variableName);
	}
	void _SAVEGAME_GET_INT_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_INT(p0, variableName);
	}
	void _SAVEGAME_GET_INT_3_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_INT_3(p0, variableName);
	}
	void _SAVEGAME_GET_FLOAT_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_FLOAT(p0, variableName);
	}
	void _SAVEGAME_GET_BOOL_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_BOOL(p0, variableName);
	}
	void _SAVEGAME_GET_TEXT_LABEL_23_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_TEXT_LABEL_23(p0, variableName);
	}
	void _SAVEGAME_GET_TEXT_LABEL_31_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_TEXT_LABEL_31(p0, variableName);
	}
	void _SAVEGAME_GET_TEXT_LABEL_63_Export(void* p0, const char* variableName)
	{
		return SAVE::_SAVEGAME_GET_TEXT_LABEL_63(p0, variableName);
	}
	void _0x443174C20B8B9E7F_Export(Any p0, Any p1, Any p2)
	{
		return SAVE::_0x443174C20B8B9E7F(p0, p1, p2);
	}
	void _0x8E8FFB9E4AD051D2_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return SAVE::_0x8E8FFB9E4AD051D2(p0, p1, p2, p3);
	}
	void _0xE0B45E983BFC0768_Export()
	{
		return SAVE::_0xE0B45E983BFC0768();
	}
	void _0x81F4E92BE3958364_Export(Any p0, Any p1, Any p2)
	{
		return SAVE::_0x81F4E92BE3958364(p0, p1, p2);
	}
	void _0xA844FEB5C22C2C74_Export()
	{
		return SAVE::_0xA844FEB5C22C2C74();
	}
	ScrHandle START_SHAPE_TEST_LOS_PROBE_Export(float VecStartPosX, float VecStartPosY, float VecStartPosZ, float VecEndPosX, float VecEndPosY, float VecEndPosZ, int LOSFlags, Entity ExcludeEntityIndex, int Options)
	{
		return SHAPETEST::START_SHAPE_TEST_LOS_PROBE(VecStartPosX, VecStartPosY, VecStartPosZ, VecEndPosX, VecEndPosY, VecEndPosZ, LOSFlags, ExcludeEntityIndex, Options);
	}
	Any _0x04AA59CA40571C2E_Export(Any p0, Any p1)
	{
		return SHAPETEST::_0x04AA59CA40571C2E(p0, p1);
	}
	ScrHandle START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE_Export(float VecStartPosX, float VecStartPosY, float VecStartPosZ, float VecEndPosX, float VecEndPosY, float VecEndPosZ, int LOSFlags, Entity ExcludeEntityIndex, int Options)
	{
		return SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(VecStartPosX, VecStartPosY, VecStartPosZ, VecEndPosX, VecEndPosY, VecEndPosZ, LOSFlags, ExcludeEntityIndex, Options);
	}
	ScrHandle START_SHAPE_TEST_BOX_Export(float scrVecPosX, float scrVecPosY, float scrVecPosZ, float scrVecDimsX, float scrVecDimsY, float scrVecDimsZ, float eulerAnglesX, float eulerAnglesY, float eulerAnglesZ, int RotOrder, int LOSFlags, Entity ExcludeEntityIndex, int Options)
	{
		return SHAPETEST::START_SHAPE_TEST_BOX(scrVecPosX, scrVecPosY, scrVecPosZ, scrVecDimsX, scrVecDimsY, scrVecDimsZ, eulerAnglesX, eulerAnglesY, eulerAnglesZ, RotOrder, LOSFlags, ExcludeEntityIndex, Options);
	}
	ScrHandle START_SHAPE_TEST_CAPSULE_Export(float scrVecPosX, float scrVecPosY, float scrVecPosZ, float scrVecEndPosX, float scrVecEndPosY, float scrVecEndPosZ, float fRadius, int LOSFlags, Entity ExcludeEntityIndex, int Options)
	{
		return SHAPETEST::START_SHAPE_TEST_CAPSULE(scrVecPosX, scrVecPosY, scrVecPosZ, scrVecEndPosX, scrVecEndPosY, scrVecEndPosZ, fRadius, LOSFlags, ExcludeEntityIndex, Options);
	}
	ScrHandle START_SHAPE_TEST_SWEPT_SPHERE_Export(float scrVecPosX, float scrVecPosY, float scrVecPosZ, float scrVecEndPosX, float scrVecEndPosY, float scrVecEndPosZ, float fRadius, int LOSFlags, Entity ExcludeEntityIndex, int Options)
	{
		return SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(scrVecPosX, scrVecPosY, scrVecPosZ, scrVecEndPosX, scrVecEndPosY, scrVecEndPosZ, fRadius, LOSFlags, ExcludeEntityIndex, Options);
	}
	ScrHandle START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE_Export(scrVector* vProbeStartPosOut, scrVector* vProbeEndPosOut, int LOSFlags, Entity ExcludeEntityIndex, int Options)
	{
		return SHAPETEST::START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE(vProbeStartPosOut, vProbeEndPosOut, LOSFlags, ExcludeEntityIndex, Options);
	}
	int GET_SHAPE_TEST_RESULT_Export(ScrHandle shapeTestGuid, int* bHitSomething, scrVector* vPos, scrVector* vNormal, Entity* EntityIndex)
	{
		return SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestGuid, bHitSomething, vPos, vNormal, EntityIndex);
	}
	int SC_INBOX_GET_TOTAL_NUM_MESSAGES_Export()
	{
		return SOCIALCLUB::SC_INBOX_GET_TOTAL_NUM_MESSAGES();
	}
	Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX_Export(int msgIndex)
	{
		return SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(msgIndex);
	}
	BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX_Export(int msgIndex)
	{
		return SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(msgIndex);
	}
	BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX_Export(int msgIndex)
	{
		return SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(msgIndex);
	}
	BOOL SC_INBOX_MESSAGE_GET_DATA_INT_Export(int msgIndex, const char* name, int* value)
	{
		return SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(msgIndex, name, value);
	}
	BOOL SC_INBOX_MESSAGE_GET_DATA_STRING_Export(int msgIndex, const char* name, char* value)
	{
		return SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(msgIndex, name, value);
	}
	const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX_Export(int msgIndex)
	{
		return SOCIALCLUB::SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(msgIndex);
	}
	BOOL SC_PRESENCE_ATTR_SET_FLOAT_Export(Hash valueId, float value)
	{
		return SOCIALCLUB::SC_PRESENCE_ATTR_SET_FLOAT(valueId, value);
	}
	BOOL SC_PRESENCE_ATTR_SET_INT_EX_Export(const char* attrName, int value, BOOL p2)
	{
		return SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT_EX(attrName, value, p2);
	}
	BOOL SC_PRESENCE_ATTR_SET_FLOAT_EX_Export(const char* attrName, float value, BOOL p2)
	{
		return SOCIALCLUB::SC_PRESENCE_ATTR_SET_FLOAT_EX(attrName, value, p2);
	}
	BOOL SC_PRESENCE_ATTR_SET_STRING_EX_Export(const char* attrName, const char* value, BOOL p2)
	{
		return SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING_EX(attrName, value, p2);
	}
	BOOL SC_PROFANITY_CHECK_STRING_Export(const char* textString, int* outToken)
	{
		return SOCIALCLUB::SC_PROFANITY_CHECK_STRING(textString, outToken);
	}
	BOOL SC_PROFANITY_GET_CHECK_IS_VALID_Export(int token)
	{
		return SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(token);
	}
	BOOL SC_PROFANITY_GET_CHECK_IS_PENDING_Export(int token)
	{
		return SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(token);
	}
	BOOL SC_PROFANITY_GET_STRING_PASSED_Export(int token)
	{
		return SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(token);
	}
	int SC_PROFANITY_GET_STRING_STATUS_Export(int token)
	{
		return SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(token);
	}
	BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_Export()
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE();
	}
	int SC_COMMUNITY_EVENT_GET_EVENT_ID_Export()
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID();
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_Export(const char* name, int* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT(name, value);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_Export(const char* name, float* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT(name, value);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_Export(const char* name, char* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING(name, value);
	}
	BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_Export(char* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_DISPLAY_NAME(value);
	}
	BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE_Export(const char* eventType)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE(eventType);
	}
	int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE_Export(const char* eventType)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(eventType);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE_Export(const char* name, int* value, const char* eventType)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE(name, value, eventType);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE_Export(const char* name, float* value, const char* eventType)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE(name, value, eventType);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE_Export(const char* name, char* value, const char* eventType)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE(name, value, eventType);
	}
	BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE_Export(char* value, const char* p1)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE(value, p1);
	}
	BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID_Export(int eventId)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID(eventId);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID_Export(int eventId, const char* name, int* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(eventId, name, value);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID_Export(int eventId, const char* name, float* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID(eventId, name, value);
	}
	BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID_Export(int eventId, const char* name, char* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(eventId, name, value);
	}
	BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID_Export(int eventID, char* value)
	{
		return SOCIALCLUB::SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(eventID, value);
	}
	int _SC_FEED_SUBMIT_PRESET_MESSAGE_Export(int type, int subType)
	{
		return SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(type, subType);
	}
	BOOL SC_FEED_HUB_HAS_NEW_DATA_Export()
	{
		return SOCIALCLUBFEED::SC_FEED_HUB_HAS_NEW_DATA();
	}
	BOOL _SPACTIONPROXY_START_MANAGER_Export()
	{
		return SPACTIONPROXY::_SPACTIONPROXY_START_MANAGER();
	}
	BOOL _SPACTIONPROXY_MANAGER_IS_READY_Export()
	{
		return SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_READY();
	}
	BOOL _SPACTIONPROXY_MANAGER_IS_FAILED_Export()
	{
		return SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_FAILED();
	}
	BOOL _SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION_Export(void* data)
	{
		return SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(data);
	}
	BOOL _SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION_Export(void* data)
	{
		return SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(data);
	}
	BOOL _SPACTIONPROXY_PROCESS_ACTION_Export(Any p0, BOOL p1)
	{
		return SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(p0, p1);
	}
	BOOL STAT_ID_IS_VALID_Export(void* statId)
	{
		return STATS::STAT_ID_IS_VALID(statId);
	}
	BOOL STAT_ID_SET_INT_Export(void* statId, int value, BOOL p2)
	{
		return STATS::STAT_ID_SET_INT(statId, value, p2);
	}
	BOOL STAT_ID_SET_FLOAT_Export(void* statId, float value, BOOL p2)
	{
		return STATS::STAT_ID_SET_FLOAT(statId, value, p2);
	}
	BOOL STAT_ID_SET_BOOL_Export(void* statId, BOOL value, BOOL p2)
	{
		return STATS::STAT_ID_SET_BOOL(statId, value, p2);
	}
	BOOL STAT_ID_SET_GXT_LABEL_Export(void* statId, const char* label, BOOL p2)
	{
		return STATS::STAT_ID_SET_GXT_LABEL(statId, label, p2);
	}
	BOOL STAT_ID_SET_DATE_Export(void* statId, void* date, BOOL p2)
	{
		return STATS::STAT_ID_SET_DATE(statId, date, p2);
	}
	BOOL STAT_ID_GET_INT_Export(void* statId, int* p1)
	{
		return STATS::STAT_ID_GET_INT(statId, p1);
	}
	BOOL STAT_ID_GET_FLOAT_Export(void* statId, float* value)
	{
		return STATS::STAT_ID_GET_FLOAT(statId, value);
	}
	BOOL STAT_ID_GET_BOOL_Export(void* statId, BOOL* value)
	{
		return STATS::STAT_ID_GET_BOOL(statId, value);
	}
	BOOL STAT_ID_GET_DATE_Export(void* statId, void* date)
	{
		return STATS::STAT_ID_GET_DATE(statId, date);
	}
	void _0x0FEE2561120F3333_Export(void* statId)
	{
		return STATS::_0x0FEE2561120F3333(statId);
	}
	void _STAT_ID_INCREMENT_INT_Export(void* statId, int value)
	{
		return STATS::_STAT_ID_INCREMENT_INT(statId, value);
	}
	void _STAT_ID_INCREMENT_FLOAT_Export(void* statId, float value)
	{
		return STATS::_STAT_ID_INCREMENT_FLOAT(statId, value);
	}
	void _STAT_ID_DECREMENT_INT_Export(void* statId, int value)
	{
		return STATS::_STAT_ID_DECREMENT_INT(statId, value);
	}
	void _0x91A4F58E01ED5E4C_Export(void* statId, int value)
	{
		return STATS::_0x91A4F58E01ED5E4C(statId, value);
	}
	void _0xE141F6B40B1E3683_Export(void* statId, float value)
	{
		return STATS::_0xE141F6B40B1E3683(statId, value);
	}
	void STAT_ID_SET_TO_POSSE_ID_Export(void* statId)
	{
		return STATS::STAT_ID_SET_TO_POSSE_ID(statId);
	}
	int _STAT_CALCULATE_COOLDOWN_Export(int value)
	{
		return STATS::_STAT_CALCULATE_COOLDOWN(value);
	}
	BOOL _STAT_PHEROMONE_COOLDOWN_LEGENDARY_ANIMAL_Export(Entity entity, void* statId)
	{
		return STATS::_STAT_PHEROMONE_COOLDOWN_LEGENDARY_ANIMAL(entity, statId);
	}
	void _STAT_ITEM_FISH_CAUGHT_Export(Ped fish, float weight, Hash category, Hash subcategory)
	{
		return STATS::_STAT_ITEM_FISH_CAUGHT(fish, weight, category, subcategory);
	}
	void _STAT_CARRIED_SATCHEL_ITEM_FROM_PED_Export(Ped ped)
	{
		return STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ped);
	}
	void _STAT_DONATE_INCREMENT_ITEM_Export(int item, int slot, Any p2, Any p3)
	{
		return STATS::_STAT_DONATE_INCREMENT_ITEM(item, slot, p2, p3);
	}
	void _0x8312F09C56149A8A_Export(Hash animalType)
	{
		return STATS::_0x8312F09C56149A8A(animalType);
	}
	void _0x378D3B1B11D9385B_Export(int p0)
	{
		return STATS::_0x378D3B1B11D9385B(p0);
	}
	void _0xDA26263C07CCE9C2_Export(int p0)
	{
		return STATS::_0xDA26263C07CCE9C2(p0);
	}
	void _0xD64DBC8B0424135F_Export(Ped ped, Hash animalType)
	{
		return STATS::_0xD64DBC8B0424135F(ped, animalType);
	}
	void _0xA59590050F80FF2E_Export(Any p0, BOOL p1, BOOL p2, BOOL p3)
	{
		return STATS::_0xA59590050F80FF2E(p0, p1, p2, p3);
	}
	void _STAT_ADD_ANIMAL_SAMPLE_TARGET_Export(Hash animalType)
	{
		return STATS::_STAT_ADD_ANIMAL_SAMPLE_TARGET(animalType);
	}
	void _0xF8181B5EF156862C_Export(Ped ped)
	{
		return STATS::_0xF8181B5EF156862C(ped);
	}
	void STAT_ADD_BOUNTY_TARGET_Export(Hash unlockHash, Ped ped)
	{
		return STATS::STAT_ADD_BOUNTY_TARGET(unlockHash, ped);
	}
	void _0x8C889E4CBB4B2356_Export(Any p0, Ped ped)
	{
		return STATS::_0x8C889E4CBB4B2356(p0, ped);
	}
	void STAT_BOUNTY_CAPTURED_Export(Entity entity)
	{
		return STATS::STAT_BOUNTY_CAPTURED(entity);
	}
	void _0xA596890CF55B5095_Export(Ped ped, BOOL p1)
	{
		return STATS::_0xA596890CF55B5095(ped, p1);
	}
	void STAT_BOUNTY_ESCAPED_Export(Ped ped)
	{
		return STATS::STAT_BOUNTY_ESCAPED(ped);
	}
	void _0xF21A5D66874FCEDD_Export(Any p0, Hash p1, Hash p2)
	{
		return STATS::_0xF21A5D66874FCEDD(p0, p1, p2);
	}
	void _0x3EB2791A1FBC8A42_Export(Hash statItem, int p1)
	{
		return STATS::_0x3EB2791A1FBC8A42(statItem, p1);
	}
	void _0xDF95DF488A645CE7_Export()
	{
		return STATS::_0xDF95DF488A645CE7();
	}
	void STAT_PHOTOGRAPH_TAKEN_Export(ItemSet itemset)
	{
		return STATS::STAT_PHOTOGRAPH_TAKEN(itemset);
	}
	void _0xBE66B26B6529E943_Export(Hash unlockHash, Ped ped, Hash animalType)
	{
		return STATS::_0xBE66B26B6529E943(unlockHash, ped, animalType);
	}
	void _0xF2B5ABDE09958689_Export(Hash unlockHash, Ped ped1, Ped ped2)
	{
		return STATS::_0xF2B5ABDE09958689(unlockHash, ped1, ped2);
	}
	void STAT_REGISTER_LEGENDARY_ANIMAL_DEED_Export(Hash deedHash)
	{
		return STATS::STAT_REGISTER_LEGENDARY_ANIMAL_DEED(deedHash);
	}
	BOOL _0x302E71C1D9EE75B9_Export(void* statId, Hash p1, int* p2)
	{
		return STATS::_0x302E71C1D9EE75B9(statId, p1, p2);
	}
	BOOL STATSTRACKER_IS_INITIALIZED_Export(Hash p0)
	{
		return STATS::STATSTRACKER_IS_INITIALIZED(p0);
	}
	void _0x6123E2832C34243D_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return STATS::_0x6123E2832C34243D(p0, p1, p2, p3, p4);
	}
	void _0xCA41E86545413B5B_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return STATS::_0xCA41E86545413B5B(p0, p1, p2, p3, p4, p5, p6);
	}
	void STATSTRACKER_DEED_STARTED_Export(Hash p0, Any p1)
	{
		return STATS::STATSTRACKER_DEED_STARTED(p0, p1);
	}
	void _STATSTRACKER_DEED_STATUS_Export(int deedType, Hash deedHash, int missionStatus, void* data)
	{
		return STATS::_STATSTRACKER_DEED_STATUS(deedType, deedHash, missionStatus, data);
	}
	void _0x99230691875FC218_Export(Any p0, Hash p1, float x, float y, float z)
	{
		return STATS::_0x99230691875FC218(p0, p1, x, y, z);
	}
	void _0x025E98E317652CDD_Export(int p0)
	{
		return STATS::_0x025E98E317652CDD(p0);
	}
	void _0xE5A680A5D8B1F687_Export(int p0)
	{
		return STATS::_0xE5A680A5D8B1F687(p0);
	}
	BOOL _0x4DAC398297981B87_Export(int p0)
	{
		return STATS::_0x4DAC398297981B87(p0);
	}
	BOOL CHAL_IS_GOAL_ACTIVE_Export(Hash chalHash, Hash goalHash)
	{
		return STATS::CHAL_IS_GOAL_ACTIVE(chalHash, goalHash);
	}
	void CHAL_SET_GOAL_DISABLED_Export(Hash chalHash, Hash goalHash, BOOL disabled)
	{
		return STATS::CHAL_SET_GOAL_DISABLED(chalHash, goalHash, disabled);
	}
	int CHAL_GET_NUM_RANKS_COMPLETED_Export(Hash chalHash)
	{
		return STATS::CHAL_GET_NUM_RANKS_COMPLETED(chalHash);
	}
	int CHAL_GET_MAX_RANKS_Export(Hash chalHash)
	{
		return STATS::CHAL_GET_MAX_RANKS(chalHash);
	}
	void CHAL_ADD_GOAL_PROGRESS_INT_Export(Hash chalHash, Hash goalHash, int value)
	{
		return STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, value);
	}
	void CHAL_ADD_GOAL_PROGRESS_FLOAT_Export(Hash chalHash, Hash goalHash, float value)
	{
		return STATS::CHAL_ADD_GOAL_PROGRESS_FLOAT(chalHash, goalHash, value);
	}
	void CHAL_SET_GOAL_PROGRESS_INT_Export(Hash chalHash, Hash goalHash, int value)
	{
		return STATS::CHAL_SET_GOAL_PROGRESS_INT(chalHash, goalHash, value);
	}
	void CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID_Export(Hash p0, int value)
	{
		return STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(p0, value);
	}
	void CHAL_ADD_GOAL_PROGRESS_FLOAT_BY_SCORE_ID_Export(Hash p0, float value)
	{
		return STATS::CHAL_ADD_GOAL_PROGRESS_FLOAT_BY_SCORE_ID(p0, value);
	}
	BOOL CHAL_ACHIEVEMENT_IS_COMPLETE_Export(Hash p0, Hash p1)
	{
		return STATS::CHAL_ACHIEVEMENT_IS_COMPLETE(p0, p1);
	}
	int CHAL_ACHIEVEMENT_GET_PROGRESS_INT_Export(Hash p0, Hash p1)
	{
		return STATS::CHAL_ACHIEVEMENT_GET_PROGRESS_INT(p0, p1);
	}
	void CHAL_NET_START_CHAL_Export(Hash chalHash)
	{
		return STATS::CHAL_NET_START_CHAL(chalHash);
	}
	void CHAL_NET_STOP_CHAL_Export(Hash chalHash)
	{
		return STATS::CHAL_NET_STOP_CHAL(chalHash);
	}
	void CHAL_NET_START_GOAL_Export(Hash chalHash, Hash goalHash)
	{
		return STATS::CHAL_NET_START_GOAL(chalHash, goalHash);
	}
	void CHAL_NET_STOP_GOAL_Export(Hash chalHash, Hash goalHash)
	{
		return STATS::CHAL_NET_STOP_GOAL(chalHash, goalHash);
	}
	int _0xDDBD560745B1EE98_Export(Hash chalHash, Hash goalHash, Player player)
	{
		return STATS::_0xDDBD560745B1EE98(chalHash, goalHash, player);
	}
	const char* _0xB112B9262EC29C20_Export(Hash p0, int p1)
	{
		return STATS::_0xB112B9262EC29C20(p0, p1);
	}
	void _0x4FCBCC0584CD08E9_Export(Hash p0)
	{
		return STATS::_0x4FCBCC0584CD08E9(p0);
	}
	BOOL _0xCA1F0B5103936891_Export(Hash p0)
	{
		return STATS::_0xCA1F0B5103936891(p0);
	}
	Hash _0x8BA3D7B1E83EF803_Export(Hash p0)
	{
		return STATS::_0x8BA3D7B1E83EF803(p0);
	}
	int CHAL_MISSION_GET_NUM_GOALS_Export(Hash missionHash)
	{
		return STATS::CHAL_MISSION_GET_NUM_GOALS(missionHash);
	}
	int CHAL_MISSION_GET_NUM_GOALS_COMPLETE_Export(Hash missionHash)
	{
		return STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(missionHash);
	}
	BOOL CHAL_MISSION_IS_GOAL_COMPLETE_Export(Hash missionHash, Hash goalHash)
	{
		return STATS::CHAL_MISSION_IS_GOAL_COMPLETE(missionHash, goalHash);
	}
	void CHAL_MISSION_ADD_GOAL_PROGRESS_INT_Export(Hash missionHash, Hash goalHash, int value)
	{
		return STATS::CHAL_MISSION_ADD_GOAL_PROGRESS_INT(missionHash, goalHash, value);
	}
	float _0x9D0F5D2E1951CD84_Export()
	{
		return STATS::_0x9D0F5D2E1951CD84();
	}
	void _0x218F7710A139D012_Export()
	{
		return STATS::_0x218F7710A139D012();
	}
	BOOL _0x3AEABAE3F3C7600C_Export()
	{
		return STATS::_0x3AEABAE3F3C7600C();
	}
	const char* _0x3F6FD87D2030ADC6_Export()
	{
		return STATS::_0x3F6FD87D2030ADC6();
	}
	Any _0xA2E2BEA4E83F6270_Export(Hash p0)
	{
		return STATS::_0xA2E2BEA4E83F6270(p0);
	}
	BOOL _0xB5E2EDA2135E0FA1_Export(Hash p0, int p1, Hash* scheduleLocation)
	{
		return STATS::_0xB5E2EDA2135E0FA1(p0, p1, scheduleLocation);
	}
	int WEEKLY_COLLECTIBLE_GET_NUM_SETS_Export(Hash chalHash)
	{
		return STATS::WEEKLY_COLLECTIBLE_GET_NUM_SETS(chalHash);
	}
	Hash WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD_Export(Hash chalHash, int index)
	{
		return STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(chalHash, index);
	}
	Hash WEEKLY_COLLECTIBLE_GET_ITEM_SET_LABEL_Export(Hash chalHash, int index)
	{
		return STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_LABEL(chalHash, index);
	}
	int WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET_Export(Hash chalHash, int index)
	{
		return STATS::WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(chalHash, index);
	}
	BOOL WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET_Export(Hash chalHash, int setIndex, int itemIndex, Hash* p3, int* p4)
	{
		return STATS::WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(chalHash, setIndex, itemIndex, p3, p4);
	}
	void _0x4F2D5FA23DB992DE_Export()
	{
		return STATS::_0x4F2D5FA23DB992DE();
	}
	void _0x4E463A3CDEFFFE96_Export()
	{
		return STATS::_0x4E463A3CDEFFFE96();
	}
	void REQUEST_MODEL_Export(Hash ModelIndex, BOOL p1)
	{
		return STREAMING::REQUEST_MODEL(ModelIndex, p1);
	}
	BOOL HAS_MODEL_LOADED_Export(Hash ModelIndex)
	{
		return STREAMING::HAS_MODEL_LOADED(ModelIndex);
	}
	void SET_MODEL_AS_NO_LONGER_NEEDED_Export(Hash ModelIndex)
	{
		return STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ModelIndex);
	}
	BOOL IS_MODEL_IN_CDIMAGE_Export(Hash ModelIndex)
	{
		return STREAMING::IS_MODEL_IN_CDIMAGE(ModelIndex);
	}
	BOOL IS_MODEL_VALID_Export(Hash modelHash)
	{
		return STREAMING::IS_MODEL_VALID(modelHash);
	}
	BOOL IS_MODEL_A_PED_Export(Hash model)
	{
		return STREAMING::IS_MODEL_A_PED(model);
	}
	BOOL IS_MODEL_A_VEHICLE_Export(Hash ModelHashKey)
	{
		return STREAMING::IS_MODEL_A_VEHICLE(ModelHashKey);
	}
	BOOL _IS_MODEL_AN_OBJECT_Export(Hash model)
	{
		return STREAMING::_IS_MODEL_AN_OBJECT(model);
	}
	BOOL _HAS_COLLISION_LOADED_AT_COORD_Export(float x, float y, float z)
	{
		return STREAMING::_HAS_COLLISION_LOADED_AT_COORD(x, y, z);
	}
	void _0x80B3E0597366ADF1_Export()
	{
		return STREAMING::_0x80B3E0597366ADF1();
	}
	void REQUEST_COLLISION_AT_COORD_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		return STREAMING::REQUEST_COLLISION_AT_COORD(VecCoorsX, VecCoorsY, VecCoorsZ);
	}
	void _REQUEST_METADATA_AT_COORD_Export(float x, float y, float z)
	{
		return STREAMING::_REQUEST_METADATA_AT_COORD(x, y, z);
	}
	void REQUEST_COLLISION_FOR_MODEL_Export(Hash ModelIndex)
	{
		return STREAMING::REQUEST_COLLISION_FOR_MODEL(ModelIndex);
	}
	BOOL HAS_COLLISION_FOR_MODEL_LOADED_Export(Hash ModelIndex)
	{
		return STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(ModelIndex);
	}
	void REQUEST_ADDITIONAL_COLLISION_AT_COORD_Export(float VecX, float VecY, float VecZ)
	{
		return STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(VecX, VecY, VecZ);
	}
	BOOL DOES_ANIM_DICT_EXIST_Export(const char* animSetName)
	{
		return STREAMING::DOES_ANIM_DICT_EXIST(animSetName);
	}
	void REQUEST_ANIM_DICT_Export(const char* animDictionaryName)
	{
		return STREAMING::REQUEST_ANIM_DICT(animDictionaryName);
	}
	BOOL HAS_ANIM_DICT_LOADED_Export(const char* animDictionaryName)
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(animDictionaryName);
	}
	void REMOVE_ANIM_DICT_Export(const char* animDictionaryName)
	{
		return STREAMING::REMOVE_ANIM_DICT(animDictionaryName);
	}
	void REQUEST_MOVE_NETWORK_DEF_Export(const char* name)
	{
		return STREAMING::REQUEST_MOVE_NETWORK_DEF(name);
	}
	BOOL HAS_MOVE_NETWORK_DEF_LOADED_Export(const char* name)
	{
		return STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(name);
	}
	void REMOVE_MOVE_NETWORK_DEF_Export(const char* name)
	{
		return STREAMING::REMOVE_MOVE_NETWORK_DEF(name);
	}
	void REQUEST_CLIP_SET_Export(const char* animSetName)
	{
		return STREAMING::REQUEST_CLIP_SET(animSetName);
	}
	BOOL HAS_CLIP_SET_LOADED_Export(const char* animSetName)
	{
		return STREAMING::HAS_CLIP_SET_LOADED(animSetName);
	}
	void REMOVE_CLIP_SET_Export(const char* animSetName)
	{
		return STREAMING::REMOVE_CLIP_SET(animSetName);
	}
	void _REQUEST_CLIP_SET_BY_HASH_Export(Hash clipSetHash)
	{
		return STREAMING::_REQUEST_CLIP_SET_BY_HASH(clipSetHash);
	}
	void _0x03DDBF2D73799F9E_Export(Any p0)
	{
		return STREAMING::_0x03DDBF2D73799F9E(p0);
	}
	Any _0x85B8F04555AB49B8_Export(Any p0)
	{
		return STREAMING::_0x85B8F04555AB49B8(p0);
	}
	void _0x9F348DE670423460_Export(Any p0)
	{
		return STREAMING::_0x9F348DE670423460(p0);
	}
	Any _0x5288B7F0690F7C1F_Export(Any p0)
	{
		return STREAMING::_0x5288B7F0690F7C1F(p0);
	}
	int _REQUEST_SCENARIO_TYPE_Export(Hash scenarioType, int p1, Any p2, Any p3)
	{
		return STREAMING::_REQUEST_SCENARIO_TYPE(scenarioType, p1, p2, p3);
	}
	BOOL _HAS_SCENARIO_TYPE_LOADED_Export(Hash scenarioType, BOOL p1)
	{
		return STREAMING::_HAS_SCENARIO_TYPE_LOADED(scenarioType, p1);
	}
	Any _REMOVE_SCENARIO_ASSET_Export(Hash scenarioType)
	{
		return STREAMING::_REMOVE_SCENARIO_ASSET(scenarioType);
	}
	Any _0xB223249B7798EEED_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return STREAMING::_0xB223249B7798EEED(p0, p1, p2, p3);
	}
	Any _0xA0AE7653E8181725_Export(Any p0)
	{
		return STREAMING::_0xA0AE7653E8181725(p0);
	}
	Any _0x66BC28E50E85270E_Export(Any p0)
	{
		return STREAMING::_0x66BC28E50E85270E(p0);
	}
	BOOL _GET_IPL_BOUNDING_SPHERE_Export(Hash iplHash, scrVector* position, float* radius)
	{
		return STREAMING::_GET_IPL_BOUNDING_SPHERE(iplHash, position, radius);
	}
	void REQUEST_IPL_HASH_Export(Hash iplHash)
	{
		return STREAMING::REQUEST_IPL_HASH(iplHash);
	}
	void REQUEST_IPL_BY_HASH_Export(Hash iplHash)
	{
		return STREAMING::REQUEST_IPL_BY_HASH(iplHash);
	}
	void REMOVE_IPL_HASH_Export(Hash iplHash)
	{
		return STREAMING::REMOVE_IPL_HASH(iplHash);
	}
	void REMOVE_IPL_BY_HASH_Export(Hash iplHash)
	{
		return STREAMING::REMOVE_IPL_BY_HASH(iplHash);
	}
	BOOL IS_IPL_ACTIVE_HASH_Export(Hash iplHash)
	{
		return STREAMING::IS_IPL_ACTIVE_HASH(iplHash);
	}
	BOOL IS_IPL_ACTIVE_BY_HASH_Export(Hash iplHash)
	{
		return STREAMING::IS_IPL_ACTIVE_BY_HASH(iplHash);
	}
	BOOL _IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS_Export(Hash iplHash, float x, float y, float z)
	{
		return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(iplHash, x, y, z);
	}
	void _0xDEEE1F265B7ECEF5_Export()
	{
		return STREAMING::_0xDEEE1F265B7ECEF5();
	}
	void SET_GAME_PAUSES_FOR_STREAMING_Export(BOOL bAllowPause)
	{
		return STREAMING::SET_GAME_PAUSES_FOR_STREAMING(bAllowPause);
	}
	int GET_NUMBER_OF_STREAMING_REQUESTS_Export()
	{
		return STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
	}
	void REQUEST_PTFX_ASSET_Export()
	{
		return STREAMING::REQUEST_PTFX_ASSET();
	}
	BOOL HAS_PTFX_ASSET_LOADED_Export()
	{
		return STREAMING::HAS_PTFX_ASSET_LOADED();
	}
	void REMOVE_PTFX_ASSET_Export()
	{
		return STREAMING::REMOVE_PTFX_ASSET();
	}
	void REQUEST_NAMED_PTFX_ASSET_Export(Hash fxNameHash)
	{
		return STREAMING::REQUEST_NAMED_PTFX_ASSET(fxNameHash);
	}
	BOOL HAS_NAMED_PTFX_ASSET_LOADED_Export(Hash fxNameHash)
	{
		return STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(fxNameHash);
	}
	void REMOVE_NAMED_PTFX_ASSET_Export(Hash fxNameHash)
	{
		return STREAMING::REMOVE_NAMED_PTFX_ASSET(fxNameHash);
	}
	void SET_POPULATION_BUDGET_MULTIPLIER_Export(float fBudgetMultiplier)
	{
		return STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(fBudgetMultiplier);
	}
	float GET_POPULATION_BUDGET_MULTIPLIER_Export()
	{
		return STREAMING::GET_POPULATION_BUDGET_MULTIPLIER();
	}
	Any _0x071769BCB24379E5_Export()
	{
		return STREAMING::_0x071769BCB24379E5();
	}
	void CLEAR_FOCUS_Export()
	{
		return STREAMING::CLEAR_FOCUS();
	}
	void SET_FOCUS_POS_AND_VEL_Export(float posX, float posY, float posZ, float velX, float velY, float velZ)
	{
		return STREAMING::SET_FOCUS_POS_AND_VEL(posX, posY, posZ, velX, velY, velZ);
	}
	void SET_FOCUS_ENTITY_Export(Entity entityIndex)
	{
		return STREAMING::SET_FOCUS_ENTITY(entityIndex);
	}
	BOOL IS_ENTITY_FOCUS_Export(Entity entityIndex)
	{
		return STREAMING::IS_ENTITY_FOCUS(entityIndex);
	}
	void SET_MAPDATACULLBOX_ENABLED_Export(const char* boxName, BOOL bEnabled)
	{
		return STREAMING::SET_MAPDATACULLBOX_ENABLED(boxName, bEnabled);
	}
	void SET_ALL_MAPDATA_CULLED_Export(BOOL bCulled)
	{
		return STREAMING::SET_ALL_MAPDATA_CULLED(bCulled);
	}
	void _0xF01D21DF39554115_Export(Any p0)
	{
		return STREAMING::_0xF01D21DF39554115(p0);
	}
	BOOL LOAD_SCENE_START_Export(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7)
	{
		return STREAMING::LOAD_SCENE_START(posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7);
	}
	BOOL LOAD_SCENE_START_SPHERE_Export(float x, float y, float z, float radius, Any p4)
	{
		return STREAMING::LOAD_SCENE_START_SPHERE(x, y, z, radius, p4);
	}
	void LOAD_SCENE_STOP_Export()
	{
		return STREAMING::LOAD_SCENE_STOP();
	}
	BOOL IS_LOAD_SCENE_ACTIVE_Export()
	{
		return STREAMING::IS_LOAD_SCENE_ACTIVE();
	}
	BOOL IS_LOAD_SCENE_LOADED_Export()
	{
		return STREAMING::IS_LOAD_SCENE_LOADED();
	}
	BOOL IS_RENDERED_SCENE_LOADED_Export()
	{
		return STREAMING::IS_RENDERED_SCENE_LOADED();
	}
	BOOL IS_PLAYER_SWITCH_IN_PROGRESS_Export()
	{
		return STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS();
	}
	void SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME_Export()
	{
		return STREAMING::SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME();
	}
	void IPL_GROUP_SWAP_START_Export(const char* iplGroupBefore, const char* iplGroupAfter)
	{
		return STREAMING::IPL_GROUP_SWAP_START(iplGroupBefore, iplGroupAfter);
	}
	void IPL_GROUP_SWAP_CANCEL_Export()
	{
		return STREAMING::IPL_GROUP_SWAP_CANCEL();
	}
	BOOL IPL_GROUP_SWAP_IS_READY_Export()
	{
		return STREAMING::IPL_GROUP_SWAP_IS_READY();
	}
	void IPL_GROUP_SWAP_FINISH_Export()
	{
		return STREAMING::IPL_GROUP_SWAP_FINISH();
	}
	BOOL IPL_GROUP_SWAP_IS_ACTIVE_Export()
	{
		return STREAMING::IPL_GROUP_SWAP_IS_ACTIVE();
	}
	void PREFETCH_SRL_Export(const char* cutsceneName)
	{
		return STREAMING::PREFETCH_SRL(cutsceneName);
	}
	void _0xAE00387E53B1E9FC_Export()
	{
		return STREAMING::_0xAE00387E53B1E9FC();
	}
	void _0xEF1A8A484118735E_Export()
	{
		return STREAMING::_0xEF1A8A484118735E();
	}
	void _0xD9F2FF4AF394D926_Export()
	{
		return STREAMING::_0xD9F2FF4AF394D926();
	}
	BOOL IS_SRL_LOADED_Export()
	{
		return STREAMING::IS_SRL_LOADED();
	}
	void BEGIN_SRL_Export()
	{
		return STREAMING::BEGIN_SRL();
	}
	void END_SRL_Export()
	{
		return STREAMING::END_SRL();
	}
	void SET_SRL_TIME_Export(float time)
	{
		return STREAMING::SET_SRL_TIME(time);
	}
	void SET_SRL_READAHEAD_TIMES_Export(int prestreamMap, int prestreamAssets, int playbackMap, int playbackAssets)
	{
		return STREAMING::SET_SRL_READAHEAD_TIMES(prestreamMap, prestreamAssets, playbackMap, playbackAssets);
	}
	void SET_SRL_LONG_JUMP_MODE_Export(BOOL enableLongJumpMode)
	{
		return STREAMING::SET_SRL_LONG_JUMP_MODE(enableLongJumpMode);
	}
	void SET_HD_AREA_Export(float positionX, float positionY, float positionZ, float radius)
	{
		return STREAMING::SET_HD_AREA(positionX, positionY, positionZ, radius);
	}
	void CLEAR_HD_AREA_Export()
	{
		return STREAMING::CLEAR_HD_AREA();
	}
	void _0x09FBF15D73EFC900_Export()
	{
		return STREAMING::_0x09FBF15D73EFC900();
	}
	void _0xF11D7CB962FCD747_Export(Any p0)
	{
		return STREAMING::_0xF11D7CB962FCD747(p0);
	}
	void _0xB9B9E47EDB9D63DB_Export()
	{
		return STREAMING::_0xB9B9E47EDB9D63DB();
	}
	void _0xBE8DAA9D8D01DA6A_Export(Any p0, Any p1, Any p2)
	{
		return STREAMING::_0xBE8DAA9D8D01DA6A(p0, p1, p2);
	}
	Any _0x53764309C4618087_Export(Any p0)
	{
		return STREAMING::_0x53764309C4618087(p0);
	}
	void _0x032A14D082A9B269_Export(Hash p0)
	{
		return STREAMING::_0x032A14D082A9B269(p0);
	}
	void _0xAFA87A7D41EE346A_Export(Any p0)
	{
		return STREAMING::_0xAFA87A7D41EE346A(p0);
	}
	void _0x6A6E79FBE8678C98_Export()
	{
		return STREAMING::_0x6A6E79FBE8678C98();
	}
	void _0xCC61D8D6C19D9F14_Export(Any p0)
	{
		return STREAMING::_0xCC61D8D6C19D9F14(p0);
	}
	Any _0xDA7FDEFF4DE86839_Export()
	{
		return STREAMING::_0xDA7FDEFF4DE86839();
	}
	Any _0x5D5E2102B174B8D2_Export()
	{
		return STREAMING::_0x5D5E2102B174B8D2();
	}
	Any _0x7B8C2B846C05E5AD_Export()
	{
		return STREAMING::_0x7B8C2B846C05E5AD();
	}
	void _0x62D5F0588915B277_Export()
	{
		return STREAMING::_0x62D5F0588915B277();
	}
	Any _0x2F4D53023F826FF0_Export()
	{
		return STREAMING::_0x2F4D53023F826FF0();
	}
	Any _0xDABFE48BA0D457AA_Export()
	{
		return STREAMING::_0xDABFE48BA0D457AA();
	}
	Any _0xE5B76E5B56CD77DD_Export()
	{
		return STREAMING::_0xE5B76E5B56CD77DD();
	}
	Any _0x27AF48C62B281341_Export()
	{
		return STREAMING::_0x27AF48C62B281341();
	}
	Any _0x99F92061EFE908BA_Export()
	{
		return STREAMING::_0x99F92061EFE908BA();
	}
	Any _0x05DD384F39DE1C8C_Export(Any p0, Any p1)
	{
		return STREAMING::_0x05DD384F39DE1C8C(p0, p1);
	}
	Any _0x198B85CC3C7A4593_Export(Any p0, Any p1)
	{
		return STREAMING::_0x198B85CC3C7A4593(p0, p1);
	}
	Any _0x2A6D1DAAB9EBB262_Export(Any p0)
	{
		return STREAMING::_0x2A6D1DAAB9EBB262(p0);
	}
	void _0x07559B29950301FF_Export(Any p0, Any p1)
	{
		return STREAMING::_0x07559B29950301FF(p0, p1);
	}
	Any _0xD6E39DC5D46DF4AB_Export(Any p0)
	{
		return STREAMING::_0xD6E39DC5D46DF4AB(p0);
	}
	Any _0x8D56BDA343D9519F_Export(Any p0)
	{
		return STREAMING::_0x8D56BDA343D9519F(p0);
	}
	void _0xD840C130D7AACFA5_Export(Any p0, Any p1, Any p2)
	{
		return STREAMING::_0xD840C130D7AACFA5(p0, p1, p2);
	}
	void _0x2E24C27B112B5B12_Export(Any p0)
	{
		return STREAMING::_0x2E24C27B112B5B12(p0);
	}
	void _SET_GUARMA_WORLDHORIZON_ACTIVE_Export(BOOL toggle)
	{
		return STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(toggle);
	}
	void TASK_PAUSE_Export(Ped PedIndex, int Time)
	{
		return TASK::TASK_PAUSE(PedIndex, Time);
	}
	void TASK_STAND_STILL_Export(Ped PedIndex, int Time)
	{
		return TASK::TASK_STAND_STILL(PedIndex, Time);
	}
	void TASK_JUMP_Export(Ped PedIndex, BOOL unused)
	{
		return TASK::TASK_JUMP(PedIndex, unused);
	}
	void _TASK_JUMP_2_Export(Ped ped, float x, float y, float z, Entity entity)
	{
		return TASK::_TASK_JUMP_2(ped, x, y, z, entity);
	}
	void TASK_COWER_Export(Ped PedIndex, int Time, Ped pedToCowerFrom, const char* p3)
	{
		return TASK::TASK_COWER(PedIndex, Time, pedToCowerFrom, p3);
	}
	void TASK_HANDS_UP_Export(Ped PedIndex, int Time, Ped PedToFaceIndex, int TimeToFacePed, int Flags)
	{
		return TASK::TASK_HANDS_UP(PedIndex, Time, PedToFaceIndex, TimeToFacePed, Flags);
	}
	void TASK_KNOCKED_OUT_Export(Ped ped, float p1, BOOL permanently)
	{
		return TASK::TASK_KNOCKED_OUT(ped, p1, permanently);
	}
	void TASK_KNOCKED_OUT_AND_HOGTIED_Export(Ped ped, float p1, int p2)
	{
		return TASK::TASK_KNOCKED_OUT_AND_HOGTIED(ped, p1, p2);
	}
	void _0xFFB520A3E16F7B7B_Export(Ped ped, float p1)
	{
		return TASK::_0xFFB520A3E16F7B7B(ped, p1);
	}
	void _0x8B1FDF63C3193EDA_Export(Ped ped, float p1)
	{
		return TASK::_0x8B1FDF63C3193EDA(ped, p1);
	}
	void UPDATE_TASK_HANDS_UP_DURATION_Export(Ped PedIndex, int Time)
	{
		return TASK::UPDATE_TASK_HANDS_UP_DURATION(PedIndex, Time);
	}
	void _0x28EF780BDEA8A639_Export(Ped ped, int p1)
	{
		return TASK::_0x28EF780BDEA8A639(ped, p1);
	}
	void TASK_DUCK_Export(Ped ped, int p1)
	{
		return TASK::TASK_DUCK(ped, p1);
	}
	void _TASK_BOARD_VEHICLE_Export(Ped ped, Vehicle vehicle, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::_TASK_BOARD_VEHICLE(ped, vehicle, p2, p3, p4, p5);
	}
	void _TASK_DISEMBARK_VEHICLE_Export(Any p0, Vehicle vehicle, int p2, Any p3, float p4, Any p5)
	{
		return TASK::_TASK_DISEMBARK_VEHICLE(p0, vehicle, p2, p3, p4, p5);
	}
	void _TASK_BOARD_VEHICLE_2_Export(Ped ped, Any p1, Any p2, float p3, int flags)
	{
		return TASK::_TASK_BOARD_VEHICLE_2(ped, p1, p2, p3, flags);
	}
	void TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE_Export(Ped ped, float p1, int flags)
	{
		return TASK::TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE(ped, p1, flags);
	}
	void TASK_ENTER_VEHICLE_Export(Ped PedIndex, Vehicle VehicleIndex, int Time, int seat, float MoveBlendRatio, int iFlags, const char* OverridenClipSet)
	{
		return TASK::TASK_ENTER_VEHICLE(PedIndex, VehicleIndex, Time, seat, MoveBlendRatio, iFlags, OverridenClipSet);
	}
	void TASK_LEAVE_VEHICLE_Export(Ped PedIndex, Vehicle VehicleIndex, int iFlags, Ped unkPed)
	{
		return TASK::TASK_LEAVE_VEHICLE(PedIndex, VehicleIndex, iFlags, unkPed);
	}
	void TASK_MOUNT_ANIMAL_Export(Ped ped, Ped mount, int timer, int seatIndex, float pedSpeed, int mountStyle, Any p6, Any p7)
	{
		return TASK::TASK_MOUNT_ANIMAL(ped, mount, timer, seatIndex, pedSpeed, mountStyle, p6, p7);
	}
	void TASK_DISMOUNT_ANIMAL_Export(Ped rider, int taskFlag, Any p2, Any p3, Any p4, Ped targetPed)
	{
		return TASK::TASK_DISMOUNT_ANIMAL(rider, taskFlag, p2, p3, p4, targetPed);
	}
	void TASK_HITCH_ANIMAL_Export(Ped ped, int scenarioPoint, int flag)
	{
		return TASK::TASK_HITCH_ANIMAL(ped, scenarioPoint, flag);
	}
	void _0xE05A5D39BE6E93AF_Export(Any p0)
	{
		return TASK::_0xE05A5D39BE6E93AF(p0);
	}
	void TASK_VEHICLE_DRIVE_TO_COORD_Export(Ped PedIndex, Vehicle VehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Speed, int Style, Hash CarModel, int Mode, float TargetRadius, float StraightLineDist)
	{
		return TASK::TASK_VEHICLE_DRIVE_TO_COORD(PedIndex, VehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Speed, Style, CarModel, Mode, TargetRadius, StraightLineDist);
	}
	void _TASK_VEHICLE_DRIVE_TO_COORD_2_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void TASK_VEHICLE_DRIVE_WANDER_Export(Ped PedIndex, Vehicle VehicleIndex, float CruiseSpeed, int Mode)
	{
		return TASK::TASK_VEHICLE_DRIVE_WANDER(PedIndex, VehicleIndex, CruiseSpeed, Mode);
	}
	void TASK_FOLLOW_TO_OFFSET_OF_ENTITY_Export(Ped PedIndex, Entity EntityIndex, float VecOffsetX, float VecOffsetY, float VecOffsetZ, float MoveBlendRatio, int Time, float Radius, BOOL persistFollowing, BOOL p9, BOOL walkOnly, BOOL p11, BOOL p12, BOOL p13)
	{
		return TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PedIndex, EntityIndex, VecOffsetX, VecOffsetY, VecOffsetZ, MoveBlendRatio, Time, Radius, persistFollowing, p9, walkOnly, p11, p12, p13);
	}
	void TASK_FOLLOW_TO_OFFSET_OF_COORD_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		return TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void _0x3FFCD7BBA074CC80_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TASK::_0x3FFCD7BBA074CC80(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void TASK_GO_STRAIGHT_TO_COORD_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float FinalHeading, float TargetRadius, int p8)
	{
		return TASK::TASK_GO_STRAIGHT_TO_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, FinalHeading, TargetRadius, p8);
	}
	void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY_Export(Ped PedIndex, Entity EntityIndex, float VecOffsetX, float VecOffsetY, float VecOffsetZ, float MoveBlendRatio, int Time, Any p7)
	{
		return TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(PedIndex, EntityIndex, VecOffsetX, VecOffsetY, VecOffsetZ, MoveBlendRatio, Time, p7);
	}
	void TASK_MOVE_IN_TRAFFIC_Export(Ped ped, Any p1, Any p2, Any p3)
	{
		return TASK::TASK_MOVE_IN_TRAFFIC(ped, p1, p2, p3);
	}
	void TASK_MOVE_IN_TRAFFIC_TO_DESTINATION_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(ped, p1, p2, p3, p4, p5, p6, p7);
	}
	void TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY_Export(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(ped, p1, p2, p3, p4);
	}
	void _0xBAAB791AA72C2821_Export(Any p0, Any p1)
	{
		return TASK::_0xBAAB791AA72C2821(p0, p1);
	}
	void TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH_Export(Ped ped, float moveBlendRatio, float x, float y, float z, Any p5)
	{
		return TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(ped, moveBlendRatio, x, y, z, p5);
	}
	void TASK_ACHIEVE_HEADING_Export(Ped PedIndex, float heading, int Time)
	{
		return TASK::TASK_ACHIEVE_HEADING(PedIndex, heading, Time);
	}
	void TASK_FLUSH_ROUTE_Export()
	{
		return TASK::TASK_FLUSH_ROUTE();
	}
	void TASK_EXTEND_ROUTE_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		return TASK::TASK_EXTEND_ROUTE(VecCoorsX, VecCoorsY, VecCoorsZ);
	}
	void TASK_FOLLOW_POINT_ROUTE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::TASK_FOLLOW_POINT_ROUTE(ped, p1, p2, p3, p4, p5);
	}
	void TASK_ENTER_ANIM_SCENE_Export(Ped ped, AnimScene animScene, const char* entityName, const char* playbackListName, float enterSpeed, BOOL bAutoStart, int flag, int p7, float p8)
	{
		return TASK::TASK_ENTER_ANIM_SCENE(ped, animScene, entityName, playbackListName, enterSpeed, bAutoStart, flag, p7, p8);
	}
	void TASK_MOVE_BE_IN_FORMATION_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TASK::TASK_MOVE_BE_IN_FORMATION(ped, p1, p2, p3, p4, p5, p6);
	}
	void TASK_GO_TO_ENTITY_Export(Ped PedIndex, Entity EntityIndex, int Time, float SeekRadius, float MoveBlendRatio, float SlowDownDistance, int GotoFlags)
	{
		return TASK::TASK_GO_TO_ENTITY(PedIndex, EntityIndex, Time, SeekRadius, MoveBlendRatio, SlowDownDistance, GotoFlags);
	}
	void TASK_FOLLOW_AND_CONVERSE_WITH_PED_Export(Ped ped, Ped targetPed, Any p2, Any p3, float p4, float p5, int p6, Any p7, Any p8, float p9, float p10)
	{
		return TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(ped, targetPed, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void _0xA052608A12559BBB_Export(Any p0, Any p1)
	{
		return TASK::_0xA052608A12559BBB(p0, p1);
	}
	void TASK_WANDER_AND_CONVERSE_WITH_PED_Export(Ped ped, Any p1, Any p2, Any p3)
	{
		return TASK::TASK_WANDER_AND_CONVERSE_WITH_PED(ped, p1, p2, p3);
	}
	void TASK_LEAD_AND_CONVERSE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TASK::TASK_LEAD_AND_CONVERSE(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _0xDE0C8B145EA466FF_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::_0xDE0C8B145EA466FF(p0, p1, p2, p3, p4, p5);
	}
	void TASK_SEEK_CLEAR_LOS_TO_ENTITY_Export(Ped ped, Entity entity, float p2, float p3, float p4)
	{
		return TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(ped, entity, p2, p3, p4);
	}
	void TASK_GO_TO_WHISTLE_Export(Ped ped, Ped p1, int whistleType)
	{
		return TASK::TASK_GO_TO_WHISTLE(ped, p1, whistleType);
	}
	Any _0xEB67D4E056C85A81_Export(Any p0)
	{
		return TASK::_0xEB67D4E056C85A81(p0);
	}
	Any _0x78D8C1D4EB80C588_Export(Any p0)
	{
		return TASK::_0x78D8C1D4EB80C588(p0);
	}
	void TASK_LEAD_HORSE_Export(Ped ped, Ped horse)
	{
		return TASK::TASK_LEAD_HORSE(ped, horse);
	}
	void TASK_STOP_LEADING_HORSE_Export(Ped ped)
	{
		return TASK::TASK_STOP_LEADING_HORSE(ped);
	}
	void _TASK_FLEE_FROM_COORD_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		return TASK::_TASK_FLEE_FROM_COORD(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void _TASK_FLEE_FROM_PED_Export(Ped ped, Ped fleeFromTarget, float x, float y, float z, float distance, int p6, int p7, float p8, Ped targetPed)
	{
		return TASK::_TASK_FLEE_FROM_PED(ped, fleeFromTarget, x, y, z, distance, p6, p7, p8, targetPed);
	}
	void TASK_SMART_FLEE_COORD_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float SafeDistance, int FleeTime, int fleeType, float fleeSpeed)
	{
		return TASK::TASK_SMART_FLEE_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, SafeDistance, FleeTime, fleeType, fleeSpeed);
	}
	void TASK_SMART_FLEE_PED_Export(Ped PedIndex, Ped OtherPedIndex, float SafeDistance, int FleeTime, int fleeType, float fleeSpeed, Ped targetPed)
	{
		return TASK::TASK_SMART_FLEE_PED(PedIndex, OtherPedIndex, SafeDistance, FleeTime, fleeType, fleeSpeed, targetPed);
	}
	void _0x673A8779D229BA5A_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::_0x673A8779D229BA5A(p0, p1, p2, p3, p4, p5);
	}
	void _0x2E1D6D87346BB7D2_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x2E1D6D87346BB7D2(p0, p1, p2, p3);
	}
	void TASK_FLEE_COORD_Export(Ped ped, float x, float y, float z, int fleeStyle, int p5, float p6, int duration, int p8)
	{
		return TASK::TASK_FLEE_COORD(ped, x, y, z, fleeStyle, p5, p6, duration, p8);
	}
	void TASK_FLEE_PED_Export(Ped ped, Ped fleeFromTarget, int fleeStyle, int flag, float p4, int p5, int p6)
	{
		return TASK::TASK_FLEE_PED(ped, fleeFromTarget, fleeStyle, flag, p4, p5, p6);
	}
	void TASK_FLEE_COORD_VIA_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		return TASK::TASK_FLEE_COORD_VIA(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}
	void TASK_FLEE_PED_VIA_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return TASK::TASK_FLEE_PED_VIA(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _ADD_FLEE_TARGET_COORDS_Export(Ped ped, float x, float y, float z, float p4)
	{
		return TASK::_ADD_FLEE_TARGET_COORDS(ped, x, y, z, p4);
	}
	void ADD_FLEE_TARGET_PED_Export(Ped ped, Ped targetPed, float p2)
	{
		return TASK::ADD_FLEE_TARGET_PED(ped, targetPed, p2);
	}
	void _0xA42DC7919159CCCF_Export(Any p0)
	{
		return TASK::_0xA42DC7919159CCCF(p0);
	}
	void TASK_FLY_AWAY_Export(Ped ped, Ped fleeFromTarget)
	{
		return TASK::TASK_FLY_AWAY(ped, fleeFromTarget);
	}
	void TASK_FLY_TO_COORD_Export(Ped ped, float travelMbr, float x, float y, float z, BOOL p5, BOOL p6)
	{
		return TASK::TASK_FLY_TO_COORD(ped, travelMbr, x, y, z, p5, p6);
	}
	void TASK_FLYING_CIRCLE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TASK::TASK_FLYING_CIRCLE(ped, p1, p2, p3, p4, p5, p6);
	}
	void TASK_WALK_AWAY_Export(Ped ped, Entity entity)
	{
		return TASK::TASK_WALK_AWAY(ped, entity);
	}
	void TASK_SHOCKING_EVENT_REACT_Export(Ped PedIndex, int shockingEventId, Any p2)
	{
		return TASK::TASK_SHOCKING_EVENT_REACT(PedIndex, shockingEventId, p2);
	}
	void TASK_REACT_Export(Ped ped, Entity reactingTo, float x, float y, float z, const char* reactionName, float p6, float p7, int p8)
	{
		return TASK::TASK_REACT(ped, reactingTo, x, y, z, reactionName, p6, p7, p8);
	}
	void TASK_WANDER_IN_AREA_Export(Ped PedIndex, float VecCenterX, float VecCenterY, float VecCenterZ, float Radius, float MinWaitTime, float MaxWaitTime, int p7)
	{
		return TASK::TASK_WANDER_IN_AREA(PedIndex, VecCenterX, VecCenterY, VecCenterZ, Radius, MinWaitTime, MaxWaitTime, p7);
	}
	void TASK_WANDER_IN_VOLUME_Export(Ped ped, Volume volume, float p2, float p3, int p4)
	{
		return TASK::TASK_WANDER_IN_VOLUME(ped, volume, p2, p3, p4);
	}
	void TASK_WANDER_STANDARD_Export(Ped PedIndex, float Heading, int WanderFlags)
	{
		return TASK::TASK_WANDER_STANDARD(PedIndex, Heading, WanderFlags);
	}
	void TASK_WANDER_SWIM_Export(Ped ped, Any p1)
	{
		return TASK::TASK_WANDER_SWIM(ped, p1);
	}
	void TASK_PLANT_BOMB_Export(Ped PedIndex, float vTargetPositionX, float vTargetPositionY, float vTargetPositionZ, float fTargetHeading)
	{
		return TASK::TASK_PLANT_BOMB(PedIndex, vTargetPositionX, vTargetPositionY, vTargetPositionZ, fTargetHeading);
	}
	void TASK_HORSE_ACTION_Export(Ped ped, int action, Ped targetPed, Any p3)
	{
		return TASK::TASK_HORSE_ACTION(ped, action, targetPed, p3);
	}
	void TASK_ANIMAL_INTERACTION_Export(Ped ped, Ped targetPed, Hash interactionType, Hash interactionModel, BOOL skipIdleAnimationClip)
	{
		return TASK::TASK_ANIMAL_INTERACTION(ped, targetPed, interactionType, interactionModel, skipIdleAnimationClip);
	}
	void TASK_COMBAT_ANIMAL_WARN_Export(Ped ped, Any p1, Any p2)
	{
		return TASK::TASK_COMBAT_ANIMAL_WARN(ped, p1, p2);
	}
	void TASK_COMBAT_ANIMAL_CHARGE_PED_Export(Ped ped, Ped targetPed, BOOL p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TASK::TASK_COMBAT_ANIMAL_CHARGE_PED(ped, targetPed, p2, p3, p4, p5, p6);
	}
	Any _0x76610D12A838EBDE_Export(Any p0)
	{
		return TASK::_0x76610D12A838EBDE(p0);
	}
	void TASK_AMBIENT_ANIMAL_STALK_Export(Ped ped, Any p1, Any p2)
	{
		return TASK::TASK_AMBIENT_ANIMAL_STALK(ped, p1, p2);
	}
	void TASK_AMBIENT_ANIMAL_HUNT_Export(Ped ped, Any p1, Any p2)
	{
		return TASK::TASK_AMBIENT_ANIMAL_HUNT(ped, p1, p2);
	}
	void TASK_ANIMAL_UNALERTED_Export(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::TASK_ANIMAL_UNALERTED(ped, p1, p2, p3, p4);
	}
	void TASK_ANIMAL_ALERTED_Export(Ped ped, Any p1, Any p2)
	{
		return TASK::TASK_ANIMAL_ALERTED(ped, p1, p2);
	}
	void TASK_ANIMAL_FLEE_Export(Ped ped, Ped targetPed, Any p2)
	{
		return TASK::TASK_ANIMAL_FLEE(ped, targetPed, p2);
	}
	Any _0x244430C13BA5258E_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x244430C13BA5258E(p0, p1, p2, p3);
	}
	void TASK_EAT_Export(Ped ped, Any p1, Any p2)
	{
		return TASK::TASK_EAT(ped, p1, p2);
	}
	void TASK_BARK_Export(Ped ped, Ped barkAtTarget, Hash mood)
	{
		return TASK::TASK_BARK(ped, barkAtTarget, mood);
	}
	void TASK_FOLLOW_PAVEMENT_TO_COORD_Export(Ped ped, void* args)
	{
		return TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(ped, args);
	}
	void TASK_FOLLOW_NAV_MESH_TO_COORD_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float Radius, int NavFlags, float FinalHeading)
	{
		return TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, Radius, NavFlags, FinalHeading);
	}
	void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float Radius, int iNavFlags, float m_fSlideToCoordHeading, float m_fMaxSlopeNavigable, float m_fClampMaxSearchDistance, Entity entity, float FinalHeading)
	{
		return TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, Radius, iNavFlags, m_fSlideToCoordHeading, m_fMaxSlopeNavigable, m_fClampMaxSearchDistance, entity, FinalHeading);
	}
	void SET_PED_PATH_CAN_USE_CLIMBOVERS_Export(Ped PedIndex, BOOL bUseClimbovers)
	{
		return TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(PedIndex, bUseClimbovers);
	}
	void SET_PED_PATH_CAN_USE_LADDERS_Export(Ped PedIndex, BOOL bUseLadders)
	{
		return TASK::SET_PED_PATH_CAN_USE_LADDERS(PedIndex, bUseLadders);
	}
	void SET_PED_PATH_CAN_DROP_FROM_HEIGHT_Export(Ped PedIndex, BOOL bDrop)
	{
		return TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(PedIndex, bDrop);
	}
	Any _0xE6A151364C600B24_Export(Any p0)
	{
		return TASK::_0xE6A151364C600B24(p0);
	}
	void _0x1632EB9386CDBE64_Export(Any p0, Any p1)
	{
		return TASK::_0x1632EB9386CDBE64(p0, p1);
	}
	void SET_PED_PATH_CLIMB_COST_MODIFIER_Export(Ped PedIndex, float fClimbModifier)
	{
		return TASK::SET_PED_PATH_CLIMB_COST_MODIFIER(PedIndex, fClimbModifier);
	}
	void SET_PED_PATH_DEEP_SNOW_COST_MODIFIER_Export(Ped ped, float modifier)
	{
		return TASK::SET_PED_PATH_DEEP_SNOW_COST_MODIFIER(ped, modifier);
	}
	void SET_PED_PATH_FOLIAGE_COST_MODIFIER_Export(Ped ped, float modifier)
	{
		return TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(ped, modifier);
	}
	void _0x8798CF6815B8FE0F_Export(Any p0, Any p1)
	{
		return TASK::_0x8798CF6815B8FE0F(p0, p1);
	}
	void _0x5B68D0007D9C92EB_Export(Any p0, Any p1)
	{
		return TASK::_0x5B68D0007D9C92EB(p0, p1);
	}
	void _0x82ED59F095056550_Export(Any p0, Any p1)
	{
		return TASK::_0x82ED59F095056550(p0, p1);
	}
	void _0xE01C8DC8EDD28D31_Export(Any p0, Any p1)
	{
		return TASK::_0xE01C8DC8EDD28D31(p0, p1);
	}
	void _0x098CAA6DBE7D8D82_Export(Any p0, Any p1)
	{
		return TASK::_0x098CAA6DBE7D8D82(p0, p1);
	}
	BOOL _GET_PED_IS_IGNORING_DEAD_BODIES_Export(Ped ped)
	{
		return TASK::_GET_PED_IS_IGNORING_DEAD_BODIES(ped);
	}
	void _SET_PED_IGNORE_DEAD_BODIES_Export(Ped ped, BOOL toggle)
	{
		return TASK::_SET_PED_IGNORE_DEAD_BODIES(ped, toggle);
	}
	void _SET_PED_PATH_LADDER_COST_MODIFIER_Export(Ped ped, float modifier)
	{
		return TASK::_SET_PED_PATH_LADDER_COST_MODIFIER(ped, modifier);
	}
	void SET_PED_PATH_MAY_ENTER_WATER_Export(Ped PedIndex, BOOL bMayEnter)
	{
		return TASK::SET_PED_PATH_MAY_ENTER_WATER(PedIndex, bMayEnter);
	}
	void _SET_PED_PATH_MAY_ENTER_DEEP_WATER_Export(Ped ped, BOOL mayEnterDeepWater)
	{
		return TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(ped, mayEnterDeepWater);
	}
	void _0xC6170856E54557B2_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0xC6170856E54557B2(p0, p1, p2);
	}
	void _0xF948F4356F010F11_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0xF948F4356F010F11(p0, p1, p2);
	}
	void SET_PED_PATH_PREFER_TO_AVOID_WATER_Export(Ped PedIndex, BOOL bPreferToAvoid, float p2)
	{
		return TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(PedIndex, bPreferToAvoid, p2);
	}
	void _0x8BB283A7888AD1AD_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x8BB283A7888AD1AD(p0, p1, p2);
	}
	void _0x12990818C1D35886_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x12990818C1D35886(p0, p1, p2);
	}
	void _0x7C015D8BCEC72CF4_Export(Any p0, Any p1)
	{
		return TASK::_0x7C015D8BCEC72CF4(p0, p1);
	}
	void SET_PED_PATH_AVOID_FIRE_Export(Ped PedIndex, BOOL bAvoid)
	{
		return TASK::SET_PED_PATH_AVOID_FIRE(PedIndex, bAvoid);
	}
	void _0x42CFD8FD8CC8DC69_Export(Any p0, Any p1)
	{
		return TASK::_0x42CFD8FD8CC8DC69(p0, p1);
	}
	void _0x216343750545A486_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x216343750545A486(p0, p1, p2);
	}
	void _0x06ECF3925BC2ABAE_Export(Any p0, Any p1)
	{
		return TASK::_0x06ECF3925BC2ABAE(p0, p1);
	}
	void _0xFA30E2254461ADEB_Export(Any p0, Any p1)
	{
		return TASK::_0xFA30E2254461ADEB(p0, p1);
	}
	void TASK_GO_TO_COORD_ANY_MEANS_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, BOOL p6, int DrivingFlags, float MaxRangeToShootTargets)
	{
		return TASK::TASK_GO_TO_COORD_ANY_MEANS(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets);
	}
	void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, BOOL p6, int DrivingFlags, float MaxRangeToShootTargets, float fExtraVehToTargetDistToPreferVeh, float fDriveStraightLineDistance, int iExtraFlags, float fWarpTimerMS)
	{
		return TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets, fExtraVehToTargetDistToPreferVeh, fDriveStraightLineDistance, iExtraFlags, fWarpTimerMS);
	}
	void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, BOOL p6, int DrivingFlags, float MaxRangeToShootTargets, float fExtraVehToTargetDistToPreferVeh, float fDriveStraightLineDistance, int iExtraFlags, float fCruiseSpeed, float fTargetArriveDist, Any p14)
	{
		return TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets, fExtraVehToTargetDistToPreferVeh, fDriveStraightLineDistance, iExtraFlags, fCruiseSpeed, fTargetArriveDist, p14);
	}
	void TASK_PLAY_ANIM_Export(Ped PedIndex, const char* pAnimDictName, const char* pAnimName, float fBlendInDelta, float fBlendOutDelta, int nTimeToPlay, int AnimFlags, float startPhase, BOOL phaseControlled, int ikFlags, BOOL bAllowOverrideCloneUpdate, const char* taskFilter, BOOL p12)
	{
		return TASK::TASK_PLAY_ANIM(PedIndex, pAnimDictName, pAnimName, fBlendInDelta, fBlendOutDelta, nTimeToPlay, AnimFlags, startPhase, phaseControlled, ikFlags, bAllowOverrideCloneUpdate, taskFilter, p12);
	}
	void TASK_PLAY_ANIM_ADVANCED_Export(Ped PedIndex, const char* pAnimDictName, const char* pAnimName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fBlendInDelta, float fBlendOutDelta, int nTimeToPlay, int AnimFlags, float startPhase, int RotOrder, int p15, BOOL p16)
	{
		return TASK::TASK_PLAY_ANIM_ADVANCED(PedIndex, pAnimDictName, pAnimName, posX, posY, posZ, rotX, rotY, rotZ, fBlendInDelta, fBlendOutDelta, nTimeToPlay, AnimFlags, startPhase, RotOrder, p15, p16);
	}
	void TASK_PLAY_UPPER_ANIM_FACING_ENTITY_Export(Ped ped, const char* animDict, const char* animName, Entity entity, int p4, float p5, float p6, int p7, float p8, BOOL p9, BOOL p10, float p11, const char* p12, int p13, float p14)
	{
		return TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(ped, animDict, animName, entity, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void STOP_ANIM_TASK_Export(Entity EntityIndex, const char* pAnimDictName, const char* pAnimName, float fBlendOutDelta)
	{
		return TASK::STOP_ANIM_TASK(EntityIndex, pAnimDictName, pAnimName, fBlendOutDelta);
	}
	void TASK_SCRIPTED_ANIMATION_Export(Ped PedIndex, void* args)
	{
		return TASK::TASK_SCRIPTED_ANIMATION(PedIndex, args);
	}
	void PLAY_ENTITY_SCRIPTED_ANIM_Export(Entity EntityIndex, void* args)
	{
		return TASK::PLAY_ENTITY_SCRIPTED_ANIM(EntityIndex, args);
	}
	void STOP_ANIM_PLAYBACK_Export(Entity EntityIndex, int priority, BOOL secondary)
	{
		return TASK::STOP_ANIM_PLAYBACK(EntityIndex, priority, secondary);
	}
	void SET_ANIM_FILTER_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::SET_ANIM_FILTER(p0, p1, p2, p3);
	}
	void SET_ANIM_RATE_Export(Entity EntityIndex, float rate, int priority, BOOL secondary)
	{
		return TASK::SET_ANIM_RATE(EntityIndex, rate, priority, secondary);
	}
	BOOL CAN_START_ITEM_INTERACTION_Export(Ped ped, Hash itemHash, Hash interactionAnimHash, int p3)
	{
		return TASK::CAN_START_ITEM_INTERACTION(ped, itemHash, interactionAnimHash, p3);
	}
	void START_TASK_ITEM_INTERACTION_Export(Ped ped, Hash itemHash, Hash interactionAnimHash, int p3, int flag, float p5)
	{
		return TASK::START_TASK_ITEM_INTERACTION(ped, itemHash, interactionAnimHash, p3, flag, p5);
	}
	void _TASK_ITEM_INTERACTION_2_Export(Ped ped, Hash propNameGxt, Object prop, Hash propId, Hash itemInteractionState, int p5, Any p6, float p7)
	{
		return TASK::_TASK_ITEM_INTERACTION_2(ped, propNameGxt, prop, propId, itemInteractionState, p5, p6, p7);
	}
	void _TASK_ITEM_INTERACTION_3_Export(Ped ped, Hash item, void* guid, Any p3, Any p4, Any p5, float p6)
	{
		return TASK::_TASK_ITEM_INTERACTION_3(ped, item, guid, p3, p4, p5, p6);
	}
	void _0xB35370D5353995CB_Export(Ped ped, Hash item, float p2)
	{
		return TASK::_0xB35370D5353995CB(ped, item, p2);
	}
	Hash GET_ITEM_INTERACTION_STATE_Export(Ped ped)
	{
		return TASK::GET_ITEM_INTERACTION_STATE(ped);
	}
	Hash GET_ITEM_INTERACTION_ITEM_ID_Export(Ped ped)
	{
		return TASK::GET_ITEM_INTERACTION_ITEM_ID(ped);
	}
	BOOL IS_PED_RUNNING_INSPECTION_TASK_Export(Ped ped)
	{
		return TASK::IS_PED_RUNNING_INSPECTION_TASK(ped);
	}
	BOOL IS_PED_RUNNING_TASK_ITEM_INTERACTION_Export(Ped ped)
	{
		return TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(ped);
	}
	Entity _GET_ITEM_INTERACTION_ENTITY_FROM_PED_Export(Ped ped, Hash item)
	{
		return TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(ped, item);
	}
	float GET_ITEM_INTERACTION_PROMPT_PROGRESS_Export(Ped ped, Hash inputContext)
	{
		return TASK::GET_ITEM_INTERACTION_PROMPT_PROGRESS(ped, inputContext);
	}
	Object _0x678D3226CF70B9C8_Export(Ped ped, BOOL p1)
	{
		return TASK::_0x678D3226CF70B9C8(ped, p1);
	}
	void TASK_EVASIVE_ANIM_Export(Ped ped1, Ped ped2, int p2)
	{
		return TASK::TASK_EVASIVE_ANIM(ped1, ped2, p2);
	}
	void TASK_LOOK_AT_COORD_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int time, int LookFlags, int p6, BOOL p7)
	{
		return TASK::TASK_LOOK_AT_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, time, LookFlags, p6, p7);
	}
	void TASK_LOOK_AT_ENTITY_Export(Ped PedIndex, Entity EntityIndex, int time, int p3, int p4, int p5)
	{
		return TASK::TASK_LOOK_AT_ENTITY(PedIndex, EntityIndex, time, p3, p4, p5);
	}
	void TASK_CLEAR_LOOK_AT_Export(Ped PedIndex)
	{
		return TASK::TASK_CLEAR_LOOK_AT(PedIndex);
	}
	BOOL _0x508F5053E3F6F0C4_Export(Ped ped, float x, float y, float z, float p4)
	{
		return TASK::_0x508F5053E3F6F0C4(ped, x, y, z, p4);
	}
	void _0x23767D80C7EED7C6_Export(Any p0, Any p1)
	{
		return TASK::_0x23767D80C7EED7C6(p0, p1);
	}
	void OPEN_SEQUENCE_TASK_Export(int* Sequence)
	{
		return TASK::OPEN_SEQUENCE_TASK(Sequence);
	}
	void CLOSE_SEQUENCE_TASK_Export(int Sequence)
	{
		return TASK::CLOSE_SEQUENCE_TASK(Sequence);
	}
	void TASK_PERFORM_SEQUENCE_Export(Ped PedIndex, int Sequence)
	{
		return TASK::TASK_PERFORM_SEQUENCE(PedIndex, Sequence);
	}
	void _TASK_PERFORM_SEQUENCE_2_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_TASK_PERFORM_SEQUENCE_2(p0, p1, p2, p3);
	}
	void CLEAR_SEQUENCE_TASK_Export(int* Sequence)
	{
		return TASK::CLEAR_SEQUENCE_TASK(Sequence);
	}
	void SET_SEQUENCE_TO_REPEAT_Export(int Sequence, int DoRepeat)
	{
		return TASK::SET_SEQUENCE_TO_REPEAT(Sequence, DoRepeat);
	}
	int GET_SEQUENCE_PROGRESS_Export(Ped PedIndex)
	{
		return TASK::GET_SEQUENCE_PROGRESS(PedIndex);
	}
	BOOL GET_IS_TASK_ACTIVE_Export(Ped PedIndex, int TaskID)
	{
		return TASK::GET_IS_TASK_ACTIVE(PedIndex, TaskID);
	}
	int GET_SCRIPT_TASK_STATUS_Export(Ped PedIndex, Hash TaskName, BOOL p2)
	{
		return TASK::GET_SCRIPT_TASK_STATUS(PedIndex, TaskName, p2);
	}
	Any _0x9FF5F9B24E870748_Export(Any p0)
	{
		return TASK::_0x9FF5F9B24E870748(p0);
	}
	float _GET_SCRIPT_TASK_ACTION_TIME_Export(Ped ped, Hash task)
	{
		return TASK::_GET_SCRIPT_TASK_ACTION_TIME(ped, task);
	}
	void REACT_LOOK_AT_Export(Ped ped, Ped targetPed, int lookIntensity, int exitAnimation, float duration, int p5, Ped targetPed2, Any p7, Any p8)
	{
		return TASK::REACT_LOOK_AT(ped, targetPed, lookIntensity, exitAnimation, duration, p5, targetPed2, p7, p8);
	}
	void REACT_LOOK_AT_END_Export(Ped ped, int exitAnimation, BOOL p2)
	{
		return TASK::REACT_LOOK_AT_END(ped, exitAnimation, p2);
	}
	BOOL IS_PED_SCENARIO_REACT_LOOKING_Export(Ped ped, BOOL p1)
	{
		return TASK::IS_PED_SCENARIO_REACT_LOOKING(ped, p1);
	}
	int GET_ACTIVE_VEHICLE_MISSION_TYPE_Export(Vehicle vehIndex)
	{
		return TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(vehIndex);
	}
	void TASK_LEAVE_ANY_VEHICLE_Export(Ped PedIndex, int DelayTime, int iFlags)
	{
		return TASK::TASK_LEAVE_ANY_VEHICLE(PedIndex, DelayTime, iFlags);
	}
	Any _0xBD70108D01875299_Export(Any p0)
	{
		return TASK::_0xBD70108D01875299(p0);
	}
	void TASK_USE_RANDOM_SCENARIO_IN_GROUP_Export(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(ped, p1, p2, p3, p4);
	}
	void TASK_AIM_GUN_AT_ENTITY_Export(Ped PedIndex, Entity EntityIndex, int Duration, BOOL InstantBlendToAim, int p4)
	{
		return TASK::TASK_AIM_GUN_AT_ENTITY(PedIndex, EntityIndex, Duration, InstantBlendToAim, p4);
	}
	void TASK_TURN_PED_TO_FACE_ENTITY_Export(Ped PedIndex, Entity EntityIndex, int Time, float p3, float p4, float p5)
	{
		return TASK::TASK_TURN_PED_TO_FACE_ENTITY(PedIndex, EntityIndex, Time, p3, p4, p5);
	}
	void TASK_AIM_GUN_AT_COORD_Export(Ped PedIndex, float VecTargetCoorsX, float VecTargetCoorsY, float VecTargetCoorsZ, int Duration, BOOL InstantBlendToAim, BOOL PlayAimIntro)
	{
		return TASK::TASK_AIM_GUN_AT_COORD(PedIndex, VecTargetCoorsX, VecTargetCoorsY, VecTargetCoorsZ, Duration, InstantBlendToAim, PlayAimIntro);
	}
	void TASK_AIM_AT_COORD_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TASK::TASK_AIM_AT_COORD(ped, p1, p2, p3, p4, p5, p6);
	}
	void TASK_AIM_AT_ENTITY_Export(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::TASK_AIM_AT_ENTITY(ped, p1, p2, p3, p4);
	}
	void TASK_SHOOT_AT_COORD_Export(Ped PedIndex, float VecTargetCoorsX, float VecTargetCoorsY, float VecTargetCoorsZ, int Duration, Hash FiringType, Any p6)
	{
		return TASK::TASK_SHOOT_AT_COORD(PedIndex, VecTargetCoorsX, VecTargetCoorsY, VecTargetCoorsZ, Duration, FiringType, p6);
	}
	void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT_Export(Ped PedIndex, Vehicle VehicleIndex)
	{
		return TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PedIndex, VehicleIndex);
	}
	void CLEAR_PED_TASKS_Export(Ped PedIndex, BOOL p1, BOOL p2)
	{
		return TASK::CLEAR_PED_TASKS(PedIndex, p1, p2);
	}
	void _0x1A7D63CB1B0BB223_Export(Any p0)
	{
		return TASK::_0x1A7D63CB1B0BB223(p0);
	}
	void _0xB2D15D3551FE4FAE_Export(Any p0)
	{
		return TASK::_0xB2D15D3551FE4FAE(p0);
	}
	void _0xDF94844D474F31E5_Export(Ped ped)
	{
		return TASK::_0xDF94844D474F31E5(ped);
	}
	void _0xEBA2081E0A5F4D17_Export(Any p0)
	{
		return TASK::_0xEBA2081E0A5F4D17(p0);
	}
	void _0x141BC64C8D7C5529_Export(Vehicle vehicle)
	{
		return TASK::_0x141BC64C8D7C5529(vehicle);
	}
	void CLEAR_PED_SECONDARY_TASK_Export(Ped PedIndex)
	{
		return TASK::CLEAR_PED_SECONDARY_TASK(PedIndex);
	}
	void TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER_Export(Vehicle vehicle, BOOL p1)
	{
		return TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(vehicle, p1);
	}
	void TASK_INVESTIGATE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::TASK_INVESTIGATE(ped, p1, p2, p3, p4, p5);
	}
	void TASK_GOTO_ENTITY_OFFSET_Export(Ped PedIndex, Entity EntityIndex, int Time, float SeekRadius, float SeekAngle, float MoveBlendRatio, int OffsetFlags)
	{
		return TASK::TASK_GOTO_ENTITY_OFFSET(PedIndex, EntityIndex, Time, SeekRadius, SeekAngle, MoveBlendRatio, OffsetFlags);
	}
	void TASK_GOTO_ENTITY_OFFSET_XY_Export(Ped PedIndex, Entity EntityIndex, int Time, float fTargetRadius, float fXOffset, float fYOffset, float MoveBlendRatio, int OffsetFlags)
	{
		return TASK::TASK_GOTO_ENTITY_OFFSET_XY(PedIndex, EntityIndex, Time, fTargetRadius, fXOffset, fYOffset, MoveBlendRatio, OffsetFlags);
	}
	void TASK_GOTO_ENTITY_OFFSET_XYZ_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TASK::TASK_GOTO_ENTITY_OFFSET_XYZ(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void TASK_GOTO_ENTITY_OFFSET_XY_AIMING_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TASK::TASK_GOTO_ENTITY_OFFSET_XY_AIMING(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return TASK::TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(ped, p1, p2, p3, p4, p5, p6, p7);
	}
	void TASK_TURN_PED_TO_FACE_COORD_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int Time)
	{
		return TASK::TASK_TURN_PED_TO_FACE_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Time);
	}
	void TASK_VEHICLE_TEMP_ACTION_Export(Ped PedIndex, Vehicle VehicleIndex, int Action, int Time)
	{
		return TASK::TASK_VEHICLE_TEMP_ACTION(PedIndex, VehicleIndex, Action, Time);
	}
	void TASK_VEHICLE_MISSION_Export(Ped PedIndex, Vehicle VehicleIndex, Vehicle TargetVehicleIndex, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, float StraightLineDist, BOOL DriveAgainstTraffic)
	{
		return TASK::TASK_VEHICLE_MISSION(PedIndex, VehicleIndex, TargetVehicleIndex, Mission, CruiseSpeed, mode, TargetReachedDist, StraightLineDist, DriveAgainstTraffic);
	}
	void TASK_VEHICLE_DRIVE_TO_DESTINATION_Export(Ped driver, Vehicle vehicle, float x, float y, float z, float speed, int drivingFlags, int p7, float stoppingRange1, float stoppingRange2, BOOL p10)
	{
		return TASK::TASK_VEHICLE_DRIVE_TO_DESTINATION(driver, vehicle, x, y, z, speed, drivingFlags, p7, stoppingRange1, stoppingRange2, p10);
	}
	void _TASK_VEHICLE_DRIVE_TO_DESTINATION_2_Export(Vehicle vehicle, float x, float y, float z, float speed, int p5, int p6, float p7, float p8)
	{
		return TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(vehicle, x, y, z, speed, p5, p6, p7, p8);
	}
	void _TASK_VEHICLE_FLEE_ON_CLEANUP_Export(Vehicle vehicle, float p1, float p2, float p3, float speed, Hash type)
	{
		return TASK::_TASK_VEHICLE_FLEE_ON_CLEANUP(vehicle, p1, p2, p3, speed, type);
	}
	void TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT_Export(Ped driver, Vehicle vehicle, float x, float y, float z, float p5, float p6, int flag)
	{
		return TASK::TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT(driver, vehicle, x, y, z, p5, p6, flag);
	}
	void _TASK_VEHICLE_DRIVE_TO_POINT_2_Export(Vehicle vehicle, float x, float y, float z, float p4, float p5, Any p6)
	{
		return TASK::_TASK_VEHICLE_DRIVE_TO_POINT_2(vehicle, x, y, z, p4, p5, p6);
	}
	void _0x1D125814EBC517EB_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x1D125814EBC517EB(p0, p1, p2, p3);
	}
	BOOL _0x583AE9AF9CEE0958_Export(Vehicle vehicle, float x, float y, float z)
	{
		return TASK::_0x583AE9AF9CEE0958(vehicle, x, y, z);
	}
	void TASK_VEHICLE_MISSION_PED_TARGET_Export(Ped PedIndex, Vehicle VehicleIndex, Ped TargetPedIndex, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, float StraightLineDist, BOOL DriveAgainstTraffic)
	{
		return TASK::TASK_VEHICLE_MISSION_PED_TARGET(PedIndex, VehicleIndex, TargetPedIndex, Mission, CruiseSpeed, mode, TargetReachedDist, StraightLineDist, DriveAgainstTraffic);
	}
	void _0xA263ADBBC8056214_Export(Any p0, Any p1)
	{
		return TASK::_0xA263ADBBC8056214(p0, p1);
	}
	void TASK_VEHICLE_ESCORT_Export(Ped PedIndex, Vehicle VehicleIndex, Entity EscortEntityIndex, int EscortType, float CruiseSpeed, int mode, float CustomOffset, int MinHeightAboveTerrain, float StraightLineDistance)
	{
		return TASK::TASK_VEHICLE_ESCORT(PedIndex, VehicleIndex, EscortEntityIndex, EscortType, CruiseSpeed, mode, CustomOffset, MinHeightAboveTerrain, StraightLineDistance);
	}
	void TASK_BOAT_MISSION_Export(Ped PedIndex, Vehicle BoatIndex, Vehicle TargetVehicleIndex, Ped TargetPedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, int BoatFlags)
	{
		return TASK::TASK_BOAT_MISSION(PedIndex, BoatIndex, TargetVehicleIndex, TargetPedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Mission, CruiseSpeed, mode, TargetReachedDist, BoatFlags);
	}
	void TASK_WEAPON_Export(Ped ped)
	{
		return TASK::TASK_WEAPON(ped);
	}
	void TASK_DRIVE_BY_Export(Ped PedIndex, Ped OtherPedIndex, Vehicle TargetVehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float AbortRange, int FrequencyPercentage, BOOL bPushUnderneathDrivingTaskIfDriving, Hash FiringPatternHash)
	{
		return TASK::TASK_DRIVE_BY(PedIndex, OtherPedIndex, TargetVehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, AbortRange, FrequencyPercentage, bPushUnderneathDrivingTaskIfDriving, FiringPatternHash);
	}
	void SET_DRIVEBY_TASK_TARGET_Export(Ped PedIndex, Ped OtherPedIndex, Vehicle TargetVehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		return TASK::SET_DRIVEBY_TASK_TARGET(PedIndex, OtherPedIndex, TargetVehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ);
	}
	void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK_Export(Ped PedIndex)
	{
		return TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(PedIndex);
	}
	BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK_Export(Ped PedIndex)
	{
		return TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(PedIndex);
	}
	BOOL GET_IS_PED_AIMING_IN_THE_AIR_Export(Ped ped)
	{
		return TASK::GET_IS_PED_AIMING_IN_THE_AIR(ped);
	}
	void _SET_PED_CLEAR_AIMING_IN_THE_AIR_Export(Ped ped, Any p1)
	{
		return TASK::_SET_PED_CLEAR_AIMING_IN_THE_AIR(ped, p1);
	}
	BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK_Export(Ped PedIndex)
	{
		return TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(PedIndex);
	}
	void TASK_WARP_PED_INTO_VEHICLE_Export(Ped Ped, Vehicle VehicleIndex, int seat)
	{
		return TASK::TASK_WARP_PED_INTO_VEHICLE(Ped, VehicleIndex, seat);
	}
	void TASK_SHOOT_AT_ENTITY_Export(Ped PedIndex, Entity EntityIndex, int Time, Hash FiringType, BOOL affectCockedState)
	{
		return TASK::TASK_SHOOT_AT_ENTITY(PedIndex, EntityIndex, Time, FiringType, affectCockedState);
	}
	void TASK_SHOOT_WITH_WEAPON_Export(Ped ped, void* args)
	{
		return TASK::TASK_SHOOT_WITH_WEAPON(ped, args);
	}
	void _0x2416EC2F31F75266_Export(Entity entity, Entity targetEntity, int duration, Any p3, Any p4)
	{
		return TASK::_0x2416EC2F31F75266(entity, targetEntity, duration, p3, p4);
	}
	void _0x41323F4E0C4AE94B_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TASK::_0x41323F4E0C4AE94B(p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0x5EA655F01D93667A_Export(Any p0)
	{
		return TASK::_0x5EA655F01D93667A(p0);
	}
	void TASK_CLIMB_Export(Ped PedIndex, BOOL UsePlayerLaunchForce)
	{
		return TASK::TASK_CLIMB(PedIndex, UsePlayerLaunchForce);
	}
	void _TASK_CLIMB_2_Export(Ped ped, float heading)
	{
		return TASK::_TASK_CLIMB_2(ped, heading);
	}
	void TASK_CLIMB_LADDER_Export(Ped PedIndex, float p1, BOOL p2, BOOL p3)
	{
		return TASK::TASK_CLIMB_LADDER(PedIndex, p1, p2, p3);
	}
	void CLEAR_PED_TASKS_IMMEDIATELY_Export(Ped PedIndex, BOOL p1, BOOL resetCrouch)
	{
		return TASK::CLEAR_PED_TASKS_IMMEDIATELY(PedIndex, p1, resetCrouch);
	}
	void TASK_PERFORM_SEQUENCE_FROM_PROGRESS_Export(Ped PedIndex, int TaskIndex, int Progress1, int Progress2)
	{
		return TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(PedIndex, TaskIndex, Progress1, Progress2);
	}
	void SET_PED_DESIRED_MOVE_BLEND_RATIO_Export(Ped PedIndex, float MoveBlendRatio)
	{
		return TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(PedIndex, MoveBlendRatio);
	}
	float GET_PED_DESIRED_MOVE_BLEND_RATIO_Export(Ped PedIndex)
	{
		return TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PedIndex);
	}
	void TASK_GOTO_ENTITY_AIMING_Export(Ped PedIndex, Entity EntityIndex, float SeekRadius, float AimRadius)
	{
		return TASK::TASK_GOTO_ENTITY_AIMING(PedIndex, EntityIndex, SeekRadius, AimRadius);
	}
	void TASK_SET_SPHERE_DEFENSIVE_AREA_Export(Ped PedIndex, float vCentreX, float vCentreY, float vCentreZ, float fRadius)
	{
		return TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(PedIndex, vCentreX, vCentreY, vCentreZ, fRadius);
	}
	void TASK_CLEAR_DEFENSIVE_AREA_Export(Ped PedIndex)
	{
		return TASK::TASK_CLEAR_DEFENSIVE_AREA(PedIndex);
	}
	void TASK_PED_SLIDE_TO_COORD_Export(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float headingDegrees, float speed)
	{
		return TASK::TASK_PED_SLIDE_TO_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, headingDegrees, speed);
	}
	Any _0x9420FB11B8D77948_Export(Any p0)
	{
		return TASK::_0x9420FB11B8D77948(p0);
	}
	Any _0x6BA606AB3A83BC4D_Export(Any p0)
	{
		return TASK::_0x6BA606AB3A83BC4D(p0);
	}
	ScrHandle ADD_COVER_POINT_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float direction, int usage, int height, int arc, BOOL isPriorityToPlayer)
	{
		return TASK::ADD_COVER_POINT(VecCoorsX, VecCoorsY, VecCoorsZ, direction, usage, height, arc, isPriorityToPlayer);
	}
	Any _0x59872EA4CBD11C56_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TASK::_0x59872EA4CBD11C56(p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void REMOVE_COVER_POINT_Export(ScrHandle index)
	{
		return TASK::REMOVE_COVER_POINT(index);
	}
	BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS_Export(float VecCoorsX, float VecCoorsY, float VecCoorsZ, Any p3)
	{
		return TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(VecCoorsX, VecCoorsY, VecCoorsZ, p3);
	}
	scrVector GET_SCRIPTED_COVER_POINT_COORDS_Export(ScrHandle index)
	{
		return TASK::GET_SCRIPTED_COVER_POINT_COORDS(index);
	}
	scrVector _0xE116F6F2DA2D777E_Export(Any p0)
	{
		return TASK::_0xE116F6F2DA2D777E(p0);
	}
	void _0x50AA09A0DA64E73C_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TASK::_0x50AA09A0DA64E73C(p0, p1, p2, p3, p4, p5, p6);
	}
	void _0xE5831AA1E2FD147C_Export(Any p0)
	{
		return TASK::_0xE5831AA1E2FD147C(p0);
	}
	void TASK_COMBAT_PED_Export(Ped PedIndex, Ped OtherPedIndex, int CombatFlags, int TaskThreatResponseFlags)
	{
		return TASK::TASK_COMBAT_PED(PedIndex, OtherPedIndex, CombatFlags, TaskThreatResponseFlags);
	}
	void TASK_COMBAT_PED_TIMED_Export(Ped PedIndex, Ped OtherPedIndex, int Time, int Flags)
	{
		return TASK::TASK_COMBAT_PED_TIMED(PedIndex, OtherPedIndex, Time, Flags);
	}
	void _TASK_COMBAT_PED_3_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::_TASK_COMBAT_PED_3(p0, p1, p2, p3, p4, p5);
	}
	void TASK_SEEK_COVER_FROM_POS_Export(Ped PedIndex, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, BOOL p5, BOOL p6, BOOL p7)
	{
		return TASK::TASK_SEEK_COVER_FROM_POS(PedIndex, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p5, p6, p7);
	}
	void TASK_SEEK_COVER_FROM_PED_Export(Ped PedIndex, Ped OtherPedIndex, int Time, BOOL p3, BOOL p4, BOOL p5)
	{
		return TASK::TASK_SEEK_COVER_FROM_PED(PedIndex, OtherPedIndex, Time, p3, p4, p5);
	}
	void TASK_SEEK_COVER_TO_COVER_POINT_Export(Ped PedIndex, ScrHandle CoverIndex, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, Any p6, Any p7, Any p8)
	{
		return TASK::TASK_SEEK_COVER_TO_COVER_POINT(PedIndex, CoverIndex, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p6, p7, p8);
	}
	void TASK_SEEK_COVER_TO_COORDS_Export(Ped PedIndex, float VecCooverCoorsX, float VecCooverCoorsY, float VecCooverCoorsZ, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, Any p8, Any p9, Any p10)
	{
		return TASK::TASK_SEEK_COVER_TO_COORDS(PedIndex, VecCooverCoorsX, VecCooverCoorsY, VecCooverCoorsZ, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p8, p9, p10);
	}
	void TASK_PUT_PED_DIRECTLY_INTO_COVER_Export(Ped PedIndex, float vCoverPosX, float vCoverPosY, float vCoverPosZ, int Time, BOOL CanPeekAndAim, float BlendInDuration, Any p7, Any p8, ScrHandle coverpoint, BOOL p10, BOOL p11, Any p12)
	{
		return TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PedIndex, vCoverPosX, vCoverPosY, vCoverPosZ, Time, CanPeekAndAim, BlendInDuration, p7, p8, coverpoint, p10, p11, p12);
	}
	void _TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS_Export(Ped ped, float x, float y, float z, float fromX, float fromY, float fromZ, int timeout, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17)
	{
		return TASK::_TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS(ped, x, y, z, fromX, fromY, fromZ, timeout, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17);
	}
	void TASK_PUT_PED_DIRECTLY_INTO_MELEE_Export(Ped PedIndex, Ped PedTargetIndex, Hash meleeStyle, float p3, float animBlendRatio, BOOL p5, int AiCombatFlags)
	{
		return TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(PedIndex, PedTargetIndex, meleeStyle, p3, animBlendRatio, p5, AiCombatFlags);
	}
	void TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE_Export(Ped ped, Ped grappleTarget, Hash grappleStyle, float p3, float p4, BOOL p5, int p6)
	{
		return TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(ped, grappleTarget, grappleStyle, p3, p4, p5, p6);
	}
	void TASK_COMPANION_AMBIENT_Export(Ped ped, Any p1)
	{
		return TASK::TASK_COMPANION_AMBIENT(ped, p1);
	}
	void _0x098036CAB8373D36_Export(Any p0)
	{
		return TASK::_0x098036CAB8373D36(p0);
	}
	void _0x10C44F633E2D6D9E_Export(Any p0)
	{
		return TASK::_0x10C44F633E2D6D9E(p0);
	}
	void _0x7FB78B2199C10E92_Export(Any p0)
	{
		return TASK::_0x7FB78B2199C10E92(p0);
	}
	void TASK_GUARD_Export(Ped ped, Any p1, Any p2)
	{
		return TASK::TASK_GUARD(ped, p1, p2);
	}
	void TASK_GUARD_CURRENT_POSITION_Export(Ped PedIndex, float fMaxPatrolProximity, float GuardAreaRadius, BOOL bSetDefensiveArea)
	{
		return TASK::TASK_GUARD_CURRENT_POSITION(PedIndex, fMaxPatrolProximity, GuardAreaRadius, bSetDefensiveArea);
	}
	void _TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return TASK::_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2(ped, p1, p2, p3, p4, p5, p6, p7);
	}
	void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_Export(Ped PedIndex, float vDefendPositionX, float vDefendPositionY, float vDefendPositionZ, float fHeading, float fMaxPatrolProximity, int nTimer)
	{
		return TASK::TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(PedIndex, vDefendPositionX, vDefendPositionY, vDefendPositionZ, fHeading, fMaxPatrolProximity, nTimer);
	}
	void TASK_STAND_GUARD_Export(Ped PedIndex, float vDefendPositionX, float vDefendPositionY, float vDefendPositionZ, float fHeading, const char* context)
	{
		return TASK::TASK_STAND_GUARD(PedIndex, vDefendPositionX, vDefendPositionY, vDefendPositionZ, fHeading, context);
	}
	void SET_DRIVE_TASK_CRUISE_SPEED_Export(Ped PedIndex, float CruiseSpeed)
	{
		return TASK::SET_DRIVE_TASK_CRUISE_SPEED(PedIndex, CruiseSpeed);
	}
	void SET_DRIVE_TASK_MAX_CRUISE_SPEED_Export(Ped PedIndex, float MaxCruiseSpeed)
	{
		return TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(PedIndex, MaxCruiseSpeed);
	}
	void ADD_COVER_BLOCKING_AREA_Export(float vStartX, float vStartY, float vStartZ, float vEndX, float vEndY, float vEndZ, BOOL bBlockObjects, BOOL bBlockVehicles, BOOL bBlockMap, BOOL bBlockPlayer)
	{
		return TASK::ADD_COVER_BLOCKING_AREA(vStartX, vStartY, vStartZ, vEndX, vEndY, vEndZ, bBlockObjects, bBlockVehicles, bBlockMap, bBlockPlayer);
	}
	void _ADD_COVER_BLOCKING_VOLUME_Export(Volume volume, BOOL p1, BOOL p2, BOOL p3, BOOL p4)
	{
		return TASK::_ADD_COVER_BLOCKING_VOLUME(volume, p1, p2, p3, p4);
	}
	void REMOVE_ALL_COVER_BLOCKING_AREAS_Export()
	{
		return TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	}
	void _0x2A10538D0A005E81_Export(Any p0, Any p1)
	{
		return TASK::_0x2A10538D0A005E81(p0, p1);
	}
	void _0x4F57397388E1DFF8_Export()
	{
		return TASK::_0x4F57397388E1DFF8();
	}
	void TASK_ROB_PED_Export(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::TASK_ROB_PED(ped, p1, p2, p3, p4);
	}
	BOOL _0xBEDBE39B5FD98FD6_Export(Ped ped)
	{
		return TASK::_0xBEDBE39B5FD98FD6(ped);
	}
	int CREATE_SCENARIO_POINT_HASH_Export(Hash scenarioHash, float x, float y, float z, float heading, Any p5, Any p6, BOOL p7)
	{
		return TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, x, y, z, heading, p5, p6, p7);
	}
	int CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY_Export(Entity entity, Hash scenarioHash, float x, float y, float z, float heading, Any p6, Any p7, BOOL p8)
	{
		return TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(entity, scenarioHash, x, y, z, heading, p6, p7, p8);
	}
	BOOL _DOES_SCENARIO_POINT_HAVE_PROPS_Export(int scenario)
	{
		return TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(scenario);
	}
	Entity GET_PROP_FOR_SCENARIO_POINT_Export(int scenarioPoint, const char* name)
	{
		return TASK::GET_PROP_FOR_SCENARIO_POINT(scenarioPoint, name);
	}
	BOOL _ASSOCIATE_PROP_WITH_SCENARIO_Export(int scenario, Entity entity, const char* propName, BOOL p3)
	{
		return TASK::_ASSOCIATE_PROP_WITH_SCENARIO(scenario, entity, propName, p3);
	}
	void _SET_SCENARIO_POINT_FLAG_Export(int scenario, int flag, BOOL value)
	{
		return TASK::_SET_SCENARIO_POINT_FLAG(scenario, flag, value);
	}
	BOOL _IS_SCENARIO_POINT_FLAG_SET_Export(int scenario, int flag)
	{
		return TASK::_IS_SCENARIO_POINT_FLAG_SET(scenario, flag);
	}
	void _0xADC45010BC17AF0E_Export(Any p0, Any p1)
	{
		return TASK::_0xADC45010BC17AF0E(p0, p1);
	}
	Any _0x974DA3408DEC4E79_Export(Any p0)
	{
		return TASK::_0x974DA3408DEC4E79(p0);
	}
	BOOL _DISASSOCIATE_PROP_FROM_SCENARIO_Export(int scenario, const char* propName)
	{
		return TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(scenario, propName);
	}
	BOOL DOES_SCENARIO_POINT_EXIST_Export(int scenario)
	{
		return TASK::DOES_SCENARIO_POINT_EXIST(scenario);
	}
	Any _0x22CD2C33ED4467A1_Export(Any p0)
	{
		return TASK::_0x22CD2C33ED4467A1(p0);
	}
	Entity _GET_SCENARIO_POINT_ENTITY_Export(int scenario)
	{
		return TASK::_GET_SCENARIO_POINT_ENTITY(scenario);
	}
	Ped _GET_PED_USING_SCENARIO_POINT_Export(int scenario)
	{
		return TASK::_GET_PED_USING_SCENARIO_POINT(scenario);
	}
	scrVector _GET_SCENARIO_POINT_COORDS_Export(int scenario, BOOL p1)
	{
		return TASK::_GET_SCENARIO_POINT_COORDS(scenario, p1);
	}
	scrVector _0x91CB5E431F579BA1_Export(Any p0)
	{
		return TASK::_0x91CB5E431F579BA1(p0);
	}
	Any _0x370F57C47F68EBCA_Export(Any p0)
	{
		return TASK::_0x370F57C47F68EBCA(p0);
	}
	float _GET_SCENARIO_POINT_HEADING_Export(int scenario, BOOL p1)
	{
		return TASK::_GET_SCENARIO_POINT_HEADING(scenario, p1);
	}
	float _GET_SCENARIO_POINT_RADIUS_Export(int scenario)
	{
		return TASK::_GET_SCENARIO_POINT_RADIUS(scenario);
	}
	void _SET_SCENARIO_POINT_COORDS_Export(int scenario, float xPos, float yPos, float zPos, BOOL p4)
	{
		return TASK::_SET_SCENARIO_POINT_COORDS(scenario, xPos, yPos, zPos, p4);
	}
	void _SET_SCENARIO_POINT_HEADING_Export(int scenario, float heading, BOOL p2)
	{
		return TASK::_SET_SCENARIO_POINT_HEADING(scenario, heading, p2);
	}
	void _SET_SCENARIO_POINT_RADIUS_Export(int scenario, float radius)
	{
		return TASK::_SET_SCENARIO_POINT_RADIUS(scenario, radius);
	}
	void _0xA7479FB665361EDB_Export(Any p0, Any p1)
	{
		return TASK::_0xA7479FB665361EDB(p0, p1);
	}
	void _0xE69FDA40AAC3EFC0_Export(Any p0, Any p1)
	{
		return TASK::_0xE69FDA40AAC3EFC0(p0, p1);
	}
	int GET_SCENARIO_POINTS_IN_AREA_Export(float posX, float posY, float posZ, float radius, void* scenariosInRadius, int size)
	{
		return TASK::GET_SCENARIO_POINTS_IN_AREA(posX, posY, posZ, radius, scenariosInRadius, size);
	}
	Any _0xEFD875C2791EBEFD_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0xEFD875C2791EBEFD(p0, p1, p2, p3);
	}
	Any _0x152664AA3188B193_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::_0x152664AA3188B193(p0, p1, p2, p3, p4, p5);
	}
	Any _0xE7BBC4E56B989449_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0xE7BBC4E56B989449(p0, p1, p2);
	}
	int _GET_SCENARIO_POINT_PED_IS_USING_Export(Ped ped, BOOL p1)
	{
		return TASK::_GET_SCENARIO_POINT_PED_IS_USING(ped, p1);
	}
	Any GET_RANSACK_SCENARIO_POINT_PED_IS_USING_Export(Ped ped)
	{
		return TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(ped);
	}
	void _SET_SCENARIO_CONTAINER_OPENING_STATE_Export(Entity entity, BOOL open)
	{
		return TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(entity, open);
	}
	Any _0xA9E7672F8C6C6F74_Export(Any p0)
	{
		return TASK::_0xA9E7672F8C6C6F74(p0);
	}
	Any _0x0A98A362C5A19A43_Export(Any p0)
	{
		return TASK::_0x0A98A362C5A19A43(p0);
	}
	Any _0x849791EBBDBA0362_Export(Any p0)
	{
		return TASK::_0x849791EBBDBA0362(p0);
	}
	Any _0x640A602946A8C972_Export(Any p0)
	{
		return TASK::_0x640A602946A8C972(p0);
	}
	Any _0x01AF8A3729231A43_Export(Any p0)
	{
		return TASK::_0x01AF8A3729231A43(p0);
	}
	BOOL _GET_SCENARIO_CONTAINER_OPENING_STATE_Export(Entity entity)
	{
		return TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(entity);
	}
	void _RESET_SCENARIO_FOR_ENTITY_Export(int scenario, Entity entity)
	{
		return TASK::_RESET_SCENARIO_FOR_ENTITY(scenario, entity);
	}
	void _0x4161648394262FDF_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x4161648394262FDF(p0, p1, p2, p3);
	}
	void _0x9C8F42A5D1859DC1_Export(Any p0)
	{
		return TASK::_0x9C8F42A5D1859DC1(p0);
	}
	void _DELETE_SCENARIO_POINT_Export(int scenario)
	{
		return TASK::_DELETE_SCENARIO_POINT(scenario);
	}
	void TASK_USE_SCENARIO_POINT_Export(Ped ped, int scenario, const char* conditionalAnim, int p3, BOOL p4, BOOL p5, Hash p6, BOOL p7, float p8, BOOL p9)
	{
		return TASK::TASK_USE_SCENARIO_POINT(ped, scenario, conditionalAnim, p3, p4, p5, p6, p7, p8, p9);
	}
	void _TASK_USE_SCENARIO_POINT_2_Export(Ped ped, Ped ped2, Any p2, const char* p3, int p4, Hash p5, float p6, BOOL p7)
	{
		return TASK::_TASK_USE_SCENARIO_POINT_2(ped, ped2, p2, p3, p4, p5, p6, p7);
	}
	void TASK_START_SCENARIO_IN_PLACE_HASH_Export(Ped ped, Hash scenarioHash, int duration, BOOL playEnterAnim, Hash conditionalHash, float heading, BOOL p6)
	{
		return TASK::TASK_START_SCENARIO_IN_PLACE_HASH(ped, scenarioHash, duration, playEnterAnim, conditionalHash, heading, p6);
	}
	void _TASK_START_SCENARIO_IN_PLACE_2_Export(Ped ped, Any p1, const char* p2, int p3, BOOL p4, float p5, BOOL p6)
	{
		return TASK::_TASK_START_SCENARIO_IN_PLACE_2(ped, p1, p2, p3, p4, p5, p6);
	}
	void TASK_START_SCENARIO_AT_POSITION_Export(Ped ped, Hash scenarioHash, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport, const char* p9, float p10, BOOL p11)
	{
		return TASK::TASK_START_SCENARIO_AT_POSITION(ped, scenarioHash, x, y, z, heading, duration, sittingScenario, teleport, p9, p10, p11);
	}
	Any _0xF97F462779B31786_Export(Any p0)
	{
		return TASK::_0xF97F462779B31786(p0);
	}
	Any _0x6C269F673C47031E_Export(Any p0)
	{
		return TASK::_0x6C269F673C47031E(p0);
	}
	void _0x9667CCE29BFA0780_Export(Any p0)
	{
		return TASK::_0x9667CCE29BFA0780(p0);
	}
	Any _0x00FFE0F85253C572_Export(Any p0)
	{
		return TASK::_0x00FFE0F85253C572(p0);
	}
	void _TASK_USE_NEAREST_SCENARIO_TO_COORD_Export(Ped ped, float x, float y, float z, float distance, int duration, BOOL p6, BOOL p7, BOOL p8, BOOL p9)
	{
		return TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(ped, x, y, z, distance, duration, p6, p7, p8, p9);
	}
	void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP_Export(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, int iTimeToLeaveMS, BOOL p6, BOOL p7, BOOL p8, BOOL p9)
	{
		return TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, iTimeToLeaveMS, p6, p7, p8, p9);
	}
	void TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP_Export(Ped ped, float x, float y, float z, float distance)
	{
		return TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(ped, x, y, z, distance);
	}
	void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_Export(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, BOOL p5, BOOL p6, BOOL p7, BOOL p8)
	{
		return TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, p5, p6, p7, p8);
	}
	void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP_Export(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, BOOL p5, BOOL p6, BOOL p7, BOOL p8)
	{
		return TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, p5, p6, p7, p8);
	}
	Any _0xFDECCA06E8B81346_Export(Ped ped)
	{
		return TASK::_0xFDECCA06E8B81346(ped);
	}
	Any _0x2D657B10F211C572_Export(Ped ped, float p1)
	{
		return TASK::_0x2D657B10F211C572(ped, p1);
	}
	void TASK_RIDE_TRAIN_Export(Ped ped, Vehicle train, int scenarioPoint, Hash scenarioHash)
	{
		return TASK::TASK_RIDE_TRAIN(ped, train, scenarioPoint, scenarioHash);
	}
	Any _0x79197F7D2BB5E73A_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::_0x79197F7D2BB5E73A(p0, p1, p2, p3, p4, p5);
	}
	BOOL DOES_SCENARIO_EXIST_IN_AREA_Export(float vPositionX, float vPositionY, float vPositionZ, float fRange, BOOL p4, Any p5, BOOL p6)
	{
		return TASK::DOES_SCENARIO_EXIST_IN_AREA(vPositionX, vPositionY, vPositionZ, fRange, p4, p5, p6);
	}
	BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH_Export(float x, float y, float z, Hash typeHash, float radius, BOOL p5)
	{
		return TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(x, y, z, typeHash, radius, p5);
	}
	int FIND_SCENARIO_OF_TYPE_HASH_Export(float xPos, float yPos, float zPos, Hash scenarioType, float distance, Any p5, BOOL p6)
	{
		return TASK::FIND_SCENARIO_OF_TYPE_HASH(xPos, yPos, zPos, scenarioType, distance, p5, p6);
	}
	void _0x0D322AEF8878B8FE_Export(Any p0, Any p1)
	{
		return TASK::_0x0D322AEF8878B8FE(p0, p1);
	}
	Any _0xD508FA229F1C4900_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TASK::_0xD508FA229F1C4900(p0, p1, p2, p3, p4, p5);
	}
	void _0xB8E213D02F37947D_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TASK::_0xB8E213D02F37947D(p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL IS_SCENARIO_OCCUPIED_Export(float vPositionX, float vPositionY, float vPositionZ, float fRange, BOOL bOnlyUsersActuallyAtScenario)
	{
		return TASK::IS_SCENARIO_OCCUPIED(vPositionX, vPositionY, vPositionZ, fRange, bOnlyUsersActuallyAtScenario);
	}
	Any _0x1ACBC313966C21F3_Export(int scenario)
	{
		return TASK::_0x1ACBC313966C21F3(scenario);
	}
	BOOL PED_HAS_USE_SCENARIO_TASK_Export(Ped PedIndex)
	{
		return TASK::PED_HAS_USE_SCENARIO_TASK(PedIndex);
	}
	BOOL _PED_IS_IN_SCENARIO_BASE_Export(Ped ped)
	{
		return TASK::_PED_IS_IN_SCENARIO_BASE(ped);
	}
	Any _0x90703A8F75EE4ABD_Export(Any p0, Any p1)
	{
		return TASK::_0x90703A8F75EE4ABD(p0, p1);
	}
	void _0xD999E379265A4501_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0xD999E379265A4501(p0, p1, p2);
	}
	void PLAY_ANIM_ON_RUNNING_SCENARIO_Export(Ped PedIndex, const char* clipSet, const char* clip)
	{
		return TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(PedIndex, clipSet, clip);
	}
	Any _0x74F0209674864CBD_Export()
	{
		return TASK::_0x74F0209674864CBD();
	}
	Any _0xE1C105E6BBA48270_Export()
	{
		return TASK::_0xE1C105E6BBA48270();
	}
	Any _0x1AC5A8AB50CFAA33_Export(Any p0)
	{
		return TASK::_0x1AC5A8AB50CFAA33(p0);
	}
	void _0xBEEFBB608D2AA68A_Export(Any p0)
	{
		return TASK::_0xBEEFBB608D2AA68A(p0);
	}
	void _0x19BC99C678FBA139_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x19BC99C678FBA139(p0, p1, p2);
	}
	void _0x5D9B0BAAF04CF65B_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x5D9B0BAAF04CF65B(p0, p1, p2, p3);
	}
	void _0x9B6A58FDB0024F12_Export(Any p0, Any p1)
	{
		return TASK::_0x9B6A58FDB0024F12(p0, p1);
	}
	void _0xBC3F847AE2C3DC65_Export(Any p0, Any p1)
	{
		return TASK::_0xBC3F847AE2C3DC65(p0, p1);
	}
	void _0x450080DDEDB91258_Export(Any p0, Any p1)
	{
		return TASK::_0x450080DDEDB91258(p0, p1);
	}
	void _0x954451EA2D2120FB_Export(Any p0, Any p1)
	{
		return TASK::_0x954451EA2D2120FB(p0, p1);
	}
	void _0x0F4F6C4CE471259D_Export(Any p0, Any p1)
	{
		return TASK::_0x0F4F6C4CE471259D(p0, p1);
	}
	void _0xB8E3486D107F4194_Export(Any p0, Any p1)
	{
		return TASK::_0xB8E3486D107F4194(p0, p1);
	}
	void _0x827A58CED9D4D5B4_Export(Any p0, Any p1)
	{
		return TASK::_0x827A58CED9D4D5B4(p0, p1);
	}
	void _0x4A7D73989F52EB37_Export(Any p0, Any p1)
	{
		return TASK::_0x4A7D73989F52EB37(p0, p1);
	}
	void _0xB79817DB31FF72B9_Export(Any p0, Any p1)
	{
		return TASK::_0xB79817DB31FF72B9(p0, p1);
	}
	void _0x65D281985F2BDFC2_Export(Any p0, Any p1)
	{
		return TASK::_0x65D281985F2BDFC2(p0, p1);
	}
	void _0x885D19AC2B6FBFF4_Export(Any p0, Any p1)
	{
		return TASK::_0x885D19AC2B6FBFF4(p0, p1);
	}
	void _0x2064B33F6E6B92D4_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x2064B33F6E6B92D4(p0, p1, p2, p3);
	}
	void _0xCE4E669400E5F8AA_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0xCE4E669400E5F8AA(p0, p1, p2, p3);
	}
	void _0x2EB977293923C723_Export(Any p0, Any p1)
	{
		return TASK::_0x2EB977293923C723(p0, p1);
	}
	void _0xE9225354FB7437A7_Export(Any p0, Any p1)
	{
		return TASK::_0xE9225354FB7437A7(p0, p1);
	}
	void _0x764DB5A48390FBAD_Export(Any p0, Any p1)
	{
		return TASK::_0x764DB5A48390FBAD(p0, p1);
	}
	void _0x8F8C84363810691A_Export(Any p0, Any p1)
	{
		return TASK::_0x8F8C84363810691A(p0, p1);
	}
	void _0xFF8AFCA532B500D4_Export(Any p0, Any p1)
	{
		return TASK::_0xFF8AFCA532B500D4(p0, p1);
	}
	Any _0xFE5D28B9B7837CC1_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0xFE5D28B9B7837CC1(p0, p1, p2, p3);
	}
	void _0x2B8AF29A78024BD3_Export(Any p0)
	{
		return TASK::_0x2B8AF29A78024BD3(p0);
	}
	Any _0x0365000D8BF86531_Export(Any p0)
	{
		return TASK::_0x0365000D8BF86531(p0);
	}
	scrVector _0x865732725536EE39_Export(Any p0)
	{
		return TASK::_0x865732725536EE39(p0);
	}
	void _0x0E184495B27BB57D_Export()
	{
		return TASK::_0x0E184495B27BB57D();
	}
	BOOL DOES_SCENARIO_GROUP_EXIST_Export(const char* scenarioGroupName)
	{
		return TASK::DOES_SCENARIO_GROUP_EXIST(scenarioGroupName);
	}
	BOOL _DOES_SCENARIO_GROUP_EXIST_HASH_Export(Hash scenarioGroup)
	{
		return TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(scenarioGroup);
	}
	BOOL IS_SCENARIO_GROUP_ENABLED_Export(const char* scenarioGroupName)
	{
		return TASK::IS_SCENARIO_GROUP_ENABLED(scenarioGroupName);
	}
	BOOL _IS_SCENARIO_GROUP_ENABLED_HASH_Export(Hash scenarioGroup)
	{
		return TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(scenarioGroup);
	}
	void SET_SCENARIO_GROUP_ENABLED_Export(const char* scenarioGroupName, BOOL enabled)
	{
		return TASK::SET_SCENARIO_GROUP_ENABLED(scenarioGroupName, enabled);
	}
	void _SET_SCENARIO_GROUP_ENABLED_HASH_Export(Hash scenarioGroup, BOOL toggle)
	{
		return TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(scenarioGroup, toggle);
	}
	void RESET_SCENARIO_GROUPS_ENABLED_Export()
	{
		return TASK::RESET_SCENARIO_GROUPS_ENABLED();
	}
	void _0x358A1A751B335A11_Export(Any p0)
	{
		return TASK::_0x358A1A751B335A11(p0);
	}
	void FORCE_SCENARIO_GROUP_PRIORITY_Export(Any p0, Any p1)
	{
		return TASK::FORCE_SCENARIO_GROUP_PRIORITY(p0, p1);
	}
	Any _0xE55478C5EDF70AC2_Export(Any p0)
	{
		return TASK::_0xE55478C5EDF70AC2(p0);
	}
	BOOL _IS_SCENARIO_POINT_ACTIVE_Export(int scenario)
	{
		return TASK::_IS_SCENARIO_POINT_ACTIVE(scenario);
	}
	void _SET_SCENARIO_POINT_ACTIVE_Export(int scenario, BOOL active)
	{
		return TASK::_SET_SCENARIO_POINT_ACTIVE(scenario, active);
	}
	void _RESET_SCENARIO_SCRIPT_Export(int scenario)
	{
		return TASK::_RESET_SCENARIO_SCRIPT(scenario);
	}
	BOOL IS_SCENARIO_TYPE_ENABLED_Export(const char* scenarioTypeName)
	{
		return TASK::IS_SCENARIO_TYPE_ENABLED(scenarioTypeName);
	}
	void SET_SCENARIO_TYPE_ENABLED_Export(const char* scenarioTypeName, BOOL enabled)
	{
		return TASK::SET_SCENARIO_TYPE_ENABLED(scenarioTypeName, enabled);
	}
	void _SET_SCENARIO_TYPE_ENABLED_HASH_Export(Hash scenarioType, BOOL toggle)
	{
		return TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(scenarioType, toggle);
	}
	void RESET_SCENARIO_TYPES_ENABLED_Export()
	{
		return TASK::RESET_SCENARIO_TYPES_ENABLED();
	}
	int _GET_SCENARIO_POINT_TYPE_PED_IS_USING_Export(Ped ped)
	{
		return TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(ped);
	}
	Hash _GET_SCENARIO_POINT_TYPE_Export(int scenario)
	{
		return TASK::_GET_SCENARIO_POINT_TYPE(scenario);
	}
	BOOL IS_PED_ACTIVE_IN_SCENARIO_Export(Ped PedIndex, int scenario)
	{
		return TASK::IS_PED_ACTIVE_IN_SCENARIO(PedIndex, scenario);
	}
	BOOL IS_PED_EXITING_SCENARIO_Export(Ped ped, BOOL p1)
	{
		return TASK::IS_PED_EXITING_SCENARIO(ped, p1);
	}
	Any _0x2C497BDEF897C6DF_Export(Any p0)
	{
		return TASK::_0x2C497BDEF897C6DF(p0);
	}
	void TASK_COMBAT_HATED_TARGETS_IN_AREA_Export(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, int Flags, Any p6)
	{
		return TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, Flags, p6);
	}
	void TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST_Export(Ped ped, float radius)
	{
		return TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(ped, radius);
	}
	void TASK_COMBAT_HATED_TARGETS_AROUND_PED_Export(Ped PedIndex, float fRange, int Flags, Any p3)
	{
		return TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(PedIndex, fRange, Flags, p3);
	}
	void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED_Export(Ped PedIndex, float fRange, int iTime, int Flags)
	{
		return TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(PedIndex, fRange, iTime, Flags);
	}
	void TASK_COMBAT_HATED_TARGETS_Export(Ped ped, float radius)
	{
		return TASK::TASK_COMBAT_HATED_TARGETS(ped, radius);
	}
	void _0x30B391915538EBE2_Export(Any p0)
	{
		return TASK::_0x30B391915538EBE2(p0);
	}
	void TASK_THROW_PROJECTILE_Export(Ped PedIndex, float ThrowAtCoordX, float ThrowAtCoordY, float ThrowAtCoordZ)
	{
		return TASK::TASK_THROW_PROJECTILE(PedIndex, ThrowAtCoordX, ThrowAtCoordY, ThrowAtCoordZ);
	}
	void _TASK_THROW_PROJECTILE_2_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_TASK_THROW_PROJECTILE_2(p0, p1, p2, p3);
	}
	void TASK_WHISTLE_ANIM_Export(Ped ped, Hash audPedWhistleType, Hash p2)
	{
		return TASK::TASK_WHISTLE_ANIM(ped, audPedWhistleType, p2);
	}
	void TASK_SWAP_WEAPON_Export(Ped PedIndex, BOOL p1, BOOL p2, BOOL p3, BOOL p4)
	{
		return TASK::TASK_SWAP_WEAPON(PedIndex, p1, p2, p3, p4);
	}
	void _0x0000A8ACDC2E1B6A_Export(Any p0, Any p1)
	{
		return TASK::_0x0000A8ACDC2E1B6A(p0, p1);
	}
	void TASK_RELOAD_WEAPON_Export(Ped PedIndex, BOOL bDrawWeapon)
	{
		return TASK::TASK_RELOAD_WEAPON(PedIndex, bDrawWeapon);
	}
	void TASK_PICK_UP_WEAPON_Export(Ped ped, Any p1)
	{
		return TASK::TASK_PICK_UP_WEAPON(ped, p1);
	}
	BOOL IS_PED_GETTING_UP_Export(Ped PedIndex)
	{
		return TASK::IS_PED_GETTING_UP(PedIndex);
	}
	void TASK_ANIMAL_WRITHE_Export(Ped ped, Any p1, Any p2)
	{
		return TASK::TASK_ANIMAL_WRITHE(ped, p1, p2);
	}
	void _TASK_ANIMAL_BLEED_OUT_Export(Ped ped, Ped killer, BOOL p2, Hash weaponHash, int p4, int p5)
	{
		return TASK::_TASK_ANIMAL_BLEED_OUT(ped, killer, p2, weaponHash, p4, p5);
	}
	BOOL IS_PED_IN_WRITHE_Export(Ped PedIndex)
	{
		return TASK::IS_PED_IN_WRITHE(PedIndex);
	}
	Any _0x3F8387DB1B9F31B7_Export(Any p0, Any p1)
	{
		return TASK::_0x3F8387DB1B9F31B7(p0, p1);
	}
	Any _0x756C7B4C43DF0422_Export(Any p0)
	{
		return TASK::_0x756C7B4C43DF0422(p0);
	}
	Any _0x351F74ED6177EBE7_Export()
	{
		return TASK::_0x351F74ED6177EBE7();
	}
	Any _0x6C50B9DCCCA70023_Export(Any p0)
	{
		return TASK::_0x6C50B9DCCCA70023(p0);
	}
	void TASK_REVIVE_TARGET_Export(Ped ped, Ped reviver, Hash tool)
	{
		return TASK::TASK_REVIVE_TARGET(ped, reviver, tool);
	}
	void OPEN_PATROL_ROUTE_Export(const char* RouteName)
	{
		return TASK::OPEN_PATROL_ROUTE(RouteName);
	}
	void CLOSE_PATROL_ROUTE_Export()
	{
		return TASK::CLOSE_PATROL_ROUTE();
	}
	void ADD_PATROL_ROUTE_NODE_Export(int NodeId, const char* NodeType, float vNodePositionX, float vNodePositionY, float vNodePositionZ, float NodeLookAtPosX, float NodeLookAtPosY, float NodeLookAtPosZ, int Duration, BOOL p9)
	{
		return TASK::ADD_PATROL_ROUTE_NODE(NodeId, NodeType, vNodePositionX, vNodePositionY, vNodePositionZ, NodeLookAtPosX, NodeLookAtPosY, NodeLookAtPosZ, Duration, p9);
	}
	void ADD_PATROL_ROUTE_LINK_Export(int NodeId1, int NodeId2)
	{
		return TASK::ADD_PATROL_ROUTE_LINK(NodeId1, NodeId2);
	}
	void CREATE_PATROL_ROUTE_Export()
	{
		return TASK::CREATE_PATROL_ROUTE();
	}
	void DELETE_PATROL_ROUTE_Export(const char* RouteName)
	{
		return TASK::DELETE_PATROL_ROUTE(RouteName);
	}
	Any _0x643FD1556F621772_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x643FD1556F621772(p0, p1, p2);
	}
	void TASK_PATROL_Export(Ped Ped, const char* RouteName, int PedAlertState, BOOL CanChatToPeds, BOOL CanUseHeadLookAtAlongRoute)
	{
		return TASK::TASK_PATROL(Ped, RouteName, PedAlertState, CanChatToPeds, CanUseHeadLookAtAlongRoute);
	}
	void _TASK_PATROL_2_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return TASK::_TASK_PATROL_2(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void TASK_STAY_IN_COVER_Export(Ped Ped)
	{
		return TASK::TASK_STAY_IN_COVER(Ped);
	}
	void TASK_VEHICLE_SHOOT_AT_PED_Export(Ped PedIndex, Ped OtherPed, float FireTolerance)
	{
		return TASK::TASK_VEHICLE_SHOOT_AT_PED(PedIndex, OtherPed, FireTolerance);
	}
	void TASK_VEHICLE_AIM_AT_PED_Export(Ped PedIndex, Ped OtherPed)
	{
		return TASK::TASK_VEHICLE_AIM_AT_PED(PedIndex, OtherPed);
	}
	void TASK_VEHICLE_SHOOT_AT_COORD_Export(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float FireTolerance)
	{
		return TASK::TASK_VEHICLE_SHOOT_AT_COORD(PedIndex, vPositionX, vPositionY, vPositionZ, FireTolerance);
	}
	void _0xAF2EF28CE3084505_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0xAF2EF28CE3084505(p0, p1, p2, p3);
	}
	void TASK_VEHICLE_AIM_AT_COORD_Export(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ)
	{
		return TASK::TASK_VEHICLE_AIM_AT_COORD(PedIndex, vPositionX, vPositionY, vPositionZ);
	}
	void TASK_VEHICLE_GOTO_NAVMESH_Export(Ped iPed, Vehicle VehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float CruiseSpeed, int Mode, float TargetReachedDist)
	{
		return TASK::TASK_VEHICLE_GOTO_NAVMESH(iPed, VehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, CruiseSpeed, Mode, TargetReachedDist);
	}
	void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_Export(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, float AimAtCoordX, float AimAtCoordY, float AimAtCoordZ, float p7, BOOL p8, float p9, float p10, BOOL p11, Any p12, BOOL p13, Hash FiringPatternHash, Any p15)
	{
		return TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, AimAtCoordX, AimAtCoordY, AimAtCoordZ, p7, p8, p9, p10, p11, p12, p13, FiringPatternHash, p15);
	}
	void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15)
	{
		return TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
	}
	void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_Export(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, Ped ped2, float p5, Any p6, float p7, float p8, Any p9, Any p10, Any p11, Hash firingPattern, int p13, Any p14)
	{
		return TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, ped2, p5, p6, p7, p8, p9, p10, p11, firingPattern, p13, p14);
	}
	void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		return TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_Export(Ped PedIndex, Entity GoToEntityIndex, Entity AimAtEntityIndex, float p3, Any p4, float p5, float p6, Any p7, Any p8, Hash FiringPatternHash, Any p10)
	{
		return TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(PedIndex, GoToEntityIndex, AimAtEntityIndex, p3, p4, p5, p6, p7, p8, FiringPatternHash, p10);
	}
	void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		return TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_Export(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, float AimNearCoordX, float AimNearCoordY, float AimNearCoordZ, float MoveBlendRatio, BOOL Shoot, float TargetDistance, float SlowDistance, BOOL UseNavMesh, int iNavFlags, int iTaskFlags, Hash FiringPatternHash)
	{
		return TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, AimNearCoordX, AimNearCoordY, AimNearCoordZ, MoveBlendRatio, Shoot, TargetDistance, SlowDistance, UseNavMesh, iNavFlags, iTaskFlags, FiringPatternHash);
	}
	void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		return TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	void SET_HIGH_FALL_TASK_Export(Ped nPedIndex, int nMinTime, int nMaxTime, int type)
	{
		return TASK::SET_HIGH_FALL_TASK(nPedIndex, nMinTime, nMaxTime, type);
	}
	void _0x5217B7B6DB78E1F3_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::_0x5217B7B6DB78E1F3(p0, p1, p2, p3, p4);
	}
	void REQUEST_WAYPOINT_RECORDING_Export(const char* RecordingName)
	{
		return TASK::REQUEST_WAYPOINT_RECORDING(RecordingName);
	}
	BOOL GET_IS_WAYPOINT_RECORDING_LOADED_Export(const char* RecordingName)
	{
		return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(RecordingName);
	}
	void REMOVE_WAYPOINT_RECORDING_Export(const char* RecordingName)
	{
		return TASK::REMOVE_WAYPOINT_RECORDING(RecordingName);
	}
	void _0xF718931A82EEB898_Export()
	{
		return TASK::_0xF718931A82EEB898();
	}
	BOOL WAYPOINT_RECORDING_GET_NUM_POINTS_Export(const char* RecordingName, int* iOutNumPoints)
	{
		return TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(RecordingName, iOutNumPoints);
	}
	BOOL WAYPOINT_RECORDING_GET_COORD_Export(const char* RecordingName, int iWaypoint, scrVector* vOutCoord)
	{
		return TASK::WAYPOINT_RECORDING_GET_COORD(RecordingName, iWaypoint, vOutCoord);
	}
	float WAYPOINT_RECORDING_GET_SPEED_AT_POINT_Export(const char* RecordingName, int iWaypoint)
	{
		return TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(RecordingName, iWaypoint);
	}
	BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT_Export(const char* RecordingName, float vPosX, float vPosY, float vPosZ, int* iOutWaypoint)
	{
		return TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(RecordingName, vPosX, vPosY, vPosZ, iOutWaypoint);
	}
	void TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED_Export(Ped ped, Any p1)
	{
		return TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(ped, p1);
	}
	void TASK_FOLLOW_WAYPOINT_RECORDING_Export(Ped iPed, const char* RecordingName, int iStartingProgress, int iFlags, int iTargetProgress, BOOL p5, Any p6, int p7)
	{
		return TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iPed, RecordingName, iStartingProgress, iFlags, iTargetProgress, p5, p6, p7);
	}
	void TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET_Export(Ped ped, const char* waypointRecording, float p2, int p3, int p4, int p5, BOOL p6)
	{
		return TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(ped, waypointRecording, p2, p3, p4, p5, p6);
	}
	void TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET_Export(Ped ped0, Ped ped1, const char* waypointRecording, float p3, float p4, int p5, int p6, int p7, BOOL p8)
	{
		return TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(ped0, ped1, waypointRecording, p3, p4, p5, p6, p7, p8);
	}
	BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED_Export(Ped iPed, const char* waypointRecording)
	{
		return TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iPed, waypointRecording);
	}
	int GET_PED_WAYPOINT_PROGRESS_Export(Ped iPed)
	{
		return TASK::GET_PED_WAYPOINT_PROGRESS(iPed);
	}
	float GET_PED_WAYPOINT_DISTANCE_Export(Ped iPed)
	{
		return TASK::GET_PED_WAYPOINT_DISTANCE(iPed);
	}
	BOOL SET_PED_WAYPOINT_ROUTE_OFFSET_Export(Ped iPed, float vOffsetX, float vOffsetY, float vOffsetZ)
	{
		return TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iPed, vOffsetX, vOffsetY, vOffsetZ);
	}
	float GET_WAYPOINT_DISTANCE_ALONG_ROUTE_Export(const char* RecordingName, int iWaypoint)
	{
		return TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(RecordingName, iWaypoint);
	}
	float _0x3ACC128510142B9D_Export(const char* waypointRecording, float x, float y, float z)
	{
		return TASK::_0x3ACC128510142B9D(waypointRecording, x, y, z);
	}
	BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED_Export(Ped iPed)
	{
		return TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iPed);
	}
	BOOL WAYPOINT_PLAYBACK_GET_IS_AIMING_Export(Ped ped)
	{
		return TASK::WAYPOINT_PLAYBACK_GET_IS_AIMING(ped);
	}
	BOOL WAYPOINT_PLAYBACK_GET_IS_SHOOTING_Export(Ped ped)
	{
		return TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(ped);
	}
	void WAYPOINT_PLAYBACK_PAUSE_Export(Ped iPed, BOOL p1, BOOL p2, BOOL p3)
	{
		return TASK::WAYPOINT_PLAYBACK_PAUSE(iPed, p1, p2, p3);
	}
	void WAYPOINT_PLAYBACK_RESUME_Export(Ped iPed, BOOL bAchieveHeadingFirst, int iProgressToContinueFrom, int iTimeBeforeResumingMs)
	{
		return TASK::WAYPOINT_PLAYBACK_RESUME(iPed, bAchieveHeadingFirst, iProgressToContinueFrom, iTimeBeforeResumingMs);
	}
	void WAYPOINT_PLAYBACK_OVERRIDE_SPEED_Export(Ped iPed, float fMoveBlendRatio, BOOL p2, float p3, BOOL p4)
	{
		return TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iPed, fMoveBlendRatio, p2, p3, p4);
	}
	void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED_Export(Ped iPed)
	{
		return TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iPed);
	}
	float GET_PED_WAYPOINT_OVERRIDE_SPEED_Export(Ped ped)
	{
		return TASK::GET_PED_WAYPOINT_OVERRIDE_SPEED(ped);
	}
	void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE_Export(const char* RecordingName, BOOL bUseAsAssistedMovementRoute, float fPathWidth, float fTension, BOOL p4)
	{
		return TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(RecordingName, bUseAsAssistedMovementRoute, fPathWidth, fTension, p4);
	}
	void WAYPOINT_PLAYBACK_START_AIMING_AT_PED_Export(Ped iPed, Ped iTargetPed, BOOL bRunAndGun, Any p3)
	{
		return TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(iPed, iTargetPed, bRunAndGun, p3);
	}
	void WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY(p0, p1, p2, p3);
	}
	void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD_Export(Ped iPed, float vTargetCoordsX, float vTargetCoordsY, float vTargetCoordsZ, BOOL bRunAndGun, Any p5)
	{
		return TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(iPed, vTargetCoordsX, vTargetCoordsY, vTargetCoordsZ, bRunAndGun, p5);
	}
	void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED_Export(Ped iPed, Ped iTargetPed, BOOL bRunAndGun, Hash FiringPatternHash, float p4)
	{
		return TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iPed, iTargetPed, bRunAndGun, FiringPatternHash, p4);
	}
	void WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(p0, p1, p2, p3, p4);
	}
	void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD_Export(Ped iPed, float vTargetCoordsX, float vTargetCoordsY, float vTargetCoordsZ, BOOL bRunAndGun, Hash FiringPatternHash, float p6)
	{
		return TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(iPed, vTargetCoordsX, vTargetCoordsY, vTargetCoordsZ, bRunAndGun, FiringPatternHash, p6);
	}
	void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING_Export(Ped iPed)
	{
		return TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iPed);
	}
	void ASSISTED_MOVEMENT_REMOVE_ROUTE_Export(const char* RouteName)
	{
		return TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(RouteName);
	}
	BOOL _CREATE_WAYPOINT_PATH_Export(const char* pathName, void* p1, int nodes, int p3)
	{
		return TASK::_CREATE_WAYPOINT_PATH(pathName, p1, nodes, p3);
	}
	BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED_Export(const char* RouteName)
	{
		return TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(RouteName);
	}
	void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES_Export(const char* RouteName, int iFlags)
	{
		return TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(RouteName, iFlags);
	}
	void SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER_Export(Any p0, Any p1)
	{
		return TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(p0, p1);
	}
	void SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_Export(Ped iPed, Vehicle VehicleIndex, const char* RecordingName, int Mode, Any p4, int eWaypoint, int iFlags, float MaxSpeed, BOOL DriveInLoop, float fTargetArriveDistance, BOOL p10)
	{
		return TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iPed, VehicleIndex, RecordingName, Mode, p4, eWaypoint, iFlags, MaxSpeed, DriveInLoop, fTargetArriveDistance, p10);
	}
	void _TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return TASK::_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE_Export(Vehicle iVeh, Any p1)
	{
		return TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iVeh, p1);
	}
	int GET_VEHICLE_WAYPOINT_PROGRESS_Export(Vehicle iVeh)
	{
		return TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iVeh);
	}
	int GET_VEHICLE_WAYPOINT_TARGET_POINT_Export(Vehicle iVeh)
	{
		return TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(iVeh);
	}
	void VEHICLE_WAYPOINT_PLAYBACK_PAUSE_Export(Vehicle iVeh)
	{
		return TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iVeh);
	}
	Any VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED_Export(Any p0)
	{
		return TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(p0);
	}
	void VEHICLE_WAYPOINT_PLAYBACK_RESUME_Export(Vehicle iVeh)
	{
		return TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(iVeh);
	}
	void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED_Export(Vehicle iVeh)
	{
		return TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iVeh);
	}
	void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED_Export(Vehicle iVeh, float fSpeed)
	{
		return TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVeh, fSpeed);
	}
	Any GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED_Export(Any p0)
	{
		return TASK::GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(p0);
	}
	void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_Export(Ped PedIndex, BOOL bSet)
	{
		return TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PedIndex, bSet);
	}
	void TASK_SET_STEALTH_MOVEMENT_Export(Ped ped, BOOL p1, Any p2, BOOL p3)
	{
		return TASK::TASK_SET_STEALTH_MOVEMENT(ped, p1, p2, p3);
	}
	void TASK_SET_CROUCH_MOVEMENT_Export(Ped ped, BOOL p1, Any p2, BOOL p3)
	{
		return TASK::TASK_SET_CROUCH_MOVEMENT(ped, p1, p2, p3);
	}
	void TASK_FORCE_MOTION_STATE_Export(Ped PedIndex, Hash motionState, BOOL bForceRestart)
	{
		return TASK::TASK_FORCE_MOTION_STATE(PedIndex, motionState, bForceRestart);
	}
	void TASK_MOVE_NETWORK_BY_NAME_Export(Ped PedIndex, const char* network, float blendDuration, BOOL bAllowOverrideCloneUpdate, const char* animDictionary, int flags)
	{
		return TASK::TASK_MOVE_NETWORK_BY_NAME(PedIndex, network, blendDuration, bAllowOverrideCloneUpdate, animDictionary, flags);
	}
	void TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS_Export(Ped ped, const char* moveNetworkDefName, void* taskData, float p3, BOOL p4, const char* animDict, int flags)
	{
		return TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(ped, moveNetworkDefName, taskData, p3, p4, animDict, flags);
	}
	void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_Export(Ped ped, const char* moveNetworkDefName, void* taskData, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, int p9, float p10, int p11, int p12, int flag, int p14)
	{
		return TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(ped, moveNetworkDefName, taskData, xPos, yPos, zPos, xRot, yRot, zRot, p9, p10, p11, p12, flag, p14);
	}
	void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED_Export(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17)
	{
		return TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17);
	}
	BOOL IS_TASK_MOVE_NETWORK_ACTIVE_Export(Ped PedIndex)
	{
		return TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PedIndex);
	}
	Hash _GET_TASK_MOVE_NETWORK_ID_Export(Ped ped)
	{
		return TASK::_GET_TASK_MOVE_NETWORK_ID(ped);
	}
	BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION_Export(Ped PedIndex)
	{
		return TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PedIndex);
	}
	void REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION_Export(Ped PedIndex, const char* StateName)
	{
		return TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PedIndex, StateName);
	}
	const char* GET_TASK_MOVE_NETWORK_STATE_Export(Ped PedIndex)
	{
		return TASK::GET_TASK_MOVE_NETWORK_STATE(PedIndex);
	}
	Any _0xE9A6400D1A0E7A55_Export(Any p0)
	{
		return TASK::_0xE9A6400D1A0E7A55(p0);
	}
	void _0x615DC4A82E90BB48_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x615DC4A82E90BB48(p0, p1, p2);
	}
	void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_Export(Ped PedIndex, const char* signalName, float fSignal)
	{
		return TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PedIndex, signalName, fSignal);
	}
	void _SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2_Export(Ped ped, const char* signalName, float value)
	{
		return TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2(ped, signalName, value);
	}
	void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL_Export(Ped PedIndex, const char* signalName, BOOL bSignal)
	{
		return TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(PedIndex, signalName, bSignal);
	}
	void _SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR_Export(Ped ped, const char* signalName, float x, float y, float z)
	{
		return TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(ped, signalName, x, y, z);
	}
	float _GET_TASK_MOVE_NETWORK_PHASE_FLOAT_Export(Ped ped, const char* phaseName)
	{
		return TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(ped, phaseName);
	}
	BOOL GET_TASK_MOVE_NETWORK_EVENT_Export(Ped PedIndex, const char* eventName)
	{
		return TASK::GET_TASK_MOVE_NETWORK_EVENT(PedIndex, eventName);
	}
	void _0x9585FF23C4B8EDE0_Export(Any p0, Any p1)
	{
		return TASK::_0x9585FF23C4B8EDE0(p0, p1);
	}
	void _0xEAF87DA2BE78A15B_Export(Any p0, Any p1)
	{
		return TASK::_0xEAF87DA2BE78A15B(p0, p1);
	}
	void _0x3BBEECC5B8F35318_Export(Any p0, Any p1)
	{
		return TASK::_0x3BBEECC5B8F35318(p0, p1);
	}
	BOOL IS_MOVE_BLEND_RATIO_STILL_Export(float MoveBlendRatio)
	{
		return TASK::IS_MOVE_BLEND_RATIO_STILL(MoveBlendRatio);
	}
	BOOL IS_MOVE_BLEND_RATIO_WALKING_Export(float MoveBlendRatio)
	{
		return TASK::IS_MOVE_BLEND_RATIO_WALKING(MoveBlendRatio);
	}
	BOOL IS_MOVE_BLEND_RATIO_RUNNING_Export(float MoveBlendRatio)
	{
		return TASK::IS_MOVE_BLEND_RATIO_RUNNING(MoveBlendRatio);
	}
	BOOL IS_MOVE_BLEND_RATIO_SPRINTING_Export(float MoveBlendRatio)
	{
		return TASK::IS_MOVE_BLEND_RATIO_SPRINTING(MoveBlendRatio);
	}
	BOOL IS_PED_STILL_Export(Ped PedIndex)
	{
		return TASK::IS_PED_STILL(PedIndex);
	}
	BOOL IS_PED_WALKING_Export(Ped PedIndex)
	{
		return TASK::IS_PED_WALKING(PedIndex);
	}
	BOOL IS_PED_RUNNING_Export(Ped PedIndex)
	{
		return TASK::IS_PED_RUNNING(PedIndex);
	}
	BOOL IS_PED_SPRINTING_Export(Ped PedIndex)
	{
		return TASK::IS_PED_SPRINTING(PedIndex);
	}
	BOOL IS_PED_IN_HIT_REACT_Export(Ped ped)
	{
		return TASK::IS_PED_IN_HIT_REACT(ped);
	}
	void TASK_ARREST_PED_Export(Ped ArresterPedIndex, Ped ArresteePedIndex)
	{
		return TASK::TASK_ARREST_PED(ArresterPedIndex, ArresteePedIndex);
	}
	BOOL IS_PED_BEING_ARRESTED_Export(Ped PedIndex)
	{
		return TASK::IS_PED_BEING_ARRESTED(PedIndex);
	}
	BOOL _IS_PED_ARRESTING_ANY_PED_Export(Ped ped)
	{
		return TASK::_IS_PED_ARRESTING_ANY_PED(ped);
	}
	void _CUFF_PED_Export(Ped ped)
	{
		return TASK::_CUFF_PED(ped);
	}
	void UNCUFF_PED_Export(Ped PedIndex)
	{
		return TASK::UNCUFF_PED(PedIndex);
	}
	BOOL IS_PED_CUFFED_Export(Ped PedIndex)
	{
		return TASK::IS_PED_CUFFED(PedIndex);
	}
	BOOL _IS_PED_DUELLING_Export(Ped ped)
	{
		return TASK::_IS_PED_DUELLING(ped);
	}
	void TASK_DUEL_Export(Ped ped, Any p1, float p2, Entity entity, float p4, int p5, float vPosOpponentX, float vPosOpponentY, float vPosOpponentZ, float fOpponentHead, int p10)
	{
		return TASK::TASK_DUEL(ped, p1, p2, entity, p4, p5, vPosOpponentX, vPosOpponentY, vPosOpponentZ, fOpponentHead, p10);
	}
	Any _0x908BB14BCE85C80E_Export(Any p0)
	{
		return TASK::_0x908BB14BCE85C80E(p0);
	}
	Any _0x1F7A9A9C38C13A56_Export(Any p0)
	{
		return TASK::_0x1F7A9A9C38C13A56(p0);
	}
	Any _0x3FEB770D8ED9047A_Export(Any p0)
	{
		return TASK::_0x3FEB770D8ED9047A(p0);
	}
	Any _0x30146C25686B7836_Export(Any p0, Any p1)
	{
		return TASK::_0x30146C25686B7836(p0, p1);
	}
	Any _0x59AE5CA4FFB4E378_Export(Any p0, Any p1)
	{
		return TASK::_0x59AE5CA4FFB4E378(p0, p1);
	}
	void _0x748D5E0D2A1A4C61_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x748D5E0D2A1A4C61(p0, p1, p2);
	}
	void END_DUEL_Export(Ped ped, BOOL p1, float p2)
	{
		return TASK::END_DUEL(ped, p1, p2);
	}
	void _0x651F0530083C0E5A_Export(Any p0, Any p1)
	{
		return TASK::_0x651F0530083C0E5A(p0, p1);
	}
	void TASK_CARRIABLE_Export(Entity entity, Hash carryConfig, Ped carrier, int carriableSlot, int flags)
	{
		return TASK::TASK_CARRIABLE(entity, carryConfig, carrier, carriableSlot, flags);
	}
	void _0x9EBD34958AB6F824_Export(Any p0)
	{
		return TASK::_0x9EBD34958AB6F824(p0);
	}
	BOOL GET_IS_CARRIABLE_ENTITY_Export(Entity entity)
	{
		return TASK::GET_IS_CARRIABLE_ENTITY(entity);
	}
	Any _0x10ADFDF07B7DFFBA_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0x10ADFDF07B7DFFBA(p0, p1, p2);
	}
	void TASK_PLACE_CARRIED_ENTITY_AT_COORD_Export(Ped ped, Entity entity, float x, float y, float z, float p5, int flags)
	{
		return TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(ped, entity, x, y, z, p5, flags);
	}
	void TASK_PLACE_CARRIED_ENTITY_ON_MOUNT_Export(Ped ped, Entity entity, Ped mount, float p3)
	{
		return TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(ped, entity, mount, p3);
	}
	void TASK_DUMP_CARRIABLE_FROM_PARENT_Export(Ped ped, Ped ped2, Entity entity)
	{
		return TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(ped, ped2, entity);
	}
	void _DETACH_CARRIABLE_PED_Export(Ped ped)
	{
		return TASK::_DETACH_CARRIABLE_PED(ped);
	}
	void _0xE2CF104ADD49D4BF_Export(Any p0)
	{
		return TASK::_0xE2CF104ADD49D4BF(p0);
	}
	void TASK_PICKUP_CARRIABLE_ENTITY_Export(Ped ped, Entity entity)
	{
		return TASK::TASK_PICKUP_CARRIABLE_ENTITY(ped, entity);
	}
	void TASK_HOGTIE_TARGET_PED_Export(Ped ped, Ped targetPed)
	{
		return TASK::TASK_HOGTIE_TARGET_PED(ped, targetPed);
	}
	void _TASK_CUT_FREE_HOGTIED_TARGET_PED_Export(Ped ped, Ped targetPed)
	{
		return TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(ped, targetPed);
	}
	void _TASK_CUT_FREE_HOGTIED_TARGET_PED_2_Export(Ped ped, Ped targetPed, float p2)
	{
		return TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED_2(ped, targetPed, p2);
	}
	void _SET_HOGTIE_ESCAPE_TIMER_Export(Ped ped, float time)
	{
		return TASK::_SET_HOGTIE_ESCAPE_TIMER(ped, time);
	}
	float _GET_HOGTIE_ESCAPE_TIMER_Export(Ped ped)
	{
		return TASK::_GET_HOGTIE_ESCAPE_TIMER(ped);
	}
	Any _0x03D741CB4052E26C_Export(Any p0)
	{
		return TASK::_0x03D741CB4052E26C(p0);
	}
	BOOL _REQUEST_HERB_COMPOSITE_ASSET_Export(Hash asset)
	{
		return TASK::_REQUEST_HERB_COMPOSITE_ASSET(asset);
	}
	BOOL ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED_Export(Hash asset)
	{
		return TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(asset);
	}
	int _CREATE_HERB_COMPOSITES_Export(Hash asset, float x, float y, float z, float heading, int groundSetting, void* p6, int p7)
	{
		return TASK::_CREATE_HERB_COMPOSITES(asset, x, y, z, heading, groundSetting, p6, p7);
	}
	void _DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES_Export(int compositeId, BOOL p1)
	{
		return TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(compositeId, p1);
	}
	int _GET_HERB_COMPOSITE_NUM_ENTITIES_Export(int compositeId, void* outEntities)
	{
		return TASK::_GET_HERB_COMPOSITE_NUM_ENTITIES(compositeId, outEntities);
	}
	Any _0xDF56A2B50C04DEA4_Export(Any p0, Any p1)
	{
		return TASK::_0xDF56A2B50C04DEA4(p0, p1);
	}
	void TASK_LOOT_ENTITY_Export(Ped ped, Entity entity)
	{
		return TASK::TASK_LOOT_ENTITY(ped, entity);
	}
	void TASK_BREAK_VEHICLE_DOOR_LOCK_Export(Ped ped, Vehicle vehicle)
	{
		return TASK::TASK_BREAK_VEHICLE_DOOR_LOCK(ped, vehicle);
	}
	void TASK_LOOT_NEAREST_ENTITY_Export(Ped ped, float x, float y, float z, int p4, float p5)
	{
		return TASK::TASK_LOOT_NEAREST_ENTITY(ped, x, y, z, p4, p5);
	}
	void TASK_LASSO_PED_Export(Ped ped, Ped targetPed)
	{
		return TASK::TASK_LASSO_PED(ped, targetPed);
	}
	void TASK_HOGTIEABLE_Export(Ped ped)
	{
		return TASK::TASK_HOGTIEABLE(ped);
	}
	void UNHOGTIE_PED_Export(Ped ped, int flags, Hash getupSetHash, const char* p3, const char* p4, float p5)
	{
		return TASK::UNHOGTIE_PED(ped, flags, getupSetHash, p3, p4, p5);
	}
	void _0x722D6A49200174FE_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::_0x722D6A49200174FE(p0, p1, p2, p3, p4);
	}
	void _MAKE_OBJECT_CARRIABLE_Export(Object object)
	{
		return TASK::_MAKE_OBJECT_CARRIABLE(object);
	}
	void MAKE_OBJECT_NOT_CARRIABLE_Export(Object object)
	{
		return TASK::MAKE_OBJECT_NOT_CARRIABLE(object);
	}
	void _0x8E1DDE26D270CC5E_Export(Any p0, Any p1)
	{
		return TASK::_0x8E1DDE26D270CC5E(p0, p1);
	}
	void _0xA6A76D666A281F2D_Export(Any p0, Hash item)
	{
		return TASK::_0xA6A76D666A281F2D(p0, item);
	}
	void _0xA21AA2F0C2180125_Export(Any p0, Any p1)
	{
		return TASK::_0xA21AA2F0C2180125(p0, p1);
	}
	Hash _FIND_MODEL_FOR_ITEM_Export(Hash item)
	{
		return TASK::_FIND_MODEL_FOR_ITEM(item);
	}
	void _0xFF745B0346E19E2C_Export(Any p0)
	{
		return TASK::_0xFF745B0346E19E2C(p0);
	}
	Any _0xB8F52A3F84A7CC59_Export(Any p0)
	{
		return TASK::_0xB8F52A3F84A7CC59(p0);
	}
	void _0x6AFDA2264925BD11_Export(Any p0)
	{
		return TASK::_0x6AFDA2264925BD11(p0);
	}
	void _0x816A3ACD265E2297_Export(Any p0, Any p1)
	{
		return TASK::_0x816A3ACD265E2297(p0, p1);
	}
	void _0x4E806A395D43A458_Export(Any p0)
	{
		return TASK::_0x4E806A395D43A458(p0);
	}
	void SET_TEAM_CARRIABLE_ENTITY_Export(Any p0, Any p1, Any p2)
	{
		return TASK::SET_TEAM_CARRIABLE_ENTITY(p0, p1, p2);
	}
	BOOL IS_TEAM_CARRIABLE_ENTITY_Export(Any p0, Any p1)
	{
		return TASK::IS_TEAM_CARRIABLE_ENTITY(p0, p1);
	}
	BOOL _IS_HAT_BEING_PICKED_UP_Export(Object hatObject)
	{
		return TASK::_IS_HAT_BEING_PICKED_UP(hatObject);
	}
	void _0x9ADDBB9242179D56_Export(Object object, Ped ped)
	{
		return TASK::_0x9ADDBB9242179D56(object, ped);
	}
	BOOL _IS_HAT_BEING_PICKED_UP_2_Export(Object hatObject)
	{
		return TASK::_IS_HAT_BEING_PICKED_UP_2(hatObject);
	}
	void _TASK_EQUIP_HAT_Export(Object hatObject, Ped ped)
	{
		return TASK::_TASK_EQUIP_HAT(hatObject, ped);
	}
	Any _0x7CB99FADDE73CD1B_Export(Any p0)
	{
		return TASK::_0x7CB99FADDE73CD1B(p0);
	}
	void _0xF3C3503276F4A034_Export(Entity entity, Any p1)
	{
		return TASK::_0xF3C3503276F4A034(entity, p1);
	}
	Any _0x6DAC799857EF3F11_Export(Any p0, Any p1)
	{
		return TASK::_0x6DAC799857EF3F11(p0, p1);
	}
	Any _0x920684BE432875B1_Export(Any p0)
	{
		return TASK::_0x920684BE432875B1(p0);
	}
	BOOL SET_ENHANCED_BREAK_FREE_Export(Ped ped, BOOL p1, const char* clipset)
	{
		return TASK::SET_ENHANCED_BREAK_FREE(ped, p1, clipset);
	}
	Any _0x6AFD84AEAA3EA538_Export(Any p0)
	{
		return TASK::_0x6AFD84AEAA3EA538(p0);
	}
	void _0xBD1C3C0F271C39D3_Export(Any p0, Any p1)
	{
		return TASK::_0xBD1C3C0F271C39D3(p0, p1);
	}
	void _0x1ECF56C040FD839C_Export(Any p0, Any p1)
	{
		return TASK::_0x1ECF56C040FD839C(p0, p1);
	}
	void _0xF40A109B4B79A848_Export(Any p0, Any p1, Any p2)
	{
		return TASK::_0xF40A109B4B79A848(p0, p1, p2);
	}
	BOOL _IS_PED_LEADING_HORSE_Export(Ped ped)
	{
		return TASK::_IS_PED_LEADING_HORSE(ped);
	}
	Any _0xAC5045AB7F1A34FD_Export(Any p0)
	{
		return TASK::_0xAC5045AB7F1A34FD(p0);
	}
	Ped _GET_LED_HORSE_FROM_PED_Export(Ped ped)
	{
		return TASK::_GET_LED_HORSE_FROM_PED(ped);
	}
	void TASK_TURN_TO_FACE_CLOSEST_PED_Export(Ped ped, float p1, float p2, int p3)
	{
		return TASK::TASK_TURN_TO_FACE_CLOSEST_PED(ped, p1, p2, p3);
	}
	BOOL TASK_CONFRONT_Export(Ped ped, Ped targetPed, int p2)
	{
		return TASK::TASK_CONFRONT(ped, targetPed, p2);
	}
	BOOL TASK_POLICE_Export(Ped ped, BOOL p1)
	{
		return TASK::TASK_POLICE(ped, p1);
	}
	BOOL TASK_MELEE_Export(Ped ped, Ped targetPed, Hash p2, Any p3, Any p4, float p5, Any p6, float p7)
	{
		return TASK::TASK_MELEE(ped, targetPed, p2, p3, p4, p5, p6, p7);
	}
	BOOL TASK_GRAPPLE_Export(Ped ped, Ped targetPed, Hash grappleStyle, int p3, float p4, int p5, int p6)
	{
		return TASK::TASK_GRAPPLE(ped, targetPed, grappleStyle, p3, p4, p5, p6);
	}
	BOOL _TASK_INTIMIDATED_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TASK::_TASK_INTIMIDATED(p0, p1, p2, p3, p4);
	}
	BOOL _TASK_INTIMIDATED_2_Export(Ped victim, Ped attacker, int p2, BOOL p3, BOOL p4, BOOL everyFrame, BOOL p6, BOOL p7, int flag)
	{
		return TASK::_TASK_INTIMIDATED_2(victim, attacker, p2, p3, p4, everyFrame, p6, p7, flag);
	}
	void _0x2948235DB2058E99_Export(Any p0, Any p1)
	{
		return TASK::_0x2948235DB2058E99(p0, p1);
	}
	void _0xB2F47A1AFDFCC595_Export(Any p0, Any p1)
	{
		return TASK::_0xB2F47A1AFDFCC595(p0, p1);
	}
	void _0x41D1331AFAD5A091_Export(Ped ped, int p1, Any p2)
	{
		return TASK::_0x41D1331AFAD5A091(ped, p1, p2);
	}
	void _0x801BD27403F3CBA0_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x801BD27403F3CBA0(p0, p1, p2, p3);
	}
	void _0x0FE797DD9F70DFA6_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TASK::_0x0FE797DD9F70DFA6(p0, p1, p2, p3);
	}
	void TASK_PERSISTENT_CHARACTER_Export(Ped ped)
	{
		return TASK::TASK_PERSISTENT_CHARACTER(ped);
	}
	void _0xFC7F71CF49F70B6B_Export(Any p0)
	{
		return TASK::_0xFC7F71CF49F70B6B(p0);
	}
	void _0xE01F55B2896F6B37_Export(Any p0, Any p1)
	{
		return TASK::_0xE01F55B2896F6B37(p0, p1);
	}
	Any _0xE62754D09354F6CF_Export(Any p0)
	{
		return TASK::_0xE62754D09354F6CF(p0);
	}
	void _0x4BA972D0E5AD8122_Export(Any p0, Any p1)
	{
		return TASK::_0x4BA972D0E5AD8122(p0, p1);
	}
	BOOL _GET_TASK_FISHING_Export(Ped ped, void* p1)
	{
		return TASK::_GET_TASK_FISHING(ped, p1);
	}
	BOOL _SET_TASK_FISHING_Export(Ped ped, void* p1)
	{
		return TASK::_SET_TASK_FISHING(ped, p1);
	}
	void TASK_SWAP_FISHING_BAIT_Export(Ped ped, const char* bait, BOOL withoutBuoy)
	{
		return TASK::TASK_SWAP_FISHING_BAIT(ped, bait, withoutBuoy);
	}
	void _SET_FISHING_BAIT_Export(Ped ped, const char* bait, BOOL withoutBuoy, BOOL instantly)
	{
		return TASK::_SET_FISHING_BAIT(ped, bait, withoutBuoy, instantly);
	}
	void _0x1F298C7BD30D1240_Export(Ped ped)
	{
		return TASK::_0x1F298C7BD30D1240(ped);
	}
	void _PED_FISHINGROD_HOOK_ENTITY_Export(Ped ped, Entity entity)
	{
		return TASK::_PED_FISHINGROD_HOOK_ENTITY(ped, entity);
	}
	void _PED_FISHINGROD_HOOK_OBJECT_Export(Ped ped, Object object)
	{
		return TASK::_PED_FISHINGROD_HOOK_OBJECT(ped, object);
	}
	BOOL _0xB520DBDA7FCF573F_Export(Ped ped)
	{
		return TASK::_0xB520DBDA7FCF573F(ped);
	}
	void _0x31BB338F64D5C861_Export(Ped ped, BOOL p1)
	{
		return TASK::_0x31BB338F64D5C861(ped, p1);
	}
	void _0x517D01BF27B682D1_Export(Ped ped, Entity entity, float p2, float p3, float p4, float p5, int p6)
	{
		return TASK::_0x517D01BF27B682D1(ped, entity, p2, p3, p4, p5, p6);
	}
	void _0x88FD60D846D9CD63_Export(Ped ped)
	{
		return TASK::_0x88FD60D846D9CD63(ped);
	}
	void _0x9050DF2C53801208_Export(Ped ped, float p1)
	{
		return TASK::_0x9050DF2C53801208(ped, p1);
	}
	void _0x22CDBF317C40A122_Export(Ped ped)
	{
		return TASK::_0x22CDBF317C40A122(ped);
	}
	Any _0x5952DFA38FA529FE_Export()
	{
		return TASK::_0x5952DFA38FA529FE();
	}
	void TASK_PLAY_EMOTE_WITH_HASH_Export(Ped ped, int emoteType, int playbackMode, Hash emote, BOOL isSecondaryTask, BOOL canBreakOut, BOOL disableEarlyOutAnimTag, BOOL ignoreInvalidMainTask, BOOL destroyProps)
	{
		return TASK::TASK_PLAY_EMOTE_WITH_HASH(ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps);
	}
	void _TASK_PLAY_EMOTE_Export(Ped ped, int emoteType, int playbackMode, Hash emote, BOOL isSecondaryTask, BOOL canBreakOut, BOOL disableEarlyOutAnimTag, BOOL ignoreInvalidMainTask, BOOL destroyProps)
	{
		return TASK::_TASK_PLAY_EMOTE(ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps);
	}
	void _0x6A1AF481407BF6E9_Export(Any p0)
	{
		return TASK::_0x6A1AF481407BF6E9(p0);
	}
	void _TASK_EMOTE_OUTRO_Export(Ped ped)
	{
		return TASK::_TASK_EMOTE_OUTRO(ped);
	}
	void _0xEC516FE805D2CB2D_Export(Any p0)
	{
		return TASK::_0xEC516FE805D2CB2D(p0);
	}
	void _0x59AEA4DC640814B9_Export(Any p0, Any p1)
	{
		return TASK::_0x59AEA4DC640814B9(p0, p1);
	}
	Any _0x11C7CE1AE38911B5_Export(Any p0)
	{
		return TASK::_0x11C7CE1AE38911B5(p0);
	}
	Any _0xD0ABC4EA3B5E21A0_Export(Any p0, Any p1)
	{
		return TASK::_0xD0ABC4EA3B5E21A0(p0, p1);
	}
	BOOL IS_EMOTE_TASK_RUNNING_Export(Ped ped, Any p1)
	{
		return TASK::IS_EMOTE_TASK_RUNNING(ped, p1);
	}
	void _TELEMETRY_SET_IS_FLOW_Export(BOOL toggle)
	{
		return TELEMETRY::_TELEMETRY_SET_IS_FLOW(toggle);
	}
	void _0xEC0BD8736DCAF841_Export(BOOL toggle)
	{
		return TELEMETRY::_0xEC0BD8736DCAF841(toggle);
	}
	void _TELEMETRY_MISSION_STARTED_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_MISSION_STARTED(p0, p1, p2, p3);
	}
	void _TELEMETRY_MISSION_OVER_Export(Any p0, Any p1)
	{
		return TELEMETRY::_TELEMETRY_MISSION_OVER(p0, p1);
	}
	void _TELEMETRY_MISSION_CHECKPOINT_Export(Any p0, Any p1, Any p2)
	{
		return TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(p0, p1, p2);
	}
	void _TELEMETRY_PLAYER_SPAWNED_Export(Ped ped)
	{
		return TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(ped);
	}
	BOOL _TELEMETRY_CREATE_UUID_Export(void* uuid)
	{
		return TELEMETRY::_TELEMETRY_CREATE_UUID(uuid);
	}
	void _TELEMETRY_MATCH_QUEUE_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TELEMETRY::_TELEMETRY_MATCH_QUEUE(p0, p1, p2, p3, p4, p5, p6);
	}
	void _TELEMETRY_MATCH_STARTED_Export(void* p0, void* p1)
	{
		return TELEMETRY::_TELEMETRY_MATCH_STARTED(p0, p1);
	}
	void _TELEMETRY_MATCH_OVER_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TELEMETRY::_TELEMETRY_MATCH_OVER(p0, p1, p2, p3, p4);
	}
	void _TELEMETRY_MATCH_VOTE_Export(void* p0, void* p1)
	{
		return TELEMETRY::_TELEMETRY_MATCH_VOTE(p0, p1);
	}
	void _TELEMETRY_LOBBY_PROGRESSION_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_LOBBY_PROGRESSION(p0, p1, p2, p3);
	}
	void _TELEMETRY_GAME_PROGRESS_Export(Any p0, Any p1)
	{
		return TELEMETRY::_TELEMETRY_GAME_PROGRESS(p0, p1);
	}
	void _TELEMETRY_HERB_PICKED_Export(Hash herbType)
	{
		return TELEMETRY::_TELEMETRY_HERB_PICKED(herbType);
	}
	void _TELEMETRY_ANIMAL_SKINNED_Export(Hash type, void* items)
	{
		return TELEMETRY::_TELEMETRY_ANIMAL_SKINNED(type, items);
	}
	void _TELEMETRY_CAMP_CREATED_Export(Any p0)
	{
		return TELEMETRY::_TELEMETRY_CAMP_CREATED(p0);
	}
	void _TELEMETRY_CAMP_SUPPLIES_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TELEMETRY::_TELEMETRY_CAMP_SUPPLIES(p0, p1, p2, p3, p4);
	}
	void _TELEMETRY_REGION_Export(Hash regionHash)
	{
		return TELEMETRY::_TELEMETRY_REGION(regionHash);
	}
	void _TELEMETRY_SHOP_ENTRY_Export(Any shopType, Any shopRegion, Any region, Any p3, Any p4, Any p5)
	{
		return TELEMETRY::_TELEMETRY_SHOP_ENTRY(shopType, shopRegion, region, p3, p4, p5);
	}
	void _TELEMETRY_SHOP_EXIT_Export(Any p0, Any p1)
	{
		return TELEMETRY::_TELEMETRY_SHOP_EXIT(p0, p1);
	}
	void _TELEMETRY_SET_SHOP_FOR_TRANSACTION_Export(int transactionId, Hash p1, Hash p2)
	{
		return TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(transactionId, p1, p2);
	}
	void _TELEMETRY_SHOP_PURCHASE_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TELEMETRY::_TELEMETRY_SHOP_PURCHASE(p0, p1, p2, p3, p4);
	}
	void _TELEMETRY_SHOP_SELL_Export(Any p0, Any p1, Any p2, Any p3, int centSalePrice)
	{
		return TELEMETRY::_TELEMETRY_SHOP_SELL(p0, p1, p2, p3, centSalePrice);
	}
	void _TELEMETRY_GOLD_STORE_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_GOLD_STORE(p0, p1, p2, p3);
	}
	void _CLEAR_TELEMETRY_SHOP_UI_Export()
	{
		return TELEMETRY::_CLEAR_TELEMETRY_SHOP_UI();
	}
	void _TELEMETRY_SHOP_CUTSCENE_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(p0, p1, p2, p3);
	}
	void _TELEMETRY_AMBIENT_VIGNETTE_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TELEMETRY::_TELEMETRY_AMBIENT_VIGNETTE(p0, p1, p2, p3, p4, p5, p6);
	}
	void _TELEMETRY_DISCOVERABLE_Export(Any p0)
	{
		return TELEMETRY::_TELEMETRY_DISCOVERABLE(p0);
	}
	void _TELEMETRY_HONOR_Export(Any p0, Any p1)
	{
		return TELEMETRY::_TELEMETRY_HONOR(p0, p1);
	}
	void _TELEMETRY_CRAFT_ITEM_Export(Any p0, Any p1, Any p2, Any quantity)
	{
		return TELEMETRY::_TELEMETRY_CRAFT_ITEM(p0, p1, p2, quantity);
	}
	void TELEMETRY_CAMP_DONATE_Export(Any transactionId, Any p1, Any p2, Any p3, Any p4, Hash slotId, Hash p6, Any p7, BOOL p8)
	{
		return TELEMETRY::TELEMETRY_CAMP_DONATE(transactionId, p1, p2, p3, p4, slotId, p6, p7, p8);
	}
	void _TELEMETRY_MOONSHINE_BREW_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		return TELEMETRY::_TELEMETRY_MOONSHINE_BREW(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void _TELEMETRY_COLLECT_Export(Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TELEMETRY::_TELEMETRY_COLLECT(transactionId, p1, p2, p3, p4, p5, p6);
	}
	void _TELEMETRY_MISSION_ILO_OPTION_Export(Any p0, Any p1)
	{
		return TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(p0, p1);
	}
	void _TELEMETRY_MISSION_FAILED_TO_LAUNCH_Export(Any p0, Any p1, float x, float y, float z, int reason)
	{
		return TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(p0, p1, x, y, z, reason);
	}
	void _TELEMETRY_GANG_SHARES_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_GANG_SHARES(p0, p1, p2, p3);
	}
	void _TELEMETRY_FAST_TRAVEL_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TELEMETRY::_TELEMETRY_FAST_TRAVEL(p0, p1, p2, p3, p4);
	}
	void _TELEMETRY_NET_CAMP_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TELEMETRY::_TELEMETRY_NET_CAMP(p0, p1, p2, p3, p4, p5, p6);
	}
	void _TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA_Export()
	{
		return TELEMETRY::_TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA();
	}
	void _TELEMETRY_SLEEP_Export(Any p0)
	{
		return TELEMETRY::_TELEMETRY_SLEEP(p0);
	}
	void _TELEMETRY_PARLEY_FEUD_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return TELEMETRY::_TELEMETRY_PARLEY_FEUD(p0, p1, p2, p3, p4);
	}
	void TELEMETRY_PLAYER_MENU_PIN_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::TELEMETRY_PLAYER_MENU_PIN(p0, p1, p2, p3);
	}
	void _TELEMETRY_NOTORIETY_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_NOTORIETY(p0, p1, p2, p3);
	}
	void _TELEMETRY_DEFENSIVE_Export(Any p0, Any p1, Any p2)
	{
		return TELEMETRY::_TELEMETRY_DEFENSIVE(p0, p1, p2);
	}
	void _TELEMETRY_LOOT_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_LOOT(p0, p1, p2, p3);
	}
	void _TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE_Export(Any p0, Any p1, Hash emote)
	{
		return TELEMETRY::_TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE(p0, p1, emote);
	}
	void _TELEMETRY_FAVOR_EMOTE_Export(Any p0, Any p1, Any p2)
	{
		return TELEMETRY::_TELEMETRY_FAVOR_EMOTE(p0, p1, p2);
	}
	void _TELEMETRY_POKER_OVER_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return TELEMETRY::_TELEMETRY_POKER_OVER(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	BOOL _TELEMETRY_TRIGGER_TRANSACTION_REQUEST_Export(void* requestId, void* transactionId)
	{
		return TELEMETRY::_TELEMETRY_TRIGGER_TRANSACTION_REQUEST(requestId, transactionId);
	}
	BOOL _TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID_Export(void* transactionId, void* requestId)
	{
		return TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(transactionId, requestId);
	}
	void _TELEMETRY_ROLE_BOUNTY_Export(Any p0)
	{
		return TELEMETRY::_TELEMETRY_ROLE_BOUNTY(p0);
	}
	void _TELEMETRY_BOUNTY_TARGET_Export(void* data)
	{
		return TELEMETRY::_TELEMETRY_BOUNTY_TARGET(data);
	}
	void _TELEMETRY_PRISON_Export(Any transactionId, Any bountyAmount, Ped ped, Any completionType, Any jailTimeServed, Any jailTimeLeft, Any posseRole)
	{
		return TELEMETRY::_TELEMETRY_PRISON(transactionId, bountyAmount, ped, completionType, jailTimeServed, jailTimeLeft, posseRole);
	}
	void _TELEMETRY_ROLE_TRADER_Export(Any p0, Any transactionId)
	{
		return TELEMETRY::_TELEMETRY_ROLE_TRADER(p0, transactionId);
	}
	void _TELEMETRY_ROLE_MOONSHINER_Export(Any p0, Any transactionId)
	{
		return TELEMETRY::_TELEMETRY_ROLE_MOONSHINER(p0, transactionId);
	}
	void _TELEMETRY_ROLE_COLLECTOR_Export(Any transactionId, Any collectible, Any category, Any p3, Any p4, Any p5, Any p6)
	{
		return TELEMETRY::_TELEMETRY_ROLE_COLLECTOR(transactionId, collectible, category, p3, p4, p5, p6);
	}
	void _TELEMETRY_PHOTO_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_PHOTO(p0, p1, p2, p3);
	}
	void _TELEMETRY_START_GUN_LOCKER_INTERACTION_Export()
	{
		return TELEMETRY::_TELEMETRY_START_GUN_LOCKER_INTERACTION();
	}
	void _TELEMETRY_GUN_LOCKER_Export()
	{
		return TELEMETRY::_TELEMETRY_GUN_LOCKER();
	}
	void _TELEMETRY_GUN_LOCKER_WEAPON_STORED_Export(Hash p0)
	{
		return TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_STORED(p0);
	}
	void _TELEMETRY_GUN_LOCKER_WEAPON_REMOVED_Export(Hash p0)
	{
		return TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_REMOVED(p0);
	}
	void _TELEMETRY_ROLE_TOKEN_TRANSACTION_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TELEMETRY::_TELEMETRY_ROLE_TOKEN_TRANSACTION(p0, p1, p2, p3, p4, p5);
	}
	void _TELEMETRY_COUPON_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return TELEMETRY::_TELEMETRY_COUPON(p0, p1, p2, p3, p4, p5);
	}
	void TELEMETRY_PERSONAL_VEHICLE_MOUNT_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::TELEMETRY_PERSONAL_VEHICLE_MOUNT(p0, p1, p2, p3);
	}
	void _TELEMETRY_PERSONAL_VEHICLE_WAGON_Export(Any p0, Any p1, Any p2)
	{
		return TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(p0, p1, p2);
	}
	void _TELEMETRY_MENU_NAVIGATION_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_MENU_NAVIGATION(p0, p1, p2, p3);
	}
	void _TELEMETRY_HUB_NAVIGATION_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return TELEMETRY::_TELEMETRY_HUB_NAVIGATION(p0, p1, p2, p3);
	}
	void _TELEMETRY_HUB_OFFERS_Export(Any couponItem, Any p1)
	{
		return TELEMETRY::_TELEMETRY_HUB_OFFERS(couponItem, p1);
	}
	void _TELEMETRY_SAMPLE_Export(Any transactionId, Any animal, Any p2, Any bSampled, BOOL bTranq)
	{
		return TELEMETRY::_TELEMETRY_SAMPLE(transactionId, animal, p2, bSampled, bTranq);
	}
	void _TELEMETRY_ROLE_NATURALIST_Export(Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		return TELEMETRY::_TELEMETRY_ROLE_NATURALIST(transactionId, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _TELEMETRY_PHOTO_CAM_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		return TELEMETRY::_TELEMETRY_PHOTO_CAM(p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}
	void _TELEMETRY_INTRO_SKIP_Export(Any p0, Any p1, Any p2)
	{
		return TELEMETRY::_TELEMETRY_INTRO_SKIP(p0, p1, p2);
	}
	void ANALYTICS_PLAYTIME_FREEMODE_START_Export()
	{
		return TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_START();
	}
	void ANALYTICS_PLAYTIME_FREEMODE_END_Export()
	{
		return TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_END();
	}
	void _TELEMETRY_CUSTOM_Export(void* args)
	{
		return TELEMETRY::_TELEMETRY_CUSTOM(args);
	}
	void _TELEMETRY_MATCH_NOMINATION_Export(void* args)
	{
		return TELEMETRY::_TELEMETRY_MATCH_NOMINATION(args);
	}
	void _TELEMETRY_CHAR_CREATOR_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return TELEMETRY::_TELEMETRY_CHAR_CREATOR(p0, p1, p2, p3, p4, p5, p6);
	}
	BOOL DOES_STREAMED_TXD_EXIST_Export(Hash txdHash)
	{
		return TXD::DOES_STREAMED_TXD_EXIST(txdHash);
	}
	void REQUEST_STREAMED_TXD_Export(Hash txdHash, BOOL p1)
	{
		return TXD::REQUEST_STREAMED_TXD(txdHash, p1);
	}
	BOOL HAS_STREAMED_TXD_LOADED_Export(Hash txdHash)
	{
		return TXD::HAS_STREAMED_TXD_LOADED(txdHash);
	}
	void SET_STREAMED_TXD_AS_NO_LONGER_NEEDED_Export(Hash txdHash)
	{
		return TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(txdHash);
	}
	BOOL DOES_STREAMED_TEXTURE_DICT_EXIST_Export(const char* textureDict)
	{
		return TXD::DOES_STREAMED_TEXTURE_DICT_EXIST(textureDict);
	}
	void REQUEST_STREAMED_TEXTURE_DICT_Export(const char* TxdName, BOOL bPriority)
	{
		return TXD::REQUEST_STREAMED_TEXTURE_DICT(TxdName, bPriority);
	}
	BOOL HAS_STREAMED_TEXTURE_DICT_LOADED_Export(const char* TxdName)
	{
		return TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(TxdName);
	}
	void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED_Export(const char* TxdName)
	{
		return TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(TxdName);
	}
	BOOL IS_UIAPP_ACTIVE_BY_HASH_Export(Hash appNameHash)
	{
		return UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(appNameHash);
	}
	BOOL IS_ANY_UIAPP_ACTIVE_Export()
	{
		return UIAPPS::IS_ANY_UIAPP_ACTIVE();
	}
	BOOL IS_UIAPP_RUNNING_BY_HASH_Export(Hash appNameHash)
	{
		return UIAPPS::IS_UIAPP_RUNNING_BY_HASH(appNameHash);
	}
	BOOL IS_UIAPP_RUNNING_Export(const char* appName)
	{
		return UIAPPS::IS_UIAPP_RUNNING(appName);
	}
	BOOL IS_ANY_UIAPP_RUNNING_Export()
	{
		return UIAPPS::IS_ANY_UIAPP_RUNNING();
	}
	Hash _GET_UIAPP_CURRENT_ACTIVITY_BY_HASH_Export(Hash appNameHash)
	{
		return UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(appNameHash);
	}
	void _CLOSE_UIAPP_BY_HASH_Export(Hash appNameHash)
	{
		return UIAPPS::_CLOSE_UIAPP_BY_HASH(appNameHash);
	}
	void _CLOSE_UIAPP_BY_HASH_IMMEDIATE_Export(Hash appNameHash)
	{
		return UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(appNameHash);
	}
	void _CLOSE_UIAPP_Export(const char* appName)
	{
		return UIAPPS::_CLOSE_UIAPP(appName);
	}
	void _CLOSE_UIAPP_IMMEDIATE_Export(const char* appName)
	{
		return UIAPPS::_CLOSE_UIAPP_IMMEDIATE(appName);
	}
	void _CLOSE_ALL_UIAPPS_Export()
	{
		return UIAPPS::_CLOSE_ALL_UIAPPS();
	}
	void _CLOSE_ALL_UIAPPS_IMMEDIATE_Export()
	{
		return UIAPPS::_CLOSE_ALL_UIAPPS_IMMEDIATE();
	}
	int LAUNCH_UIAPP_BY_HASH_WITH_ENTRY_Export(Hash appNameHash, Hash entryHash)
	{
		return UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(appNameHash, entryHash);
	}
	int LAUNCH_UIAPP_BY_HASH_Export(Hash appNameHash)
	{
		return UIAPPS::LAUNCH_UIAPP_BY_HASH(appNameHash);
	}
	int LAUNCH_UIAPP_WITH_ENTRY_Export(const char* appName, const char* entry)
	{
		return UIAPPS::LAUNCH_UIAPP_WITH_ENTRY(appName, entry);
	}
	BOOL CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY_Export(Hash appNameHash, Hash entryHash)
	{
		return UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(appNameHash, entryHash);
	}
	BOOL CAN_LAUNCH_UIAPP_BY_HASH_Export(Hash appNameHash)
	{
		return UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(appNameHash);
	}
	BOOL REQUEST_UIAPP_TRANSITION_BY_HASH_Export(Hash appNameHash, Hash transitionHash)
	{
		return UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(appNameHash, transitionHash);
	}
	BOOL IS_UIAPP_TRANSITIONING_BY_HASH_Export(Hash appNameHash)
	{
		return UIAPPS::IS_UIAPP_TRANSITIONING_BY_HASH(appNameHash);
	}
	void _BG_DISPLAY_TEXT_Export(const char* text, float x, float y)
	{
		return UIDEBUG::_BG_DISPLAY_TEXT(text, x, y);
	}
	void _BG_SET_TEXT_SCALE_Export(float scaleX, float scaleY)
	{
		return UIDEBUG::_BG_SET_TEXT_SCALE(scaleX, scaleY);
	}
	void _BG_SET_TEXT_COLOR_Export(int red, int green, int blue, int alpha)
	{
		return UIDEBUG::_BG_SET_TEXT_COLOR(red, green, blue, alpha);
	}
	BOOL EVENTS_UI_IS_PENDING_Export(Hash hash)
	{
		return UIEVENTS::EVENTS_UI_IS_PENDING(hash);
	}
	BOOL EVENTS_UI_GET_MESSAGE_Export(Hash hash, void* eventData)
	{
		return UIEVENTS::EVENTS_UI_GET_MESSAGE(hash, eventData);
	}
	BOOL EVENTS_UI_PEEK_MESSAGE_Export(Hash hash, void* eventData)
	{
		return UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, eventData);
	}
	void EVENTS_UI_POP_MESSAGE_Export(Hash hash)
	{
		return UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
	}
	int _UI_FEED_POST_HELP_TEXT_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_HELP_TEXT(p0, p1, p2);
	}
	int _UI_FEED_POST_LOCATION_SHARD_Export(void* duration, void* data, BOOL p2, BOOL p3)
	{
		return UIFEED::_UI_FEED_POST_LOCATION_SHARD(duration, data, p2, p3);
	}
	int _UI_FEED_POST_OBJECTIVE_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_OBJECTIVE(p0, p1, p2);
	}
	int _UI_FEED_POST_FEED_TICKER_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_FEED_TICKER(p0, p1, p2);
	}
	int _UI_FEED_POST_SAMPLE_TOAST_Export(void* p0, void* p1, BOOL p2, BOOL p3)
	{
		return UIFEED::_UI_FEED_POST_SAMPLE_TOAST(p0, p1, p2, p3);
	}
	int _0xAFF5BE9BA496CE40_Export(void* p0, void* p1, BOOL p2, BOOL p3, Hash collectableCategory)
	{
		return UIFEED::_0xAFF5BE9BA496CE40(p0, p1, p2, p3, collectableCategory);
	}
	int _UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK_Export(void* p0, void* p1, BOOL p2, BOOL p3, BOOL p4)
	{
		return UIFEED::_UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK(p0, p1, p2, p3, p4);
	}
	int _UI_FEED_POST_SAMPLE_NOTIFICATION_Export(void* p0, void* p1, int p2, int p3)
	{
		return UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(p0, p1, p2, p3);
	}
	int _UI_FEED_POST_RANKUP_TOAST_Export(void* p0, void* p1, int p2, int p3)
	{
		return UIFEED::_UI_FEED_POST_RANKUP_TOAST(p0, p1, p2, p3);
	}
	int _0x18D6869FBFFEC0F8_Export(void* p0, void* p1, BOOL p2, BOOL p3)
	{
		return UIFEED::_0x18D6869FBFFEC0F8(p0, p1, p2, p3);
	}
	int _UI_FEED_POST_SAMPLE_TOAST_RIGHT_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(p0, p1, p2);
	}
	int _UI_FEED_POST_MISSION_NAME_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_MISSION_NAME(p0, p1, p2);
	}
	int _UI_FEED_POST_RETICLE_MESSAGE_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_RETICLE_MESSAGE(p0, p1, p2);
	}
	int _UI_FEED_POST_ONE_TEXT_SHARD_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_ONE_TEXT_SHARD(p0, p1, p2);
	}
	int _UI_FEED_POST_TWO_TEXT_SHARD_Export(void* p0, void* p1, BOOL p2, BOOL p3)
	{
		return UIFEED::_UI_FEED_POST_TWO_TEXT_SHARD(p0, p1, p2, p3);
	}
	int _UI_FEED_POST_THREE_TEXT_SHARD_Export(void* p0, void* p1, BOOL p2, BOOL p3, BOOL p4)
	{
		return UIFEED::_UI_FEED_POST_THREE_TEXT_SHARD(p0, p1, p2, p3, p4);
	}
	int _UI_FEED_POST_GAME_UPDATE_SHARD_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_GAME_UPDATE_SHARD(p0, p1, p2);
	}
	int _UI_FEED_POST_VOICE_CHAT_FEED_Export(void* p0, void* p1, BOOL p2)
	{
		return UIFEED::_UI_FEED_POST_VOICE_CHAT_FEED(p0, p1, p2);
	}
	void UI_FEED_CLEAR_CHANNEL_Export(int feedChannel, BOOL p1, BOOL p2)
	{
		return UIFEED::UI_FEED_CLEAR_CHANNEL(feedChannel, p1, p2);
	}
	void _UI_FEED_CLEAR_ALL_CHANNELS_Export()
	{
		return UIFEED::_UI_FEED_CLEAR_ALL_CHANNELS();
	}
	void _UI_FEED_CLEAR_HELP_TEXT_FEED_Export(int feedMessage, BOOL p1)
	{
		return UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, p1);
	}
	void _0x6D85126F6CCF02C9_Export(int feedChannel, int p1, BOOL p2)
	{
		return UIFEED::_0x6D85126F6CCF02C9(feedChannel, p1, p2);
	}
	int _0x4E88A65968A55C78_Export(void* p0, BOOL p1)
	{
		return UIFEED::_0x4E88A65968A55C78(p0, p1);
	}
	int _0x0FD07141AD048AAE_Export(void* p0, BOOL p1)
	{
		return UIFEED::_0x0FD07141AD048AAE(p0, p1);
	}
	int _UI_FEED_GET_MESSAGE_STATE_Export(int feedMessage)
	{
		return UIFEED::_UI_FEED_GET_MESSAGE_STATE(feedMessage);
	}
	int UI_FEED_GET_CURRENT_MESSAGE_Export(int feedChannel)
	{
		return UIFEED::UI_FEED_GET_CURRENT_MESSAGE(feedChannel);
	}
	BOOL _0xB7223B91CD6B7E07_Export(int feedChannel)
	{
		return UIFEED::_0xB7223B91CD6B7E07(feedChannel);
	}
	BOOL _UILOG_IS_ENTRY_REGISTERED_Export(int p0, Hash p1)
	{
		return UILOG::_UILOG_IS_ENTRY_REGISTERED(p0, p1);
	}
	void _UILOG_ADD_ENTRY_HASH_Export(int p0, int p1, float x, float y, float z, Hash p5, Hash p6, Any p7)
	{
		return UILOG::_UILOG_ADD_ENTRY_HASH(p0, p1, x, y, z, p5, p6, p7);
	}
	void _UILOG_ADD_ITEM_TO_TASK_LIST_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		return UILOG::_UILOG_ADD_ITEM_TO_TASK_LIST(p0, p1, p2, p3, p4, p5, p6, p7);
	}
	void _UILOG_SET_ENTRY_ICON_TEXTURE_Export(int p0, Hash p1, Hash icon, Hash iconDictionary)
	{
		return UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(p0, p1, icon, iconDictionary);
	}
	void _UILOG_SET_ENTRY_BRIEF_TEXTURE_Export(int p0, Hash p1, Hash texture, Hash textureDictionary)
	{
		return UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(p0, p1, texture, textureDictionary);
	}
	void _UILOG_UPDATE_ENTRY_SUBHEADER_Export(int p0, Hash p1, const char* p2)
	{
		return UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(p0, p1, p2);
	}
	void _UILOG_SET_ENTRY_PINNED_Export(int p0, Hash p1, BOOL p2)
	{
		return UILOG::_UILOG_SET_ENTRY_PINNED(p0, p1, p2);
	}
	void _UILOG_MARK_MISSION_COMPLETED_Export(Hash p0)
	{
		return UILOG::_UILOG_MARK_MISSION_COMPLETED(p0);
	}
	void _UILOG_MARK_ENTRY_AVAILABILITY_Export(int p0, Hash p1, int p2, const char* p3)
	{
		return UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(p0, p1, p2, p3);
	}
	void _UILOG_MARK_ALL_ENTRIES_AVAILABILITY_Export(int p0, const char* p1)
	{
		return UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(p0, p1);
	}
	void _UILOG_REMOVE_ENTRY_Export(int p0, Hash p1)
	{
		return UILOG::_UILOG_REMOVE_ENTRY(p0, p1);
	}
	void _UILOG_SET_DISPLAY_COMPLETION_RATING_Export(int logEntryType, Hash p1, BOOL p2)
	{
		return UILOG::_UILOG_SET_DISPLAY_COMPLETION_RATING(logEntryType, p1, p2);
	}
	void _0xA49D6D503E3EA847_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return UILOG::_0xA49D6D503E3EA847(p0, p1, p2, p3, p4);
	}
	void _0x763637F9B838B0A7_Export(int p0, Hash p1, const char* p2)
	{
		return UILOG::_0x763637F9B838B0A7(p0, p1, p2);
	}
	void _UILOG_CLEAR_ALL_ENTRIES_Export()
	{
		return UILOG::_UILOG_CLEAR_ALL_ENTRIES();
	}
	void _UILOG_ADD_OR_UPDATE_OBJECTIVE_Export(int p0, Hash p1, Hash p2, const char* p3, BOOL p4, BOOL p5, BOOL p6)
	{
		return UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(p0, p1, p2, p3, p4, p5, p6);
	}
	void _0xA20398536B7F1134_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return UILOG::_0xA20398536B7F1134(p0, p1, p2, p3, p4, p5);
	}
	void _UILOG_SET_CACHED_OBJECTIVE_Export(const char* p0)
	{
		return UILOG::_UILOG_SET_CACHED_OBJECTIVE(p0);
	}
	void _UILOG_CLEAR_CACHED_OBJECTIVE_Export()
	{
		return UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	}
	BOOL _UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE_Export()
	{
		return UILOG::_UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE();
	}
	void _UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE_Export()
	{
		return UILOG::_UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE();
	}
	void _UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE_Export()
	{
		return UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
	}
	const char* _UILOG_GET_CACHED_OBJECTIVE_Export()
	{
		return UILOG::_UILOG_GET_CACHED_OBJECTIVE();
	}
	void _UILOG_PRINT_CACHED_OBJECTIVE_Export()
	{
		return UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	}
	Any _UILOG_SET_PENDING_DETAILS_ID_Export(int p0, Hash p1)
	{
		return UILOG::_UILOG_SET_PENDING_DETAILS_ID(p0, p1);
	}
	Any _0x2A4765812202E671_Export()
	{
		return UILOG::_0x2A4765812202E671();
	}
	void _UILOG_ADD_TOTAL_TAKE_ENTRY_Export(Hash p0, Hash p1, const char* p2, const char* p3, Hash p4)
	{
		return UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(p0, p1, p2, p3, p4);
	}
	void _UILOG_SET_TOTAL_TAKE_SUMMARY_Export(const char* p0, const char* p1)
	{
		return UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(p0, p1);
	}
	int _UILOG_POST_NOTIFICATION_Export(void* data)
	{
		return UILOG::_UILOG_POST_NOTIFICATION(data);
	}
	void _0xDA0A30153FCC0FFD_Export()
	{
		return UILOG::_0xDA0A30153FCC0FFD();
	}
	const char* _UIPINNING_GET_TOOLTIP_TEXT_Export(Hash hash)
	{
		return UIPINNING::_UIPINNING_GET_TOOLTIP_TEXT(hash);
	}
	BOOL _UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN_Export()
	{
		return UITUTORIAL::_UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN();
	}
	BOOL _UITUTORIAL_GET_IS_THREAT_INDICATOR_ON_Export()
	{
		return UITUTORIAL::_UITUTORIAL_GET_IS_THREAT_INDICATOR_ON();
	}
	void _UITUTORIAL_SET_RPG_ICON_VISIBILITY_Export(int rpgIcon, int visibility)
	{
		return UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(rpgIcon, visibility);
	}
	Any _UIFLOWBLOCK_REQUEST_Export(Any p0)
	{
		return UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(p0);
	}
	void _UIFLOWBLOCK_RELEASE_Export(Any p0)
	{
		return UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(p0);
	}
	Any _UIFLOWBLOCK_IS_LOADED_Export(Any p0)
	{
		return UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(p0);
	}
	Any _UIFLOWBLOCK_ENTER_Export(Any p0, Any p1)
	{
		return UISTATEMACHINE::_UIFLOWBLOCK_ENTER(p0, p1);
	}
	Any UI_STATE_MACHINE_EXISTS_Export(Any p0)
	{
		return UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(p0);
	}
	Any UI_STATE_MACHINE_CREATE_Export(Any p0, Any p1)
	{
		return UISTATEMACHINE::UI_STATE_MACHINE_CREATE(p0, p1);
	}
	Any UI_STATE_MACHINE_CAN_REQUEST_TRANSITION_Export(Any p0)
	{
		return UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(p0);
	}
	Any UI_STATE_MACHINE_REQUEST_TRANSITION_Export(Any p0, Any p1)
	{
		return UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(p0, p1);
	}
	void UI_STATE_MACHINE_REQUEST_EXIT_Export(Any p0, Any p1)
	{
		return UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_EXIT(p0, p1);
	}
	BOOL _UI_STATE_MACHINE_IS_EXITED_Export(Hash p0)
	{
		return UISTATEMACHINE::_UI_STATE_MACHINE_IS_EXITED(p0);
	}
	void UI_STATE_MACHINE_DESTROY_Export(Any p0)
	{
		return UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(p0);
	}
	void UI_STATE_MACHINE_DESTROY_AND_CLEAR_Export(void* p0)
	{
		return UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(p0);
	}
	int _UI_STICKY_FEED_CREATE_ERROR_MESSAGE_Export(void* p0, void* p1, BOOL p2)
	{
		return UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(p0, p1, p2);
	}
	int _UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE_Export(void* p0, void* p1, BOOL p2)
	{
		return UISTICKYFEED::_UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE(p0, p1, p2);
	}
	int _UI_STICKY_FEED_CREATE_WARNING_MESSAGE_Export(void* p0, void* p1, BOOL p2)
	{
		return UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(p0, p1, p2);
	}
	void _UI_STICKY_FEED_UPDATE_MESSAGE_Export(int msgId, void* p1, BOOL p2)
	{
		return UISTICKYFEED::_UI_STICKY_FEED_UPDATE_MESSAGE(msgId, p1, p2);
	}
	void _UI_STICKY_FEED_CLEAR_MESSAGE_Export(int msgId)
	{
		return UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(msgId);
	}
	BOOL _UI_STICKY_FEED_IS_CHANNEL_ACTIVE_Export(int stickyFeedChannel)
	{
		return UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(stickyFeedChannel);
	}
	BOOL _UI_STICKY_FEED_IS_ALERT_SCREEN_ACTIVE_Export()
	{
		return UISTICKYFEED::_UI_STICKY_FEED_IS_ALERT_SCREEN_ACTIVE();
	}
	int _UI_STICKY_FEED_GET_MESSAGE_STATE_Export(int msgId)
	{
		return UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(msgId);
	}
	BOOL _UNLOCK_IS_UNLOCK_FLAG_SET_Export(Hash unlockHash, int flag)
	{
		return UNLOCK::_UNLOCK_IS_UNLOCK_FLAG_SET(unlockHash, flag);
	}
	BOOL UNLOCK_IS_UNLOCKED_Export(Hash unlockHash)
	{
		return UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash);
	}
	void UNLOCK_SET_UNLOCKED_Export(Hash unlockHash, BOOL toggle)
	{
		return UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, toggle);
	}
	BOOL UNLOCK_IS_VISIBLE_Export(Hash unlockHash)
	{
		return UNLOCK::UNLOCK_IS_VISIBLE(unlockHash);
	}
	void UNLOCK_SET_VISIBLE_Export(Hash unlockHash, BOOL toggle)
	{
		return UNLOCK::UNLOCK_SET_VISIBLE(unlockHash, toggle);
	}
	BOOL _UNLOCK_IS_NEW_Export(Hash unlockHash)
	{
		return UNLOCK::_UNLOCK_IS_NEW(unlockHash);
	}
	void _UNLOCK_SET_NEW_Export(Hash unlockHash, BOOL toggle)
	{
		return UNLOCK::_UNLOCK_SET_NEW(unlockHash, toggle);
	}
	BOOL _UNLOCK_IS_LOOTABLE_Export(Hash unlockHash)
	{
		return UNLOCK::_UNLOCK_IS_LOOTABLE(unlockHash);
	}
	void _UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO_Export(Hash unlockHash, void* outData)
	{
		return UNLOCK::_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO(unlockHash, outData);
	}
	void _0x6355602C02EDC6DF_Export(Entity entity, Any p1)
	{
		return VEHICLE::_0x6355602C02EDC6DF(entity, p1);
	}
	void _SET_VEHICLE_IS_IN_HURRY_Export(Vehicle vehicle, BOOL enabled)
	{
		return VEHICLE::_SET_VEHICLE_IS_IN_HURRY(vehicle, enabled);
	}
	Vehicle CREATE_VEHICLE_Export(Hash ModelHashKey, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float fVehicleHeading, BOOL RegisterAsNetworkObject, BOOL ScriptHostObject, BOOL bDontAutoCreateDraftAnimals, BOOL p8)
	{
		return VEHICLE::CREATE_VEHICLE(ModelHashKey, VecCoorsX, VecCoorsY, VecCoorsZ, fVehicleHeading, RegisterAsNetworkObject, ScriptHostObject, bDontAutoCreateDraftAnimals, p8);
	}
	Vehicle _CREATE_DRAFT_VEHICLE_Export(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL bDontAutoCreateDraftAnimals, Hash draftAnimalPopGroup, BOOL p9)
	{
		return VEHICLE::_CREATE_DRAFT_VEHICLE(modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, bDontAutoCreateDraftAnimals, draftAnimalPopGroup, p9);
	}
	void DELETE_VEHICLE_Export(Vehicle* VehicleIndex)
	{
		return VEHICLE::DELETE_VEHICLE(VehicleIndex);
	}
	void _FADE_AND_DESTROY_VEHICLE_Export(Vehicle* vehicle)
	{
		return VEHICLE::_FADE_AND_DESTROY_VEHICLE(vehicle);
	}
	BOOL _IS_VEHICLE_FADING_OUT_Export(Vehicle vehicle)
	{
		return VEHICLE::_IS_VEHICLE_FADING_OUT(vehicle);
	}
	void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_Export(Vehicle VehicleIndex, BOOL bAllowHomingMissileLockon)
	{
		return VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(VehicleIndex, bAllowHomingMissileLockon);
	}
	void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON_Export(Vehicle VehicleIndex, BOOL bAllowLockon)
	{
		return VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(VehicleIndex, bAllowLockon);
	}
	BOOL IS_VEHICLE_MODEL_Export(Vehicle VehicleIndex, Hash ModelHashKey)
	{
		return VEHICLE::IS_VEHICLE_MODEL(VehicleIndex, ModelHashKey);
	}
	void _SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME_Export(Volume volume, BOOL toggle)
	{
		return VEHICLE::_SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME(volume, toggle);
	}
	void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, BOOL bActive, BOOL bSyncOverNetwork)
	{
		return VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bActive, bSyncOverNetwork);
	}
	void SET_ALL_VEHICLE_GENERATORS_ACTIVE_Export()
	{
		return VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	}
	BOOL SET_VEHICLE_ON_GROUND_PROPERLY_Export(Vehicle VehicleIndex, float hightSampleRangeUp)
	{
		return VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(VehicleIndex, hightSampleRangeUp);
	}
	BOOL IS_VEHICLE_STOPPED_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::IS_VEHICLE_STOPPED(VehicleIndex);
	}
	int GET_VEHICLE_NUMBER_OF_PASSENGERS_Export(Vehicle vehicle)
	{
		return VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehicle);
	}
	int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(VehicleIndex);
	}
	int GET_VEHICLE_MODEL_NUMBER_OF_SEATS_Export(Hash VehicleModelHashKey)
	{
		return VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(VehicleModelHashKey);
	}
	BOOL IS_SEAT_WARP_ONLY_Export(Vehicle VehicleIndex, int seat)
	{
		return VEHICLE::IS_SEAT_WARP_ONLY(VehicleIndex, seat);
	}
	BOOL _GET_VEHICLE_TURRET_SEAT_Export(Vehicle vehicle, int* seatIndex)
	{
		return VEHICLE::_GET_VEHICLE_TURRET_SEAT(vehicle, seatIndex);
	}
	Any _0xA9E185D498B9AC67_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xA9E185D498B9AC67(p0, p1);
	}
	void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME_Export(float DensityMultiplier)
	{
		return VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(DensityMultiplier);
	}
	void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME_Export(float DensityMultiplier)
	{
		return VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(DensityMultiplier);
	}
	void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME_Export(float DensityMultiplier)
	{
		return VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(DensityMultiplier);
	}
	void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME_Export(BOOL bVal)
	{
		return VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(bVal);
	}
	void SET_VEHICLE_DOORS_LOCKED_Export(Vehicle VehicleIndex, int NewLockState)
	{
		return VEHICLE::SET_VEHICLE_DOORS_LOCKED(VehicleIndex, NewLockState);
	}
	void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED_Export(Vehicle VehicleIndex, int DoorIndex, int NewLockState)
	{
		return VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(VehicleIndex, DoorIndex, NewLockState);
	}
	void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER_Export(Vehicle VehicleIndex, Player PlayerIndex, BOOL Locked)
	{
		return VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(VehicleIndex, PlayerIndex, Locked);
	}
	BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER_Export(Vehicle VehicleIndex, Player PlayerIndex)
	{
		return VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(VehicleIndex, PlayerIndex);
	}
	void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS_Export(Vehicle VehicleIndex, BOOL Locked)
	{
		return VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(VehicleIndex, Locked);
	}
	void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM_Export(Vehicle VehicleIndex, int TeamIndex, BOOL Locked)
	{
		return VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(VehicleIndex, TeamIndex, Locked);
	}
	BOOL _GET_VEHICLE_DOORS_LOCKED_FOR_TEAM_Export(Vehicle vehicle, int team)
	{
		return VEHICLE::_GET_VEHICLE_DOORS_LOCKED_FOR_TEAM(vehicle, team);
	}
	void EXPLODE_VEHICLE_Export(Vehicle VehicleIndex, BOOL isAudible, BOOL isInvisible, Any p3, Any p4)
	{
		return VEHICLE::EXPLODE_VEHICLE(VehicleIndex, isAudible, isInvisible, p3, p4);
	}
	void _0x750D42C013F64AE7_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x750D42C013F64AE7(p0, p1);
	}
	void _0xE78993FF9022C064_Export(Any p0)
	{
		return VEHICLE::_0xE78993FF9022C064(p0);
	}
	void _0x9868C0D0134855F7_Export(Any p0)
	{
		return VEHICLE::_0x9868C0D0134855F7(p0);
	}
	void _HIDE_HORSE_REINS_Export(Vehicle vehicle)
	{
		return VEHICLE::_HIDE_HORSE_REINS(vehicle);
	}
	void _SHOW_HORSE_REINS_Export(Vehicle vehicle)
	{
		return VEHICLE::_SHOW_HORSE_REINS(vehicle);
	}
	void _0xD21A3D421E7F09F7_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xD21A3D421E7F09F7(p0, p1);
	}
	void _0xA13028E22564A1BD_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xA13028E22564A1BD(p0, p1);
	}
	void _0x485B05EF05B9AEE9_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x485B05EF05B9AEE9(p0, p1);
	}
	void SET_BOAT_ANCHOR_Export(Vehicle VehicleIndex, BOOL AnchoredFlag)
	{
		return VEHICLE::SET_BOAT_ANCHOR(VehicleIndex, AnchoredFlag);
	}
	void _0x6B53F4B811E583D2_Export(Vehicle vehicle, BOOL toggle)
	{
		return VEHICLE::_0x6B53F4B811E583D2(vehicle, toggle);
	}
	BOOL CAN_ANCHOR_BOAT_HERE_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::CAN_ANCHOR_BOAT_HERE(VehicleIndex);
	}
	void SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER_Export(Vehicle VehicleIndex, BOOL ForcePlayerBoatAnchorFlag, BOOL p2)
	{
		return VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(VehicleIndex, ForcePlayerBoatAnchorFlag, p2);
	}
	void SET_FORCE_LOW_LOD_ANCHOR_MODE_Export(Vehicle VehicleIndex, BOOL ForcePlayerLowLodAnchorFlag)
	{
		return VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(VehicleIndex, ForcePlayerLowLodAnchorFlag);
	}
	void SET_BOAT_LOW_LOD_ANCHOR_DISTANCE_Export(Vehicle VehicleIndex, float LodDistance)
	{
		return VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(VehicleIndex, LodDistance);
	}
	void SET_BOAT_SINKS_WHEN_WRECKED_Export(Vehicle VehicleIndex, BOOL ShouldSink)
	{
		return VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(VehicleIndex, ShouldSink);
	}
	void _SET_FORCE_HIGH_LOD_VEHICLE_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_SET_FORCE_HIGH_LOD_VEHICLE(vehicle, p1);
	}
	void _0x98A7598C579EE871_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0x98A7598C579EE871(p0, p1, p2);
	}
	void _0x9E8711C81AA17876_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0x9E8711C81AA17876(vehicle, p1);
	}
	void SET_VEHICLE_STRONG_Export(Vehicle VehicleIndex, BOOL StrongFlag)
	{
		return VEHICLE::SET_VEHICLE_STRONG(VehicleIndex, StrongFlag);
	}
	BOOL IS_VEHICLE_SEAT_FREE_Export(Vehicle VehicleIndex, int seat)
	{
		return VEHICLE::IS_VEHICLE_SEAT_FREE(VehicleIndex, seat);
	}
	Ped GET_PED_IN_VEHICLE_SEAT_Export(Vehicle VehicleIndex, int seat)
	{
		return VEHICLE::GET_PED_IN_VEHICLE_SEAT(VehicleIndex, seat);
	}
	Ped GET_LAST_PED_IN_VEHICLE_SEAT_Export(Vehicle VehicleIndex, int seat)
	{
		return VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(VehicleIndex, seat);
	}
	BOOL IS_DRAFT_VEHICLE_Export(Vehicle vehicle)
	{
		return VEHICLE::IS_DRAFT_VEHICLE(vehicle);
	}
	Ped _GET_PED_IN_DRAFT_HARNESS_Export(Vehicle vehicle, int harnessId)
	{
		return VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehicle, harnessId);
	}
	void SET_VEHICLE_FORWARD_SPEED_Export(Vehicle VehicleIndex, float CarSpeed)
	{
		return VEHICLE::SET_VEHICLE_FORWARD_SPEED(VehicleIndex, CarSpeed);
	}
	void BRING_VEHICLE_TO_HALT_Export(Vehicle VehicleIndex, float StoppingDistance, int nTimeToStopFor, BOOL ControlVerticalVelocity)
	{
		return VEHICLE::BRING_VEHICLE_TO_HALT(VehicleIndex, StoppingDistance, nTimeToStopFor, ControlVerticalVelocity);
	}
	BOOL _IS_VEHICLE_BROUGHT_TO_HALT_Export(Vehicle vehicle)
	{
		return VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(vehicle);
	}
	void STOP_BRINGING_VEHICLE_TO_HALT_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(VehicleIndex);
	}
	void _0xE12F5ED49F44D40D_Export(Any p0)
	{
		return VEHICLE::_0xE12F5ED49F44D40D(p0);
	}
	void _0xF6E3D38869D0F7AD_Export(Any p0)
	{
		return VEHICLE::_0xF6E3D38869D0F7AD(p0);
	}
	void SET_VEHICLE_DOORS_SHUT_Export(Vehicle VehicleIndex, BOOL bShutInstantly)
	{
		return VEHICLE::SET_VEHICLE_DOORS_SHUT(VehicleIndex, bShutInstantly);
	}
	void SET_VEHICLE_TYRES_CAN_BURST_Export(Vehicle VehicleIndex, BOOL CanBurstTyresFlag)
	{
		return VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehicleIndex, CanBurstTyresFlag);
	}
	void SET_VEHICLE_WHEELS_CAN_BREAK_Export(Vehicle VehicleIndex, BOOL CanBreakWheelsFlag)
	{
		return VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(VehicleIndex, CanBreakWheelsFlag);
	}
	void SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE_Export(Vehicle vehicle, BOOL toggle)
	{
		return VEHICLE::SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE(vehicle, toggle);
	}
	void SET_VEHICLE_DOOR_OPEN_Export(Vehicle VehicleIndex, int DoorNumber, BOOL SwingFree, BOOL Instant)
	{
		return VEHICLE::SET_VEHICLE_DOOR_OPEN(VehicleIndex, DoorNumber, SwingFree, Instant);
	}
	void REMOVE_VEHICLE_WINDOW_Export(Vehicle VehicleIndex, int WindowNumber)
	{
		return VEHICLE::REMOVE_VEHICLE_WINDOW(VehicleIndex, WindowNumber);
	}
	void _0x8878FF3EEE2868A9_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x8878FF3EEE2868A9(p0, p1);
	}
	void _SET_VEHICLE_DIRT_LEVEL_2_Export(Vehicle vehicle, float dirtLevel)
	{
		return VEHICLE::_SET_VEHICLE_DIRT_LEVEL_2(vehicle, dirtLevel);
	}
	void _SET_VEHICLE_MUD_LEVEL_Export(Vehicle vehicle, float mudLevel)
	{
		return VEHICLE::_SET_VEHICLE_MUD_LEVEL(vehicle, mudLevel);
	}
	void SET_VEHICLE_LIGHTS_Export(Vehicle VehicleIndex, int CarLightSetting)
	{
		return VEHICLE::SET_VEHICLE_LIGHTS(VehicleIndex, CarLightSetting);
	}
	void SET_RANDOM_TRAINS_Export(BOOL RandomTrainsFlag)
	{
		return VEHICLE::SET_RANDOM_TRAINS(RandomTrainsFlag);
	}
	int _0x331CBD247FC5DAA8_Export(Hash configHash, float x, float y, float z, BOOL direction, BOOL p5)
	{
		return VEHICLE::_0x331CBD247FC5DAA8(configHash, x, y, z, direction, p5);
	}
	BOOL _0x0516FAE561276EFC_Export(int trackIndex)
	{
		return VEHICLE::_0x0516FAE561276EFC(trackIndex);
	}
	int _GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE_Export(Vehicle train)
	{
		return VEHICLE::_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE(train);
	}
	Vehicle _GET_TRAIN_VEHICLE_FROM_TRACK_INDEX_Export(int trackIndex)
	{
		return VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(trackIndex);
	}
	void _0x15206E88FF7617DF_Export(int trackIndex, float p1)
	{
		return VEHICLE::_0x15206E88FF7617DF(trackIndex, p1);
	}
	void _0xA7966807953A18EE_Export(int trackIndex, float p1)
	{
		return VEHICLE::_0xA7966807953A18EE(trackIndex, p1);
	}
	void _0x6B34BE961F639E21_Export(int trackIndex, int p1)
	{
		return VEHICLE::_0x6B34BE961F639E21(trackIndex, p1);
	}
	void _0xE6BD7DD3FD474415_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0xE6BD7DD3FD474415(train, p1);
	}
	void _0x615B3B8E73634509_Export(int trackIndex, float p1)
	{
		return VEHICLE::_0x615B3B8E73634509(trackIndex, p1);
	}
	void _0x38E7DD70A242D5CB_Export(int trackIndex, int p1)
	{
		return VEHICLE::_0x38E7DD70A242D5CB(trackIndex, p1);
	}
	void _0x63509DDF102E08E8_Export(int trackIndex, int p1)
	{
		return VEHICLE::_0x63509DDF102E08E8(trackIndex, p1);
	}
	void _0x7408B5C66BA31ADB_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		return VEHICLE::_0x7408B5C66BA31ADB(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	void _0x41365DB586CD9E8E_Export(int trackIndex, float p1)
	{
		return VEHICLE::_0x41365DB586CD9E8E(trackIndex, p1);
	}
	void _0xD0AABE5B9F8FA589_Export(int trackIndex, float p1)
	{
		return VEHICLE::_0xD0AABE5B9F8FA589(trackIndex, p1);
	}
	void _0x427C919E9809E370_Export(int trackIndex, int p1)
	{
		return VEHICLE::_0x427C919E9809E370(trackIndex, p1);
	}
	BOOL _DOES_TRAIN_EXIST_ON_TRACK_Export(int trackIndex)
	{
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(trackIndex);
	}
	scrVector _GET_TRAIN_POSITION_ON_TRACK_Export(int trackIndex)
	{
		return VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(trackIndex);
	}
	BOOL _0xB4241AD8F5AEE9ED_Export(int trackIndex)
	{
		return VEHICLE::_0xB4241AD8F5AEE9ED(trackIndex);
	}
	void _0xA230A5DDE12ED374_Export(Any p0)
	{
		return VEHICLE::_0xA230A5DDE12ED374(p0);
	}
	void _0x0D5FDF0D36FA10CD_Export(int trackIndex)
	{
		return VEHICLE::_0x0D5FDF0D36FA10CD(trackIndex);
	}
	void _0xE682002DB1F30669_Export(Any p0)
	{
		return VEHICLE::_0xE682002DB1F30669(p0);
	}
	void _0x718EB706B6E998A0_Export(int trackIndex)
	{
		return VEHICLE::_0x718EB706B6E998A0(trackIndex);
	}
	BOOL _0xF05DFAF1ADFEF2CD_Export(Hash trainConfig, float x, float y, float z, BOOL direction, BOOL p5)
	{
		return VEHICLE::_0xF05DFAF1ADFEF2CD(trainConfig, x, y, z, direction, p5);
	}
	Any _0xD1DF5E54F4ACBE1A_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return VEHICLE::_0xD1DF5E54F4ACBE1A(p0, p1, p2, p3, p4, p5, p6);
	}
	Any _0x0FDDEE66E3465726_Export(Any p0)
	{
		return VEHICLE::_0x0FDDEE66E3465726(p0);
	}
	void _0x4C05B42A8D937796_Export()
	{
		return VEHICLE::_0x4C05B42A8D937796();
	}
	void _0xB961DD799A837BD7_Export()
	{
		return VEHICLE::_0xB961DD799A837BD7();
	}
	void _0x16B86A49E072AA85_Export()
	{
		return VEHICLE::_0x16B86A49E072AA85();
	}
	void _0x2A7413168F6CD5A8_Export()
	{
		return VEHICLE::_0x2A7413168F6CD5A8();
	}
	void _0xFFFE15B433300B8C_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0xFFFE15B433300B8C(p0, p1, p2);
	}
	void _0x6EA1273D525427F4_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0x6EA1273D525427F4(p0, p1, p2);
	}
	Any _0x7BE0746539DEF0C8_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x7BE0746539DEF0C8(p0, p1);
	}
	void _0x3137EDC899E6DAE4_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x3137EDC899E6DAE4(p0, p1);
	}
	int _0x6C87F49BFA181DB5_Export(float x, float y, float z)
	{
		return VEHICLE::_0x6C87F49BFA181DB5(x, y, z);
	}
	int _GET_TRACK_INDEX_FROM_COORDS_Export(float x, float y, float z)
	{
		return VEHICLE::_GET_TRACK_INDEX_FROM_COORDS(x, y, z);
	}
	scrVector _GET_NEAREST_TRAIN_TRACK_POSITION_Export(float x, float y, float z)
	{
		return VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(x, y, z);
	}
	void DELETE_ALL_TRAINS_Export()
	{
		return VEHICLE::DELETE_ALL_TRAINS();
	}
	Any _0x0E558D3A49D759D6_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x0E558D3A49D759D6(p0, p1);
	}
	void _0xD4907EF4334C7602_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xD4907EF4334C7602(p0, p1);
	}
	void _0x68830738A6BFB370_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x68830738A6BFB370(p0, p1);
	}
	void SET_TRAIN_SPEED_Export(Vehicle VehicleIndex, float NewTrainSpeed)
	{
		return VEHICLE::SET_TRAIN_SPEED(VehicleIndex, NewTrainSpeed);
	}
	void _SET_TRAIN_MAX_SPEED_Export(Vehicle train, float speed)
	{
		return VEHICLE::_SET_TRAIN_MAX_SPEED(train, speed);
	}
	void SET_TRAIN_CRUISE_SPEED_Export(Vehicle VehicleIndex, float NewTrainCruiseSpeed)
	{
		return VEHICLE::SET_TRAIN_CRUISE_SPEED(VehicleIndex, NewTrainCruiseSpeed);
	}
	int _GET_TRAIN_CARRIAGE_TRAILER_NUMBER_Export(Vehicle train)
	{
		return VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(train);
	}
	Hash _GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX_Export(Hash trainConfig, int trainCarIndex)
	{
		return VEHICLE::_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX(trainConfig, trainCarIndex);
	}
	int _GET_NUM_CARS_FROM_TRAIN_CONFIG_Export(Hash trainConfig)
	{
		return VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(trainConfig);
	}
	Entity _GET_TRAIN_CAR_Export(Vehicle train)
	{
		return VEHICLE::_GET_TRAIN_CAR(train);
	}
	void _SET_TRAIN_STOPS_FOR_STATIONS_Export(Vehicle train, BOOL toggle)
	{
		return VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(train, toggle);
	}
	void _0xDD100CE1EBBF37E3_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xDD100CE1EBBF37E3(p0, p1);
	}
	void _0x160C1B5AB48AB87C_Export(Vehicle train, float p1)
	{
		return VEHICLE::_0x160C1B5AB48AB87C(train, p1);
	}
	BOOL IS_TRAIN_WAITING_AT_STATION_Export(Vehicle train)
	{
		return VEHICLE::IS_TRAIN_WAITING_AT_STATION(train);
	}
	void _SET_TRAIN_HALT_Export(Vehicle train)
	{
		return VEHICLE::_SET_TRAIN_HALT(train);
	}
	void _SET_TRAIN_LEAVE_STATION_Export(Vehicle train)
	{
		return VEHICLE::_SET_TRAIN_LEAVE_STATION(train);
	}
	void SET_RANDOM_BOATS_Export(BOOL RandomBoatsFlag)
	{
		return VEHICLE::SET_RANDOM_BOATS(RandomBoatsFlag);
	}
	void REQUEST_VEHICLE_RECORDING_Export(int FileNumber, const char* pRecordingName)
	{
		return VEHICLE::REQUEST_VEHICLE_RECORDING(FileNumber, pRecordingName);
	}
	BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED_Export(int FileNumber, const char* pRecordingName)
	{
		return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(FileNumber, pRecordingName);
	}
	void REMOVE_VEHICLE_RECORDING_Export(int FileNumber, const char* pRecordingName)
	{
		return VEHICLE::REMOVE_VEHICLE_RECORDING(FileNumber, pRecordingName);
	}
	scrVector GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME_Export(int iRecordingNumber, float fTime, const char* pRecordingName)
	{
		return VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iRecordingNumber, fTime, pRecordingName);
	}
	scrVector GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME_Export(int iRecordingNumber, float fTime, const char* pRecordingName)
	{
		return VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iRecordingNumber, fTime, pRecordingName);
	}
	float GET_TIME_POSITION_IN_RECORDING_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::GET_TIME_POSITION_IN_RECORDING(VehicleIndex);
	}
	void START_PLAYBACK_RECORDED_VEHICLE_Export(Vehicle VehicleIndex, int FileNumber, const char* pRecordingName, BOOL DoPlaceOnRoadAdjustment)
	{
		return VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(VehicleIndex, FileNumber, pRecordingName, DoPlaceOnRoadAdjustment);
	}
	void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE_Export(Vehicle VehicleIndex, BOOL DoPlaceOnRoadAdjustment)
	{
		return VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(VehicleIndex, DoPlaceOnRoadAdjustment);
	}
	void STOP_PLAYBACK_RECORDED_VEHICLE_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(VehicleIndex);
	}
	BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(VehicleIndex);
	}
	BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(VehicleIndex);
	}
	void SET_PLAYBACK_SPEED_Export(Vehicle VehicleIndex, float PlaybackSpeed)
	{
		return VEHICLE::SET_PLAYBACK_SPEED(VehicleIndex, PlaybackSpeed);
	}
	void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE_Export(Vehicle VehicleIndex, float TimeSkip)
	{
		return VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(VehicleIndex, TimeSkip);
	}
	Vehicle GET_CLOSEST_VEHICLE_Export(float CentreX, float CentreY, float CentreZ, float Radius, Hash VehicleModelHashKey, int SearchFlags)
	{
		return VEHICLE::GET_CLOSEST_VEHICLE(CentreX, CentreY, CentreZ, Radius, VehicleModelHashKey, SearchFlags);
	}
	Vehicle GET_TRAIN_CARRIAGE_Export(Vehicle TrainEngineIndex, int CarriageNumber)
	{
		return VEHICLE::GET_TRAIN_CARRIAGE(TrainEngineIndex, CarriageNumber);
	}
	void DELETE_MISSION_TRAIN_Export(Vehicle* TrainIndex)
	{
		return VEHICLE::DELETE_MISSION_TRAIN(TrainIndex);
	}
	void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED_Export(Vehicle* TrainIndex, int iFlags)
	{
		return VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(TrainIndex, iFlags);
	}
	void SET_MISSION_TRAIN_COORDS_Export(Vehicle TrainIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ)
	{
		return VEHICLE::SET_MISSION_TRAIN_COORDS(TrainIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ);
	}
	void _SET_MISSION_TRAIN_WARP_TO_COORDS_Export(Vehicle train, float x, float y, float z, BOOL direction)
	{
		return VEHICLE::_SET_MISSION_TRAIN_WARP_TO_COORDS(train, x, y, z, direction);
	}
	void _0xA72B1BF3857B94D7_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0xA72B1BF3857B94D7(train, p1);
	}
	BOOL _IS_THIS_MODEL_A_DRAFT_VEHICLE_Export(Hash model)
	{
		return VEHICLE::_IS_THIS_MODEL_A_DRAFT_VEHICLE(model);
	}
	BOOL IS_THIS_MODEL_A_BOAT_Export(Hash VehicleModelHashKey)
	{
		return VEHICLE::IS_THIS_MODEL_A_BOAT(VehicleModelHashKey);
	}
	BOOL IS_THIS_MODEL_A_TRAIN_Export(Hash VehicleModelHashKey)
	{
		return VEHICLE::IS_THIS_MODEL_A_TRAIN(VehicleModelHashKey);
	}
	void SET_VEHICLE_CAN_BE_TARGETTED_Export(Vehicle VehicleIndex, BOOL CanBeTargettedFlag)
	{
		return VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(VehicleIndex, CanBeTargettedFlag);
	}
	void SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER_Export(Vehicle VehicleIndex, BOOL DontAllowPlayerToEnter)
	{
		return VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(VehicleIndex, DontAllowPlayerToEnter);
	}
	void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED_Export(Vehicle VehicleIndex, BOOL VisibleDamageFlag)
	{
		return VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(VehicleIndex, VisibleDamageFlag);
	}
	void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS_Export(Vehicle VehicleIndex, BOOL UnbreakableLightFlag)
	{
		return VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(VehicleIndex, UnbreakableLightFlag);
	}
	void SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER_Export(Vehicle VehicleIndex, BOOL RespectLocks)
	{
		return VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(VehicleIndex, RespectLocks);
	}
	void SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED_Export(Vehicle VehicleIndex, BOOL RespectLocks)
	{
		return VEHICLE::SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(VehicleIndex, RespectLocks);
	}
	void SET_VEHICLE_DIRT_LEVEL_Export(Vehicle VehicleIndex, float DirtLevel)
	{
		return VEHICLE::SET_VEHICLE_DIRT_LEVEL(VehicleIndex, DirtLevel);
	}
	BOOL IS_VEHICLE_DOOR_FULLY_OPEN_Export(Vehicle VehicleIndex, int DoorNumber)
	{
		return VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(VehicleIndex, DoorNumber);
	}
	void SET_VEHICLE_ENGINE_ON_Export(Vehicle VehicleIndex, BOOL EngineOnFlag, BOOL bNoDelay)
	{
		return VEHICLE::SET_VEHICLE_ENGINE_ON(VehicleIndex, EngineOnFlag, bNoDelay);
	}
	void SET_VEHICLE_UNDRIVEABLE_Export(Vehicle VehicleIndex, BOOL UnDriveableFlag)
	{
		return VEHICLE::SET_VEHICLE_UNDRIVEABLE(VehicleIndex, UnDriveableFlag);
	}
	void SET_VEHICLE_PROVIDES_COVER_Export(Vehicle VehicleIndex, BOOL ProvidesCoverFlag)
	{
		return VEHICLE::SET_VEHICLE_PROVIDES_COVER(VehicleIndex, ProvidesCoverFlag);
	}
	void _0x3053064F909B5F42_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x3053064F909B5F42(p0, p1);
	}
	void SET_VEHICLE_DOOR_CONTROL_Export(Vehicle VehicleIndex, int DoorNumber, int DoorStatus, float AngleRatio)
	{
		return VEHICLE::SET_VEHICLE_DOOR_CONTROL(VehicleIndex, DoorNumber, DoorStatus, AngleRatio);
	}
	void SET_VEHICLE_DOOR_LATCHED_Export(Vehicle VehicleIndex, int DoorNumber, BOOL SetLatched, BOOL WillAutoLatch, BOOL bApplyForceForDoorClosed)
	{
		return VEHICLE::SET_VEHICLE_DOOR_LATCHED(VehicleIndex, DoorNumber, SetLatched, WillAutoLatch, bApplyForceForDoorClosed);
	}
	void SET_VEHICLE_DOOR_SHUT_Export(Vehicle VehicleIndex, int DoorNumber, BOOL bShutInstantly)
	{
		return VEHICLE::SET_VEHICLE_DOOR_SHUT(VehicleIndex, DoorNumber, bShutInstantly);
	}
	void SET_VEHICLE_DOOR_BROKEN_Export(Vehicle VehicleIndex, int DoorNumber, BOOL bDissapear)
	{
		return VEHICLE::SET_VEHICLE_DOOR_BROKEN(VehicleIndex, DoorNumber, bDissapear);
	}
	void SET_VEHICLE_CAN_BREAK_Export(Vehicle VehicleIndex, BOOL bAllowBreaking)
	{
		return VEHICLE::SET_VEHICLE_CAN_BREAK(VehicleIndex, bAllowBreaking);
	}
	void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER_Export(Vehicle VehicleIndex, BOOL ConsideredByPlayerFlag)
	{
		return VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(VehicleIndex, ConsideredByPlayerFlag);
	}
	void SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS_Export(Vehicle VehicleIndex, BOOL bState)
	{
		return VEHICLE::SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(VehicleIndex, bState);
	}
	int GET_VEHICLE_DOOR_LOCK_STATUS_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(VehicleIndex);
	}
	void SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF_Export(Vehicle VehicleIndex, int DoorNumber, BOOL bDoorBreakageAllowed)
	{
		return VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(VehicleIndex, DoorNumber, bDoorBreakageAllowed);
	}
	BOOL IS_VEHICLE_ON_ALL_WHEELS_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(VehicleIndex);
	}
	BOOL _GET_TRAIN_DIRECTION_Export(Vehicle train)
	{
		return VEHICLE::_GET_TRAIN_DIRECTION(train);
	}
	BOOL _GET_TRAIN_DIRECTION_FROM_INDEX_Export(int trackIndex)
	{
		return VEHICLE::_GET_TRAIN_DIRECTION_FROM_INDEX(trackIndex);
	}
	Any _0x09034479E6E3E269_Export(Vehicle train, Hash* trainTrack, int* junctionIndex)
	{
		return VEHICLE::_0x09034479E6E3E269(train, trainTrack, junctionIndex);
	}
	BOOL _GET_TRAIN_TRACK_JUNCTION_AT_COORDS_Export(Hash trainTrack, float x, float y, float z, int* junctionIndex)
	{
		return VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(trainTrack, x, y, z, junctionIndex);
	}
	Any _0xD9BF3ED8EFB67EA3_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return VEHICLE::_0xD9BF3ED8EFB67EA3(p0, p1, p2, p3, p4);
	}
	scrVector _0x785639D89F8451AB_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x785639D89F8451AB(p0, p1);
	}
	void _SET_TRAIN_TRACK_JUNCTION_SWITCH_Export(Hash trainTrack, int junctionIndex, BOOL enabled)
	{
		return VEHICLE::_SET_TRAIN_TRACK_JUNCTION_SWITCH(trainTrack, junctionIndex, enabled);
	}
	void _0x3ABFA128F5BF5A70_Export(Hash trainTrack, int junctionIndex, BOOL enabled)
	{
		return VEHICLE::_0x3ABFA128F5BF5A70(trainTrack, junctionIndex, enabled);
	}
	Any _0x2C46D2A591D8C322_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0x2C46D2A591D8C322(p0, p1, p2);
	}
	Any _0xCAFF2C9747103C02_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0xCAFF2C9747103C02(p0, p1, p2);
	}
	void _SET_ALL_JUNCTIONS_CLEARED_Export()
	{
		return VEHICLE::_SET_ALL_JUNCTIONS_CLEARED();
	}
	void _0x34BCF6209B9668A7_Export(int trackIndex, Any p1)
	{
		return VEHICLE::_0x34BCF6209B9668A7(trackIndex, p1);
	}
	void _0xD0BA1853D76683C8_Export(int trackIndex, float x, float y, float z, Any p4)
	{
		return VEHICLE::_0xD0BA1853D76683C8(trackIndex, x, y, z, p4);
	}
	void SET_TRAIN_OFFSET_FROM_STATION_Export(Vehicle train, float offset)
	{
		return VEHICLE::SET_TRAIN_OFFSET_FROM_STATION(train, offset);
	}
	void _0xDC69F6913CCA0B99_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xDC69F6913CCA0B99(p0, p1);
	}
	void _0x7840576C50A13DBA_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0x7840576C50A13DBA(train, p1);
	}
	Any _0xD0116DF21E6C7B36_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xD0116DF21E6C7B36(p0, p1);
	}
	void _DETACH_WAGON_ENTITY_FROM_TRAIN_Export(Entity entity)
	{
		return VEHICLE::_DETACH_WAGON_ENTITY_FROM_TRAIN(entity);
	}
	int _0x1180A2974D251B7B_Export(Vehicle train)
	{
		return VEHICLE::_0x1180A2974D251B7B(train);
	}
	int GET_CURRENT_STATION_FOR_TRAIN_Export(Vehicle train)
	{
		return VEHICLE::GET_CURRENT_STATION_FOR_TRAIN(train);
	}
	Hash _0x9CC94A948EAF5372_Export(int trackIndex, int stationIndex)
	{
		return VEHICLE::_0x9CC94A948EAF5372(trackIndex, stationIndex);
	}
	Any _0xDE8C5B9F65017FA1_Export(Vehicle train)
	{
		return VEHICLE::_0xDE8C5B9F65017FA1(train);
	}
	int _GET_CURRENT_TRACK_FOR_TRAIN_Export(Vehicle train)
	{
		return VEHICLE::_GET_CURRENT_TRACK_FOR_TRAIN(train);
	}
	scrVector _GET_STATION_COORDS_FROM_TRAIN_STATION_DATA_Export(int trackIndex, int stationIndex)
	{
		return VEHICLE::_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA(trackIndex, stationIndex);
	}
	int GET_TRACK_INDEX_OF_TRAIN_Export(Vehicle train)
	{
		return VEHICLE::GET_TRACK_INDEX_OF_TRAIN(train);
	}
	void _0x1A861F899EBBE17C_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0x1A861F899EBBE17C(train, p1);
	}
	void _0xF8F7DA13CFBD4532_Export(int trackIndex, BOOL p1)
	{
		return VEHICLE::_0xF8F7DA13CFBD4532(trackIndex, p1);
	}
	void _TRIGGER_TRAIN_WHISTLE_Export(Vehicle train, const char* whistleSequence, BOOL p2, BOOL p3)
	{
		return VEHICLE::_TRIGGER_TRAIN_WHISTLE(train, whistleSequence, p2, p3);
	}
	void _0x2BB2B5BCF0DF8008_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x2BB2B5BCF0DF8008(p0, p1);
	}
	void _0x6703872EC09BC158_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x6703872EC09BC158(p0, p1);
	}
	void _0x1BFBAFCC6760FF02_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0x1BFBAFCC6760FF02(train, p1);
	}
	Any _0xF5EA41C1408695FB_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return VEHICLE::_0xF5EA41C1408695FB(p0, p1, p2, p3);
	}
	void SET_VEHICLE_FIXED_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::SET_VEHICLE_FIXED(VehicleIndex);
	}
	void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES_Export(Vehicle VehicleIndex, BOOL bVal)
	{
		return VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(VehicleIndex, bVal);
	}
	void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE_Export(Vehicle VehicleIndex, BOOL bVal)
	{
		return VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(VehicleIndex, bVal);
	}
	void SET_DISABLE_VEHICLE_ENGINE_FIRES_Export(Vehicle VehicleIndex, BOOL bVal)
	{
		return VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(VehicleIndex, bVal);
	}
	void SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE_Export(Vehicle VehicleIndex, BOOL bVal)
	{
		return VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(VehicleIndex, bVal);
	}
	void SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE_Export(Vehicle VehicleIndex, BOOL bVal)
	{
		return VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(VehicleIndex, bVal);
	}
	void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA_Export(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ)
	{
		return VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ);
	}
	void SET_VEHICLE_STEER_BIAS_Export(Vehicle VehicleIndex, float Bias)
	{
		return VEHICLE::SET_VEHICLE_STEER_BIAS(VehicleIndex, Bias);
	}
	BOOL IS_VEHICLE_EXTRA_TURNED_ON_Export(Vehicle VehicleIndex, int Extra)
	{
		return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(VehicleIndex, Extra);
	}
	void SET_VEHICLE_EXTRA_Export(Vehicle VehicleIndex, int Extra, BOOL TurnOff)
	{
		return VEHICLE::SET_VEHICLE_EXTRA(VehicleIndex, Extra, TurnOff);
	}
	BOOL DOES_EXTRA_EXIST_Export(Vehicle VehicleIndex, int Extra)
	{
		return VEHICLE::DOES_EXTRA_EXIST(VehicleIndex, Extra);
	}
	void SET_VEHICLE_DAMAGE_Export(Vehicle TrainIndex, float VecDamageCoorsX, float VecDamageCoorsY, float VecDamageCoorsZ, float Damage, float Deformation, BOOL localDamage)
	{
		return VEHICLE::SET_VEHICLE_DAMAGE(TrainIndex, VecDamageCoorsX, VecDamageCoorsY, VecDamageCoorsZ, Damage, Deformation, localDamage);
	}
	float GET_VEHICLE_ENGINE_HEALTH_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::GET_VEHICLE_ENGINE_HEALTH(VehicleIndex);
	}
	void SET_VEHICLE_ENGINE_HEALTH_Export(Vehicle VehicleIndex, float health)
	{
		return VEHICLE::SET_VEHICLE_ENGINE_HEALTH(VehicleIndex, health);
	}
	float GET_VEHICLE_PETROL_TANK_HEALTH_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(VehicleIndex);
	}
	void SET_VEHICLE_PETROL_TANK_HEALTH_Export(Vehicle VehicleIndex, float health)
	{
		return VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(VehicleIndex, health);
	}
	BOOL IS_VEHICLE_STUCK_TIMER_UP_Export(Vehicle VehicleIndex, int StuckType, int RequiredTime)
	{
		return VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(VehicleIndex, StuckType, RequiredTime);
	}
	void RESET_VEHICLE_STUCK_TIMER_Export(Vehicle VehicleIndex, int StuckType)
	{
		return VEHICLE::RESET_VEHICLE_STUCK_TIMER(VehicleIndex, StuckType);
	}
	BOOL IS_VEHICLE_DRIVEABLE_Export(Vehicle VehicleIndex, BOOL bCheckFire, BOOL p2)
	{
		return VEHICLE::IS_VEHICLE_DRIVEABLE(VehicleIndex, bCheckFire, p2);
	}
	BOOL IS_VEHICLE_WRECKED_Export(Vehicle vehicle)
	{
		return VEHICLE::IS_VEHICLE_WRECKED(vehicle);
	}
	BOOL _IS_VEHICLE_ON_FIRE_Export(Vehicle vehicle)
	{
		return VEHICLE::_IS_VEHICLE_ON_FIRE(vehicle);
	}
	void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER_Export(Vehicle VehicleIndex, BOOL bNewVal)
	{
		return VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(VehicleIndex, bNewVal);
	}
	void START_VEHICLE_HORN_Export(Vehicle VehicleIndex, int TimeToSoundHorn, Hash HornTypeHash, BOOL isMusicalHorn)
	{
		return VEHICLE::START_VEHICLE_HORN(VehicleIndex, TimeToSoundHorn, HornTypeHash, isMusicalHorn);
	}
	void SET_VEHICLE_HAS_STRONG_AXLES_Export(Vehicle VehicleIndex, BOOL bSet)
	{
		return VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(VehicleIndex, bSet);
	}
	void _SET_VEHICLE_SNOW_LEVEL_Export(Vehicle vehicle, float snowLevel)
	{
		return VEHICLE::_SET_VEHICLE_SNOW_LEVEL(vehicle, snowLevel);
	}
	void _SET_VEHICLE_WET_LEVEL_Export(Vehicle vehicle, float wetLevel)
	{
		return VEHICLE::_SET_VEHICLE_WET_LEVEL(vehicle, wetLevel);
	}
	void _SET_VEHICLE_TINT_Export(Vehicle vehicle, int tintId)
	{
		return VEHICLE::_SET_VEHICLE_TINT(vehicle, tintId);
	}
	void _SET_VEHICLE_LIVERY_Export(Vehicle vehicle, int liveryIndex)
	{
		return VEHICLE::_SET_VEHICLE_LIVERY(vehicle, liveryIndex);
	}
	int _GET_VEHICLE_TINT_Export(Vehicle vehicle)
	{
		return VEHICLE::_GET_VEHICLE_TINT(vehicle);
	}
	int _GET_VEHICLE_LIVERY_Export(Vehicle vehicle)
	{
		return VEHICLE::_GET_VEHICLE_LIVERY(vehicle);
	}
	BOOL IS_VEHICLE_WINDOW_INTACT_Export(Vehicle VehicleIndex, int WindowNumber)
	{
		return VEHICLE::IS_VEHICLE_WINDOW_INTACT(VehicleIndex, WindowNumber);
	}
	BOOL ARE_ANY_VEHICLE_SEATS_FREE_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(VehicleIndex);
	}
	void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE_Export(Vehicle VehicleIndex, BOOL bSet)
	{
		return VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(VehicleIndex, bSet);
	}
	void SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT_Export(Vehicle VehicleIndex, BOOL bSet)
	{
		return VEHICLE::SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(VehicleIndex, bSet);
	}
	BOOL IS_ANY_VEHICLE_NEAR_POINT_Export(float pointX, float pointY, float pointZ, float radius)
	{
		return VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(pointX, pointY, pointZ, radius);
	}
	void REQUEST_VEHICLE_HIGH_DETAIL_MODEL_Export(Vehicle Vehicle)
	{
		return VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle);
	}
	void REQUEST_VEHICLE_ASSET_Export(Hash VehicleModelHashKey, int iVehicleRequestFlags)
	{
		return VEHICLE::REQUEST_VEHICLE_ASSET(VehicleModelHashKey, iVehicleRequestFlags);
	}
	void _0xCF9DA72002FC16BF_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0xCF9DA72002FC16BF(p0, p1, p2);
	}
	BOOL HAS_VEHICLE_ASSET_LOADED_Export(Hash VehicleModelHashKey)
	{
		return VEHICLE::HAS_VEHICLE_ASSET_LOADED(VehicleModelHashKey);
	}
	void REMOVE_VEHICLE_ASSET_Export(Hash VehicleModelHashKey)
	{
		return VEHICLE::REMOVE_VEHICLE_ASSET(VehicleModelHashKey);
	}
	Any SET_VEHICLE_AUTOMATICALLY_ATTACHES_Export(Entity TowTruckVehicleIndex, BOOL AutomaticallyAttach, BOOL ScanWithNonPlayerDriver)
	{
		return VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(TowTruckVehicleIndex, AutomaticallyAttach, ScanWithNonPlayerDriver);
	}
	void _0x104D9A7B1C0D0783_Export(Vehicle vehicle, float p1)
	{
		return VEHICLE::_0x104D9A7B1C0D0783(vehicle, p1);
	}
	BOOL IS_VEHICLE_IN_BURNOUT_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::IS_VEHICLE_IN_BURNOUT(VehicleIndex);
	}
	void SET_VEHICLE_HANDBRAKE_Export(Vehicle VehicleIndex, BOOL bOn)
	{
		return VEHICLE::SET_VEHICLE_HANDBRAKE(VehicleIndex, bOn);
	}
	void INSTANTLY_FILL_VEHICLE_POPULATION_Export()
	{
		return VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	}
	BOOL HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED_Export()
	{
		return VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED();
	}
	BOOL GET_VEHICLE_TRAILER_VEHICLE_Export(Vehicle vehicle, Vehicle* trailer)
	{
		return VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(vehicle, trailer);
	}
	float GET_VEHICLE_ESTIMATED_MAX_SPEED_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(VehicleIndex);
	}
	int ADD_ROAD_NODE_SPEED_ZONE_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		return VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}
	BOOL REMOVE_ROAD_NODE_SPEED_ZONE_Export(int index)
	{
		return VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(index);
	}
	BOOL IS_ENTRY_POINT_FOR_SEAT_CLEAR_Export(Ped PedIndex, Vehicle VehicleIndex, int Seat, BOOL CheckSide, BOOL LeftSide)
	{
		return VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PedIndex, VehicleIndex, Seat, CheckSide, LeftSide);
	}
	BOOL CAN_SHUFFLE_SEAT_Export(Vehicle VehicleIndex, int Seat)
	{
		return VEHICLE::CAN_SHUFFLE_SEAT(VehicleIndex, Seat);
	}
	void MODIFY_VEHICLE_TOP_SPEED_Export(Vehicle vehicle, float PercentChange)
	{
		return VEHICLE::MODIFY_VEHICLE_TOP_SPEED(vehicle, PercentChange);
	}
	void SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP_Export(Vehicle VehicleIndex, BOOL bStaysFrozen)
	{
		return VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(VehicleIndex, bStaysFrozen);
	}
	void SET_VEHICLE_INFLUENCES_WANTED_LEVEL_Export(Vehicle VehicleIndex, BOOL bInfluenceWantedLevel)
	{
		return VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(VehicleIndex, bInfluenceWantedLevel);
	}
	BOOL _IS_BOAT_GROUNDED_Export(Vehicle vehicle)
	{
		return VEHICLE::_IS_BOAT_GROUNDED(vehicle);
	}
	void SET_VEHICLE_NOT_STEALABLE_AMBIENTLY_Export(Vehicle vehicle, BOOL bStealable)
	{
		return VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(vehicle, bStealable);
	}
	void LOCK_DOORS_WHEN_NO_LONGER_NEEDED_Export(Vehicle vehicle)
	{
		return VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(vehicle);
	}
	Vehicle GET_LAST_DRIVEN_VEHICLE_Export()
	{
		return VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	}
	void CLEAR_LAST_DRIVEN_VEHICLE_Export()
	{
		return VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	}
	void SET_PED_OWNS_VEHICLE_Export(Ped ped, Vehicle vehicle)
	{
		return VEHICLE::SET_PED_OWNS_VEHICLE(ped, vehicle);
	}
	Entity _GET_VEHICLE_OWNER_Export(Vehicle vehicle)
	{
		return VEHICLE::_GET_VEHICLE_OWNER(vehicle);
	}
	void SET_VEHICLE_LOD_MULTIPLIER_Export(Vehicle vehicle, float multiplier)
	{
		return VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(vehicle, multiplier);
	}
	void _SET_VEHICLE_LOD_LEVEL_Export(Vehicle vehicle, int lodLevel)
	{
		return VEHICLE::_SET_VEHICLE_LOD_LEVEL(vehicle, lodLevel);
	}
	void SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET_Export(Vehicle vehicle, BOOL forceEngineDamage)
	{
		return VEHICLE::SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(vehicle, forceEngineDamage);
	}
	void COPY_VEHICLE_DAMAGES_Export(Vehicle srcVehicle, Vehicle dstVehicle)
	{
		return VEHICLE::COPY_VEHICLE_DAMAGES(srcVehicle, dstVehicle);
	}
	void SET_VEHICLE_SHOOT_AT_TARGET_Export(Ped pedIndex, Entity targetEntity, float vecTargetCoorsX, float vecTargetCoorsY, float vecTargetCoorsZ, Any p5)
	{
		return VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(pedIndex, targetEntity, vecTargetCoorsX, vecTargetCoorsY, vecTargetCoorsZ, p5);
	}
	void SET_FORCE_HD_VEHICLE_Export(Vehicle vehicleIndex, BOOL forceHd)
	{
		return VEHICLE::SET_FORCE_HD_VEHICLE(vehicleIndex, forceHd);
	}
	void TRACK_VEHICLE_VISIBILITY_Export(Vehicle vehicleIndex)
	{
		return VEHICLE::TRACK_VEHICLE_VISIBILITY(vehicleIndex);
	}
	BOOL IS_VEHICLE_VISIBLE_Export(Vehicle vehicleIndex)
	{
		return VEHICLE::IS_VEHICLE_VISIBLE(vehicleIndex);
	}
	Any _0x13C190302369308B_Export(Any p0)
	{
		return VEHICLE::_0x13C190302369308B(p0);
	}
	void SET_ENABLE_VEHICLE_SLIPSTREAMING_Export(BOOL EnableSlipstreaming)
	{
		return VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(EnableSlipstreaming);
	}
	void SET_VEHICLE_INACTIVE_DURING_PLAYBACK_Export(Vehicle vehicleIndex, BOOL bForceInactive)
	{
		return VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(vehicleIndex, bForceInactive);
	}
	void SET_VEHICLE_ENGINE_CAN_DEGRADE_Export(Vehicle vehicleIndex, BOOL bEnableDegrading)
	{
		return VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(vehicleIndex, bEnableDegrading);
	}
	void SET_VEHICLE_IS_STOLEN_Export(Vehicle vehicleIndex, BOOL bIsStolen)
	{
		return VEHICLE::SET_VEHICLE_IS_STOLEN(vehicleIndex, bIsStolen);
	}
	void _0xCBF88256E44D5D39_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0xCBF88256E44D5D39(vehicle, p1);
	}
	void _0xC325A6BAA62CF8A2_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0xC325A6BAA62CF8A2(vehicle, p1);
	}
	void _0x0CD7914D17A970AB_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x0CD7914D17A970AB(p0, p1);
	}
	void _0x23F66C36F8E5EAAB_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x23F66C36F8E5EAAB(p0, p1);
	}
	void _0x697DF68F3A761A50_Export(Any p0)
	{
		return VEHICLE::_0x697DF68F3A761A50(p0);
	}
	void _0x27E3F2B57209FA54_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x27E3F2B57209FA54(p0, p1);
	}
	void DISABLE_VEHICLE_WEAPON_Export(BOOL disable, Hash TypeOfWeapon, Vehicle vehicleIndex, Ped PedIndex)
	{
		return VEHICLE::DISABLE_VEHICLE_WEAPON(disable, TypeOfWeapon, vehicleIndex, PedIndex);
	}
	void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS_Export(Vehicle vehicle, BOOL canBeUsed)
	{
		return VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(vehicle, canBeUsed);
	}
	void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED_Export(Vehicle vehicle, BOOL keepEngineOn)
	{
		return VEHICLE::SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(vehicle, keepEngineOn);
	}
	void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP_Export(Vehicle vehicle, BOOL bCanWheelsBreakoff)
	{
		return VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(vehicle, bCanWheelsBreakoff);
	}
	void _0x15CC8C33D7FFCC4A_Export(Vehicle vehicle, int p1)
	{
		return VEHICLE::_0x15CC8C33D7FFCC4A(vehicle, p1);
	}
	void SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS_Export(Vehicle vehicle, BOOL canUse)
	{
		return VEHICLE::SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(vehicle, canUse);
	}
	void SET_VEHICLE_EXCLUSIVE_DRIVER_Export(Vehicle vehicle, Ped PedIndex, int driverIndex)
	{
		return VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(vehicle, PedIndex, driverIndex);
	}
	BOOL _IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE_Export(Ped ped, Vehicle vehicle, int* outIndex)
	{
		return VEHICLE::_IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(ped, vehicle, outIndex);
	}
	void _0xDC0556D0F484ECAA_Export(Any p0)
	{
		return VEHICLE::_0xDC0556D0F484ECAA(p0);
	}
	void SET_DISABLE_SUPERDUMMY_Export(Vehicle vehicle, BOOL disabled)
	{
		return VEHICLE::SET_DISABLE_SUPERDUMMY(vehicle, disabled);
	}
	float GET_VEHICLE_BODY_HEALTH_Export(Vehicle VehicleIndex)
	{
		return VEHICLE::GET_VEHICLE_BODY_HEALTH(VehicleIndex);
	}
	void SET_VEHICLE_BODY_HEALTH_Export(Vehicle VehicleIndex, float health)
	{
		return VEHICLE::SET_VEHICLE_BODY_HEALTH(VehicleIndex, health);
	}
	Any _0xE777DDF3E78397E8_Export(Any p0)
	{
		return VEHICLE::_0xE777DDF3E78397E8(p0);
	}
	void SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING_Export(Vehicle vehicle, BOOL bIgnoreBrokenParts)
	{
		return VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(vehicle, bIgnoreBrokenParts);
	}
	void _0x012701ED938B85DE_Export(float p0, float p1)
	{
		return VEHICLE::_0x012701ED938B85DE(p0, p1);
	}
	void _0x8379E05871AD24E0_Export()
	{
		return VEHICLE::_0x8379E05871AD24E0();
	}
	void _SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(p0, p1, p2, p3);
	}
	BOOL _ATTACH_DRAFT_VEHICLE_HARNESS_PED_Export(Ped mount, Vehicle draft, int harnessId)
	{
		return VEHICLE::_ATTACH_DRAFT_VEHICLE_HARNESS_PED(mount, draft, harnessId);
	}
	BOOL _DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX_Export(Vehicle draft, int harnessId)
	{
		return VEHICLE::_DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX(draft, harnessId);
	}
	BOOL _DETACH_DRAFT_VEHICLE_HARNESS_PED_Export(Vehicle draft, Ped ped)
	{
		return VEHICLE::_DETACH_DRAFT_VEHICLE_HARNESS_PED(draft, ped);
	}
	void _0x0F7F603BDE08C4D3_Export(Any p0)
	{
		return VEHICLE::_0x0F7F603BDE08C4D3(p0);
	}
	int _GET_NUM_DRAFT_VEHICLE_HARNESS_PED_Export(Hash modelHash)
	{
		return VEHICLE::_GET_NUM_DRAFT_VEHICLE_HARNESS_PED(modelHash);
	}
	scrVector _GET_CHECKPOINT_TRAIN_SPAWN_LOCATION_Export(int trackIndex, float x, float y, float z, float distance, BOOL direction)
	{
		return VEHICLE::_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION(trackIndex, x, y, z, distance, direction);
	}
	void _0xC399CC89FBA05DA0_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0xC399CC89FBA05DA0(vehicle, p1);
	}
	void _GET_ROWING_OARS_Export(Vehicle vehicle, Entity* left, Entity* right)
	{
		return VEHICLE::_GET_ROWING_OARS(vehicle, left, right);
	}
	Ped GET_DRIVER_OF_VEHICLE_Export(Vehicle vehicle)
	{
		return VEHICLE::GET_DRIVER_OF_VEHICLE(vehicle);
	}
	void _SET_FORCE_COACH_ROBBERY_LOOT_Export(Vehicle vehicle, Hash coachrobberyLoot)
	{
		return VEHICLE::_SET_FORCE_COACH_ROBBERY_LOOT(vehicle, coachrobberyLoot);
	}
	Any _0x0BA4250D20007C2E_Export(Any p0)
	{
		return VEHICLE::_0x0BA4250D20007C2E(p0);
	}
	void _0x2200AB13CBD10F4E_Export(Vehicle vehicle, float x, float y, float z, BOOL p4, float p5)
	{
		return VEHICLE::_0x2200AB13CBD10F4E(vehicle, x, y, z, p4, p5);
	}
	void _0xB42C87521D1BDD2F_Export(Vehicle vehicle, float x, float y, float z)
	{
		return VEHICLE::_0xB42C87521D1BDD2F(vehicle, x, y, z);
	}
	void _0xC351394B932A6A50_Export(Any p0)
	{
		return VEHICLE::_0xC351394B932A6A50(p0);
	}
	void _0x172E9DD35858DCD7_Export(Any p0)
	{
		return VEHICLE::_0x172E9DD35858DCD7(p0);
	}
	int _GET_BREAKABLE_VEHICLE_LOCKS_STATE_Export(Vehicle vehicle)
	{
		return VEHICLE::_GET_BREAKABLE_VEHICLE_LOCKS_STATE(vehicle);
	}
	Any _0x877EA24EB1614495_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0x877EA24EB1614495(p0, p1, p2);
	}
	Object _GET_BREAKABLE_VEHICLE_LOCK_OBJECT_Export(Vehicle vehicle, int index)
	{
		return VEHICLE::_GET_BREAKABLE_VEHICLE_LOCK_OBJECT(vehicle, index);
	}
	int _GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS_Export(Vehicle vehicle)
	{
		return VEHICLE::_GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS(vehicle);
	}
	void SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE_Export(Vehicle vehicle, BOOL toggle)
	{
		return VEHICLE::SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE(vehicle, toggle);
	}
	void _0x9D12796EF4BF9EA9_Export(Any p0)
	{
		return VEHICLE::_0x9D12796EF4BF9EA9(p0);
	}
	void _0x850CE59DEC2028F3_Export(Vehicle vehicle, Any p1)
	{
		return VEHICLE::_0x850CE59DEC2028F3(vehicle, p1);
	}
	void _0x0355FE37240E2C77_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x0355FE37240E2C77(p0, p1);
	}
	void _0x3D86997A86FEEF0D_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x3D86997A86FEEF0D(p0, p1);
	}
	void _0xD826690B5CF3BEFF_Export(Vehicle vehicle, Any p1)
	{
		return VEHICLE::_0xD826690B5CF3BEFF(vehicle, p1);
	}
	void _BREAK_OFF_DRAFT_WHEEL_Export(Vehicle vehicle, int wheelIndex, float destroyingForce)
	{
		return VEHICLE::_BREAK_OFF_DRAFT_WHEEL(vehicle, wheelIndex, destroyingForce);
	}
	BOOL GET_DRAFT_ANIMAL_COUNT_Export(Vehicle vehicle, int* expected, int* actual)
	{
		return VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehicle, expected, actual);
	}
	void _0x165BE2001E5E4B75_Export(Any p0)
	{
		return VEHICLE::_0x165BE2001E5E4B75(p0);
	}
	void _SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH_Export(Vehicle draft, BOOL canDetach)
	{
		return VEHICLE::_SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH(draft, canDetach);
	}
	void _SET_DRAFT_VEHICLE_YOKE_CAN_BREAK_Export(Vehicle draft, BOOL canBreak)
	{
		return VEHICLE::_SET_DRAFT_VEHICLE_YOKE_CAN_BREAK(draft, canBreak);
	}
	void _ADD_TRAIN_TEMPORARY_STOP_Export(Vehicle train, int trackIndex, float x, float y, float z)
	{
		return VEHICLE::_ADD_TRAIN_TEMPORARY_STOP(train, trackIndex, x, y, z);
	}
	void _0x0794199B25E499E1_Export(Vehicle wagon, BOOL p1)
	{
		return VEHICLE::_0x0794199B25E499E1(wagon, p1);
	}
	void _0x73118A3EE9C9B6DB_Export(Vehicle wagon, int p1, BOOL p2)
	{
		return VEHICLE::_0x73118A3EE9C9B6DB(wagon, p1, p2);
	}
	BOOL _0xE1C0F8781BF130C2_Export(Vehicle wagon, int p1)
	{
		return VEHICLE::_0xE1C0F8781BF130C2(wagon, p1);
	}
	BOOL _IS_VEHICLE_WHEEL_DESTROYED_Export(Vehicle vehicle, int wheel)
	{
		return VEHICLE::_IS_VEHICLE_WHEEL_DESTROYED(vehicle, wheel);
	}
	BOOL _0x18714953CCED17D3_Export(Vehicle vehicle)
	{
		return VEHICLE::_0x18714953CCED17D3(vehicle);
	}
	void _0x41F0B254DDF71473_Export(Vehicle wagon)
	{
		return VEHICLE::_0x41F0B254DDF71473(wagon);
	}
	void _SET_VEHICLE_DETERIORATION_Export(Vehicle vehicle, float amount, int p2, BOOL p3)
	{
		return VEHICLE::_SET_VEHICLE_DETERIORATION(vehicle, amount, p2, p3);
	}
	BOOL _IS_VEHICLE_DOOR_BROKEN_Export(Vehicle vehicle, int doorId)
	{
		return VEHICLE::_IS_VEHICLE_DOOR_BROKEN(vehicle, doorId);
	}
	Entity _BREAK_OFF_VEHICLE_WHEEL_Export(Vehicle vehicle, int wheelIndex)
	{
		return VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(vehicle, wheelIndex);
	}
	BOOL _DELETE_VEHICLE_LANTERNS_Export(Vehicle vehicle)
	{
		return VEHICLE::_DELETE_VEHICLE_LANTERNS(vehicle);
	}
	void _0x6DE072AC8A95FFC1_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0x6DE072AC8A95FFC1(vehicle, p1);
	}
	void _SET_DRAFT_VEHICLE_DESIRED_SPEED_Export(Vehicle vehicle, float speed)
	{
		return VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehicle, speed);
	}
	float _GET_DRAFT_VEHICLE_DESIRED_SPEED_Export(Vehicle vehicle)
	{
		return VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(vehicle);
	}
	void _0xC4A2C11FC0D41916_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0xC4A2C11FC0D41916(vehicle, p1);
	}
	void _0xFC4F15A7DDDC47B1_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0xFC4F15A7DDDC47B1(vehicle, p1);
	}
	void _0x4C60C333F9CCA2B6_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0x4C60C333F9CCA2B6(vehicle, p1);
	}
	void _0xCF342503CA4C8DF1_Export(Vehicle vehicle, float p1)
	{
		return VEHICLE::_0xCF342503CA4C8DF1(vehicle, p1);
	}
	void _0x06A09A6E0C6D2A84_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0x06A09A6E0C6D2A84(train, p1);
	}
	void _0xAE7E66A61E7C17A5_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0xAE7E66A61E7C17A5(train, p1);
	}
	void _0xEF28A614B4B264B8_Export(Vehicle train, BOOL p1)
	{
		return VEHICLE::_0xEF28A614B4B264B8(train, p1);
	}
	void _0x04F0579DBDD32F34_Export(Vehicle vehicle)
	{
		return VEHICLE::_0x04F0579DBDD32F34(vehicle);
	}
	void _0x12F6C6ED3EFF42DE_Export(Vehicle vehicle, float x, float y, float z)
	{
		return VEHICLE::_0x12F6C6ED3EFF42DE(vehicle, x, y, z);
	}
	void _0x87B974E54C71BA7B_Export(Vehicle vehicle, BOOL p1)
	{
		return VEHICLE::_0x87B974E54C71BA7B(vehicle, p1);
	}
	BOOL _HAS_TRAIN_LOADED_Export(Vehicle train)
	{
		return VEHICLE::_HAS_TRAIN_LOADED(train);
	}
	Vehicle _CREATE_MISSION_TRAIN_Export(Hash configHash, float x, float y, float z, BOOL direction, BOOL passengers, BOOL p6, BOOL conductor)
	{
		return VEHICLE::_CREATE_MISSION_TRAIN(configHash, x, y, z, direction, passengers, p6, conductor);
	}
	void _0xD1EFA8D68BF5D63D_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return VEHICLE::_0xD1EFA8D68BF5D63D(p0, p1, p2, p3);
	}
	Any _0x1121B07088ED3013_Export(Any p0)
	{
		return VEHICLE::_0x1121B07088ED3013(p0);
	}
	Any _0x42404D57D621601A_Export(Any p0)
	{
		return VEHICLE::_0x42404D57D621601A(p0);
	}
	Any _0x288CBB414C3C2FBB_Export(Any p0)
	{
		return VEHICLE::_0x288CBB414C3C2FBB(p0);
	}
	void _0x6FD7BDF10304363A_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x6FD7BDF10304363A(p0, p1);
	}
	void _0xCEB1F1EED484A5B4_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xCEB1F1EED484A5B4(p0, p1);
	}
	Any _0xF57DB8E83DCD8349_Export(Any p0)
	{
		return VEHICLE::_0xF57DB8E83DCD8349(p0);
	}
	void _SET_BALLOON_HOVER_STATE_Export(Vehicle balloon, float p1)
	{
		return VEHICLE::_SET_BALLOON_HOVER_STATE(balloon, p1);
	}
	void _SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION_Export(Vehicle vehicle, BOOL allow)
	{
		return VEHICLE::_SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION(vehicle, allow);
	}
	void _0x6835AFEA10E186F4_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x6835AFEA10E186F4(p0, p1);
	}
	void _SET_DRAFT_ANIMAL_RANDOM_SEED_Export(Vehicle vehicle, int seed)
	{
		return VEHICLE::_SET_DRAFT_ANIMAL_RANDOM_SEED(vehicle, seed);
	}
	Any _0x14DA8C4BC2CCD90A_Export(Any p0)
	{
		return VEHICLE::_0x14DA8C4BC2CCD90A(p0);
	}
	Any _0xCACAB2B123BBDBD6_Export(Any p0, Any p1, Any p2)
	{
		return VEHICLE::_0xCACAB2B123BBDBD6(p0, p1, p2);
	}
	void _0xFF2B1F59FB892F14_Export(Any p0)
	{
		return VEHICLE::_0xFF2B1F59FB892F14(p0);
	}
	void _0x5AADC7BBBB1BCEEB_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return VEHICLE::_0x5AADC7BBBB1BCEEB(p0, p1, p2, p3, p4);
	}
	BOOL _GET_VEHICLE_IS_PROP_SET_APPLIED_Export(Vehicle vehicle)
	{
		return VEHICLE::_GET_VEHICLE_IS_PROP_SET_APPLIED(vehicle);
	}
	void _SET_BATCH_TARP_HEIGHT_Export(Vehicle vehicle, float height, BOOL immediately)
	{
		return VEHICLE::_SET_BATCH_TARP_HEIGHT(vehicle, height, immediately);
	}
	void _0x07E2E21E799080A0_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x07E2E21E799080A0(p0, p1);
	}
	void _0xC2E62678D602853C_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return VEHICLE::_0xC2E62678D602853C(p0, p1, p2, p3, p4, p5, p6);
	}
	void _0x873AAF600CC36DAC_Export(Any p0)
	{
		return VEHICLE::_0x873AAF600CC36DAC(p0);
	}
	Any _0x51C7694E140FAE43_Export(Any p0)
	{
		return VEHICLE::_0x51C7694E140FAE43(p0);
	}
	void _0x8DECD262602548B9_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x8DECD262602548B9(p0, p1);
	}
	void _0xCBC7B6F9A56B79F6_Export(Any p0, Any p1)
	{
		return VEHICLE::_0xCBC7B6F9A56B79F6(p0, p1);
	}
	BOOL _0x37D238BE69F7378A_Export(int trackIndex)
	{
		return VEHICLE::_0x37D238BE69F7378A(trackIndex);
	}
	void _0x703D4FB366DA4452_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x703D4FB366DA4452(p0, p1);
	}
	void _0x762FDC4C19E5A981_Export(Entity trainCarriage, BOOL p1)
	{
		return VEHICLE::_0x762FDC4C19E5A981(trainCarriage, p1);
	}
	Any _0x2045429505158D1A_Export(Any p0)
	{
		return VEHICLE::_0x2045429505158D1A(p0);
	}
	void _0x13EB275BF81636D1_Export(Any p0, Any p1)
	{
		return VEHICLE::_0x13EB275BF81636D1(p0, p1);
	}
	BOOL _0xCCF71FCFA0070B1A_Export()
	{
		return VOICE::_0xCCF71FCFA0070B1A();
	}
	void _0x79F478FF5F9F4F05_Export(BOOL enabled)
	{
		return VOICE::_0x79F478FF5F9F4F05(enabled);
	}
	BOOL _0xAA35FD9ABAB490A3_Export(Player player)
	{
		return VOICE::_0xAA35FD9ABAB490A3(player);
	}
	BOOL _0x356135B9B10A2A82_Export(void* gamerHandle)
	{
		return VOICE::_0x356135B9B10A2A82(gamerHandle);
	}
	BOOL _0xEF6F2A35FAAF2ED7_Export(Player player)
	{
		return VOICE::_0xEF6F2A35FAAF2ED7(player);
	}
	BOOL _0x49623BCFC3A3D829_Export(Player player, BOOL muted)
	{
		return VOICE::_0x49623BCFC3A3D829(player, muted);
	}
	BOOL _0x919AF2D93E9AA89D_Export(Player player)
	{
		return VOICE::_0x919AF2D93E9AA89D(player);
	}
	BOOL _0x0DED260A1958A82E_Export(Player player)
	{
		return VOICE::_0x0DED260A1958A82E(player);
	}
	BOOL _0x8E462DB1EAA9C47C_Export(Player player)
	{
		return VOICE::_0x8E462DB1EAA9C47C(player);
	}
	float _0x5CA7FB7D6DE49DCC_Export(Player player)
	{
		return VOICE::_0x5CA7FB7D6DE49DCC(player);
	}
	void _0x58125B691F6827D5_Export(float proximity)
	{
		return VOICE::_0x58125B691F6827D5(proximity);
	}
	float _0x2F82CAB262C8AE26_Export(Player player)
	{
		return VOICE::_0x2F82CAB262C8AE26(player);
	}
	void _0x08797A8C03868CB8_Export(float threshold)
	{
		return VOICE::_0x08797A8C03868CB8(threshold);
	}
	void _0xB779F4FA19269AEC_Export(BOOL flag)
	{
		return VOICE::_0xB779F4FA19269AEC(flag);
	}
	void _0x1FBF7F5BA7E4BE3A_Export(int p0)
	{
		return VOICE::_0x1FBF7F5BA7E4BE3A(p0);
	}
	void _0xDC9B361CB7776673_Export(Player player)
	{
		return VOICE::_0xDC9B361CB7776673(player);
	}
	void _0xEC8703E4536A9952_Export()
	{
		return VOICE::_0xEC8703E4536A9952();
	}
	Any _0xDB622ECD3DCBE078_Export(Player player)
	{
		return VOICE::_0xDB622ECD3DCBE078(player);
	}
	void _0xB6E79850B759A30E_Export(int teamId, BOOL allow)
	{
		return VOICE::_0xB6E79850B759A30E(teamId, allow);
	}
	void _0x4791899615D70FA2_Export(Player player, int p1, int p2)
	{
		return VOICE::_0x4791899615D70FA2(player, p1, p2);
	}
	void _0xF8938CF3984092A5_Export(Player player)
	{
		return VOICE::_0xF8938CF3984092A5(player);
	}
	int _0x767931C727DF2ED7_Export(Player player, int p1)
	{
		return VOICE::_0x767931C727DF2ED7(player, p1);
	}
	void _0x1C38C3577901AF1F_Export()
	{
		return VOICE::_0x1C38C3577901AF1F();
	}
	void _0xB3E8841F6BDAF83E_Export()
	{
		return VOICE::_0xB3E8841F6BDAF83E();
	}
	Volume _CREATE_VOLUME_BY_HASH_Export(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		return VOLUME::_CREATE_VOLUME_BY_HASH(volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}
	Volume CREATE_VOLUME_BOX_Export(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		return VOLUME::CREATE_VOLUME_BOX(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}
	Volume CREATE_VOLUME_CYLINDER_Export(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		return VOLUME::CREATE_VOLUME_CYLINDER(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}
	Volume CREATE_VOLUME_SPHERE_Export(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		return VOLUME::CREATE_VOLUME_SPHERE(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}
	Volume CREATE_VOLUME_AGGREGATE_Export()
	{
		return VOLUME::CREATE_VOLUME_AGGREGATE();
	}
	Volume _CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME_Export(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name)
	{
		return VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name);
	}
	Volume _CREATE_ANTI_GRIEF_VOLUME_Export(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		return VOLUME::_CREATE_ANTI_GRIEF_VOLUME(volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}
	void _SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE_Export(Volume volume, BOOL toggle)
	{
		return VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(volume, toggle);
	}
	void _SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER_Export(Volume volume, BOOL toggle)
	{
		return VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volume, toggle);
	}
	Volume _CREATE_WALK_AND_TALK_VOLUME_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		return VOLUME::_CREATE_WALK_AND_TALK_VOLUME(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
	}
	Volume _CREATE_SPEED_VOLUME_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		return VOLUME::_CREATE_SPEED_VOLUME(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}
	Volume _CREATE_VOLUME_BOX_WITH_CUSTOM_NAME_Export(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name)
	{
		return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name);
	}
	Volume _CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME_Export(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name)
	{
		return VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name);
	}
	Volume _CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME_Export(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name)
	{
		return VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name);
	}
	Volume _CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME_Export(const char* name)
	{
		return VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(name);
	}
	void _ADD_BOUNDS_TO_AGGREGATE_VOLUME_Export(Volume volume, Volume aggregate)
	{
		return VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volume, aggregate);
	}
	void _REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME_Export(Volume volume, Volume aggregate)
	{
		return VOLUME::_REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME(volume, aggregate);
	}
	void _ADD_VOLUME_TO_VOLUME_AGGREGATE_Export(Volume aggregate, Hash typeHash, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		return VOLUME::_ADD_VOLUME_TO_VOLUME_AGGREGATE(aggregate, typeHash, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}
	void _ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE_Export(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9)
	{
		return VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE_Export(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9)
	{
		return VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void _ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE_Export(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9)
	{
		return VOLUME::_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	void DELETE_VOLUME_Export(Volume volume)
	{
		return VOLUME::DELETE_VOLUME(volume);
	}
	BOOL DOES_VOLUME_EXIST_Export(Volume volume)
	{
		return VOLUME::DOES_VOLUME_EXIST(volume);
	}
	BOOL IS_POINT_IN_VOLUME_Export(Volume volume, float x, float y, float z)
	{
		return VOLUME::IS_POINT_IN_VOLUME(volume, x, y, z);
	}
	scrVector GET_VOLUME_COORDS_Export(Volume volume)
	{
		return VOLUME::GET_VOLUME_COORDS(volume);
	}
	BOOL SET_VOLUME_COORDS_Export(Volume volume, float posX, float posY, float posZ)
	{
		return VOLUME::SET_VOLUME_COORDS(volume, posX, posY, posZ);
	}
	scrVector GET_VOLUME_ROTATION_Export(Volume volume)
	{
		return VOLUME::GET_VOLUME_ROTATION(volume);
	}
	BOOL SET_VOLUME_ROTATION_Export(Volume volume, float rotX, float rotY, float rotZ)
	{
		return VOLUME::SET_VOLUME_ROTATION(volume, rotX, rotY, rotZ);
	}
	scrVector GET_VOLUME_SCALE_Export(Volume volume)
	{
		return VOLUME::GET_VOLUME_SCALE(volume);
	}
	BOOL SET_VOLUME_SCALE_Export(Volume volume, float scaleX, float scaleY, float scaleZ)
	{
		return VOLUME::SET_VOLUME_SCALE(volume, scaleX, scaleY, scaleZ);
	}
	void _GET_VOLUME_BOUNDS_Export(Volume volume, scrVector* min, scrVector* max)
	{
		return VOLUME::_GET_VOLUME_BOUNDS(volume, min, max);
	}
	void _0x748C5F51A18CB8F0_Export(BOOL p0)
	{
		return VOLUME::_0x748C5F51A18CB8F0(p0);
	}
	Any _0x2B32B11520626229_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return VOLUME::_0x2B32B11520626229(p0, p1, p2, p3, p4);
	}
	Any _0x40F769D31A00D5A0_Export(Any p0, Any p1)
	{
		return VOLUME::_0x40F769D31A00D5A0(p0, p1);
	}
	scrVector _0xD882C5B3991575B7_Export(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		return VOLUME::_0xD882C5B3991575B7(p0, p1, p2, p3, p4);
	}
	void _0xB469CFD9E065EB99_Export(Any p0, Any p1)
	{
		return VOLUME::_0xB469CFD9E065EB99(p0, p1);
	}
	Any _0x7FD78DFD0C5D7B9B_Export(Any p0)
	{
		return VOLUME::_0x7FD78DFD0C5D7B9B(p0);
	}
	Any _0xEE1D6FF54CAF7714_Export(Any p0, Any p1)
	{
		return VOLUME::_0xEE1D6FF54CAF7714(p0, p1);
	}
	void _0xD52DF30355EA7C8E_Export(Any p0, Any p1, Any p2)
	{
		return VOLUME::_0xD52DF30355EA7C8E(p0, p1, p2);
	}
	void SET_VOLUME_OWNER_PERSISTENT_CHARACTER_Export(Volume volume, PersChar persChar, BOOL p2)
	{
		return VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(volume, persChar, p2);
	}
	void _0x6D5F9E69BA1BE783_Export(Any p0)
	{
		return VOLUME::_0x6D5F9E69BA1BE783(p0);
	}
	void _0x998202B206872672_Export(Any p0)
	{
		return VOLUME::_0x998202B206872672(p0);
	}
	void _0x4A8FEFC43FD8AC9B_Export(Any p0, Any p1, Any p2)
	{
		return VOLUME::_0x4A8FEFC43FD8AC9B(p0, p1, p2);
	}
	void _0xF3A2FBA5985C8CD5_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return VOLUME::_0xF3A2FBA5985C8CD5(p0, p1, p2, p3);
	}
	void _0x53D05D60E5F5B40C_Export(Any p0, Any p1, Any p2, Any p3)
	{
		return VOLUME::_0x53D05D60E5F5B40C(p0, p1, p2, p3);
	}
	Any _0xCA5C90D40665D5CE_Export(Any p0, Any p1)
	{
		return VOLUME::_0xCA5C90D40665D5CE(p0, p1);
	}
	void _0x3EFABB21E14A6BD1_Export(Any p0, Any p1, Any p2)
	{
		return VOLUME::_0x3EFABB21E14A6BD1(p0, p1, p2);
	}
	BOOL _IS_AGGREGATE_VOLUME_Export(Volume volume)
	{
		return VOLUME::_IS_AGGREGATE_VOLUME(volume);
	}
	Volume _CREATE_VOLUME_LOCK_Export(float x, float y, float z, float radius, int flag, Any p5)
	{
		return VOLUME::_CREATE_VOLUME_LOCK(x, y, z, radius, flag, p5);
	}
	Volume _CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY_Export(Entity entity, float radius, int flag, Any p3)
	{
		return VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(entity, radius, flag, p3);
	}
	BOOL _IS_VOLUME_LOCK_REQUEST_VALID_2_Export(int volLockRequestId)
	{
		return VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId);
	}
	scrVector _0xC4019CF9AE8E931A_Export(int volLockRequestId)
	{
		return VOLUME::_0xC4019CF9AE8E931A(volLockRequestId);
	}
	Any _0xF6CE6F9C3897804E_Export(Any p0)
	{
		return VOLUME::_0xF6CE6F9C3897804E(p0);
	}
	Any _0xF6F5447D418DAA82_Export(Any p0)
	{
		return VOLUME::_0xF6F5447D418DAA82(p0);
	}
	void _0xD4FA73FE628FEC63_Export(Any p0, Any p1)
	{
		return VOLUME::_0xD4FA73FE628FEC63(p0, p1);
	}
	void _0xB440F4E35393FC39_Export(Volume volume, Any p1)
	{
		return VOLUME::_0xB440F4E35393FC39(volume, p1);
	}
	void _0xD460135C98940274_Export(Volume volume, Any p1)
	{
		return VOLUME::_0xD460135C98940274(volume, p1);
	}
	void _0xEBA87B9273835CF3_Export(Any p0, Any p1)
	{
		return VOLUME::_0xEBA87B9273835CF3(p0, p1);
	}
	Any _0xAA9EE2AAFC717623_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return VOLUME::_0xAA9EE2AAFC717623(p0, p1, p2, p3, p4, p5);
	}
	Any _0x870E9981ED27C815_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		return VOLUME::_0x870E9981ED27C815(p0, p1, p2, p3, p4, p5);
	}
	BOOL DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK_Export(float x, float y, float z, float radius, BOOL p4, int p5, int p6)
	{
		return VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(x, y, z, radius, p4, p5, p6);
	}
	BOOL _IS_POINT_NEAR_VOLUME_LOCK_CENTER_Export(float x, float y, float z, float radius, int p4, int p5, int flags)
	{
		return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(x, y, z, radius, p4, p5, flags);
	}
	Any _0x51E52C9687FCDEEC_Export(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		return VOLUME::_0x51E52C9687FCDEEC(p0, p1, p2, p3, p4, p5, p6);
	}
	int _FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS_Export(void* args)
	{
		return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(args);
	}
	void _MODIFY_VOLUME_LOCK_LOCATION_Export(int volLock, float x, float y, float z)
	{
		return VOLUME::_MODIFY_VOLUME_LOCK_LOCATION(volLock, x, y, z);
	}
	void _0x695DAC2DB928F308_Export(Any p0, Any p1)
	{
		return VOLUME::_0x695DAC2DB928F308(p0, p1);
	}
	void _RELEASE_LOCK_VOLUME_Export(int volLockRequestId)
	{
		return VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
	}
	void _0xAC355980681A7F89_Export(Any p0)
	{
		return VOLUME::_0xAC355980681A7F89(p0);
	}
	BOOL _ADD_ENTRY_VOLUME_LOCK_Export(void* args)
	{
		return VOLUME::_ADD_ENTRY_VOLUME_LOCK(args);
	}
	void _0xC61E2FD926DBB406_Export()
	{
		return VOLUME::_0xC61E2FD926DBB406();
	}
	int REQUEST_VOLUME_LOCK_Export(float x, float y, float z, float radius, int p4, int p5)
	{
		return VOLUME::REQUEST_VOLUME_LOCK(x, y, z, radius, p4, p5);
	}
	int REQUEST_VOLUME_LOCK_WITH_ARGS_Export(void* args)
	{
		return VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(args);
	}
	BOOL IS_VOLUME_LOCK_REQUEST_VALID_Export(int volLockRequestId)
	{
		return VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(volLockRequestId);
	}
	int GET_VOLUME_LOCK_REQUEST_STATUS_Export(int volLockRequestId)
	{
		return VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(volLockRequestId);
	}
	Any _0x351D71B8B72B858B_Export(Any p0)
	{
		return VOLUME::_0x351D71B8B72B858B(p0);
	}
	void _0xFA15C9A320E707B0_Export()
	{
		return VOLUME::_0xFA15C9A320E707B0();
	}
	void _0x52572B331E693AED_Export(Any p0, Any p1, Any p2)
	{
		return VOLUME::_0x52572B331E693AED(p0, p1, p2);
	}
	void _0x128FC3A893BF853A_Export(Any p0)
	{
		return VOLUME::_0x128FC3A893BF853A(p0);
	}
	void _SET_VOLUME_RELATIONSHIP_Export(Volume volume, Hash relationshipGroup)
	{
		return VOLUME::_SET_VOLUME_RELATIONSHIP(volume, relationshipGroup);
	}
	Hash _GET_VOLUME_RELATIONSHIP_Export(Volume volume)
	{
		return VOLUME::_GET_VOLUME_RELATIONSHIP(volume);
	}
	void DISABLE_WATER_LOOKUP_Export()
	{
		return WATER::DISABLE_WATER_LOOKUP();
	}
	void ENABLE_WATER_LOOKUP_Export()
	{
		return WATER::ENABLE_WATER_LOOKUP();
	}
	BOOL GET_WATER_HEIGHT_Export(float PosX, float PosY, float PosZ, float* Height)
	{
		return WATER::GET_WATER_HEIGHT(PosX, PosY, PosZ, Height);
	}
	BOOL GET_WATER_HEIGHT_NO_WAVES_Export(float PosX, float PosY, float PosZ, float* Height)
	{
		return WATER::GET_WATER_HEIGHT_NO_WAVES(PosX, PosY, PosZ, Height);
	}
	int TEST_PROBE_AGAINST_ALL_WATER_Export(float StartPosX, float StartPosY, float StartPosZ, float EndPosX, float EndPosY, float EndPosZ, int BlockingFlags, scrVector* IntersectionPos)
	{
		return WATER::TEST_PROBE_AGAINST_ALL_WATER(StartPosX, StartPosY, StartPosZ, EndPosX, EndPosY, EndPosZ, BlockingFlags, IntersectionPos);
	}
	int TEST_VERTICAL_PROBE_AGAINST_ALL_WATER_Export(float StartPosX, float StartPosY, float StartPosZ, int BlockingFlags, float* Height)
	{
		return WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(StartPosX, StartPosY, StartPosZ, BlockingFlags, Height);
	}
	void REMOVE_EXTRA_CALMING_QUAD_Export(int Idx)
	{
		return WATER::REMOVE_EXTRA_CALMING_QUAD(Idx);
	}
	void _0x09A1C7DFDCE54FBC_Export(int p0)
	{
		return WATER::_0x09A1C7DFDCE54FBC(p0);
	}
	void _0xF0FBF193F1F5C0EA_Export(Ped ped)
	{
		return WATER::_0xF0FBF193F1F5C0EA(ped);
	}
	void _0xA33F5069B0CB89B8_Export()
	{
		return WATER::_0xA33F5069B0CB89B8();
	}
	void _0xB34A6009A0DB80B8_Export(Entity entity)
	{
		return WATER::_0xB34A6009A0DB80B8(entity);
	}
	void _SET_OCEAN_GUARMA_WATER_QUADRANT_Export(float wavesHeight, float p1, int p2, float p3, float p4, float p5, float p6, float wavesStrength, int p8)
	{
		return WATER::_SET_OCEAN_GUARMA_WATER_QUADRANT(wavesHeight, p1, p2, p3, p4, p5, p6, wavesStrength, p8);
	}
	void _RESET_GUARMA_WATER_STATE_Export()
	{
		return WATER::_RESET_GUARMA_WATER_STATE();
	}
	void _SET_WORLD_WATER_TYPE_Export(int waterType)
	{
		return WATER::_SET_WORLD_WATER_TYPE(waterType);
	}
	int _GET_WORLD_WATER_TYPE_Export()
	{
		return WATER::_GET_WORLD_WATER_TYPE();
	}
	void _0x0DCEC6A92E497E17_Export(Entity entity, int p1)
	{
		return WATER::_0x0DCEC6A92E497E17(entity, p1);
	}
	void _0xE8126623008372AA_Export()
	{
		return WATER::_0xE8126623008372AA();
	}
	Hash _GET_WEAPON_UNLOCK_Export(Hash weaponHash)
	{
		return WEAPON::_GET_WEAPON_UNLOCK(weaponHash);
	}
	void _ADD_AMMO_TO_PED_Export(Ped ped, Hash weaponHash, int amount, Hash addReason)
	{
		return WEAPON::_ADD_AMMO_TO_PED(ped, weaponHash, amount, addReason);
	}
	void _ADD_AMMO_TO_PED_BY_TYPE_Export(Ped ped, Hash ammoType, int amount, Hash addReason)
	{
		return WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(ped, ammoType, amount, addReason);
	}
	void _REMOVE_AMMO_FROM_PED_Export(Ped ped, Hash weaponHash, int amount, Hash removeReason)
	{
		return WEAPON::_REMOVE_AMMO_FROM_PED(ped, weaponHash, amount, removeReason);
	}
	void _REMOVE_AMMO_FROM_PED_BY_TYPE_Export(Ped ped, Hash ammoHash, int amount, Hash removeReason)
	{
		return WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(ped, ammoHash, amount, removeReason);
	}
	void _REMOVE_ALL_PED_AMMO_Export(Ped ped)
	{
		return WEAPON::_REMOVE_ALL_PED_AMMO(ped);
	}
	void SET_PED_AMMO_Export(Ped PedIndex, Hash TypeOfWeapon, int AmountOfAmmo)
	{
		return WEAPON::SET_PED_AMMO(PedIndex, TypeOfWeapon, AmountOfAmmo);
	}
	void _0x8A779706DA5CA3DD_Export(Ped ped, BOOL p1, int p2)
	{
		return WEAPON::_0x8A779706DA5CA3DD(ped, p1, p2);
	}
	void _0x9409C62504A8F9E9_Export(Vehicle vehicle, BOOL p1)
	{
		return WEAPON::_0x9409C62504A8F9E9(vehicle, p1);
	}
	void _SET_VEHICLE_WEAPON_HEADING_LIMITS_Export(Vehicle vehicle, int p1, float minHeading, float maxHeading)
	{
		return WEAPON::_SET_VEHICLE_WEAPON_HEADING_LIMITS(vehicle, p1, minHeading, maxHeading);
	}
	Any _SET_VEHICLE_WEAPON_HEADING_LIMITS_2_Export(Vehicle vehicle, int p1, float minHeading, float maxHeading)
	{
		return WEAPON::_SET_VEHICLE_WEAPON_HEADING_LIMITS_2(vehicle, p1, minHeading, maxHeading);
	}
	void SET_VEHICLE_WEAPON_HEADING_Export(Vehicle vehicle, int seatIndex, float heading, BOOL p3)
	{
		return WEAPON::SET_VEHICLE_WEAPON_HEADING(vehicle, seatIndex, heading, p3);
	}
	void SET_PED_INFINITE_AMMO_Export(Ped PedIndex, BOOL Infinite, Hash TypeOfWeapon)
	{
		return WEAPON::SET_PED_INFINITE_AMMO(PedIndex, Infinite, TypeOfWeapon);
	}
	void _SET_PED_INFINITE_AMMO_CLIP_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::_SET_PED_INFINITE_AMMO_CLIP(ped, toggle);
	}
	int GET_AMMO_IN_PED_WEAPON_Export(Ped PedIndex, Hash TypeOfWeapon)
	{
		return WEAPON::GET_AMMO_IN_PED_WEAPON(PedIndex, TypeOfWeapon);
	}
	int GET_MAX_AMMO_IN_CLIP_Export(Ped PedIndex, Hash WeaponType, BOOL DoDeadCheck)
	{
		return WEAPON::GET_MAX_AMMO_IN_CLIP(PedIndex, WeaponType, DoDeadCheck);
	}
	BOOL GET_AMMO_IN_CLIP_Export(Ped PedIndex, int* ReturnAmmoInClip, Hash WeaponType)
	{
		return WEAPON::GET_AMMO_IN_CLIP(PedIndex, ReturnAmmoInClip, WeaponType);
	}
	BOOL _GET_AMMO_IN_CLIP_BY_INVENTORY_UID_Export(Ped ped, int* ammo, void* inventoryUid)
	{
		return WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(ped, ammo, inventoryUid);
	}
	BOOL SET_AMMO_IN_CLIP_Export(Ped PedIndex, Hash WeaponType, int AmmoInClip)
	{
		return WEAPON::SET_AMMO_IN_CLIP(PedIndex, WeaponType, AmmoInClip);
	}
	Any _REFILL_AMMO_IN_CLIP_Export(Ped ped, void* clipInventoryUid, int p2)
	{
		return WEAPON::_REFILL_AMMO_IN_CLIP(ped, clipInventoryUid, p2);
	}
	BOOL GET_MAX_AMMO_Export(Ped PedIndex, int* ReturnMaxAmmo, Hash WeaponType)
	{
		return WEAPON::GET_MAX_AMMO(PedIndex, ReturnMaxAmmo, WeaponType);
	}
	void SET_PED_AMMO_BY_TYPE_Export(Ped PedIndex, Hash AmmoType, int AmmoAmount)
	{
		return WEAPON::SET_PED_AMMO_BY_TYPE(PedIndex, AmmoType, AmmoAmount);
	}
	int GET_PED_AMMO_BY_TYPE_Export(Ped PedIndex, Hash AmmoType)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(PedIndex, AmmoType);
	}
	void SET_PED_AMMO_TO_DROP_Export(Ped PedIndex, int MinAmount, int MaxAmount)
	{
		return WEAPON::SET_PED_AMMO_TO_DROP(PedIndex, MinAmount, MaxAmount);
	}
	Hash _GET_AMMO_TYPE_FOR_WEAPON_Export(Hash weaponHash)
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(weaponHash);
	}
	Hash GET_PED_AMMO_TYPE_FROM_WEAPON_Export(Ped PedIndex, Hash WeaponType)
	{
		return WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PedIndex, WeaponType);
	}
	Hash _GET_WEAPON_TYPE_FROM_AMMO_TYPE_Export(Hash ammoType)
	{
		return WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(ammoType);
	}
	Hash _GET_WEAPON_COMPONENT_TYPE_MODEL_Export(Hash componentHash)
	{
		return WEAPON::_GET_WEAPON_COMPONENT_TYPE_MODEL(componentHash);
	}
	Hash _GET_WEAPONTYPE_MODEL_Export(Hash weaponHash)
	{
		return WEAPON::_GET_WEAPONTYPE_MODEL(weaponHash);
	}
	Hash _GET_WEAPONTYPE_SLOT_Export(Hash weaponHash)
	{
		return WEAPON::_GET_WEAPONTYPE_SLOT(weaponHash);
	}
	Hash GET_WEAPONTYPE_GROUP_Export(Hash weapon)
	{
		return WEAPON::GET_WEAPONTYPE_GROUP(weapon);
	}
	Hash _0xF8204EF17410BF43_Export(Hash weaponGroupHash, float p1, float p2, Any p3)
	{
		return WEAPON::_0xF8204EF17410BF43(weaponGroupHash, p1, p2, p3);
	}
	BOOL _IS_WEAPON_KIT_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_KIT(weaponHash);
	}
	BOOL _IS_WEAPON_KIT_2_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_KIT_2(weaponHash);
	}
	BOOL IS_WEAPON_BOW_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_BOW(weaponHash);
	}
	BOOL _IS_WEAPON_LANTERN_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_LANTERN(weaponHash);
	}
	BOOL _IS_WEAPON_TORCH_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_TORCH(weaponHash);
	}
	BOOL GIVE_WEAPON_TO_PED_WITH_OPTIONS_Export(Ped ped, void* data, void* outData)
	{
		return WEAPON::GIVE_WEAPON_TO_PED_WITH_OPTIONS(ped, data, outData);
	}
	Hash GIVE_WEAPON_TO_PED_Export(Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand, BOOL bForceInHolster, int attachPoint, BOOL bAllowMultipleCopies, float p7, float p8, Hash addReason, BOOL bIgnoreUnlocks, float permanentDegradation, BOOL p12)
	{
		return WEAPON::GIVE_WEAPON_TO_PED(ped, weaponHash, ammoCount, bForceInHand, bForceInHolster, attachPoint, bAllowMultipleCopies, p7, p8, addReason, bIgnoreUnlocks, permanentDegradation, p12);
	}
	void _SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE_Export(Ped ped, int attachPoint)
	{
		return WEAPON::_SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE(ped, attachPoint);
	}
	Any _0x9F0E1892C7F228A8_Export(BOOL p0)
	{
		return WEAPON::_0x9F0E1892C7F228A8(p0);
	}
	void _HOLSTER_PED_WEAPONS_Export(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL immediately)
	{
		return WEAPON::_HOLSTER_PED_WEAPONS(ped, p1, p2, p3, immediately);
	}
	void _HIDE_PED_WEAPONS_Export(Ped ped, int p0, BOOL immediately)
	{
		return WEAPON::_HIDE_PED_WEAPONS(ped, p0, immediately);
	}
	void _0x4820A6939D7CEF28_Export(Any p0, Any p1)
	{
		return WEAPON::_0x4820A6939D7CEF28(p0, p1);
	}
	void SET_CURRENT_PED_WEAPON_Export(Ped PedIndex, Hash TypeOfWeapon, BOOL bForceInHand, int attachPoint, BOOL p4, BOOL p5)
	{
		return WEAPON::SET_CURRENT_PED_WEAPON(PedIndex, TypeOfWeapon, bForceInHand, attachPoint, p4, p5);
	}
	BOOL GET_CURRENT_PED_WEAPON_Export(Ped PedIndex, Hash* ReturnWeaponType, BOOL DoDeadCheck, int attachPoint, BOOL p4)
	{
		return WEAPON::GET_CURRENT_PED_WEAPON(PedIndex, ReturnWeaponType, DoDeadCheck, attachPoint, p4);
	}
	Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX_Export(Ped PedIndex, int attachPoint)
	{
		return WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PedIndex, attachPoint);
	}
	BOOL _ENABLE_WEAPON_RESTORE_Export(Ped ped)
	{
		return WEAPON::_ENABLE_WEAPON_RESTORE(ped);
	}
	Hash GET_PED_BACKUP_WEAPON_Export(Ped ped, BOOL p1)
	{
		return WEAPON::GET_PED_BACKUP_WEAPON(ped, p1);
	}
	Any _0x486C96A0DCD2BC92_Export(Any p0, Any p1)
	{
		return WEAPON::_0x486C96A0DCD2BC92(p0, p1);
	}
	Hash _GET_PED_WORST_WEAPON_Export(Ped ped, BOOL p1, BOOL p2, BOOL p3)
	{
		return WEAPON::_GET_PED_WORST_WEAPON(ped, p1, p2, p3);
	}
	Hash GET_BEST_PED_WEAPON_Export(Ped PedIndex, BOOL p1, BOOL p2)
	{
		return WEAPON::GET_BEST_PED_WEAPON(PedIndex, p1, p2);
	}
	Any _GET_BEST_PED_WEAPON_IN_INVENTORY_Export(Ped ped, Any p1, void* guidPrimary)
	{
		return WEAPON::_GET_BEST_PED_WEAPON_IN_INVENTORY(ped, p1, guidPrimary);
	}
	void GET_BEST_PED_SHORTARM_GUID_Export(Ped ped, void* outGUID, BOOL p2, BOOL p3)
	{
		return WEAPON::GET_BEST_PED_SHORTARM_GUID(ped, outGUID, p2, p3);
	}
	BOOL GET_PED_WEAPON_GUID_AT_ATTACH_POINT_Export(Ped ped, int attachPoint, void* weaponGuid)
	{
		return WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(ped, attachPoint, weaponGuid);
	}
	Hash _GET_BEST_PED_WEAPON_IN_GROUP_Export(Ped ped, Hash weaponGroup, BOOL p2, BOOL p3)
	{
		return WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(ped, weaponGroup, p2, p3);
	}
	Hash _GET_DEFAULT_UNARMED_WEAPON_HASH_Export(Ped ped)
	{
		return WEAPON::_GET_DEFAULT_UNARMED_WEAPON_HASH(ped);
	}
	void _SET_AMMO_IN_TURRET_Export(Vehicle vehicle, Hash turretHash, int ammo)
	{
		return WEAPON::_SET_AMMO_IN_TURRET(vehicle, turretHash, ammo);
	}
	BOOL SET_CURRENT_PED_VEHICLE_WEAPON_Export(Ped PedIndex, Hash TypeOfWeapon)
	{
		return WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PedIndex, TypeOfWeapon);
	}
	BOOL GET_CURRENT_PED_VEHICLE_WEAPON_Export(Ped PedIndex, Hash* ReturnWeaponType)
	{
		return WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PedIndex, ReturnWeaponType);
	}
	BOOL IS_PED_ARMED_Export(Ped ped, int flags)
	{
		return WEAPON::IS_PED_ARMED(ped, flags);
	}
	Any _0xA2091482ED42EF85_Export(Any p0, Any p1)
	{
		return WEAPON::_0xA2091482ED42EF85(p0, p1);
	}
	BOOL _IS_WEAPON_HOLSTER_STATE_CHANGING_Export(Ped ped)
	{
		return WEAPON::_IS_WEAPON_HOLSTER_STATE_CHANGING(ped);
	}
	BOOL IS_WEAPON_VALID_Export(Hash TypeOfWeapon)
	{
		return WEAPON::IS_WEAPON_VALID(TypeOfWeapon);
	}
	BOOL _IS_AMMO_VALID_Export(Hash ammoHash)
	{
		return WEAPON::_IS_AMMO_VALID(ammoHash);
	}
	Any _0x23BF601A42F329A0_Export(Any p0)
	{
		return WEAPON::_0x23BF601A42F329A0(p0);
	}
	BOOL IS_PED_CARRYING_WEAPON_Export(Ped ped, Hash weaponHash)
	{
		return WEAPON::IS_PED_CARRYING_WEAPON(ped, weaponHash);
	}
	BOOL HAS_PED_GOT_WEAPON_Export(Ped PedIndex, Hash TypeOfWeapon, int GeneralWeaponType, BOOL p3)
	{
		return WEAPON::HAS_PED_GOT_WEAPON(PedIndex, TypeOfWeapon, GeneralWeaponType, p3);
	}
	BOOL _0x07E1C35F0078C3F9_Export(Ped ped, Hash weapon)
	{
		return WEAPON::_0x07E1C35F0078C3F9(ped, weapon);
	}
	BOOL IS_PED_WEAPON_READY_TO_SHOOT_Export(Ped PedIndex)
	{
		return WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PedIndex);
	}
	Hash _GET_PED_WEAPON_IN_SLOT_Export(Ped ped, Hash slotHash)
	{
		return WEAPON::_GET_PED_WEAPON_IN_SLOT(ped, slotHash);
	}
	void GIVE_DELAYED_WEAPON_TO_PED_Export(Ped PedIndex, Hash TypeOfWeapon, int AmountOfAmmo, BOOL bSetAsCurrentWeapon, Hash addReason)
	{
		return WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PedIndex, TypeOfWeapon, AmountOfAmmo, bSetAsCurrentWeapon, addReason);
	}
	void REMOVE_ALL_PED_WEAPONS_Export(Ped PedIndex, BOOL p1, BOOL p2)
	{
		return WEAPON::REMOVE_ALL_PED_WEAPONS(PedIndex, p1, p2);
	}
	void REMOVE_WEAPON_FROM_PED_Export(Ped PedIndex, Hash TypeOfWeapon, BOOL p2, Hash removeReason)
	{
		return WEAPON::REMOVE_WEAPON_FROM_PED(PedIndex, TypeOfWeapon, p2, removeReason);
	}
	void _REMOVE_WEAPON_FROM_PED_BY_GUID_Export(Ped ped, void* weaponGuid, Hash removeReason)
	{
		return WEAPON::_REMOVE_WEAPON_FROM_PED_BY_GUID(ped, weaponGuid, removeReason);
	}
	void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE_Export(Ped PedIndex, BOOL HideWeaponFlag)
	{
		return WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PedIndex, HideWeaponFlag);
	}
	void SET_PED_CURRENT_WEAPON_VISIBLE_Export(Ped PedIndex, BOOL VisibleFlag, BOOL DestroyObject, BOOL DeadCheck, BOOL StoreDestroyedWeaponClipValue)
	{
		return WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PedIndex, VisibleFlag, DestroyObject, DeadCheck, StoreDestroyedWeaponClipValue);
	}
	void _SET_PED_WEAPON_ATTACH_POINT_VISIBILITY_Export(Ped ped, int attachPoint, BOOL visible)
	{
		return WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(ped, attachPoint, visible);
	}
	void _SET_PED_ALL_WEAPONS_VISIBILITY_Export(Ped ped, BOOL visible)
	{
		return WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(ped, visible);
	}
	void SET_PED_DROPS_WEAPONS_WHEN_DEAD_Export(Ped PedIndex, BOOL DropsWeaponsFlag)
	{
		return WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(PedIndex, DropsWeaponsFlag);
	}
	void _0x431240A58484D5D0_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::_0x431240A58484D5D0(ped, toggle);
	}
	void _0x45E57FDD531C9477_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::_0x45E57FDD531C9477(ped, toggle);
	}
	void _0xF08D8FEB455F2C8C_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::_0xF08D8FEB455F2C8C(ped, toggle);
	}
	void _0x16D9841A85FA627E_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::_0x16D9841A85FA627E(ped, toggle);
	}
	BOOL GET_PED_LAST_WEAPON_IMPACT_COORD_Export(Ped PedIndex, scrVector* ImpactCoord)
	{
		return WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PedIndex, ImpactCoord);
	}
	void _CLEAR_PED_LAST_WEAPON_DAMAGE_Export(Ped ped)
	{
		return WEAPON::_CLEAR_PED_LAST_WEAPON_DAMAGE(ped);
	}
	BOOL _HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_Export(Entity entity, Hash weaponName, int weaponType)
	{
		return WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(entity, weaponName, weaponType);
	}
	void SET_PED_DROPS_INVENTORY_WEAPON_Export(Ped PedIndex, Hash WeaponType, float offsetX, float offsetY, float offsetZ, int ammoAmount)
	{
		return WEAPON::SET_PED_DROPS_INVENTORY_WEAPON(PedIndex, WeaponType, offsetX, offsetY, offsetZ, ammoAmount);
	}
	void _0xB0FB9B196A3D13F0_Export(Any p0, Any p1, Any p2)
	{
		return WEAPON::_0xB0FB9B196A3D13F0(p0, p1, p2);
	}
	void _0x2EBF70E1D8C06683_Export(Ped ped, Hash p1)
	{
		return WEAPON::_0x2EBF70E1D8C06683(ped, p1);
	}
	void _0x63B83A526329AFBC_Export(Any p0)
	{
		return WEAPON::_0x63B83A526329AFBC(p0);
	}
	Any _MAKE_PED_RELOAD_Export(Ped ped)
	{
		return WEAPON::_MAKE_PED_RELOAD(ped);
	}
	Any _REFILL_AMMO_IN_CURRENT_PED_WEAPON_Export(Ped ped)
	{
		return WEAPON::_REFILL_AMMO_IN_CURRENT_PED_WEAPON(ped);
	}
	Entity MAKE_PED_DROP_WEAPON_Export(Ped ped, BOOL p1, int attachPoint, BOOL p3, BOOL p4)
	{
		return WEAPON::MAKE_PED_DROP_WEAPON(ped, p1, attachPoint, p3, p4);
	}
	Hash _GET_PED_CURRENT_HELD_WEAPON_Export(Ped ped)
	{
		return WEAPON::_GET_PED_CURRENT_HELD_WEAPON(ped);
	}
	void SET_ALLOW_ANY_WEAPON_DROP_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::SET_ALLOW_ANY_WEAPON_DROP(ped, toggle);
	}
	void _0xA3716A77DCF17424_Export(Any p0, Any p1, Any p2)
	{
		return WEAPON::_0xA3716A77DCF17424(p0, p1, p2);
	}
	void _0x457B16951AD77C1B_Export(Any p0)
	{
		return WEAPON::_0x457B16951AD77C1B(p0);
	}
	Any _0x3799EFCC3C8CD5E1_Export(Any p0)
	{
		return WEAPON::_0x3799EFCC3C8CD5E1(p0);
	}
	float _GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON_Export(Ped ped)
	{
		return WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(ped);
	}
	void _REMOVE_WEAPON_COMPONENT_FROM_PED_Export(Ped ped, Hash componentHash, Hash weaponHash)
	{
		return WEAPON::_REMOVE_WEAPON_COMPONENT_FROM_PED(ped, componentHash, weaponHash);
	}
	BOOL _HAS_PED_GOT_WEAPON_COMPONENT_Export(Ped ped, Hash componentHash, Hash weaponHash)
	{
		return WEAPON::_HAS_PED_GOT_WEAPON_COMPONENT(ped, componentHash, weaponHash);
	}
	BOOL _IS_PED_CURRENT_WEAPON_HOLSTERED_Export(Ped ped)
	{
		return WEAPON::_IS_PED_CURRENT_WEAPON_HOLSTERED(ped);
	}
	Any _0xD2209866B0CB72EA_Export(Any p0, Any p1)
	{
		return WEAPON::_0xD2209866B0CB72EA(p0, p1);
	}
	void _REQUEST_WEAPON_ASSET_Export(Hash weaponHash, int p1, BOOL p2)
	{
		return WEAPON::_REQUEST_WEAPON_ASSET(weaponHash, p1, p2);
	}
	BOOL _HAS_WEAPON_ASSET_LOADED_Export(Hash weaponHash)
	{
		return WEAPON::_HAS_WEAPON_ASSET_LOADED(weaponHash);
	}
	void _REMOVE_WEAPON_ASSET_Export(Hash weaponHash)
	{
		return WEAPON::_REMOVE_WEAPON_ASSET(weaponHash);
	}
	void _0xE9B3FEC825668291_Export(Any p0, Any p1, Any p2)
	{
		return WEAPON::_0xE9B3FEC825668291(p0, p1, p2);
	}
	Any _0x9CCA3131E6B53C68_Export(Any p0, Any p1, Any p2)
	{
		return WEAPON::_0x9CCA3131E6B53C68(p0, p1, p2);
	}
	const char* _GET_WEAPON_NAME_2_Export(Hash weaponHash)
	{
		return WEAPON::_GET_WEAPON_NAME_2(weaponHash);
	}
	const char* _GET_WEAPON_NAME_Export(Hash weaponHash)
	{
		return WEAPON::_GET_WEAPON_NAME(weaponHash);
	}
	const char* _GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION_Export(Hash weaponHash, float permanentDegradationLevel)
	{
		return WEAPON::_GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION(weaponHash, permanentDegradationLevel);
	}
	void _0xB832F1A686B9B810_Export(Any p0, Any p1, Any p2)
	{
		return WEAPON::_0xB832F1A686B9B810(p0, p1, p2);
	}
	Any _0x5A695BD328586B44_Export(Any p0, Any p1)
	{
		return WEAPON::_0x5A695BD328586B44(p0, p1);
	}
	void _0x641351E9AD103890_Export(Any p0, Any p1)
	{
		return WEAPON::_0x641351E9AD103890(p0, p1);
	}
	void SET_INSTANTLY_EQUIP_WEAPON_PICKUPS_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::SET_INSTANTLY_EQUIP_WEAPON_PICKUPS(ped, toggle);
	}
	void _SET_FORCE_AUTO_EQUIP_Export(Ped ped, BOOL toggle)
	{
		return WEAPON::_SET_FORCE_AUTO_EQUIP(ped, toggle);
	}
	void _SEND_WEAPON_TO_INVENTORY_Export(Ped ped, Hash weaponHash)
	{
		return WEAPON::_SEND_WEAPON_TO_INVENTORY(ped, weaponHash);
	}
	void _0x14FF0C2545527F9B_Export(Ped horse, Hash weaponHash, Ped ped)
	{
		return WEAPON::_0x14FF0C2545527F9B(horse, weaponHash, ped);
	}
	void _0xD4C6E24D955FF061_Export(Any p0)
	{
		return WEAPON::_0xD4C6E24D955FF061(p0);
	}
	Any _0xAFFD0CCF31F469B8_Export(Any p0)
	{
		return WEAPON::_0xAFFD0CCF31F469B8(p0);
	}
	Hash _GET_WEAPON_STAT_ID_Export(Hash weaponHash)
	{
		return WEAPON::_GET_WEAPON_STAT_ID(weaponHash);
	}
	BOOL _HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY_Export(Entity entity, Hash weaponHash, int ms)
	{
		return WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(entity, weaponHash, ms);
	}
	Hash _GET_PED_HOGTIE_WEAPON_Export(Ped ped)
	{
		return WEAPON::_GET_PED_HOGTIE_WEAPON(ped);
	}
	Object _CREATE_WEAPON_OBJECT_Export(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale)
	{
		return WEAPON::_CREATE_WEAPON_OBJECT(weaponHash, ammoCount, x, y, z, showWorldModel, scale);
	}
	void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT_Export(Object WeaponObjectIndex, Hash WeaponComponent)
	{
		return WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(WeaponObjectIndex, WeaponComponent);
	}
	BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT_Export(Object WeaponObjectIndex, Hash WeaponComponent)
	{
		return WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(WeaponObjectIndex, WeaponComponent);
	}
	void _GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT_Export(Object* weaponObject, Ped ped, Hash componentHash, BOOL p3)
	{
		return WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(weaponObject, ped, componentHash, p3);
	}
	Object _GET_WEAPON_OBJECT_FROM_PED_Export(Ped ped, BOOL p1)
	{
		return WEAPON::_GET_WEAPON_OBJECT_FROM_PED(ped, p1);
	}
	Object _GET_PED_WEAPON_OBJECT_Export(Ped ped, BOOL p1)
	{
		return WEAPON::_GET_PED_WEAPON_OBJECT(ped, p1);
	}
	void _GIVE_WEAPON_COMPONENT_TO_ENTITY_Export(Entity entity, Hash componentHash, Hash weaponHash, BOOL p3)
	{
		return WEAPON::_GIVE_WEAPON_COMPONENT_TO_ENTITY(entity, componentHash, weaponHash, p3);
	}
	void _0x74C9080FDD1BB48E_Export(Any p0, Any p1)
	{
		return WEAPON::_0x74C9080FDD1BB48E(p0, p1);
	}
	void _0x74C9080FDD1BB48F_Export(Any p0, Any p1)
	{
		return WEAPON::_0x74C9080FDD1BB48F(p0, p1);
	}
	void _0x74C2365FDD1BB48F_Export(Any p0, Any p1)
	{
		return WEAPON::_0x74C2365FDD1BB48F(p0, p1);
	}
	void _0x74C90AAACC1DD48F_Export(Any p0)
	{
		return WEAPON::_0x74C90AAACC1DD48F(p0);
	}
	Any _0x74C8000FDD1BB111_Export(Any p0, Any p1)
	{
		return WEAPON::_0x74C8000FDD1BB111(p0, p1);
	}
	Any _0x74C8000FDD1BB222_Export(Any p0, Any p1)
	{
		return WEAPON::_0x74C8000FDD1BB222(p0, p1);
	}
	Hash _GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH_Export(Hash emote, int weaponEmoteTrickType)
	{
		return WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(emote, weaponEmoteTrickType);
	}
	void _SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL_Export(Ped ped, Hash emote)
	{
		return WEAPON::_SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL(ped, emote);
	}
	Hash _GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL_Export(Ped ped)
	{
		return WEAPON::_GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL(ped);
	}
	void _SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL_Export(Ped ped, int weaponEmoteTrickType, Hash spin)
	{
		return WEAPON::_SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL(ped, weaponEmoteTrickType, spin);
	}
	Hash _GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION_Export(Ped ped, int weaponEmoteVariation)
	{
		return WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(ped, weaponEmoteVariation);
	}
	int _GET_WEAPON_EMOTE_VARIATION_Export(Ped ped, int variation)
	{
		return WEAPON::_GET_WEAPON_EMOTE_VARIATION(ped, variation);
	}
	void _SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE_Export(Ped ped, int emoteType)
	{
		return WEAPON::_SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE(ped, emoteType);
	}
	BOOL _GET_CAN_TWIRL_WEAPON_Export(Hash weaponHash)
	{
		return WEAPON::_GET_CAN_TWIRL_WEAPON(weaponHash);
	}
	BOOL _GET_CORRECT_KIT_EMOTE_TWIRL_GUN_Export(Ped ped, void* weaponGuid)
	{
		return WEAPON::_GET_CORRECT_KIT_EMOTE_TWIRL_GUN(ped, weaponGuid);
	}
	Any _0xBC9444F2FF94A9C0_Export(Any p0)
	{
		return WEAPON::_0xBC9444F2FF94A9C0(p0);
	}
	Hash _GET_DEFAULT_PED_WEAPON_COLLECTION_Export(Hash pedModel)
	{
		return WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(pedModel);
	}
	void _GIVE_WEAPON_COLLECTION_TO_PED_Export(Ped ped, Hash weaponCollection)
	{
		return WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(ped, weaponCollection);
	}
	BOOL _0xF252A85B8F3F8C58_Export(Hash weaponCollection, Hash dualwieldVariant)
	{
		return WEAPON::_0xF252A85B8F3F8C58(weaponCollection, dualwieldVariant);
	}
	Hash _0x9EEFD670F10656D7_Export(Hash weaponCollection, Hash weaponGroup)
	{
		return WEAPON::_0x9EEFD670F10656D7(weaponCollection, weaponGroup);
	}
	Any _0xF2F585411E748B9C_Export(Any p0, Any p1)
	{
		return WEAPON::_0xF2F585411E748B9C(p0, p1);
	}
	int GET_WEAPON_CLIP_SIZE_Export(Hash weaponHash)
	{
		return WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash);
	}
	void _0xA769D753922B031B_Export(Any p0, Any p1, Any p2)
	{
		return WEAPON::_0xA769D753922B031B(p0, p1, p2);
	}
	void _0xC5899C4CD2E2495D_Export(Any p0)
	{
		return WEAPON::_0xC5899C4CD2E2495D(p0);
	}
	BOOL GET_ALLOW_DUAL_WIELD_Export(Ped ped)
	{
		return WEAPON::GET_ALLOW_DUAL_WIELD(ped);
	}
	void _SET_ALLOW_DUAL_WIELD_Export(Ped ped, BOOL allow)
	{
		return WEAPON::_SET_ALLOW_DUAL_WIELD(ped, allow);
	}
	BOOL _0x44C8F4908F1B2622_Export(Ped ped, Hash ammoHash)
	{
		return WEAPON::_0x44C8F4908F1B2622(ped, ammoHash);
	}
	BOOL _IS_WEAPON_KNIFE_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_KNIFE(weaponHash);
	}
	BOOL IS_WEAPON_REVOLVER_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_REVOLVER(weaponHash);
	}
	BOOL IS_WEAPON_PISTOL_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_PISTOL(weaponHash);
	}
	BOOL IS_WEAPON_REPEATER_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_REPEATER(weaponHash);
	}
	BOOL IS_WEAPON_RIFLE_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_RIFLE(weaponHash);
	}
	BOOL IS_WEAPON_SHOTGUN_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_SHOTGUN(weaponHash);
	}
	BOOL _IS_WEAPON_SNIPER_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_SNIPER(weaponHash);
	}
	BOOL IS_WEAPON_MELEE_WEAPON_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash);
	}
	BOOL _IS_WEAPON_THROWABLE_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_THROWABLE(weaponHash);
	}
	BOOL _IS_WEAPON_LASSO_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_LASSO(weaponHash);
	}
	BOOL _IS_WEAPON_BINOCULARS_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_BINOCULARS(weaponHash);
	}
	BOOL IS_WEAPON_A_GUN_Export(Hash weaponHash)
	{
		return WEAPON::IS_WEAPON_A_GUN(weaponHash);
	}
	BOOL _IS_WEAPON_TWO_HANDED_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash);
	}
	BOOL _IS_WEAPON_ONE_HANDED_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash);
	}
	BOOL _IS_WEAPON_SILENT_Export(Hash weaponHash)
	{
		return WEAPON::_IS_WEAPON_SILENT(weaponHash);
	}
	Any _0xEA522F991E120D45_Export(Any p0)
	{
		return WEAPON::_0xEA522F991E120D45(p0);
	}
	BOOL _IS_AMMO_SILENT_Export(Hash ammoHash)
	{
		return WEAPON::_IS_AMMO_SILENT(ammoHash);
	}
	BOOL _IS_AMMO_SILENT_2_Export(Hash ammoHash)
	{
		return WEAPON::_IS_AMMO_SILENT_2(ammoHash);
	}
	BOOL SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED_Export(Hash weaponHash)
	{
		return WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(weaponHash);
	}
	Any _0x5B235F24472F2C3B_Export(Any p0, Any p1)
	{
		return WEAPON::_0x5B235F24472F2C3B(p0, p1);
	}
	Any _0xBFCA7AFABF9D7967_Export(Any p0, Any p1)
	{
		return WEAPON::_0xBFCA7AFABF9D7967(p0, p1);
	}
	Any _0x495A04CAEC263AF8_Export(Any p0, Any p1)
	{
		return WEAPON::_0x495A04CAEC263AF8(p0, p1);
	}
	Any _0x95CA12E2C68043E5_Export(Any p0, Any p1)
	{
		return WEAPON::_0x95CA12E2C68043E5(p0, p1);
	}
	Any _0xABC18A28BAD4B46F_Export(Any p0, Any p1)
	{
		return WEAPON::_0xABC18A28BAD4B46F(p0, p1);
	}
	Any _0x80BB243789008A82_Export(Any p0, Any p1)
	{
		return WEAPON::_0x80BB243789008A82(p0, p1);
	}
	float _GET_WEAPON_DAMAGE_Export(Object weaponObject)
	{
		return WEAPON::_GET_WEAPON_DAMAGE(weaponObject);
	}
	void _SET_WEAPON_DAMAGE_Export(Object weaponObject, float level, BOOL p2)
	{
		return WEAPON::_SET_WEAPON_DAMAGE(weaponObject, level, p2);
	}
	float _GET_WEAPON_DIRT_Export(Object weaponObject)
	{
		return WEAPON::_GET_WEAPON_DIRT(weaponObject);
	}
	void _SET_WEAPON_DIRT_Export(Object weaponObject, float level, BOOL p2)
	{
		return WEAPON::_SET_WEAPON_DIRT(weaponObject, level, p2);
	}
	float _GET_WEAPON_SOOT_Export(Object weaponObject)
	{
		return WEAPON::_GET_WEAPON_SOOT(weaponObject);
	}
	void _SET_WEAPON_SOOT_Export(Object weaponObject, float level, BOOL p2)
	{
		return WEAPON::_SET_WEAPON_SOOT(weaponObject, level, p2);
	}
	void _SET_WEAPON_LEVEL_THRESHOLD_Export(Object weaponObject, float threshold)
	{
		return WEAPON::_SET_WEAPON_LEVEL_THRESHOLD(weaponObject, threshold);
	}
	float GET_WEAPON_DEGRADATION_Export(Object weaponObject)
	{
		return WEAPON::GET_WEAPON_DEGRADATION(weaponObject);
	}
	float GET_WEAPON_PERMANENT_DEGRADATION_Export(Object weaponObject)
	{
		return WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(weaponObject);
	}
	void _SET_WEAPON_DEGRADATION_Export(Object weaponObject, float level)
	{
		return WEAPON::_SET_WEAPON_DEGRADATION(weaponObject, level);
	}
	void _LISTEN_PROJECTILE_HIT_EVENTS_Export(BOOL listen)
	{
		return WEAPON::_LISTEN_PROJECTILE_HIT_EVENTS(listen);
	}
	float _GET_WEAPON_SCALE_Export(Object weaponObject)
	{
		return WEAPON::_GET_WEAPON_SCALE(weaponObject);
	}
	void _SET_WEAPON_SCALE_Export(Object weaponObject, float scale)
	{
		return WEAPON::_SET_WEAPON_SCALE(weaponObject, scale);
	}
	Any _0x58425FCA3D3A2D15_Export(Any p0)
	{
		return WEAPON::_0x58425FCA3D3A2D15(p0);
	}
	Any _0xEC97101A8F311282_Export(Any p0)
	{
		return WEAPON::_0xEC97101A8F311282(p0);
	}
	Hash _GET_CURRENT_PED_WEAPON_AMMO_TYPE_Export(Ped ped, Object weaponObject)
	{
		return WEAPON::_GET_CURRENT_PED_WEAPON_AMMO_TYPE(ped, weaponObject);
	}
	Hash _GET_CURRENT_AMMO_TYPE_FROM_GUID_Export(Ped ped, void* weaponGuid)
	{
		return WEAPON::_GET_CURRENT_AMMO_TYPE_FROM_GUID(ped, weaponGuid);
	}
	BOOL _IS_AMMO_TYPE_VALID_FOR_WEAPON_Export(Hash weaponHash, Hash ammoHash)
	{
		return WEAPON::_IS_AMMO_TYPE_VALID_FOR_WEAPON(weaponHash, ammoHash);
	}
	void _SET_AMMO_TYPE_FOR_PED_WEAPON_Export(Ped ped, Hash weaponHash, Hash ammoHash)
	{
		return WEAPON::_SET_AMMO_TYPE_FOR_PED_WEAPON(ped, weaponHash, ammoHash);
	}
	void _0x183CE355115B6E75_Export(Any p0, Any p1)
	{
		return WEAPON::_0x183CE355115B6E75(p0, p1);
	}
	void _SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY_Export(Ped ped, void* weaponInventoryUid, Hash ammoHash)
	{
		return WEAPON::_SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY(ped, weaponInventoryUid, ammoHash);
	}
	void _DISABLE_AMMO_TYPE_FOR_PED_WEAPON_Export(Ped ped, Hash weaponHash, Hash ammoHash)
	{
		return WEAPON::_DISABLE_AMMO_TYPE_FOR_PED_WEAPON(ped, weaponHash, ammoHash);
	}
	void _DISABLE_AMMO_TYPE_FOR_PED_Export(Ped ped, Hash ammoHash)
	{
		return WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(ped, ammoHash);
	}
	void _0xD63B4BA3A02A99E0_Export(Any p0, Any p1)
	{
		return WEAPON::_0xD63B4BA3A02A99E0(p0, p1);
	}
	void _ENABLE_AMMO_TYPE_FOR_PED_WEAPON_Export(Ped ped, Hash weaponHash, Hash ammoHash)
	{
		return WEAPON::_ENABLE_AMMO_TYPE_FOR_PED_WEAPON(ped, weaponHash, ammoHash);
	}
	void _ENABLE_AMMO_TYPE_FOR_PED_Export(Ped ped, Hash weaponHash)
	{
		return WEAPON::_ENABLE_AMMO_TYPE_FOR_PED(ped, weaponHash);
	}
	void _0x404514D231DB27A0_Export(Any p0, Any p1)
	{
		return WEAPON::_0x404514D231DB27A0(p0, p1);
	}
	void _0xD53846B9C931C181_Export(Any p0, Any p1, Any p2)
	{
		return WEAPON::_0xD53846B9C931C181(p0, p1, p2);
	}
	void _0x000FA7A4A8443AF7_Export(Any p0)
	{
		return WEAPON::_0x000FA7A4A8443AF7(p0);
	}
	void _0xECBB26529A737EF6_Export(Any p0)
	{
		return WEAPON::_0xECBB26529A737EF6(p0);
	}
	int _GET_WEAPON_ATTACH_POINT_Export(Ped ped, int attachPoint)
	{
		return WEAPON::_GET_WEAPON_ATTACH_POINT(ped, attachPoint);
	}
	Any _0x4823F13A21F51964_Export(Any p0, Any p1)
	{
		return WEAPON::_0x4823F13A21F51964(p0, p1);
	}
	void SET_CURRENT_PED_WEAPON_BY_GUID_Export(Ped ped, void* weaponUid, BOOL p2, BOOL p3, BOOL p4, BOOL p5)
	{
		return WEAPON::SET_CURRENT_PED_WEAPON_BY_GUID(ped, weaponUid, p2, p3, p4, p5);
	}
	void SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID_Export(Ped ped, void* guidPrimary, void* guidSecondary)
	{
		return WEAPON::SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(ped, guidPrimary, guidSecondary);
	}
	void _GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID_Export(Ped ped, void* guidPrimary, void* guidSecondary)
	{
		return WEAPON::_GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(ped, guidPrimary, guidSecondary);
	}
	BOOL _0x0DE0944ECCB3DF5D_Export(Ped ped)
	{
		return WEAPON::_0x0DE0944ECCB3DF5D(ped);
	}
	Any _0x46D42883E873C1D7_Export(Ped ped)
	{
		return WEAPON::_0x46D42883E873C1D7(ped);
	}
	BOOL _IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS_Export(Ped ped, Ped targetPed)
	{
		return WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(ped, targetPed);
	}
	int _0x65DC4AC5B96614CB_Export(Hash weaponHash)
	{
		return WEAPON::_0x65DC4AC5B96614CB(weaponHash);
	}
	Hash _GET_MAP_ZONE_AT_COORDS_Export(float x, float y, float z, int type)
	{
		return ZONE::_GET_MAP_ZONE_AT_COORDS(x, y, z, type);
	}
	Hash _GET_WATER_MAP_ZONE_AT_COORDS_Export(float x, float y, float z)
	{
		return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(x, y, z);
	}
	void _0xB6FD96420C0126A1_Export(Hash p0, BOOL p1)
	{
		return COMPAPP::_0xB6FD96420C0126A1(p0, p1);
	}
	void _0x74BCCEB233AD95B2_Export(Hash p0, Hash p1)
	{
		return COMPAPP::_0x74BCCEB233AD95B2(p0, p1);
	}
	void _0x29C733459A9011EB_Export(Hash p0, const char* p1)
	{
		return COMPAPP::_0x29C733459A9011EB(p0, p1);
	}
	BOOL _0x7AF1BB4504EA5ED9_Export()
	{
		return COMPAPP::_0x7AF1BB4504EA5ED9();
	}
	void _0xCCB4635A071FB62D_Export()
	{
		return COMPAPP::_0xCCB4635A071FB62D();
	}
}