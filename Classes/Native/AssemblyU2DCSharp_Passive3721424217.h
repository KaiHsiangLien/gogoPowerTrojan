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

// Passive
struct  Passive_t3721424217  : public MonoBehaviour_t1158329972
{
public:
	// CarStatus Passive::carStatus
	CarStatus_t383877312 * ___carStatus_2;

public:
	inline static int32_t get_offset_of_carStatus_2() { return static_cast<int32_t>(offsetof(Passive_t3721424217, ___carStatus_2)); }
	inline CarStatus_t383877312 * get_carStatus_2() const { return ___carStatus_2; }
	inline CarStatus_t383877312 ** get_address_of_carStatus_2() { return &___carStatus_2; }
	inline void set_carStatus_2(CarStatus_t383877312 * value)
	{
		___carStatus_2 = value;
		Il2CppCodeGenWriteBarrier(&___carStatus_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
