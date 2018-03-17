#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyBarLookAt
struct  EnemyBarLookAt_t3733162855  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform EnemyBarLookAt::target
	Transform_t3275118058 * ___target_2;
	// System.Single EnemyBarLookAt::distance
	float ___distance_3;
	// System.Single EnemyBarLookAt::height
	float ___height_4;
	// System.Single EnemyBarLookAt::rotationDamping
	float ___rotationDamping_5;
	// System.Single EnemyBarLookAt::heightDamping
	float ___heightDamping_6;
	// System.Single EnemyBarLookAt::dampingThres
	float ___dampingThres_7;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(EnemyBarLookAt_t3733162855, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(EnemyBarLookAt_t3733162855, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(EnemyBarLookAt_t3733162855, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_5() { return static_cast<int32_t>(offsetof(EnemyBarLookAt_t3733162855, ___rotationDamping_5)); }
	inline float get_rotationDamping_5() const { return ___rotationDamping_5; }
	inline float* get_address_of_rotationDamping_5() { return &___rotationDamping_5; }
	inline void set_rotationDamping_5(float value)
	{
		___rotationDamping_5 = value;
	}

	inline static int32_t get_offset_of_heightDamping_6() { return static_cast<int32_t>(offsetof(EnemyBarLookAt_t3733162855, ___heightDamping_6)); }
	inline float get_heightDamping_6() const { return ___heightDamping_6; }
	inline float* get_address_of_heightDamping_6() { return &___heightDamping_6; }
	inline void set_heightDamping_6(float value)
	{
		___heightDamping_6 = value;
	}

	inline static int32_t get_offset_of_dampingThres_7() { return static_cast<int32_t>(offsetof(EnemyBarLookAt_t3733162855, ___dampingThres_7)); }
	inline float get_dampingThres_7() const { return ___dampingThres_7; }
	inline float* get_address_of_dampingThres_7() { return &___dampingThres_7; }
	inline void set_dampingThres_7(float value)
	{
		___dampingThres_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
