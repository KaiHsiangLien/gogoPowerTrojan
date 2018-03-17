#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PickupController
struct  PickupController_t3031549840  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] PickupController::pickupScenes
	GameObjectU5BU5D_t3057952154* ___pickupScenes_2;

public:
	inline static int32_t get_offset_of_pickupScenes_2() { return static_cast<int32_t>(offsetof(PickupController_t3031549840, ___pickupScenes_2)); }
	inline GameObjectU5BU5D_t3057952154* get_pickupScenes_2() const { return ___pickupScenes_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_pickupScenes_2() { return &___pickupScenes_2; }
	inline void set_pickupScenes_2(GameObjectU5BU5D_t3057952154* value)
	{
		___pickupScenes_2 = value;
		Il2CppCodeGenWriteBarrier(&___pickupScenes_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
