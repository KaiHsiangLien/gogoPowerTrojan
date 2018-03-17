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

// NightmareOPController
struct  NightmareOPController_t1366591162  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject NightmareOPController::nightmareOpeningPlayer
	GameObject_t1756533147 * ___nightmareOpeningPlayer_2;
	// UnityEngine.GameObject NightmareOPController::UICanvas
	GameObject_t1756533147 * ___UICanvas_3;

public:
	inline static int32_t get_offset_of_nightmareOpeningPlayer_2() { return static_cast<int32_t>(offsetof(NightmareOPController_t1366591162, ___nightmareOpeningPlayer_2)); }
	inline GameObject_t1756533147 * get_nightmareOpeningPlayer_2() const { return ___nightmareOpeningPlayer_2; }
	inline GameObject_t1756533147 ** get_address_of_nightmareOpeningPlayer_2() { return &___nightmareOpeningPlayer_2; }
	inline void set_nightmareOpeningPlayer_2(GameObject_t1756533147 * value)
	{
		___nightmareOpeningPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___nightmareOpeningPlayer_2, value);
	}

	inline static int32_t get_offset_of_UICanvas_3() { return static_cast<int32_t>(offsetof(NightmareOPController_t1366591162, ___UICanvas_3)); }
	inline GameObject_t1756533147 * get_UICanvas_3() const { return ___UICanvas_3; }
	inline GameObject_t1756533147 ** get_address_of_UICanvas_3() { return &___UICanvas_3; }
	inline void set_UICanvas_3(GameObject_t1756533147 * value)
	{
		___UICanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___UICanvas_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
