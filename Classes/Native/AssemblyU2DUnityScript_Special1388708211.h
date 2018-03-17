#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Special
struct  Special_t1388708211  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Special::allEnemy
	GameObjectU5BU5D_t3057952154* ___allEnemy_2;
	// UnityEngine.GameObject Special::shield
	GameObject_t1756533147 * ___shield_3;
	// UnityEngine.GameObject Special::thunder
	GameObject_t1756533147 * ___thunder_4;
	// UnityEngine.GameObject Special::damage
	GameObject_t1756533147 * ___damage_5;

public:
	inline static int32_t get_offset_of_allEnemy_2() { return static_cast<int32_t>(offsetof(Special_t1388708211, ___allEnemy_2)); }
	inline GameObjectU5BU5D_t3057952154* get_allEnemy_2() const { return ___allEnemy_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_allEnemy_2() { return &___allEnemy_2; }
	inline void set_allEnemy_2(GameObjectU5BU5D_t3057952154* value)
	{
		___allEnemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___allEnemy_2, value);
	}

	inline static int32_t get_offset_of_shield_3() { return static_cast<int32_t>(offsetof(Special_t1388708211, ___shield_3)); }
	inline GameObject_t1756533147 * get_shield_3() const { return ___shield_3; }
	inline GameObject_t1756533147 ** get_address_of_shield_3() { return &___shield_3; }
	inline void set_shield_3(GameObject_t1756533147 * value)
	{
		___shield_3 = value;
		Il2CppCodeGenWriteBarrier(&___shield_3, value);
	}

	inline static int32_t get_offset_of_thunder_4() { return static_cast<int32_t>(offsetof(Special_t1388708211, ___thunder_4)); }
	inline GameObject_t1756533147 * get_thunder_4() const { return ___thunder_4; }
	inline GameObject_t1756533147 ** get_address_of_thunder_4() { return &___thunder_4; }
	inline void set_thunder_4(GameObject_t1756533147 * value)
	{
		___thunder_4 = value;
		Il2CppCodeGenWriteBarrier(&___thunder_4, value);
	}

	inline static int32_t get_offset_of_damage_5() { return static_cast<int32_t>(offsetof(Special_t1388708211, ___damage_5)); }
	inline GameObject_t1756533147 * get_damage_5() const { return ___damage_5; }
	inline GameObject_t1756533147 ** get_address_of_damage_5() { return &___damage_5; }
	inline void set_damage_5(GameObject_t1756533147 * value)
	{
		___damage_5 = value;
		Il2CppCodeGenWriteBarrier(&___damage_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
