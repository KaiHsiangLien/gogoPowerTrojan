#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// CourseManager[]
struct CourseManagerU5BU5D_t2468168457;
// UnityEngine.Light
struct Light_t494725636;
// Car[]
struct CarU5BU5D_t3904772487;
// MiniMapMark[]
struct MiniMapMarkU5BU5D_t4243305783;
// itemBtnOnClick
struct itemBtnOnClick_t1019039628;
// moveBtnOnClick
struct moveBtnOnClick_t2838918694;
// StatImageManager
struct StatImageManager_t3694657478;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapGen
struct  MapGen_t1609590632  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera MapGen::mainCamera
	Camera_t189460977 * ___mainCamera_2;
	// UnityEngine.Camera MapGen::backGroundCamera
	Camera_t189460977 * ___backGroundCamera_3;
	// UnityEngine.GameObject MapGen::miniMap
	GameObject_t1756533147 * ___miniMap_6;
	// UnityEngine.GameObject[] MapGen::characterList
	GameObjectU5BU5D_t3057952154* ___characterList_7;
	// UnityEngine.GameObject[] MapGen::miniMarkList
	GameObjectU5BU5D_t3057952154* ___miniMarkList_8;
	// UnityEngine.GameObject MapGen::miniMapIcon
	GameObject_t1756533147 * ___miniMapIcon_9;
	// UnityEngine.Material[] MapGen::miniMapIconMaterials
	MaterialU5BU5D_t3123989686* ___miniMapIconMaterials_10;
	// CourseManager[] MapGen::courseList
	CourseManagerU5BU5D_t2468168457* ___courseList_11;
	// UnityEngine.Material[] MapGen::skyBoxes
	MaterialU5BU5D_t3123989686* ___skyBoxes_12;
	// UnityEngine.Light MapGen::dayLight
	Light_t494725636 * ___dayLight_13;
	// UnityEngine.Light MapGen::nightLight
	Light_t494725636 * ___nightLight_14;
	// System.Int32 MapGen::skyBoxIdx
	int32_t ___skyBoxIdx_15;
	// Car[] MapGen::racers
	CarU5BU5D_t3904772487* ___racers_16;
	// MiniMapMark[] MapGen::marks
	MiniMapMarkU5BU5D_t4243305783* ___marks_17;
	// System.Int32 MapGen::racersLength
	int32_t ___racersLength_18;
	// itemBtnOnClick MapGen::itemBtn
	itemBtnOnClick_t1019039628 * ___itemBtn_19;
	// moveBtnOnClick MapGen::moveBtn
	moveBtnOnClick_t2838918694 * ___moveBtn_20;
	// StatImageManager MapGen::statImage
	StatImageManager_t3694657478 * ___statImage_21;
	// System.Single MapGen::basicTopSpeed
	float ___basicTopSpeed_22;
	// UnityEngine.AudioSource MapGen::audio
	AudioSource_t1135106623 * ___audio_23;
	// System.Int32 MapGen::courseDebug
	int32_t ___courseDebug_25;
	// UnityEngine.Vector2[] MapGen::carListsForDebug
	Vector2U5BU5D_t686124026* ___carListsForDebug_26;
	// UnityEngine.Vector2[] MapGen::charListsForDebug
	Vector2U5BU5D_t686124026* ___charListsForDebug_27;
	// System.Single MapGen::moneyWinDEBUG
	float ___moneyWinDEBUG_28;
	// System.Single MapGen::moneyLoseDEBUG
	float ___moneyLoseDEBUG_29;
	// System.Single MapGen::expWinDEBUG
	float ___expWinDEBUG_30;
	// System.Single MapGen::expLoseDEBUG
	float ___expLoseDEBUG_31;
	// System.Int32 MapGen::myCarDebug
	int32_t ___myCarDebug_32;

