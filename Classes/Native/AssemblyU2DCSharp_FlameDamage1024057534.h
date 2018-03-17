#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TrapWeapons2689941296.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlameDamage
struct  FlameDamage_t1024057534  : public TrapWeapons_t2689941296
{
public:
	// UnityEngine.ParticleSystem FlameDamage::FlameParticles
	ParticleSystem_t3394631041 * ___FlameParticles_3;
	// System.Single FlameDamage::damageValue
	float ___damageValue_4;
	// System.Single FlameDamage::myVelocity
	float ___myVelocity_5;

public:
	inline static int32_t get_offset_of_FlameParticles_3() { return static_cast<int32_t>(offsetof(FlameDamage_t1024057534, ___FlameParticles_3)); }
	inline ParticleSystem_t3394631041 * get_FlameParticles_3() const { return ___FlameParticles_3; }
	inline ParticleSystem_t3394631041 ** get_address_of_FlameParticles_3() { return &___FlameParticles_3; }
	inline void set_FlameParticles_3(ParticleSystem_t3394631041 * value)
	{
		___FlameParticles_3 = value;
		Il2CppCodeGenWriteBarrier(&___FlameParticles_3, value);
	}

	inline static int32_t get_offset_of_damageValue_4() { return static_cast<int32_t>(offsetof(FlameDamage_t1024057534, ___damageValue_4)); }
	inline float get_damageValue_4() const { return ___damageValue_4; }
	inline float* get_address_of_damageValue_4() { return &___damageValue_4; }
	inline void set_damageValue_4(float value)
	{
		___damageValue_4 = value;
	}

	inline static int32_t get_offset_of_myVelocity_5() { return static_cast<int32_t>(offsetof(FlameDamage_t1024057534, ___myVelocity_5)); }
	inline float get_myVelocity_5() const { return ___myVelocity_5; }
	inline float* get_address_of_myVelocity_5() { return &___myVelocity_5; }
	inline void set_myVelocity_5(float value)
	{
		___myVelocity_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
