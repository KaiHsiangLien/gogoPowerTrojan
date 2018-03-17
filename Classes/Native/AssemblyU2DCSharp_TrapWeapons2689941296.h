#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CarStatus
struct CarStatus_t383877312;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrapWeapons
struct  TrapWeapons_t2689941296  : public MonoBehaviour_t1158329972
{
public:
	// CarStatus TrapWeapons::attacker
	CarStatus_t383877312 * ___attacker_2;

public:
	inline static int32_t get_offset_of_attacker_2() { return static_cast<int32_t>(offsetof(TrapWeapons_t2689941296, ___attacker_2)); }
	inline CarStatus_t383877312 * get_attacker_2() const { return ___attacker_2; }
	inline CarStatus_t383877312 ** get_address_of_attacker_2() { return &___attacker_2; }
	inline void set_attacker_2(CarStatus_t383877312 * value)
	{
		___attacker_2 = value;
		Il2CppCodeGenWriteBarrier(&___attacker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
