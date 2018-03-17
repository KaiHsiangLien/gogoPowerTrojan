#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoneyDebug
struct  MoneyDebug_t2901726687  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 MoneyDebug::coins
	int32_t ___coins_2;
	// System.Boolean MoneyDebug::debug
	bool ___debug_3;

public:
	inline static int32_t get_offset_of_coins_2() { return static_cast<int32_t>(offsetof(MoneyDebug_t2901726687, ___coins_2)); }
	inline int32_t get_coins_2() const { return ___coins_2; }
	inline int32_t* get_address_of_coins_2() { return &___coins_2; }
	inline void set_coins_2(int32_t value)
	{
		___coins_2 = value;
	}

	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(MoneyDebug_t2901726687, ___debug_3)); }
	inline bool get_debug_3() const { return ___debug_3; }
	inline bool* get_address_of_debug_3() { return &___debug_3; }
	inline void set_debug_3(bool value)
	{
		___debug_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
