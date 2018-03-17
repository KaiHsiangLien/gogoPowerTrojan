#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenShot
struct  ScreenShot_t3429867996  : public MonoBehaviour_t1158329972
{
public:
	// System.String ScreenShot::format
	String_t* ___format_2;

public:
	inline static int32_t get_offset_of_format_2() { return static_cast<int32_t>(offsetof(ScreenShot_t3429867996, ___format_2)); }
	inline String_t* get_format_2() const { return ___format_2; }
	inline String_t** get_address_of_format_2() { return &___format_2; }
	inline void set_format_2(String_t* value)
	{
		___format_2 = value;
		Il2CppCodeGenWriteBarrier(&___format_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
