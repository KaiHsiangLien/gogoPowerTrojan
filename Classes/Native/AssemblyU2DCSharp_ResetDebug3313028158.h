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

// ResetDebug
struct  ResetDebug_t3313028158  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ResetDebug::confirmPanel
	GameObject_t1756533147 * ___confirmPanel_2;

public:
	inline static int32_t get_offset_of_confirmPanel_2() { return static_cast<int32_t>(offsetof(ResetDebug_t3313028158, ___confirmPanel_2)); }
	inline GameObject_t1756533147 * get_confirmPanel_2() const { return ___confirmPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_confirmPanel_2() { return &___confirmPanel_2; }
	inline void set_confirmPanel_2(GameObject_t1756533147 * value)
	{
		___confirmPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___confirmPanel_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
