#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ScrollList2406320089.h"

// JSONObject
struct JSONObject_t1971882247;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BuyCardScrollList
struct  BuyCardScrollList_t3183790095  : public ScrollList_t2406320089
{
public:
	// JSONObject BuyCardScrollList::cardPacks
	JSONObject_t1971882247 * ___cardPacks_6;

public:
	inline static int32_t get_offset_of_cardPacks_6() { return static_cast<int32_t>(offsetof(BuyCardScrollList_t3183790095, ___cardPacks_6)); }
	inline JSONObject_t1971882247 * get_cardPacks_6() const { return ___cardPacks_6; }
	inline JSONObject_t1971882247 ** get_address_of_cardPacks_6() { return &___cardPacks_6; }
	inline void set_cardPacks_6(JSONObject_t1971882247 * value)
	{
		___cardPacks_6 = value;
		Il2CppCodeGenWriteBarrier(&___cardPacks_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
