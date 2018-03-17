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

// ShopScrollList
struct  ShopScrollList_t1499868693  : public ScrollList_t2406320089
{
public:
	// JSONObject ShopScrollList::cards
	JSONObject_t1971882247 * ___cards_6;

public:
	inline static int32_t get_offset_of_cards_6() { return static_cast<int32_t>(offsetof(ShopScrollList_t1499868693, ___cards_6)); }
	inline JSONObject_t1971882247 * get_cards_6() const { return ___cards_6; }
	inline JSONObject_t1971882247 ** get_address_of_cards_6() { return &___cards_6; }
	inline void set_cards_6(JSONObject_t1971882247 * value)
	{
		___cards_6 = value;
		Il2CppCodeGenWriteBarrier(&___cards_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
