#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Skill584798791.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityStandardAssets.ImageEffects.ColorCorrectionRamp
struct ColorCorrectionRamp_t1672908095;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeStopSkill
struct  TimeStopSkill_t2948182162  : public Skill_t584798791
{
public:
	// UnityEngine.Camera TimeStopSkill::backGroundCamera
	Camera_t189460977 * ___backGroundCamera_5;
	// UnityEngine.Camera TimeStopSkill::mainCamera
	Camera_t189460977 * ___mainCamera_6;
	// UnityStandardAssets.ImageEffects.ColorCorrectionRamp TimeStopSkill::grayScaleScript
	ColorCorrectionRamp_t1672908095 * ___grayScaleScript_7;
	// System.Single TimeStopSkill::StopTime
	float ___StopTime_8;
	// System.Single TimeStopSkill::StopTimerCurr
	float ___StopTimerCurr_9;
	// System.Boolean TimeStopSkill::isSkillReady
	bool ___isSkillReady_10;
	// UnityEngine.GameObject[] TimeStopSkill::enemies
	GameObjectU5BU5D_t3057952154* ___enemies_11;

public:
	inline static int32_t get_offset_of_backGroundCamera_5() { return static_cast<int32_t>(offsetof(TimeStopSkill_t2948182162, ___backGroundCamera_5)); }
	inline Camera_t189460977 * get_backGroundCamera_5() const { return ___backGroundCamera_5; }
	inline Camera_t189460977 ** get_address_of_backGroundCamera_5() { return &___backGroundCamera_5; }
	inline void set_backGroundCamera_5(Camera_t189460977 * value)
	{
		___backGroundCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___backGroundCamera_5, value);
	}

	inline static int32_t get_offset_of_mainCamera_6() { return static_cast<int32_t>(offsetof(TimeStopSkill_t2948182162, ___mainCamera_6)); }
	inline Camera_t189460977 * get_mainCamera_6() const { return ___mainCamera_6; }
	inline Camera_t189460977 ** get_address_of_mainCamera_6() { return &___mainCamera_6; }
	inline void set_mainCamera_6(Camera_t189460977 * value)
	{
		___mainCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_6, value);
	}

	inline static int32_t get_offset_of_grayScaleScript_7() { return static_cast<int32_t>(offsetof(TimeStopSkill_t2948182162, ___grayScaleScript_7)); }
	inline ColorCorrectionRamp_t1672908095 * get_grayScaleScript_7() const { return ___grayScaleScript_7; }
	inline ColorCorrectionRamp_t1672908095 ** get_address_of_grayScaleScript_7() { return &___grayScaleScript_7; }
	inline void set_grayScaleScript_7(ColorCorrectionRamp_t1672908095 * value)
	{
		___grayScaleScript_7 = value;
		Il2CppCodeGenWriteBarrier(&___grayScaleScript_7, value);
	}

	inline static int32_t get_offset_of_StopTime_8() { return static_cast<int32_t>(offsetof(TimeStopSkill_t2948182162, ___StopTime_8)); }
	inline float get_StopTime_8() const { return ___StopTime_8; }
	inline float* get_address_of_StopTime_8() { return &___StopTime_8; }
	inline void set_StopTime_8(float value)
	{
		___StopTime_8 = value;
	}

	inline static int32_t get_offset_of_StopTimerCurr_9() { return static_cast<int32_t>(offsetof(TimeStopSkill_t2948182162, ___StopTimerCurr_9)); }
	inline float get_StopTimerCurr_9() const { return ___StopTimerCurr_9; }
	inline float* get_address_of_StopTimerCurr_9() { return &___StopTimerCurr_9; }
	inline void set_StopTimerCurr_9(float value)
	{
		___StopTimerCurr_9 = value;
	}

	inline static int32_t get_offset_of_isSkillReady_10() { return static_cast<int32_t>(offsetof(TimeStopSkill_t2948182162, ___isSkillReady_10)); }
	inline bool get_isSkillReady_10() const { return ___isSkillReady_10; }
	inline bool* get_address_of_isSkillReady_10() { return &___isSkillReady_10; }
	inline void set_isSkillReady_10(bool value)
	{
		___isSkillReady_10 = value;
	}

	inline static int32_t get_offset_of_enemies_11() { return static_cast<int32_t>(offsetof(TimeStopSkill_t2948182162, ___enemies_11)); }
	inline GameObjectU5BU5D_t3057952154* get_enemies_11() const { return ___enemies_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_enemies_11() { return &___enemies_11; }
	inline void set_enemies_11(GameObjectU5BU5D_t3057952154* value)
	{
		___enemies_11 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
