#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TrapWeapons2689941296.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lightning
struct  Lightning_t3010160370  : public TrapWeapons_t2689941296
{
public:
	// System.Single Lightning::lifetime
	float ___lifetime_3;
	// System.Single Lightning::damageValue
	float ___damageValue_4;

public:
	inline static int32_t get_offset_of_lifetime_3() { return static_cast<int32_t>(offsetof(Lightning_t3010160370, ___lifetime_3)); }
	inline float get_lifetime_3() const { return ___lifetime_3; }
	inline float* get_address_of_lifetime_3() { return &___lifetime_3; }
	inline void set_lifetime_3(float value)
	{
		___lifetime_3 = value;
	}

	inline static int32_t get_offset_of_damageValue_4() { return static_cast<int32_t>(offsetof(Lightning_t3010160370, ___damageValue_4)); }
	inline float get_damageValue_4() const { return ___damageValue_4; }
	inline float* get_address_of_damageValue_4() { return &___damageValue_4; }
	inline void set_damageValue_4(float value)
	{
		___damageValue_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
