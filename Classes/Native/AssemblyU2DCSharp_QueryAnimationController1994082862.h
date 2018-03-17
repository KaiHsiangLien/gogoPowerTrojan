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

// QueryAnimationController
struct  QueryAnimationController_t1994082862  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject QueryAnimationController::queryBodyParts
	GameObject_t1756533147 * ___queryBodyParts_2;
	// UnityEngine.GameObject[] QueryAnimationController::queryHandParts
	GameObjectU5BU5D_t3057952154* ___queryHandParts_3;

public:
	inline static int32_t get_offset_of_queryBodyParts_2() { return static_cast<int32_t>(offsetof(QueryAnimationController_t1994082862, ___queryBodyParts_2)); }
	inline GameObject_t1756533147 * get_queryBodyParts_2() const { return ___queryBodyParts_2; }
	inline GameObject_t1756533147 ** get_address_of_queryBodyParts_2() { return &___queryBodyParts_2; }
	inline void set_queryBodyParts_2(GameObject_t1756533147 * value)
	{
		___queryBodyParts_2 = value;
		Il2CppCodeGenWriteBarrier(&___queryBodyParts_2, value);
	}

	inline static int32_t get_offset_of_queryHandParts_3() { return static_cast<int32_t>(offsetof(QueryAnimationController_t1994082862, ___queryHandParts_3)); }
	inline GameObjectU5BU5D_t3057952154* get_queryHandParts_3() const { return ___queryHandParts_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_queryHandParts_3() { return &___queryHandParts_3; }
	inline void set_queryHandParts_3(GameObjectU5BU5D_t3057952154* value)
	{
		___queryHandParts_3 = value;
		Il2CppCodeGenWriteBarrier(&___queryHandParts_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
