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

// ProgressDebug
struct  ProgressDebug_t2977331602  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ProgressDebug::progress
	int32_t ___progress_2;
	// System.Boolean ProgressDebug::debug
	bool ___debug_3;

public:
	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(ProgressDebug_t2977331602, ___progress_2)); }
	inline int32_t get_progress_2() const { return ___progress_2; }
	inline int32_t* get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(int32_t value)
	{
		___progress_2 = value;
	}

	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(ProgressDebug_t2977331602, ___debug_3)); }
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
