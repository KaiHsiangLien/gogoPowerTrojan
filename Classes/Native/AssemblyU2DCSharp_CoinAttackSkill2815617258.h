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

// CoinAttackSkill
struct  CoinAttackSkill_t2815617258  : public Skill_t584798791
{
public:
	// UnityEngine.GameObject CoinAttackSkill::coinBullet
	GameObject_t1756533147 * ___coinBullet_5;
	// System.Int32 CoinAttackSkill::coinConsumption
	int32_t ___coinConsumption_6;

public:
	inline static int32_t get_offset_of_coinBullet_5() { return static_cast<int32_t>(offsetof(CoinAttackSkill_t2815617258, ___coinBullet_5)); }
	inline GameObject_t1756533147 * get_coinBullet_5() const { return ___coinBullet_5; }
	inline GameObject_t1756533147 ** get_address_of_coinBullet_5() { return &___coinBullet_5; }
	inline void set_coinBullet_5(GameObject_t1756533147 * value)
	{
		___coinBullet_5 = value;
		Il2CppCodeGenWriteBarrier(&___coinBullet_5, value);
	}

	inline static int32_t get_offset_of_coinConsumption_6() { return static_cast<int32_t>(offsetof(CoinAttackSkill_t2815617258, ___coinConsumption_6)); }
	inline int32_t get_coinConsumption_6() const { return ___coinConsumption_6; }
	inline int32_t* get_address_of_coinConsumption_6() { return &___coinConsumption_6; }
	inline void set_coinConsumption_6(int32_t value)
	{
		___coinConsumption_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
