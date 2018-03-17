#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Animator
struct Animator_t69676727;
// GunAim
struct GunAim_t2119054011;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GunShoot
struct  GunShoot_t2702500845  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GunShoot::fireRate
	float ___fireRate_2;
	// System.Single GunShoot::weaponRange
	float ___weaponRange_3;
	// UnityEngine.Transform GunShoot::gunEnd
	Transform_t3275118058 * ___gunEnd_4;
	// UnityEngine.ParticleSystem GunShoot::muzzleFlash
	ParticleSystem_t3394631041 * ___muzzleFlash_5;
	// UnityEngine.ParticleSystem GunShoot::cartridgeEjection
	ParticleSystem_t3394631041 * ___cartridgeEjection_6;
	// UnityEngine.GameObject GunShoot::metalHitEffect
	GameObject_t1756533147 * ___metalHitEffect_7;
	// UnityEngine.GameObject GunShoot::sandHitEffect
	GameObject_t1756533147 * ___sandHitEffect_8;
	// UnityEngine.GameObject GunShoot::stoneHitEffect
	GameObject_t1756533147 * ___stoneHitEffect_9;
	// UnityEngine.GameObject GunShoot::waterLeakEffect
	GameObject_t1756533147 * ___waterLeakEffect_10;
	// UnityEngine.GameObject[] GunShoot::fleshHitEffects
	GameObjectU5BU5D_t3057952154* ___fleshHitEffects_11;
	// UnityEngine.GameObject GunShoot::woodHitEffect
	GameObject_t1756533147 * ___woodHitEffect_12;
	// System.Single GunShoot::nextFire
	float ___nextFire_13;
	// UnityEngine.Animator GunShoot::anim
	Animator_t69676727 * ___anim_14;
	// GunAim GunShoot::gunAim
	GunAim_t2119054011 * ___gunAim_15;

