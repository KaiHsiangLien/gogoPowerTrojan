#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.WheelCollider
struct WheelCollider_t785806275;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WheelController
struct  WheelController_t758156913  : public MonoBehaviour_t1158329972
{
public:
	// System.Single WheelController::rpm
	float ___rpm_2;
	// UnityEngine.WheelCollider WheelController::wheel
	WheelCollider_t785806275 * ___wheel_3;
	// UnityEngine.Vector3 WheelController::wheelAxis
	Vector3_t2243707580  ___wheelAxis_4;
	// UnityEngine.AudioClip WheelController::accelAudio
	AudioClip_t1932558630 * ___accelAudio_5;
	// UnityEngine.AudioClip WheelController::brakeAudio
	AudioClip_t1932558630 * ___brakeAudio_6;
	// UnityEngine.AudioSource WheelController::accelSound
	AudioSource_t1135106623 * ___accelSound_7;
	// UnityEngine.AudioSource WheelController::brakeSound
	AudioSource_t1135106623 * ___brakeSound_8;
	// System.Single WheelController::speedThreshold
	float ___speedThreshold_9;
	// System.Int32 WheelController::stepsBelowThreshold
	int32_t ___stepsBelowThreshold_10;
	// System.Int32 WheelController::stepsAboveThreshold
	int32_t ___stepsAboveThreshold_11;
	// System.Single WheelController::forwardStiffness
	float ___forwardStiffness_12;
	// System.Single WheelController::sidewayStiffness
	float ___sidewayStiffness_13;
	// System.Boolean WheelController::meshRotationEnabled
	bool ___meshRotationEnabled_14;

public:
	inline static int32_t get_offset_of_rpm_2() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___rpm_2)); }
	inline float get_rpm_2() const { return ___rpm_2; }
	inline float* get_address_of_rpm_2() { return &___rpm_2; }
	inline void set_rpm_2(float value)
	{
		___rpm_2 = value;
	}

	inline static int32_t get_offset_of_wheel_3() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___wheel_3)); }
	inline WheelCollider_t785806275 * get_wheel_3() const { return ___wheel_3; }
	inline WheelCollider_t785806275 ** get_address_of_wheel_3() { return &___wheel_3; }
	inline void set_wheel_3(WheelCollider_t785806275 * value)
	{
		___wheel_3 = value;
		Il2CppCodeGenWriteBarrier(&___wheel_3, value);
	}

	inline static int32_t get_offset_of_wheelAxis_4() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___wheelAxis_4)); }
	inline Vector3_t2243707580  get_wheelAxis_4() const { return ___wheelAxis_4; }
	inline Vector3_t2243707580 * get_address_of_wheelAxis_4() { return &___wheelAxis_4; }
	inline void set_wheelAxis_4(Vector3_t2243707580  value)
	{
		___wheelAxis_4 = value;
	}

	inline static int32_t get_offset_of_accelAudio_5() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___accelAudio_5)); }
	inline AudioClip_t1932558630 * get_accelAudio_5() const { return ___accelAudio_5; }
	inline AudioClip_t1932558630 ** get_address_of_accelAudio_5() { return &___accelAudio_5; }
	inline void set_accelAudio_5(AudioClip_t1932558630 * value)
	{
		___accelAudio_5 = value;
		Il2CppCodeGenWriteBarrier(&___accelAudio_5, value);
	}

	inline static int32_t get_offset_of_brakeAudio_6() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___brakeAudio_6)); }
	inline AudioClip_t1932558630 * get_brakeAudio_6() const { return ___brakeAudio_6; }
	inline AudioClip_t1932558630 ** get_address_of_brakeAudio_6() { return &___brakeAudio_6; }
	inline void set_brakeAudio_6(AudioClip_t1932558630 * value)
	{
		___brakeAudio_6 = value;
		Il2CppCodeGenWriteBarrier(&___brakeAudio_6, value);
	}

	inline static int32_t get_offset_of_accelSound_7() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___accelSound_7)); }
	inline AudioSource_t1135106623 * get_accelSound_7() const { return ___accelSound_7; }
	inline AudioSource_t1135106623 ** get_address_of_accelSound_7() { return &___accelSound_7; }
	inline void set_accelSound_7(AudioSource_t1135106623 * value)
	{
		___accelSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___accelSound_7, value);
	}

	inline static int32_t get_offset_of_brakeSound_8() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___brakeSound_8)); }
	inline AudioSource_t1135106623 * get_brakeSound_8() const { return ___brakeSound_8; }
	inline AudioSource_t1135106623 ** get_address_of_brakeSound_8() { return &___brakeSound_8; }
	inline void set_brakeSound_8(AudioSource_t1135106623 * value)
	{
		___brakeSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___brakeSound_8, value);
	}

	inline static int32_t get_offset_of_speedThreshold_9() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___speedThreshold_9)); }
	inline float get_speedThreshold_9() const { return ___speedThreshold_9; }
	inline float* get_address_of_speedThreshold_9() { return &___speedThreshold_9; }
	inline void set_speedThreshold_9(float value)
	{
		___speedThreshold_9 = value;
	}

	inline static int32_t get_offset_of_stepsBelowThreshold_10() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___stepsBelowThreshold_10)); }
	inline int32_t get_stepsBelowThreshold_10() const { return ___stepsBelowThreshold_10; }
	inline int32_t* get_address_of_stepsBelowThreshold_10() { return &___stepsBelowThreshold_10; }
	inline void set_stepsBelowThreshold_10(int32_t value)
	{
		___stepsBelowThreshold_10 = value;
	}

	inline static int32_t get_offset_of_stepsAboveThreshold_11() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___stepsAboveThreshold_11)); }
	inline int32_t get_stepsAboveThreshold_11() const { return ___stepsAboveThreshold_11; }
	inline int32_t* get_address_of_stepsAboveThreshold_11() { return &___stepsAboveThreshold_11; }
	inline void set_stepsAboveThreshold_11(int32_t value)
	{
		___stepsAboveThreshold_11 = value;
	}

	inline static int32_t get_offset_of_forwardStiffness_12() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___forwardStiffness_12)); }
	inline float get_forwardStiffness_12() const { return ___forwardStiffness_12; }
	inline float* get_address_of_forwardStiffness_12() { return &___forwardStiffness_12; }
	inline void set_forwardStiffness_12(float value)
	{
		___forwardStiffness_12 = value;
	}

	inline static int32_t get_offset_of_sidewayStiffness_13() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___sidewayStiffness_13)); }
	inline float get_sidewayStiffness_13() const { return ___sidewayStiffness_13; }
	inline float* get_address_of_sidewayStiffness_13() { return &___sidewayStiffness_13; }
	inline void set_sidewayStiffness_13(float value)
	{
		___sidewayStiffness_13 = value;
	}

	inline static int32_t get_offset_of_meshRotationEnabled_14() { return static_cast<int32_t>(offsetof(WheelController_t758156913, ___meshRotationEnabled_14)); }
	inline bool get_meshRotationEnabled_14() const { return ___meshRotationEnabled_14; }
	inline bool* get_address_of_meshRotationEnabled_14() { return &___meshRotationEnabled_14; }
	inline void set_meshRotationEnabled_14(bool value)
	{
		___meshRotationEnabled_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
