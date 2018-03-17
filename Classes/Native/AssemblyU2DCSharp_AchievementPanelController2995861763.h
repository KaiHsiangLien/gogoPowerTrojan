#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementPanelController
struct  AchievementPanelController_t2995861763  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AchievementPanelController::homePanel
	GameObject_t1756533147 * ___homePanel_2;
	// UnityEngine.GameObject AchievementPanelController::dialogPrefab1
	GameObject_t1756533147 * ___dialogPrefab1_3;
	// UnityEngine.GameObject AchievementPanelController::dialogPrefab2
	GameObject_t1756533147 * ___dialogPrefab2_4;
	// System.String[] AchievementPanelController::descriptions
	StringU5BU5D_t1642385972* ___descriptions_5;
	// UnityEngine.Transform[] AchievementPanelController::buttonParents
	TransformU5BU5D_t3764228911* ___buttonParents_6;
	// UnityEngine.Transform AchievementPanelController::canvasParent
	Transform_t3275118058 * ___canvasParent_7;

public:
	inline static int32_t get_offset_of_homePanel_2() { return static_cast<int32_t>(offsetof(AchievementPanelController_t2995861763, ___homePanel_2)); }
	inline GameObject_t1756533147 * get_homePanel_2() const { return ___homePanel_2; }
	inline GameObject_t1756533147 ** get_address_of_homePanel_2() { return &___homePanel_2; }
	inline void set_homePanel_2(GameObject_t1756533147 * value)
	{
		___homePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___homePanel_2, value);
	}

	inline static int32_t get_offset_of_dialogPrefab1_3() { return static_cast<int32_t>(offsetof(AchievementPanelController_t2995861763, ___dialogPrefab1_3)); }
	inline GameObject_t1756533147 * get_dialogPrefab1_3() const { return ___dialogPrefab1_3; }
	inline GameObject_t1756533147 ** get_address_of_dialogPrefab1_3() { return &___dialogPrefab1_3; }
	inline void set_dialogPrefab1_3(GameObject_t1756533147 * value)
	{
		___dialogPrefab1_3 = value;
		Il2CppCodeGenWriteBarrier(&___dialogPrefab1_3, value);
	}

	inline static int32_t get_offset_of_dialogPrefab2_4() { return static_cast<int32_t>(offsetof(AchievementPanelController_t2995861763, ___dialogPrefab2_4)); }
	inline GameObject_t1756533147 * get_dialogPrefab2_4() const { return ___dialogPrefab2_4; }
	inline GameObject_t1756533147 ** get_address_of_dialogPrefab2_4() { return &___dialogPrefab2_4; }
	inline void set_dialogPrefab2_4(GameObject_t1756533147 * value)
	{
		___dialogPrefab2_4 = value;
		Il2CppCodeGenWriteBarrier(&___dialogPrefab2_4, value);
	}

	inline static int32_t get_offset_of_descriptions_5() { return static_cast<int32_t>(offsetof(AchievementPanelController_t2995861763, ___descriptions_5)); }
	inline StringU5BU5D_t1642385972* get_descriptions_5() const { return ___descriptions_5; }
	inline StringU5BU5D_t1642385972** get_address_of_descriptions_5() { return &___descriptions_5; }
	inline void set_descriptions_5(StringU5BU5D_t1642385972* value)
	{
		___descriptions_5 = value;
		Il2CppCodeGenWriteBarrier(&___descriptions_5, value);
	}

	inline static int32_t get_offset_of_buttonParents_6() { return static_cast<int32_t>(offsetof(AchievementPanelController_t2995861763, ___buttonParents_6)); }
	inline TransformU5BU5D_t3764228911* get_buttonParents_6() const { return ___buttonParents_6; }
	inline TransformU5BU5D_t3764228911** get_address_of_buttonParents_6() { return &___buttonParents_6; }
	inline void set_buttonParents_6(TransformU5BU5D_t3764228911* value)
	{
		___buttonParents_6 = value;
		Il2CppCodeGenWriteBarrier(&___buttonParents_6, value);
	}

	inline static int32_t get_offset_of_canvasParent_7() { return static_cast<int32_t>(offsetof(AchievementPanelController_t2995861763, ___canvasParent_7)); }
	inline Transform_t3275118058 * get_canvasParent_7() const { return ___canvasParent_7; }
	inline Transform_t3275118058 ** get_address_of_canvasParent_7() { return &___canvasParent_7; }
	inline void set_canvasParent_7(Transform_t3275118058 * value)
	{
		___canvasParent_7 = value;
		Il2CppCodeGenWriteBarrier(&___canvasParent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
