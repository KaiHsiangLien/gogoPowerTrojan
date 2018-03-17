#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PathManager
struct PathManager_t2373741454;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Car
struct Car_t4262919282;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIScript
struct  AIScript_t816668793  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean AIScript::skillDebugFlag
	bool ___skillDebugFlag_2;
	// System.Single AIScript::distThreshold
	float ___distThreshold_3;
	// System.Int32 AIScript::lookAhead
	int32_t ___lookAhead_4;
	// PathManager AIScript::path
	PathManager_t2373741454 * ___path_5;
	// UnityEngine.Transform[] AIScript::pathPoints
	TransformU5BU5D_t3764228911* ___pathPoints_6;
	// System.Int32 AIScript::pathPointIdx
	int32_t ___pathPointIdx_7;
	// System.Boolean AIScript::tutorialDebug
	bool ___tutorialDebug_8;
	// UnityEngine.Rigidbody AIScript::rb
	Rigidbody_t4233889191 * ___rb_9;
	// System.Single AIScript::sensorLength
	float ___sensorLength_10;
	// System.Single AIScript::sideSensorLength
	float ___sideSensorLength_11;
	// System.Single AIScript::frontSensorStartPoint
	float ___frontSensorStartPoint_12;
	// System.Single AIScript::frontSensorMargin
	float ___frontSensorMargin_13;
	// System.Single AIScript::frontSensorAngle
	float ___frontSensorAngle_14;
	// System.Single AIScript::avoidSpeed
	float ___avoidSpeed_15;
	// System.Int32 AIScript::flag
	int32_t ___flag_16;
	// System.Boolean AIScript::reversing
	bool ___reversing_17;
	// System.Single AIScript::reverseTimer
	float ___reverseTimer_18;
	// System.Single AIScript::waitToReverse
	float ___waitToReverse_19;
	// System.Single AIScript::reverseFor
	float ___reverseFor_20;
	// System.Single AIScript::stuckThreshlod
	float ___stuckThreshlod_21;
	// System.Boolean AIScript::pauseFlag
	bool ___pauseFlag_22;
	// Car AIScript::car
	Car_t4262919282 * ___car_23;

