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

// MouseOrbit
struct  MouseOrbit_t143029581  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform MouseOrbit::target
	Transform_t3275118058 * ___target_2;
	// System.Single MouseOrbit::distance
	float ___distance_3;
	// System.Single MouseOrbit::xSpeed
	float ___xSpeed_4;
	// System.Single MouseOrbit::ySpeed
	float ___ySpeed_5;
	// System.Int32 MouseOrbit::yMinLimit
	int32_t ___yMinLimit_6;
	// System.Int32 MouseOrbit::yMaxLimit
	int32_t ___yMaxLimit_7;
	// System.Single MouseOrbit::x
	float ___x_8;
	// System.Single MouseOrbit::y
	float ___y_9;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_xSpeed_4() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___xSpeed_4)); }
	inline float get_xSpeed_4() const { return ___xSpeed_4; }
	inline float* get_address_of_xSpeed_4() { return &___xSpeed_4; }
	inline void set_xSpeed_4(float value)
	{
		___xSpeed_4 = value;
	}

	inline static int32_t get_offset_of_ySpeed_5() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___ySpeed_5)); }
	inline float get_ySpeed_5() const { return ___ySpeed_5; }
	inline float* get_address_of_ySpeed_5() { return &___ySpeed_5; }
	inline void set_ySpeed_5(float value)
	{
		___ySpeed_5 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_6() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___yMinLimit_6)); }
	inline int32_t get_yMinLimit_6() const { return ___yMinLimit_6; }
	inline int32_t* get_address_of_yMinLimit_6() { return &___yMinLimit_6; }
	inline void set_yMinLimit_6(int32_t value)
	{
		___yMinLimit_6 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_7() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___yMaxLimit_7)); }
	inline int32_t get_yMaxLimit_7() const { return ___yMaxLimit_7; }
	inline int32_t* get_address_of_yMaxLimit_7() { return &___yMaxLimit_7; }
	inline void set_yMaxLimit_7(int32_t value)
	{
		___yMaxLimit_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___x_8)); }
	inline float get_x_8() const { return ___x_8; }
	inline float* get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(float value)
	{
		___x_8 = value;
	}

	inline static int32_t get_offset_of_y_9() { return static_cast<int32_t>(offsetof(MouseOrbit_t143029581, ___y_9)); }
	inline float get_y_9() const { return ___y_9; }
	inline float* get_address_of_y_9() { return &___y_9; }
	inline void set_y_9(float value)
	{
		___y_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
