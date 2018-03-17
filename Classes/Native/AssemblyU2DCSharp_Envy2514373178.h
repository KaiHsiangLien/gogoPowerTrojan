#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Envy
struct  Envy_t2514373178  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Envy::envyDebuffRate
	float ___envyDebuffRate_2;
	// System.Boolean Envy::isDebuffed
	bool ___isDebuffed_3;

public:
	inline static int32_t get_offset_of_envyDebuffRate_2() { return static_cast<int32_t>(offsetof(Envy_t2514373178, ___envyDebuffRate_2)); }
	inline float get_envyDebuffRate_2() const { return ___envyDebuffRate_2; }
	inline float* get_address_of_envyDebuffRate_2() { return &___envyDebuffRate_2; }
	inline void set_envyDebuffRate_2(float value)
	{
		___envyDebuffRate_2 = value;
	}

	inline static int32_t get_offset_of_isDebuffed_3() { return static_cast<int32_t>(offsetof(Envy_t2514373178, ___isDebuffed_3)); }
	inline bool get_isDebuffed_3() const { return ___isDebuffed_3; }
	inline bool* get_address_of_isDebuffed_3() { return &___isDebuffed_3; }
	inline void set_isDebuffed_3(bool value)
	{
		___isDebuffed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
