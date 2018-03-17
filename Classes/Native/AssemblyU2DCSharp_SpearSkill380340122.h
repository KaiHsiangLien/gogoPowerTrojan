#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Skill584798791.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpearSkill
struct  SpearSkill_t380340122  : public Skill_t584798791
{
public:
	// UnityEngine.GameObject[] SpearSkill::spears
	GameObjectU5BU5D_t3057952154* ___spears_5;
	// UnityEngine.GameObject SpearSkill::weaponInstance
	GameObject_t1756533147 * ___weaponInstance_6;

public:
	inline static int32_t get_offset_of_spears_5() { return static_cast<int32_t>(offsetof(SpearSkill_t380340122, ___spears_5)); }
	inline GameObjectU5BU5D_t3057952154* get_spears_5() const { return ___spears_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_spears_5() { return &___spears_5; }
	inline void set_spears_5(GameObjectU5BU5D_t3057952154* value)
	{
		___spears_5 = value;
		Il2CppCodeGenWriteBarrier(&___spears_5, value);
	}

	inline static int32_t get_offset_of_weaponInstance_6() { return static_cast<int32_t>(offsetof(SpearSkill_t380340122, ___weaponInstance_6)); }
	inline GameObject_t1756533147 * get_weaponInstance_6() const { return ___weaponInstance_6; }
	inline GameObject_t1756533147 ** get_address_of_weaponInstance_6() { return &___weaponInstance_6; }
	inline void set_weaponInstance_6(GameObject_t1756533147 * value)
	{
		___weaponInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___weaponInstance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
