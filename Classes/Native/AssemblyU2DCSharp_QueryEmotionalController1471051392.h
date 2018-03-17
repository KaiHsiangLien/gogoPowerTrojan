#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QueryEmotionalController
struct  QueryEmotionalController_t1471051392  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material[] QueryEmotionalController::emotionalMaterial
	MaterialU5BU5D_t3123989686* ___emotionalMaterial_2;
	// UnityEngine.GameObject QueryEmotionalController::queryFace
	GameObject_t1756533147 * ___queryFace_3;

public:
	inline static int32_t get_offset_of_emotionalMaterial_2() { return static_cast<int32_t>(offsetof(QueryEmotionalController_t1471051392, ___emotionalMaterial_2)); }
	inline MaterialU5BU5D_t3123989686* get_emotionalMaterial_2() const { return ___emotionalMaterial_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_emotionalMaterial_2() { return &___emotionalMaterial_2; }
	inline void set_emotionalMaterial_2(MaterialU5BU5D_t3123989686* value)
	{
		___emotionalMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___emotionalMaterial_2, value);
	}

	inline static int32_t get_offset_of_queryFace_3() { return static_cast<int32_t>(offsetof(QueryEmotionalController_t1471051392, ___queryFace_3)); }
	inline GameObject_t1756533147 * get_queryFace_3() const { return ___queryFace_3; }
	inline GameObject_t1756533147 ** get_address_of_queryFace_3() { return &___queryFace_3; }
	inline void set_queryFace_3(GameObject_t1756533147 * value)
	{
		___queryFace_3 = value;
		Il2CppCodeGenWriteBarrier(&___queryFace_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