public:
	inline static int32_t get_offset_of_mainCamera_2() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___mainCamera_2)); }
	inline Camera_t189460977 * get_mainCamera_2() const { return ___mainCamera_2; }
	inline Camera_t189460977 ** get_address_of_mainCamera_2() { return &___mainCamera_2; }
	inline void set_mainCamera_2(Camera_t189460977 * value)
	{
		___mainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_2, value);
	}

	inline static int32_t get_offset_of_backGroundCamera_3() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___backGroundCamera_3)); }
	inline Camera_t189460977 * get_backGroundCamera_3() const { return ___backGroundCamera_3; }
	inline Camera_t189460977 ** get_address_of_backGroundCamera_3() { return &___backGroundCamera_3; }
	inline void set_backGroundCamera_3(Camera_t189460977 * value)
	{
		___backGroundCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___backGroundCamera_3, value);
	}

	inline static int32_t get_offset_of_miniMap_6() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___miniMap_6)); }
	inline GameObject_t1756533147 * get_miniMap_6() const { return ___miniMap_6; }
	inline GameObject_t1756533147 ** get_address_of_miniMap_6() { return &___miniMap_6; }
	inline void set_miniMap_6(GameObject_t1756533147 * value)
	{
		___miniMap_6 = value;
		Il2CppCodeGenWriteBarrier(&___miniMap_6, value);
	}

	inline static int32_t get_offset_of_characterList_7() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___characterList_7)); }
	inline GameObjectU5BU5D_t3057952154* get_characterList_7() const { return ___characterList_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_characterList_7() { return &___characterList_7; }
	inline void set_characterList_7(GameObjectU5BU5D_t3057952154* value)
	{
		___characterList_7 = value;
		Il2CppCodeGenWriteBarrier(&___characterList_7, value);
	}

	inline static int32_t get_offset_of_miniMarkList_8() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___miniMarkList_8)); }
	inline GameObjectU5BU5D_t3057952154* get_miniMarkList_8() const { return ___miniMarkList_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_miniMarkList_8() { return &___miniMarkList_8; }
	inline void set_miniMarkList_8(GameObjectU5BU5D_t3057952154* value)
	{
		___miniMarkList_8 = value;
		Il2CppCodeGenWriteBarrier(&___miniMarkList_8, value);
	}

	inline static int32_t get_offset_of_miniMapIcon_9() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___miniMapIcon_9)); }
	inline GameObject_t1756533147 * get_miniMapIcon_9() const { return ___miniMapIcon_9; }
	inline GameObject_t1756533147 ** get_address_of_miniMapIcon_9() { return &___miniMapIcon_9; }
	inline void set_miniMapIcon_9(GameObject_t1756533147 * value)
	{
		___miniMapIcon_9 = value;
		Il2CppCodeGenWriteBarrier(&___miniMapIcon_9, value);
	}

	inline static int32_t get_offset_of_miniMapIconMaterials_10() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___miniMapIconMaterials_10)); }
	inline MaterialU5BU5D_t3123989686* get_miniMapIconMaterials_10() const { return ___miniMapIconMaterials_10; }
	inline MaterialU5BU5D_t3123989686** get_address_of_miniMapIconMaterials_10() { return &___miniMapIconMaterials_10; }
	inline void set_miniMapIconMaterials_10(MaterialU5BU5D_t3123989686* value)
	{
		___miniMapIconMaterials_10 = value;
		Il2CppCodeGenWriteBarrier(&___miniMapIconMaterials_10, value);
	}

	inline static int32_t get_offset_of_courseList_11() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___courseList_11)); }
	inline CourseManagerU5BU5D_t2468168457* get_courseList_11() const { return ___courseList_11; }
	inline CourseManagerU5BU5D_t2468168457** get_address_of_courseList_11() { return &___courseList_11; }
	inline void set_courseList_11(CourseManagerU5BU5D_t2468168457* value)
	{
		___courseList_11 = value;
		Il2CppCodeGenWriteBarrier(&___courseList_11, value);
	}

	inline static int32_t get_offset_of_skyBoxes_12() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___skyBoxes_12)); }
	inline MaterialU5BU5D_t3123989686* get_skyBoxes_12() const { return ___skyBoxes_12; }
	inline MaterialU5BU5D_t3123989686** get_address_of_skyBoxes_12() { return &___skyBoxes_12; }
	inline void set_skyBoxes_12(MaterialU5BU5D_t3123989686* value)
	{
		___skyBoxes_12 = value;
		Il2CppCodeGenWriteBarrier(&___skyBoxes_12, value);
	}

	inline static int32_t get_offset_of_dayLight_13() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___dayLight_13)); }
	inline Light_t494725636 * get_dayLight_13() const { return ___dayLight_13; }
	inline Light_t494725636 ** get_address_of_dayLight_13() { return &___dayLight_13; }
	inline void set_dayLight_13(Light_t494725636 * value)
	{
		___dayLight_13 = value;
		Il2CppCodeGenWriteBarrier(&___dayLight_13, value);
	}

	inline static int32_t get_offset_of_nightLight_14() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___nightLight_14)); }
	inline Light_t494725636 * get_nightLight_14() const { return ___nightLight_14; }
	inline Light_t494725636 ** get_address_of_nightLight_14() { return &___nightLight_14; }
	inline void set_nightLight_14(Light_t494725636 * value)
	{
		___nightLight_14 = value;
		Il2CppCodeGenWriteBarrier(&___nightLight_14, value);
	}

	inline static int32_t get_offset_of_skyBoxIdx_15() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___skyBoxIdx_15)); }
	inline int32_t get_skyBoxIdx_15() const { return ___skyBoxIdx_15; }
	inline int32_t* get_address_of_skyBoxIdx_15() { return &___skyBoxIdx_15; }
	inline void set_skyBoxIdx_15(int32_t value)
	{
		___skyBoxIdx_15 = value;
	}

	inline static int32_t get_offset_of_racers_16() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___racers_16)); }
	inline CarU5BU5D_t3904772487* get_racers_16() const { return ___racers_16; }
	inline CarU5BU5D_t3904772487** get_address_of_racers_16() { return &___racers_16; }
	inline void set_racers_16(CarU5BU5D_t3904772487* value)
	{
		___racers_16 = value;
		Il2CppCodeGenWriteBarrier(&___racers_16, value);
	}

	inline static int32_t get_offset_of_marks_17() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___marks_17)); }
	inline MiniMapMarkU5BU5D_t4243305783* get_marks_17() const { return ___marks_17; }
	inline MiniMapMarkU5BU5D_t4243305783** get_address_of_marks_17() { return &___marks_17; }
	inline void set_marks_17(MiniMapMarkU5BU5D_t4243305783* value)
	{
		___marks_17 = value;
		Il2CppCodeGenWriteBarrier(&___marks_17, value);
	}

	inline static int32_t get_offset_of_racersLength_18() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___racersLength_18)); }
	inline int32_t get_racersLength_18() const { return ___racersLength_18; }
	inline int32_t* get_address_of_racersLength_18() { return &___racersLength_18; }
	inline void set_racersLength_18(int32_t value)
	{
		___racersLength_18 = value;
	}

	inline static int32_t get_offset_of_itemBtn_19() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___itemBtn_19)); }
	inline itemBtnOnClick_t1019039628 * get_itemBtn_19() const { return ___itemBtn_19; }
	inline itemBtnOnClick_t1019039628 ** get_address_of_itemBtn_19() { return &___itemBtn_19; }
	inline void set_itemBtn_19(itemBtnOnClick_t1019039628 * value)
	{
		___itemBtn_19 = value;
		Il2CppCodeGenWriteBarrier(&___itemBtn_19, value);
	}

	inline static int32_t get_offset_of_moveBtn_20() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___moveBtn_20)); }
	inline moveBtnOnClick_t2838918694 * get_moveBtn_20() const { return ___moveBtn_20; }
	inline moveBtnOnClick_t2838918694 ** get_address_of_moveBtn_20() { return &___moveBtn_20; }
	inline void set_moveBtn_20(moveBtnOnClick_t2838918694 * value)
	{
		___moveBtn_20 = value;
		Il2CppCodeGenWriteBarrier(&___moveBtn_20, value);
	}

	inline static int32_t get_offset_of_statImage_21() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___statImage_21)); }
	inline StatImageManager_t3694657478 * get_statImage_21() const { return ___statImage_21; }
	inline StatImageManager_t3694657478 ** get_address_of_statImage_21() { return &___statImage_21; }
	inline void set_statImage_21(StatImageManager_t3694657478 * value)
	{
		___statImage_21 = value;
		Il2CppCodeGenWriteBarrier(&___statImage_21, value);
	}

	inline static int32_t get_offset_of_basicTopSpeed_22() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___basicTopSpeed_22)); }
	inline float get_basicTopSpeed_22() const { return ___basicTopSpeed_22; }
	inline float* get_address_of_basicTopSpeed_22() { return &___basicTopSpeed_22; }
	inline void set_basicTopSpeed_22(float value)
	{
		___basicTopSpeed_22 = value;
	}

	inline static int32_t get_offset_of_audio_23() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___audio_23)); }
	inline AudioSource_t1135106623 * get_audio_23() const { return ___audio_23; }
	inline AudioSource_t1135106623 ** get_address_of_audio_23() { return &___audio_23; }
	inline void set_audio_23(AudioSource_t1135106623 * value)
	{
		___audio_23 = value;
		Il2CppCodeGenWriteBarrier(&___audio_23, value);
	}

	inline static int32_t get_offset_of_courseDebug_25() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___courseDebug_25)); }
	inline int32_t get_courseDebug_25() const { return ___courseDebug_25; }
	inline int32_t* get_address_of_courseDebug_25() { return &___courseDebug_25; }
	inline void set_courseDebug_25(int32_t value)
	{
		___courseDebug_25 = value;
	}

	inline static int32_t get_offset_of_carListsForDebug_26() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___carListsForDebug_26)); }
	inline Vector2U5BU5D_t686124026* get_carListsForDebug_26() const { return ___carListsForDebug_26; }
	inline Vector2U5BU5D_t686124026** get_address_of_carListsForDebug_26() { return &___carListsForDebug_26; }
	inline void set_carListsForDebug_26(Vector2U5BU5D_t686124026* value)
	{
		___carListsForDebug_26 = value;
		Il2CppCodeGenWriteBarrier(&___carListsForDebug_26, value);
	}

	inline static int32_t get_offset_of_charListsForDebug_27() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___charListsForDebug_27)); }
	inline Vector2U5BU5D_t686124026* get_charListsForDebug_27() const { return ___charListsForDebug_27; }
	inline Vector2U5BU5D_t686124026** get_address_of_charListsForDebug_27() { return &___charListsForDebug_27; }
	inline void set_charListsForDebug_27(Vector2U5BU5D_t686124026* value)
	{
		___charListsForDebug_27 = value;
		Il2CppCodeGenWriteBarrier(&___charListsForDebug_27, value);
	}

	inline static int32_t get_offset_of_moneyWinDEBUG_28() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___moneyWinDEBUG_28)); }
	inline float get_moneyWinDEBUG_28() const { return ___moneyWinDEBUG_28; }
	inline float* get_address_of_moneyWinDEBUG_28() { return &___moneyWinDEBUG_28; }
	inline void set_moneyWinDEBUG_28(float value)
	{
		___moneyWinDEBUG_28 = value;
	}

	inline static int32_t get_offset_of_moneyLoseDEBUG_29() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___moneyLoseDEBUG_29)); }
	inline float get_moneyLoseDEBUG_29() const { return ___moneyLoseDEBUG_29; }
	inline float* get_address_of_moneyLoseDEBUG_29() { return &___moneyLoseDEBUG_29; }
	inline void set_moneyLoseDEBUG_29(float value)
	{
		___moneyLoseDEBUG_29 = value;
	}

	inline static int32_t get_offset_of_expWinDEBUG_30() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___expWinDEBUG_30)); }
	inline float get_expWinDEBUG_30() const { return ___expWinDEBUG_30; }
	inline float* get_address_of_expWinDEBUG_30() { return &___expWinDEBUG_30; }
	inline void set_expWinDEBUG_30(float value)
	{
		___expWinDEBUG_30 = value;
	}

	inline static int32_t get_offset_of_expLoseDEBUG_31() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___expLoseDEBUG_31)); }
	inline float get_expLoseDEBUG_31() const { return ___expLoseDEBUG_31; }
	inline float* get_address_of_expLoseDEBUG_31() { return &___expLoseDEBUG_31; }
	inline void set_expLoseDEBUG_31(float value)
	{
		___expLoseDEBUG_31 = value;
	}

	inline static int32_t get_offset_of_myCarDebug_32() { return static_cast<int32_t>(offsetof(MapGen_t1609590632, ___myCarDebug_32)); }
	inline int32_t get_myCarDebug_32() const { return ___myCarDebug_32; }
	inline int32_t* get_address_of_myCarDebug_32() { return &___myCarDebug_32; }
	inline void set_myCarDebug_32(int32_t value)
	{
		___myCarDebug_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
