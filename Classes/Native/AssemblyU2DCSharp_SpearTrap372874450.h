#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TrapWeapons2689941296.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpearTrap
struct  SpearTrap_t372874450  : public TrapWeapons_t2689941296
{
public:
	// UnityEngine.Vector3 SpearTrap::myTranslate
	Vector3_t2243707580  ___myTranslate_3;
	// UnityEngine.AudioClip SpearTrap::audioClip
	AudioClip_t1932558630 * ___audioClip_4;
	// UnityEngine.ParticleSystem SpearTrap::explosion
	ParticleSystem_t3394631041 * ___explosion_5;
	// System.Single SpearTrap::damageValue
	float ___damageValue_6;
	// System.Single SpearTrap::pierceTime
	float ___pierceTime_7;
	// System.Single SpearTrap::maxPierceTime
	float ___maxPierceTime_8;
	// System.Single SpearTrap::elapsedTime
	float ___elapsedTime_9;

public:
	inline static int32_t get_offset_of_myTranslate_3() { return static_cast<int32_t>(offsetof(SpearTrap_t372874450, ___myTranslate_3)); }
	inline Vector3_t2243707580  get_myTranslate_3() const { return ___myTranslate_3; }
	inline Vector3_t2243707580 * get_address_of_myTranslate_3() { return &___myTranslate_3; }
	inline void set_myTranslate_3(Vector3_t2243707580  value)
	{
		___myTranslate_3 = value;
	}

	inline static int32_t get_offset_of_audioClip_4() { return static_cast<int32_t>(offsetof(SpearTrap_t372874450, ___audioClip_4)); }
	inline AudioClip_t1932558630 * get_audioClip_4() const { return ___audioClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_4() { return &___audioClip_4; }
	inline void set_audioClip_4(AudioClip_t1932558630 * value)
	{
		___audioClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_4, value);
	}

	inline static int32_t get_offset_of_explosion_5() { return static_cast<int32_t>(offsetof(SpearTrap_t372874450, ___explosion_5)); }
	inline ParticleSystem_t3394631041 * get_explosion_5() const { return ___explosion_5; }
	inline ParticleSystem_t3394631041 ** get_address_of_explosion_5() { return &___explosion_5; }
	inline void set_explosion_5(ParticleSystem_t3394631041 * value)
	{
		___explosion_5 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_5, value);
	}

	inline static int32_t get_offset_of_damageValue_6() { return static_cast<int32_t>(offsetof(SpearTrap_t372874450, ___damageValue_6)); }
	inline float get_damageValue_6() const { return ___damageValue_6; }
	inline float* get_address_of_damageValue_6() { return &___damageValue_6; }
	inline void set_damageValue_6(float value)
	{
		___damageValue_6 = value;
	}

	inline static int32_t get_offset_of_pierceTime_7() { return static_cast<int32_t>(offsetof(SpearTrap_t372874450, ___pierceTime_7)); }
	inline float get_pierceTime_7() const { return ___pierceTime_7; }
	inline float* get_address_of_pierceTime_7() { return &___pierceTime_7; }
	inline void set_pierceTime_7(float value)
	{
		___pierceTime_7 = value;
	}

	inline static int32_t get_offset_of_maxPierceTime_8() { return static_cast<int32_t>(offsetof(SpearTrap_t372874450, ___maxPierceTime_8)); }
	inline float get_maxPierceTime_8() const { return ___maxPierceTime_8; }
	inline float* get_address_of_maxPierceTime_8() { return &___maxPierceTime_8; }
	inline void set_maxPierceTime_8(float value)
	{
		___maxPierceTime_8 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_9() { return static_cast<int32_t>(offsetof(SpearTrap_t372874450, ___elapsedTime_9)); }
	inline float get_elapsedTime_9() const { return ___elapsedTime_9; }
	inline float* get_address_of_elapsedTime_9() { return &___elapsedTime_9; }
	inline void set_elapsedTime_9(float value)
	{
		___elapsedTime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
