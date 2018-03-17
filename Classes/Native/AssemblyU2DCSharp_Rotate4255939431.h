#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotate
struct  Rotate_t4255939431  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Rotate::rotateAngles
	float ___rotateAngles_2;
	// System.Single Rotate::rotateTime
	float ___rotateTime_3;
	// System.Single Rotate::lifetime
	float ___lifetime_4;
	// System.Single Rotate::timer
	float ___timer_5;
	// UnityEngine.Quaternion Rotate::originalR
	Quaternion_t4030073918  ___originalR_6;
	// UnityEngine.Vector3 Rotate::originalP
	Vector3_t2243707580  ___originalP_7;

public:
	inline static int32_t get_offset_of_rotateAngles_2() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___rotateAngles_2)); }
	inline float get_rotateAngles_2() const { return ___rotateAngles_2; }
	inline float* get_address_of_rotateAngles_2() { return &___rotateAngles_2; }
	inline void set_rotateAngles_2(float value)
	{
		___rotateAngles_2 = value;
	}

	inline static int32_t get_offset_of_rotateTime_3() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___rotateTime_3)); }
	inline float get_rotateTime_3() const { return ___rotateTime_3; }
	inline float* get_address_of_rotateTime_3() { return &___rotateTime_3; }
	inline void set_rotateTime_3(float value)
	{
		___rotateTime_3 = value;
	}

	inline static int32_t get_offset_of_lifetime_4() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___lifetime_4)); }
	inline float get_lifetime_4() const { return ___lifetime_4; }
	inline float* get_address_of_lifetime_4() { return &___lifetime_4; }
	inline void set_lifetime_4(float value)
	{
		___lifetime_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_originalR_6() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___originalR_6)); }
	inline Quaternion_t4030073918  get_originalR_6() const { return ___originalR_6; }
	inline Quaternion_t4030073918 * get_address_of_originalR_6() { return &___originalR_6; }
	inline void set_originalR_6(Quaternion_t4030073918  value)
	{
		___originalR_6 = value;
	}

	inline static int32_t get_offset_of_originalP_7() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___originalP_7)); }
	inline Vector3_t2243707580  get_originalP_7() const { return ___originalP_7; }
	inline Vector3_t2243707580 * get_address_of_originalP_7() { return &___originalP_7; }
	inline void set_originalP_7(Vector3_t2243707580  value)
	{
		___originalP_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
