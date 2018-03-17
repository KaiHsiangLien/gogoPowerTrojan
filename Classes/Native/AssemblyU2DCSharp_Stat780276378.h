#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// AttributeBar
struct AttributeBar_t2574941547;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stat
struct  Stat_t780276378  : public Il2CppObject
{
public:
	// AttributeBar Stat::bar
	AttributeBar_t2574941547 * ___bar_0;
	// System.Single Stat::maxVal
	float ___maxVal_1;
	// System.Single Stat::currentVal
	float ___currentVal_2;

public:
	inline static int32_t get_offset_of_bar_0() { return static_cast<int32_t>(offsetof(Stat_t780276378, ___bar_0)); }
	inline AttributeBar_t2574941547 * get_bar_0() const { return ___bar_0; }
	inline AttributeBar_t2574941547 ** get_address_of_bar_0() { return &___bar_0; }
	inline void set_bar_0(AttributeBar_t2574941547 * value)
	{
		___bar_0 = value;
		Il2CppCodeGenWriteBarrier(&___bar_0, value);
	}

	inline static int32_t get_offset_of_maxVal_1() { return static_cast<int32_t>(offsetof(Stat_t780276378, ___maxVal_1)); }
	inline float get_maxVal_1() const { return ___maxVal_1; }
	inline float* get_address_of_maxVal_1() { return &___maxVal_1; }
	inline void set_maxVal_1(float value)
	{
		___maxVal_1 = value;
	}

	inline static int32_t get_offset_of_currentVal_2() { return static_cast<int32_t>(offsetof(Stat_t780276378, ___currentVal_2)); }
	inline float get_currentVal_2() const { return ___currentVal_2; }
	inline float* get_address_of_currentVal_2() { return &___currentVal_2; }
	inline void set_currentVal_2(float value)
	{
		___currentVal_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