public:
	inline static int32_t get_offset_of_fireRate_2() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___fireRate_2)); }
	inline float get_fireRate_2() const { return ___fireRate_2; }
	inline float* get_address_of_fireRate_2() { return &___fireRate_2; }
	inline void set_fireRate_2(float value)
	{
		___fireRate_2 = value;
	}

	inline static int32_t get_offset_of_weaponRange_3() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___weaponRange_3)); }
	inline float get_weaponRange_3() const { return ___weaponRange_3; }
	inline float* get_address_of_weaponRange_3() { return &___weaponRange_3; }
	inline void set_weaponRange_3(float value)
	{
		___weaponRange_3 = value;
	}

	inline static int32_t get_offset_of_gunEnd_4() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___gunEnd_4)); }
	inline Transform_t3275118058 * get_gunEnd_4() const { return ___gunEnd_4; }
	inline Transform_t3275118058 ** get_address_of_gunEnd_4() { return &___gunEnd_4; }
	inline void set_gunEnd_4(Transform_t3275118058 * value)
	{
		___gunEnd_4 = value;
		Il2CppCodeGenWriteBarrier(&___gunEnd_4, value);
	}

	inline static int32_t get_offset_of_muzzleFlash_5() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___muzzleFlash_5)); }
	inline ParticleSystem_t3394631041 * get_muzzleFlash_5() const { return ___muzzleFlash_5; }
	inline ParticleSystem_t3394631041 ** get_address_of_muzzleFlash_5() { return &___muzzleFlash_5; }
	inline void set_muzzleFlash_5(ParticleSystem_t3394631041 * value)
	{
		___muzzleFlash_5 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlash_5, value);
	}

	inline static int32_t get_offset_of_cartridgeEjection_6() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___cartridgeEjection_6)); }
	inline ParticleSystem_t3394631041 * get_cartridgeEjection_6() const { return ___cartridgeEjection_6; }
	inline ParticleSystem_t3394631041 ** get_address_of_cartridgeEjection_6() { return &___cartridgeEjection_6; }
	inline void set_cartridgeEjection_6(ParticleSystem_t3394631041 * value)
	{
		___cartridgeEjection_6 = value;
		Il2CppCodeGenWriteBarrier(&___cartridgeEjection_6, value);
	}

	inline static int32_t get_offset_of_metalHitEffect_7() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___metalHitEffect_7)); }
	inline GameObject_t1756533147 * get_metalHitEffect_7() const { return ___metalHitEffect_7; }
	inline GameObject_t1756533147 ** get_address_of_metalHitEffect_7() { return &___metalHitEffect_7; }
	inline void set_metalHitEffect_7(GameObject_t1756533147 * value)
	{
		___metalHitEffect_7 = value;
		Il2CppCodeGenWriteBarrier(&___metalHitEffect_7, value);
	}

	inline static int32_t get_offset_of_sandHitEffect_8() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___sandHitEffect_8)); }
	inline GameObject_t1756533147 * get_sandHitEffect_8() const { return ___sandHitEffect_8; }
	inline GameObject_t1756533147 ** get_address_of_sandHitEffect_8() { return &___sandHitEffect_8; }
	inline void set_sandHitEffect_8(GameObject_t1756533147 * value)
	{
		___sandHitEffect_8 = value;
		Il2CppCodeGenWriteBarrier(&___sandHitEffect_8, value);
	}

	inline static int32_t get_offset_of_stoneHitEffect_9() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___stoneHitEffect_9)); }
	inline GameObject_t1756533147 * get_stoneHitEffect_9() const { return ___stoneHitEffect_9; }
	inline GameObject_t1756533147 ** get_address_of_stoneHitEffect_9() { return &___stoneHitEffect_9; }
	inline void set_stoneHitEffect_9(GameObject_t1756533147 * value)
	{
		___stoneHitEffect_9 = value;
		Il2CppCodeGenWriteBarrier(&___stoneHitEffect_9, value);
	}

	inline static int32_t get_offset_of_waterLeakEffect_10() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___waterLeakEffect_10)); }
	inline GameObject_t1756533147 * get_waterLeakEffect_10() const { return ___waterLeakEffect_10; }
	inline GameObject_t1756533147 ** get_address_of_waterLeakEffect_10() { return &___waterLeakEffect_10; }
	inline void set_waterLeakEffect_10(GameObject_t1756533147 * value)
	{
		___waterLeakEffect_10 = value;
		Il2CppCodeGenWriteBarrier(&___waterLeakEffect_10, value);
	}

	inline static int32_t get_offset_of_fleshHitEffects_11() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___fleshHitEffects_11)); }
	inline GameObjectU5BU5D_t3057952154* get_fleshHitEffects_11() const { return ___fleshHitEffects_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_fleshHitEffects_11() { return &___fleshHitEffects_11; }
	inline void set_fleshHitEffects_11(GameObjectU5BU5D_t3057952154* value)
	{
		___fleshHitEffects_11 = value;
		Il2CppCodeGenWriteBarrier(&___fleshHitEffects_11, value);
	}

	inline static int32_t get_offset_of_woodHitEffect_12() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___woodHitEffect_12)); }
	inline GameObject_t1756533147 * get_woodHitEffect_12() const { return ___woodHitEffect_12; }
	inline GameObject_t1756533147 ** get_address_of_woodHitEffect_12() { return &___woodHitEffect_12; }
	inline void set_woodHitEffect_12(GameObject_t1756533147 * value)
	{
		___woodHitEffect_12 = value;
		Il2CppCodeGenWriteBarrier(&___woodHitEffect_12, value);
	}

	inline static int32_t get_offset_of_nextFire_13() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___nextFire_13)); }
	inline float get_nextFire_13() const { return ___nextFire_13; }
	inline float* get_address_of_nextFire_13() { return &___nextFire_13; }
	inline void set_nextFire_13(float value)
	{
		___nextFire_13 = value;
	}

	inline static int32_t get_offset_of_anim_14() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___anim_14)); }
	inline Animator_t69676727 * get_anim_14() const { return ___anim_14; }
	inline Animator_t69676727 ** get_address_of_anim_14() { return &___anim_14; }
	inline void set_anim_14(Animator_t69676727 * value)
	{
		___anim_14 = value;
		Il2CppCodeGenWriteBarrier(&___anim_14, value);
	}

	inline static int32_t get_offset_of_gunAim_15() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845, ___gunAim_15)); }
	inline GunAim_t2119054011 * get_gunAim_15() const { return ___gunAim_15; }
	inline GunAim_t2119054011 ** get_address_of_gunAim_15() { return &___gunAim_15; }
	inline void set_gunAim_15(GunAim_t2119054011 * value)
	{
		___gunAim_15 = value;
		Il2CppCodeGenWriteBarrier(&___gunAim_15, value);
	}
};

struct GunShoot_t2702500845_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GunShoot::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_16() { return static_cast<int32_t>(offsetof(GunShoot_t2702500845_StaticFields, ___U3CU3Ef__switchU24map0_16)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_16() const { return ___U3CU3Ef__switchU24map0_16; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_16() { return &___U3CU3Ef__switchU24map0_16; }
	inline void set_U3CU3Ef__switchU24map0_16(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
