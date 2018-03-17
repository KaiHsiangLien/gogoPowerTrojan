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

// ViewFPS
struct  ViewFPS_t4000264004  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ViewFPS::timeA
	float ___timeA_2;
	// System.Int32 ViewFPS::fps
	int32_t ___fps_3;
	// System.Int32 ViewFPS::lastFPS
	int32_t ___lastFPS_4;

public:
	inline static int32_t get_offset_of_timeA_2() { return static_cast<int32_t>(offsetof(ViewFPS_t4000264004, ___timeA_2)); }
	inline float get_timeA_2() const { return ___timeA_2; }
	inline float* get_address_of_timeA_2() { return &___timeA_2; }
	inline void set_timeA_2(float value)
	{
		___timeA_2 = value;
	}

	inline static int32_t get_offset_of_fps_3() { return static_cast<int32_t>(offsetof(ViewFPS_t4000264004, ___fps_3)); }
	inline int32_t get_fps_3() const { return ___fps_3; }
	inline int32_t* get_address_of_fps_3() { return &___fps_3; }
	inline void set_fps_3(int32_t value)
	{
		___fps_3 = value;
	}

	inline static int32_t get_offset_of_lastFPS_4() { return static_cast<int32_t>(offsetof(ViewFPS_t4000264004, ___lastFPS_4)); }
	inline int32_t get_lastFPS_4() const { return ___lastFPS_4; }
	inline int32_t* get_address_of_lastFPS_4() { return &___lastFPS_4; }
	inline void set_lastFPS_4(int32_t value)
	{
		___lastFPS_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
