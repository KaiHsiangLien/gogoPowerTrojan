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

// Greed
struct  Greed_t2782767975  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Greed::magnetThres
	float ___magnetThres_2;
	// System.Single Greed::magnetSpeed
	float ___magnetSpeed_3;

public:
	inline static int32_t get_offset_of_magnetThres_2() { return static_cast<int32_t>(offsetof(Greed_t2782767975, ___magnetThres_2)); }
	inline float get_magnetThres_2() const { return ___magnetThres_2; }
	inline float* get_address_of_magnetThres_2() { return &___magnetThres_2; }
	inline void set_magnetThres_2(float value)
	{
		___magnetThres_2 = value;
	}

	inline static int32_t get_offset_of_magnetSpeed_3() { return static_cast<int32_t>(offsetof(Greed_t2782767975, ___magnetSpeed_3)); }
	inline float get_magnetSpeed_3() const { return ___magnetSpeed_3; }
	inline float* get_address_of_magnetSpeed_3() { return &___magnetSpeed_3; }
	inline void set_magnetSpeed_3(float value)
	{
		___magnetSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
