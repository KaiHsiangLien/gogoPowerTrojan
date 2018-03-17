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

// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// lightSwitch
struct  lightSwitch_t3719956300  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Light lightSwitch::lightSource
	Light_t494725636 * ___lightSource_2;
	// UnityEngine.GameObject lightSwitch::FlameParticles
	GameObject_t1756533147 * ___FlameParticles_3;
	// System.Boolean lightSwitch::isTriggered
	bool ___isTriggered_4;
	// System.Single lightSwitch::triggerThres
	float ___triggerThres_5;
	// System.Single lightSwitch::triggerChance
	float ___triggerChance_6;
	// UnityEngine.Transform lightSwitch::target
	Transform_t3275118058 * ___target_7;
	// UnityEngine.Vector3 lightSwitch::flameOffset
	Vector3_t2243707580  ___flameOffset_8;

public:
	inline static int32_t get_offset_of_lightSource_2() { return static_cast<int32_t>(offsetof(lightSwitch_t3719956300, ___lightSource_2)); }
	inline Light_t494725636 * get_lightSource_2() const { return ___lightSource_2; }
	inline Light_t494725636 ** get_address_of_lightSource_2() { return &___lightSource_2; }
	inline void set_lightSource_2(Light_t494725636 * value)
	{
		___lightSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___lightSource_2, value);
	}

	inline static int32_t get_offset_of_FlameParticles_3() { return static_cast<int32_t>(offsetof(lightSwitch_t3719956300, ___FlameParticles_3)); }
	inline GameObject_t1756533147 * get_FlameParticles_3() const { return ___FlameParticles_3; }
	inline GameObject_t1756533147 ** get_address_of_FlameParticles_3() { return &___FlameParticles_3; }
	inline void set_FlameParticles_3(GameObject_t1756533147 * value)
	{
		___FlameParticles_3 = value;
		Il2CppCodeGenWriteBarrier(&___FlameParticles_3, value);
	}

	inline static int32_t get_offset_of_isTriggered_4() { return static_cast<int32_t>(offsetof(lightSwitch_t3719956300, ___isTriggered_4)); }
	inline bool get_isTriggered_4() const { return ___isTriggered_4; }
	inline bool* get_address_of_isTriggered_4() { return &___isTriggered_4; }
	inline void set_isTriggered_4(bool value)
	{
		___isTriggered_4 = value;
	}

	inline static int32_t get_offset_of_triggerThres_5() { return static_cast<int32_t>(offsetof(lightSwitch_t3719956300, ___triggerThres_5)); }
	inline float get_triggerThres_5() const { return ___triggerThres_5; }
	inline float* get_address_of_triggerThres_5() { return &___triggerThres_5; }
	inline void set_triggerThres_5(float value)
	{
		___triggerThres_5 = value;
	}

	inline static int32_t get_offset_of_triggerChance_6() { return static_cast<int32_t>(offsetof(lightSwitch_t3719956300, ___triggerChance_6)); }
	inline float get_triggerChance_6() const { return ___triggerChance_6; }
	inline float* get_address_of_triggerChance_6() { return &___triggerChance_6; }
	inline void set_triggerChance_6(float value)
	{
		___triggerChance_6 = value;
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(lightSwitch_t3719956300, ___target_7)); }
	inline Transform_t3275118058 * get_target_7() const { return ___target_7; }
	inline Transform_t3275118058 ** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Transform_t3275118058 * value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier(&___target_7, value);
	}

	inline static int32_t get_offset_of_flameOffset_8() { return static_cast<int32_t>(offsetof(lightSwitch_t3719956300, ___flameOffset_8)); }
	inline Vector3_t2243707580  get_flameOffset_8() const { return ___flameOffset_8; }
	inline Vector3_t2243707580 * get_address_of_flameOffset_8() { return &___flameOffset_8; }
	inline void set_flameOffset_8(Vector3_t2243707580  value)
	{
		___flameOffset_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
