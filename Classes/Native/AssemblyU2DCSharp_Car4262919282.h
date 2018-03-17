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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// WheelController
struct WheelController_t758156913;
// Skill
struct Skill_t584798791;
// CarStatus
struct CarStatus_t383877312;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Car
struct  Car_t4262919282  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Car::angularDragModifier
	float ___angularDragModifier_5;
	// UnityEngine.Vector3 Car::com
	Vector3_t2243707580  ___com_6;
	// System.Single Car::maxMotorTorque
	float ___maxMotorTorque_7;
	// System.Single Car::maxBrakeTorque
	float ___maxBrakeTorque_8;
	// System.Single Car::maxSteerAngle
	float ___maxSteerAngle_9;
	// UnityEngine.GameObject Car::frontLeft
	GameObject_t1756533147 * ___frontLeft_10;
	// UnityEngine.GameObject Car::frontRight
	GameObject_t1756533147 * ___frontRight_11;
	// UnityEngine.GameObject Car::rearLeft
	GameObject_t1756533147 * ___rearLeft_12;
	// UnityEngine.GameObject Car::rearRight
	GameObject_t1756533147 * ___rearRight_13;
	// System.Single Car::carVelocity
	float ___carVelocity_14;
	// System.Boolean Car::tutorialDebug
	bool ___tutorialDebug_15;
	// UnityEngine.Rigidbody Car::rb
	Rigidbody_t4233889191 * ___rb_16;
	// WheelController Car::flController
	WheelController_t758156913 * ___flController_17;
	// WheelController Car::frController
	WheelController_t758156913 * ___frController_18;
	// WheelController Car::rlController
	WheelController_t758156913 * ___rlController_19;
	// WheelController Car::rrController
	WheelController_t758156913 * ___rrController_20;
	// System.Single Car::maxTiltAngle
	float ___maxTiltAngle_21;
	// System.Int32 Car::myCharID
	int32_t ___myCharID_22;
	// Skill Car::mySkill
	Skill_t584798791 * ___mySkill_23;
	// CarStatus Car::status
	CarStatus_t383877312 * ___status_24;
	// System.Boolean Car::stopFlag
	bool ___stopFlag_25;
	// System.Boolean Car::stoppedBySkill
	bool ___stoppedBySkill_26;
	// System.Boolean Car::stunned
	bool ___stunned_27;
	// System.Int32 Car::respawnPositionIdx
	int32_t ___respawnPositionIdx_28;
	// System.Single Car::reSpawnTime
	float ___reSpawnTime_29;
	// System.Single Car::reSpawnTimer
	float ___reSpawnTimer_30;