public:
	inline static int32_t get_offset_of_skillDebugFlag_2() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___skillDebugFlag_2)); }
	inline bool get_skillDebugFlag_2() const { return ___skillDebugFlag_2; }
	inline bool* get_address_of_skillDebugFlag_2() { return &___skillDebugFlag_2; }
	inline void set_skillDebugFlag_2(bool value)
	{
		___skillDebugFlag_2 = value;
	}

	inline static int32_t get_offset_of_distThreshold_3() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___distThreshold_3)); }
	inline float get_distThreshold_3() const { return ___distThreshold_3; }
	inline float* get_address_of_distThreshold_3() { return &___distThreshold_3; }
	inline void set_distThreshold_3(float value)
	{
		___distThreshold_3 = value;
	}

	inline static int32_t get_offset_of_lookAhead_4() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___lookAhead_4)); }
	inline int32_t get_lookAhead_4() const { return ___lookAhead_4; }
	inline int32_t* get_address_of_lookAhead_4() { return &___lookAhead_4; }
	inline void set_lookAhead_4(int32_t value)
	{
		___lookAhead_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___path_5)); }
	inline PathManager_t2373741454 * get_path_5() const { return ___path_5; }
	inline PathManager_t2373741454 ** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(PathManager_t2373741454 * value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier(&___path_5, value);
	}

	inline static int32_t get_offset_of_pathPoints_6() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___pathPoints_6)); }
	inline TransformU5BU5D_t3764228911* get_pathPoints_6() const { return ___pathPoints_6; }
	inline TransformU5BU5D_t3764228911** get_address_of_pathPoints_6() { return &___pathPoints_6; }
	inline void set_pathPoints_6(TransformU5BU5D_t3764228911* value)
	{
		___pathPoints_6 = value;
		Il2CppCodeGenWriteBarrier(&___pathPoints_6, value);
	}

	inline static int32_t get_offset_of_pathPointIdx_7() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___pathPointIdx_7)); }
	inline int32_t get_pathPointIdx_7() const { return ___pathPointIdx_7; }
	inline int32_t* get_address_of_pathPointIdx_7() { return &___pathPointIdx_7; }
	inline void set_pathPointIdx_7(int32_t value)
	{
		___pathPointIdx_7 = value;
	}

	inline static int32_t get_offset_of_tutorialDebug_8() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___tutorialDebug_8)); }
	inline bool get_tutorialDebug_8() const { return ___tutorialDebug_8; }
	inline bool* get_address_of_tutorialDebug_8() { return &___tutorialDebug_8; }
	inline void set_tutorialDebug_8(bool value)
	{
		___tutorialDebug_8 = value;
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___rb_9)); }
	inline Rigidbody_t4233889191 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody_t4233889191 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier(&___rb_9, value);
	}

	inline static int32_t get_offset_of_sensorLength_10() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___sensorLength_10)); }
	inline float get_sensorLength_10() const { return ___sensorLength_10; }
	inline float* get_address_of_sensorLength_10() { return &___sensorLength_10; }
	inline void set_sensorLength_10(float value)
	{
		___sensorLength_10 = value;
	}

	inline static int32_t get_offset_of_sideSensorLength_11() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___sideSensorLength_11)); }
	inline float get_sideSensorLength_11() const { return ___sideSensorLength_11; }
	inline float* get_address_of_sideSensorLength_11() { return &___sideSensorLength_11; }
	inline void set_sideSensorLength_11(float value)
	{
		___sideSensorLength_11 = value;
	}

	inline static int32_t get_offset_of_frontSensorStartPoint_12() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___frontSensorStartPoint_12)); }
	inline float get_frontSensorStartPoint_12() const { return ___frontSensorStartPoint_12; }
	inline float* get_address_of_frontSensorStartPoint_12() { return &___frontSensorStartPoint_12; }
	inline void set_frontSensorStartPoint_12(float value)
	{
		___frontSensorStartPoint_12 = value;
	}

	inline static int32_t get_offset_of_frontSensorMargin_13() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___frontSensorMargin_13)); }
	inline float get_frontSensorMargin_13() const { return ___frontSensorMargin_13; }
	inline float* get_address_of_frontSensorMargin_13() { return &___frontSensorMargin_13; }
	inline void set_frontSensorMargin_13(float value)
	{
		___frontSensorMargin_13 = value;
	}

	inline static int32_t get_offset_of_frontSensorAngle_14() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___frontSensorAngle_14)); }
	inline float get_frontSensorAngle_14() const { return ___frontSensorAngle_14; }
	inline float* get_address_of_frontSensorAngle_14() { return &___frontSensorAngle_14; }
	inline void set_frontSensorAngle_14(float value)
	{
		___frontSensorAngle_14 = value;
	}

	inline static int32_t get_offset_of_avoidSpeed_15() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___avoidSpeed_15)); }
	inline float get_avoidSpeed_15() const { return ___avoidSpeed_15; }
	inline float* get_address_of_avoidSpeed_15() { return &___avoidSpeed_15; }
	inline void set_avoidSpeed_15(float value)
	{
		___avoidSpeed_15 = value;
	}

	inline static int32_t get_offset_of_flag_16() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___flag_16)); }
	inline int32_t get_flag_16() const { return ___flag_16; }
	inline int32_t* get_address_of_flag_16() { return &___flag_16; }
	inline void set_flag_16(int32_t value)
	{
		___flag_16 = value;
	}

	inline static int32_t get_offset_of_reversing_17() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___reversing_17)); }
	inline bool get_reversing_17() const { return ___reversing_17; }
	inline bool* get_address_of_reversing_17() { return &___reversing_17; }
	inline void set_reversing_17(bool value)
	{
		___reversing_17 = value;
	}

	inline static int32_t get_offset_of_reverseTimer_18() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___reverseTimer_18)); }
	inline float get_reverseTimer_18() const { return ___reverseTimer_18; }
	inline float* get_address_of_reverseTimer_18() { return &___reverseTimer_18; }
	inline void set_reverseTimer_18(float value)
	{
		___reverseTimer_18 = value;
	}

	inline static int32_t get_offset_of_waitToReverse_19() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___waitToReverse_19)); }
	inline float get_waitToReverse_19() const { return ___waitToReverse_19; }
	inline float* get_address_of_waitToReverse_19() { return &___waitToReverse_19; }
	inline void set_waitToReverse_19(float value)
	{
		___waitToReverse_19 = value;
	}

	inline static int32_t get_offset_of_reverseFor_20() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___reverseFor_20)); }
	inline float get_reverseFor_20() const { return ___reverseFor_20; }
	inline float* get_address_of_reverseFor_20() { return &___reverseFor_20; }
	inline void set_reverseFor_20(float value)
	{
		___reverseFor_20 = value;
	}

	inline static int32_t get_offset_of_stuckThreshlod_21() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___stuckThreshlod_21)); }
	inline float get_stuckThreshlod_21() const { return ___stuckThreshlod_21; }
	inline float* get_address_of_stuckThreshlod_21() { return &___stuckThreshlod_21; }
	inline void set_stuckThreshlod_21(float value)
	{
		___stuckThreshlod_21 = value;
	}

	inline static int32_t get_offset_of_pauseFlag_22() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___pauseFlag_22)); }
	inline bool get_pauseFlag_22() const { return ___pauseFlag_22; }
	inline bool* get_address_of_pauseFlag_22() { return &___pauseFlag_22; }
	inline void set_pauseFlag_22(bool value)
	{
		___pauseFlag_22 = value;
	}

	inline static int32_t get_offset_of_car_23() { return static_cast<int32_t>(offsetof(AIScript_t816668793, ___car_23)); }
	inline Car_t4262919282 * get_car_23() const { return ___car_23; }
	inline Car_t4262919282 ** get_address_of_car_23() { return &___car_23; }
	inline void set_car_23(Car_t4262919282 * value)
	{
		___car_23 = value;
		Il2CppCodeGenWriteBarrier(&___car_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
