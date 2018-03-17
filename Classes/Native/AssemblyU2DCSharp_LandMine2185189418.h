#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TrapWeapons2689941296.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LandMine
struct  LandMine_t2185189418  : public TrapWeapons_t2689941296
{
public:
	// UnityEngine.GameObject LandMine::explosion
	GameObject_t1756533147 * ___explosion_3;
	// System.Single LandMine::damageValue
	float ___damageValue_4;
	// System.Boolean LandMine::alreadyPut
	bool ___alreadyPut_5;

public:
	inline static int32_t get_offset_of_explosion_3() { return static_cast<int32_t>(offsetof(LandMine_t2185189418, ___explosion_3)); }
	inline GameObject_t1756533147 * get_explosion_3() const { return ___explosion_3; }
	inline GameObject_t1756533147 ** get_address_of_explosion_3() { return &___explosion_3; }
	inline void set_explosion_3(GameObject_t1756533147 * value)
	{
		___explosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_3, value);
	}

	inline static int32_t get_offset_of_damageValue_4() { return static_cast<int32_t>(offsetof(LandMine_t2185189418, ___damageValue_4)); }
	inline float get_damageValue_4() const { return ___damageValue_4; }
	inline float* get_address_of_damageValue_4() { return &___damageValue_4; }
	inline void set_damageValue_4(float value)
	{
		___damageValue_4 = value;
	}

	inline static int32_t get_offset_of_alreadyPut_5() { return static_cast<int32_t>(offsetof(LandMine_t2185189418, ___alreadyPut_5)); }
	inline bool get_alreadyPut_5() const { return ___alreadyPut_5; }
	inline bool* get_address_of_alreadyPut_5() { return &___alreadyPut_5; }
	inline void set_alreadyPut_5(bool value)
	{
		___alreadyPut_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