public:
	inline static int32_t get_offset_of_angularDragModifier_5() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___angularDragModifier_5)); }
	inline float get_angularDragModifier_5() const { return ___angularDragModifier_5; }
	inline float* get_address_of_angularDragModifier_5() { return &___angularDragModifier_5; }
	inline void set_angularDragModifier_5(float value)
	{
		___angularDragModifier_5 = value;
	}

	inline static int32_t get_offset_of_com_6() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___com_6)); }
	inline Vector3_t2243707580  get_com_6() const { return ___com_6; }
	inline Vector3_t2243707580 * get_address_of_com_6() { return &___com_6; }
	inline void set_com_6(Vector3_t2243707580  value)
	{
		___com_6 = value;
	}

	inline static int32_t get_offset_of_maxMotorTorque_7() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___maxMotorTorque_7)); }
	inline float get_maxMotorTorque_7() const { return ___maxMotorTorque_7; }
	inline float* get_address_of_maxMotorTorque_7() { return &___maxMotorTorque_7; }
	inline void set_maxMotorTorque_7(float value)
	{
		___maxMotorTorque_7 = value;
	}

	inline static int32_t get_offset_of_maxBrakeTorque_8() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___maxBrakeTorque_8)); }
	inline float get_maxBrakeTorque_8() const { return ___maxBrakeTorque_8; }
	inline float* get_address_of_maxBrakeTorque_8() { return &___maxBrakeTorque_8; }
	inline void set_maxBrakeTorque_8(float value)
	{
		___maxBrakeTorque_8 = value;
	}

	inline static int32_t get_offset_of_maxSteerAngle_9() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___maxSteerAngle_9)); }
	inline float get_maxSteerAngle_9() const { return ___maxSteerAngle_9; }
	inline float* get_address_of_maxSteerAngle_9() { return &___maxSteerAngle_9; }
	inline void set_maxSteerAngle_9(float value)
	{
		___maxSteerAngle_9 = value;
	}

	inline static int32_t get_offset_of_frontLeft_10() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___frontLeft_10)); }
	inline GameObject_t1756533147 * get_frontLeft_10() const { return ___frontLeft_10; }
	inline GameObject_t1756533147 ** get_address_of_frontLeft_10() { return &___frontLeft_10; }
	inline void set_frontLeft_10(GameObject_t1756533147 * value)
	{
		___frontLeft_10 = value;
		Il2CppCodeGenWriteBarrier(&___frontLeft_10, value);
	}

	inline static int32_t get_offset_of_frontRight_11() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___frontRight_11)); }
	inline GameObject_t1756533147 * get_frontRight_11() const { return ___frontRight_11; }
	inline GameObject_t1756533147 ** get_address_of_frontRight_11() { return &___frontRight_11; }
	inline void set_frontRight_11(GameObject_t1756533147 * value)
	{
		___frontRight_11 = value;
		Il2CppCodeGenWriteBarrier(&___frontRight_11, value);
	}

	inline static int32_t get_offset_of_rearLeft_12() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___rearLeft_12)); }
	inline GameObject_t1756533147 * get_rearLeft_12() const { return ___rearLeft_12; }
	inline GameObject_t1756533147 ** get_address_of_rearLeft_12() { return &___rearLeft_12; }
	inline void set_rearLeft_12(GameObject_t1756533147 * value)
	{
		___rearLeft_12 = value;
		Il2CppCodeGenWriteBarrier(&___rearLeft_12, value);
	}

	inline static int32_t get_offset_of_rearRight_13() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___rearRight_13)); }
	inline GameObject_t1756533147 * get_rearRight_13() const { return ___rearRight_13; }
	inline GameObject_t1756533147 ** get_address_of_rearRight_13() { return &___rearRight_13; }
	inline void set_rearRight_13(GameObject_t1756533147 * value)
	{
		___rearRight_13 = value;
		Il2CppCodeGenWriteBarrier(&___rearRight_13, value);
	}

	inline static int32_t get_offset_of_carVelocity_14() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___carVelocity_14)); }
	inline float get_carVelocity_14() const { return ___carVelocity_14; }
	inline float* get_address_of_carVelocity_14() { return &___carVelocity_14; }
	inline void set_carVelocity_14(float value)
	{
		___carVelocity_14 = value;
	}

	inline static int32_t get_offset_of_tutorialDebug_15() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___tutorialDebug_15)); }
	inline bool get_tutorialDebug_15() const { return ___tutorialDebug_15; }
	inline bool* get_address_of_tutorialDebug_15() { return &___tutorialDebug_15; }
	inline void set_tutorialDebug_15(bool value)
	{
		___tutorialDebug_15 = value;
	}

	inline static int32_t get_offset_of_rb_16() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___rb_16)); }
	inline Rigidbody_t4233889191 * get_rb_16() const { return ___rb_16; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_16() { return &___rb_16; }
	inline void set_rb_16(Rigidbody_t4233889191 * value)
	{
		___rb_16 = value;
		Il2CppCodeGenWriteBarrier(&___rb_16, value);
	}

	inline static int32_t get_offset_of_flController_17() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___flController_17)); }
	inline WheelController_t758156913 * get_flController_17() const { return ___flController_17; }
	inline WheelController_t758156913 ** get_address_of_flController_17() { return &___flController_17; }
	inline void set_flController_17(WheelController_t758156913 * value)
	{
		___flController_17 = value;
		Il2CppCodeGenWriteBarrier(&___flController_17, value);
	}

	inline static int32_t get_offset_of_frController_18() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___frController_18)); }
	inline WheelController_t758156913 * get_frController_18() const { return ___frController_18; }
	inline WheelController_t758156913 ** get_address_of_frController_18() { return &___frController_18; }
	inline void set_frController_18(WheelController_t758156913 * value)
	{
		___frController_18 = value;
		Il2CppCodeGenWriteBarrier(&___frController_18, value);
	}

	inline static int32_t get_offset_of_rlController_19() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___rlController_19)); }
	inline WheelController_t758156913 * get_rlController_19() const { return ___rlController_19; }
	inline WheelController_t758156913 ** get_address_of_rlController_19() { return &___rlController_19; }
	inline void set_rlController_19(WheelController_t758156913 * value)
	{
		___rlController_19 = value;
		Il2CppCodeGenWriteBarrier(&___rlController_19, value);
	}

	inline static int32_t get_offset_of_rrController_20() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___rrController_20)); }
	inline WheelController_t758156913 * get_rrController_20() const { return ___rrController_20; }
	inline WheelController_t758156913 ** get_address_of_rrController_20() { return &___rrController_20; }
	inline void set_rrController_20(WheelController_t758156913 * value)
	{
		___rrController_20 = value;
		Il2CppCodeGenWriteBarrier(&___rrController_20, value);
	}

	inline static int32_t get_offset_of_maxTiltAngle_21() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___maxTiltAngle_21)); }
	inline float get_maxTiltAngle_21() const { return ___maxTiltAngle_21; }
	inline float* get_address_of_maxTiltAngle_21() { return &___maxTiltAngle_21; }
	inline void set_maxTiltAngle_21(float value)
	{
		___maxTiltAngle_21 = value;
	}

	inline static int32_t get_offset_of_myCharID_22() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___myCharID_22)); }
	inline int32_t get_myCharID_22() const { return ___myCharID_22; }
	inline int32_t* get_address_of_myCharID_22() { return &___myCharID_22; }
	inline void set_myCharID_22(int32_t value)
	{
		___myCharID_22 = value;
	}

	inline static int32_t get_offset_of_mySkill_23() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___mySkill_23)); }
	inline Skill_t584798791 * get_mySkill_23() const { return ___mySkill_23; }
	inline Skill_t584798791 ** get_address_of_mySkill_23() { return &___mySkill_23; }
	inline void set_mySkill_23(Skill_t584798791 * value)
	{
		___mySkill_23 = value;
		Il2CppCodeGenWriteBarrier(&___mySkill_23, value);
	}

	inline static int32_t get_offset_of_status_24() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___status_24)); }
	inline CarStatus_t383877312 * get_status_24() const { return ___status_24; }
	inline CarStatus_t383877312 ** get_address_of_status_24() { return &___status_24; }
	inline void set_status_24(CarStatus_t383877312 * value)
	{
		___status_24 = value;
		Il2CppCodeGenWriteBarrier(&___status_24, value);
	}

	inline static int32_t get_offset_of_stopFlag_25() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___stopFlag_25)); }
	inline bool get_stopFlag_25() const { return ___stopFlag_25; }
	inline bool* get_address_of_stopFlag_25() { return &___stopFlag_25; }
	inline void set_stopFlag_25(bool value)
	{
		___stopFlag_25 = value;
	}

	inline static int32_t get_offset_of_stoppedBySkill_26() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___stoppedBySkill_26)); }
	inline bool get_stoppedBySkill_26() const { return ___stoppedBySkill_26; }
	inline bool* get_address_of_stoppedBySkill_26() { return &___stoppedBySkill_26; }
	inline void set_stoppedBySkill_26(bool value)
	{
		___stoppedBySkill_26 = value;
	}

	inline static int32_t get_offset_of_stunned_27() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___stunned_27)); }
	inline bool get_stunned_27() const { return ___stunned_27; }
	inline bool* get_address_of_stunned_27() { return &___stunned_27; }
	inline void set_stunned_27(bool value)
	{
		___stunned_27 = value;
	}

	inline static int32_t get_offset_of_respawnPositionIdx_28() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___respawnPositionIdx_28)); }
	inline int32_t get_respawnPositionIdx_28() const { return ___respawnPositionIdx_28; }
	inline int32_t* get_address_of_respawnPositionIdx_28() { return &___respawnPositionIdx_28; }
	inline void set_respawnPositionIdx_28(int32_t value)
	{
		___respawnPositionIdx_28 = value;
	}

	inline static int32_t get_offset_of_reSpawnTime_29() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___reSpawnTime_29)); }
	inline float get_reSpawnTime_29() const { return ___reSpawnTime_29; }
	inline float* get_address_of_reSpawnTime_29() { return &___reSpawnTime_29; }
	inline void set_reSpawnTime_29(float value)
	{
		___reSpawnTime_29 = value;
	}

	inline static int32_t get_offset_of_reSpawnTimer_30() { return static_cast<int32_t>(offsetof(Car_t4262919282, ___reSpawnTimer_30)); }
	inline float get_reSpawnTimer_30() const { return ___reSpawnTimer_30; }
	inline float* get_address_of_reSpawnTimer_30() { return &___reSpawnTimer_30; }
	inline void set_reSpawnTimer_30(float value)
	{
		___reSpawnTimer_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
