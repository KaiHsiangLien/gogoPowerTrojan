#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Drop
struct  Drop_t2548131131  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Drop::mine
	GameObject_t1756533147 * ___mine_2;
	// UnityEngine.GameObject Drop::oil
	GameObject_t1756533147 * ___oil_3;
	// UnityEngine.GameObject Drop::glue
	GameObject_t1756533147 * ___glue_4;

public:
	inline static int32_t get_offset_of_mine_2() { return static_cast<int32_t>(offsetof(Drop_t2548131131, ___mine_2)); }
	inline GameObject_t1756533147 * get_mine_2() const { return ___mine_2; }
	inline GameObject_t1756533147 ** get_address_of_mine_2() { return &___mine_2; }
	inline void set_mine_2(GameObject_t1756533147 * value)
	{
		___mine_2 = value;
		Il2CppCodeGenWriteBarrier(&___mine_2, value);
	}

	inline static int32_t get_offset_of_oil_3() { return static_cast<int32_t>(offsetof(Drop_t2548131131, ___oil_3)); }
	inline GameObject_t1756533147 * get_oil_3() const { return ___oil_3; }
	inline GameObject_t1756533147 ** get_address_of_oil_3() { return &___oil_3; }
	inline void set_oil_3(GameObject_t1756533147 * value)
	{
		___oil_3 = value;
		Il2CppCodeGenWriteBarrier(&___oil_3, value);
	}

	inline static int32_t get_offset_of_glue_4() { return static_cast<int32_t>(offsetof(Drop_t2548131131, ___glue_4)); }
	inline GameObject_t1756533147 * get_glue_4() const { return ___glue_4; }
	inline GameObject_t1756533147 ** get_address_of_glue_4() { return &___glue_4; }
	inline void set_glue_4(GameObject_t1756533147 * value)
	{
		___glue_4 = value;
		Il2CppCodeGenWriteBarrier(&___glue_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
