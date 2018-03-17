#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TrapWeapons2689941296.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomingMissile
struct  HomingMissile_t164123904  : public TrapWeapons_t2689941296
{
public:
	// System.Single HomingMissile::missileVelocity
	float ___missileVelocity_3;
	// System.Single HomingMissile::turn
	float ___turn_4;
	// UnityEngine.Rigidbody HomingMissile::homingMissile
	Rigidbody_t4233889191 * ___homingMissile_5;
	// System.Single HomingMissile::fuseDelay
	float ___fuseDelay_6;
	// System.Single HomingMissile::damageValue
	float ___damageValue_7;
	// UnityEngine.Transform HomingMissile::target
	Transform_t3275118058 * ___target_8;
	// System.Single HomingMissile::lifetime
	float ___lifetime_9;
	// UnityEngine.GameObject HomingMissile::explosion
	GameObject_t1756533147 * ___explosion_10;

public:
	inline static int32_t get_offset_of_missileVelocity_3() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___missileVelocity_3)); }
	inline float get_missileVelocity_3() const { return ___missileVelocity_3; }
	inline float* get_address_of_missileVelocity_3() { return &___missileVelocity_3; }
	inline void set_missileVelocity_3(float value)
	{
		___missileVelocity_3 = value;
	}

	inline static int32_t get_offset_of_turn_4() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___turn_4)); }
	inline float get_turn_4() const { return ___turn_4; }
	inline float* get_address_of_turn_4() { return &___turn_4; }
	inline void set_turn_4(float value)
	{
		___turn_4 = value;
	}

	inline static int32_t get_offset_of_homingMissile_5() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___homingMissile_5)); }
	inline Rigidbody_t4233889191 * get_homingMissile_5() const { return ___homingMissile_5; }
	inline Rigidbody_t4233889191 ** get_address_of_homingMissile_5() { return &___homingMissile_5; }
	inline void set_homingMissile_5(Rigidbody_t4233889191 * value)
	{
		___homingMissile_5 = value;
		Il2CppCodeGenWriteBarrier(&___homingMissile_5, value);
	}

	inline static int32_t get_offset_of_fuseDelay_6() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___fuseDelay_6)); }
	inline float get_fuseDelay_6() const { return ___fuseDelay_6; }
	inline float* get_address_of_fuseDelay_6() { return &___fuseDelay_6; }
	inline void set_fuseDelay_6(float value)
	{
		___fuseDelay_6 = value;
	}

	inline static int32_t get_offset_of_damageValue_7() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___damageValue_7)); }
	inline float get_damageValue_7() const { return ___damageValue_7; }
	inline float* get_address_of_damageValue_7() { return &___damageValue_7; }
	inline void set_damageValue_7(float value)
	{
		___damageValue_7 = value;
	}

	inline static int32_t get_offset_of_target_8() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___target_8)); }
	inline Transform_t3275118058 * get_target_8() const { return ___target_8; }
	inline Transform_t3275118058 ** get_address_of_target_8() { return &___target_8; }
	inline void set_target_8(Transform_t3275118058 * value)
	{
		___target_8 = value;
		Il2CppCodeGenWriteBarrier(&___target_8, value);
	}

	inline static int32_t get_offset_of_lifetime_9() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___lifetime_9)); }
	inline float get_lifetime_9() const { return ___lifetime_9; }
	inline float* get_address_of_lifetime_9() { return &___lifetime_9; }
	inline void set_lifetime_9(float value)
	{
		___lifetime_9 = value;
	}

	inline static int32_t get_offset_of_explosion_10() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___explosion_10)); }
	inline GameObject_t1756533147 * get_explosion_10() const { return ___explosion_10; }
	inline GameObject_t1756533147 ** get_address_of_explosion_10() { return &___explosion_10; }
	inline void set_explosion_10(GameObject_t1756533147 * value)
	{
		___explosion_10 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
