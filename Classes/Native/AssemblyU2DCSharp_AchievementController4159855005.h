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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementController
struct  AchievementController_t4159855005  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AchievementController::initPanel
	GameObject_t1756533147 * ___initPanel_2;
	// UnityEngine.GameObject[] AchievementController::hiddenPanel
	GameObjectU5BU5D_t3057952154* ___hiddenPanel_3;

public:
	inline static int32_t get_offset_of_initPanel_2() { return static_cast<int32_t>(offsetof(AchievementController_t4159855005, ___initPanel_2)); }
	inline GameObject_t1756533147 * get_initPanel_2() const { return ___initPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_initPanel_2() { return &___initPanel_2; }
	inline void set_initPanel_2(GameObject_t1756533147 * value)
	{
		___initPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___initPanel_2, value);
	}

	inline static int32_t get_offset_of_hiddenPanel_3() { return static_cast<int32_t>(offsetof(AchievementController_t4159855005, ___hiddenPanel_3)); }
	inline GameObjectU5BU5D_t3057952154* get_hiddenPanel_3() const { return ___hiddenPanel_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_hiddenPanel_3() { return &___hiddenPanel_3; }
	inline void set_hiddenPanel_3(GameObjectU5BU5D_t3057952154* value)
	{
		___hiddenPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___hiddenPanel_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
