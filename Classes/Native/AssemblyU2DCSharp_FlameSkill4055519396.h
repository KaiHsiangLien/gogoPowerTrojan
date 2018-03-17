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

// FlameSkill
struct  FlameSkill_t4055519396  : public Skill_t584798791
{
public:
	// UnityEngine.GameObject FlameSkill::FlameParticles
	GameObject_t1756533147 * ___FlameParticles_5;
	// UnityEngine.GameObject FlameSkill::FlameInstance
	GameObject_t1756533147 * ___FlameInstance_6;

public:
	inline static int32_t get_offset_of_FlameParticles_5() { return static_cast<int32_t>(offsetof(FlameSkill_t4055519396, ___FlameParticles_5)); }
	inline GameObject_t1756533147 * get_FlameParticles_5() const { return ___FlameParticles_5; }
	inline GameObject_t1756533147 ** get_address_of_FlameParticles_5() { return &___FlameParticles_5; }
	inline void set_FlameParticles_5(GameObject_t1756533147 * value)
	{
		___FlameParticles_5 = value;
		Il2CppCodeGenWriteBarrier(&___FlameParticles_5, value);
	}

	inline static int32_t get_offset_of_FlameInstance_6() { return static_cast<int32_t>(offsetof(FlameSkill_t4055519396, ___FlameInstance_6)); }
	inline GameObject_t1756533147 * get_FlameInstance_6() const { return ___FlameInstance_6; }
	inline GameObject_t1756533147 ** get_address_of_FlameInstance_6() { return &___FlameInstance_6; }
	inline void set_FlameInstance_6(GameObject_t1756533147 * value)
	{
		___FlameInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___FlameInstance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
