#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// AchievementPanelController
struct AchievementPanelController_t2995861763;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementListGenerator
struct  AchievementListGenerator_t2159594224  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] AchievementListGenerator::achievementSprites
	SpriteU5BU5D_t3359083662* ___achievementSprites_2;
	// UnityEngine.GameObject AchievementListGenerator::buttonPrefab
	GameObject_t1756533147 * ___buttonPrefab_3;
	// UnityEngine.GameObject AchievementListGenerator::contentParent
	GameObject_t1756533147 * ___contentParent_4;
	// AchievementPanelController AchievementListGenerator::achievementPanelController
	AchievementPanelController_t2995861763 * ___achievementPanelController_5;

public:
	inline static int32_t get_offset_of_achievementSprites_2() { return static_cast<int32_t>(offsetof(AchievementListGenerator_t2159594224, ___achievementSprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_achievementSprites_2() const { return ___achievementSprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_achievementSprites_2() { return &___achievementSprites_2; }
	inline void set_achievementSprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___achievementSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___achievementSprites_2, value);
	}

	inline static int32_t get_offset_of_buttonPrefab_3() { return static_cast<int32_t>(offsetof(AchievementListGenerator_t2159594224, ___buttonPrefab_3)); }
	inline GameObject_t1756533147 * get_buttonPrefab_3() const { return ___buttonPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_buttonPrefab_3() { return &___buttonPrefab_3; }
	inline void set_buttonPrefab_3(GameObject_t1756533147 * value)
	{
		___buttonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPrefab_3, value);
	}

	inline static int32_t get_offset_of_contentParent_4() { return static_cast<int32_t>(offsetof(AchievementListGenerator_t2159594224, ___contentParent_4)); }
	inline GameObject_t1756533147 * get_contentParent_4() const { return ___contentParent_4; }
	inline GameObject_t1756533147 ** get_address_of_contentParent_4() { return &___contentParent_4; }
	inline void set_contentParent_4(GameObject_t1756533147 * value)
	{
		___contentParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___contentParent_4, value);
	}

	inline static int32_t get_offset_of_achievementPanelController_5() { return static_cast<int32_t>(offsetof(AchievementListGenerator_t2159594224, ___achievementPanelController_5)); }
	inline AchievementPanelController_t2995861763 * get_achievementPanelController_5() const { return ___achievementPanelController_5; }
	inline AchievementPanelController_t2995861763 ** get_address_of_achievementPanelController_5() { return &___achievementPanelController_5; }
	inline void set_achievementPanelController_5(AchievementPanelController_t2995861763 * value)
	{
		___achievementPanelController_5 = value;
		Il2CppCodeGenWriteBarrier(&___achievementPanelController_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
