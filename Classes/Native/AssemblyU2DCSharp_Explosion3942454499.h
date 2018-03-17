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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Explosion
struct  Explosion_t3942454499  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Explosion::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Single Explosion::radius
	float ___radius_3;
	// System.Single Explosion::power
	float ___power_4;
	// System.Single Explosion::uplift
	float ___uplift_5;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(Explosion_t3942454499, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(Explosion_t3942454499, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_power_4() { return static_cast<int32_t>(offsetof(Explosion_t3942454499, ___power_4)); }
	inline float get_power_4() const { return ___power_4; }
	inline float* get_address_of_power_4() { return &___power_4; }
	inline void set_power_4(float value)
	{
		___power_4 = value;
	}

	inline static int32_t get_offset_of_uplift_5() { return static_cast<int32_t>(offsetof(Explosion_t3942454499, ___uplift_5)); }
	inline float get_uplift_5() const { return ___uplift_5; }
	inline float* get_address_of_uplift_5() { return &___uplift_5; }
	inline void set_uplift_5(float value)
	{
		___uplift_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
