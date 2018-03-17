#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Skill584798791.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShieldSkill
struct  ShieldSkill_t3854263014  : public Skill_t584798791
{
public:
	// UnityEngine.GameObject ShieldSkill::shieldParticle
	GameObject_t1756533147 * ___shieldParticle_5;
	// System.Single ShieldSkill::timer
	float ___timer_6;
	// System.Single ShieldSkill::skillTime
	float ___skillTime_7;
	// UnityEngine.GameObject ShieldSkill::shieldInstance
	GameObject_t1756533147 * ___shieldInstance_8;

public:
	inline static int32_t get_offset_of_shieldParticle_5() { return static_cast<int32_t>(offsetof(ShieldSkill_t3854263014, ___shieldParticle_5)); }
	inline GameObject_t1756533147 * get_shieldParticle_5() const { return ___shieldParticle_5; }
	inline GameObject_t1756533147 ** get_address_of_shieldParticle_5() { return &___shieldParticle_5; }
	inline void set_shieldParticle_5(GameObject_t1756533147 * value)
	{
		___shieldParticle_5 = value;
		Il2CppCodeGenWriteBarrier(&___shieldParticle_5, value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(ShieldSkill_t3854263014, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_skillTime_7() { return static_cast<int32_t>(offsetof(ShieldSkill_t3854263014, ___skillTime_7)); }
	inline float get_skillTime_7() const { return ___skillTime_7; }
	inline float* get_address_of_skillTime_7() { return &___skillTime_7; }
	inline void set_skillTime_7(float value)
	{
		___skillTime_7 = value;
	}

	inline static int32_t get_offset_of_shieldInstance_8() { return static_cast<int32_t>(offsetof(ShieldSkill_t3854263014, ___shieldInstance_8)); }
	inline GameObject_t1756533147 * get_shieldInstance_8() const { return ___shieldInstance_8; }
	inline GameObject_t1756533147 ** get_address_of_shieldInstance_8() { return &___shieldInstance_8; }
	inline void set_shieldInstance_8(GameObject_t1756533147 * value)
	{
		___shieldInstance_8 = value;
		Il2CppCodeGenWriteBarrier(&___shieldInstance_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
