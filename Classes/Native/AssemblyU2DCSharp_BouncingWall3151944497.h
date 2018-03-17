#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Car
struct Car_t4262919282;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BouncingWall
struct  BouncingWall_t3151944497  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody BouncingWall::rb
	Rigidbody_t4233889191 * ___rb_2;
	// System.Single BouncingWall::maxTorque
	float ___maxTorque_3;
	// Car BouncingWall::m
	Car_t4262919282 * ___m_4;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(BouncingWall_t3151944497, ___rb_2)); }
	inline Rigidbody_t4233889191 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t4233889191 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_maxTorque_3() { return static_cast<int32_t>(offsetof(BouncingWall_t3151944497, ___maxTorque_3)); }
	inline float get_maxTorque_3() const { return ___maxTorque_3; }
	inline float* get_address_of_maxTorque_3() { return &___maxTorque_3; }
	inline void set_maxTorque_3(float value)
	{
		___maxTorque_3 = value;
	}

	inline static int32_t get_offset_of_m_4() { return static_cast<int32_t>(offsetof(BouncingWall_t3151944497, ___m_4)); }
	inline Car_t4262919282 * get_m_4() const { return ___m_4; }
	inline Car_t4262919282 ** get_address_of_m_4() { return &___m_4; }
	inline void set_m_4(Car_t4262919282 * value)
	{
		___m_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
