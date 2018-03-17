#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_QueryAnimationController_QueryCh2330801469.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyThroughController
struct  FlyThroughController_t1800762126  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FlyThroughController::QueryObject
	GameObject_t1756533147 * ___QueryObject_2;
	// System.Single FlyThroughController::speed
	float ___speed_3;
	// QueryAnimationController/QueryChanAnimationType FlyThroughController::nowFlyingState
	int32_t ___nowFlyingState_8;
	// QueryAnimationController/QueryChanAnimationType FlyThroughController::previousFlyingState
	int32_t ___previousFlyingState_9;
	// UnityEngine.GameObject FlyThroughController::groundCollider
	GameObject_t1756533147 * ___groundCollider_10;

public:
	inline static int32_t get_offset_of_QueryObject_2() { return static_cast<int32_t>(offsetof(FlyThroughController_t1800762126, ___QueryObject_2)); }
	inline GameObject_t1756533147 * get_QueryObject_2() const { return ___QueryObject_2; }
	inline GameObject_t1756533147 ** get_address_of_QueryObject_2() { return &___QueryObject_2; }
	inline void set_QueryObject_2(GameObject_t1756533147 * value)
	{
		___QueryObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___QueryObject_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(FlyThroughController_t1800762126, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_nowFlyingState_8() { return static_cast<int32_t>(offsetof(FlyThroughController_t1800762126, ___nowFlyingState_8)); }
	inline int32_t get_nowFlyingState_8() const { return ___nowFlyingState_8; }
	inline int32_t* get_address_of_nowFlyingState_8() { return &___nowFlyingState_8; }
	inline void set_nowFlyingState_8(int32_t value)
	{
		___nowFlyingState_8 = value;
	}

	inline static int32_t get_offset_of_previousFlyingState_9() { return static_cast<int32_t>(offsetof(FlyThroughController_t1800762126, ___previousFlyingState_9)); }
	inline int32_t get_previousFlyingState_9() const { return ___previousFlyingState_9; }
	inline int32_t* get_address_of_previousFlyingState_9() { return &___previousFlyingState_9; }
	inline void set_previousFlyingState_9(int32_t value)
	{
		___previousFlyingState_9 = value;
	}

	inline static int32_t get_offset_of_groundCollider_10() { return static_cast<int32_t>(offsetof(FlyThroughController_t1800762126, ___groundCollider_10)); }
	inline GameObject_t1756533147 * get_groundCollider_10() const { return ___groundCollider_10; }
	inline GameObject_t1756533147 ** get_address_of_groundCollider_10() { return &___groundCollider_10; }
	inline void set_groundCollider_10(GameObject_t1756533147 * value)
	{
		___groundCollider_10 = value;
		Il2CppCodeGenWriteBarrier(&___groundCollider_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
