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

// Missile
struct  Missile_t813944928  : public TrapWeapons_t2689941296
{
public:
	// System.Single Missile::speed
	float ___speed_3;
	// System.Single Missile::damageValue
	float ___damageValue_4;
	// UnityEngine.GameObject Missile::explosion
	GameObject_t1756533147 * ___explosion_5;

public:
	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_damageValue_4() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___damageValue_4)); }
	inline float get_damageValue_4() const { return ___damageValue_4; }
	inline float* get_address_of_damageValue_4() { return &___damageValue_4; }
	inline void set_damageValue_4(float value)
	{
		___damageValue_4 = value;
	}

	inline static int32_t get_offset_of_explosion_5() { return static_cast<int32_t>(offsetof(Missile_t813944928, ___explosion_5)); }
	inline GameObject_t1756533147 * get_explosion_5() const { return ___explosion_5; }
	inline GameObject_t1756533147 ** get_address_of_explosion_5() { return &___explosion_5; }
	inline void set_explosion_5(GameObject_t1756533147 * value)
	{
		___explosion_5 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
