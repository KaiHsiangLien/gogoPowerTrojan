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

// Pickup
struct  Pickup_t726362880  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Pickup::spinSpeed
	int32_t ___spinSpeed_2;
	// System.Int32 Pickup::itemCategory
	int32_t ___itemCategory_3;

public:
	inline static int32_t get_offset_of_spinSpeed_2() { return static_cast<int32_t>(offsetof(Pickup_t726362880, ___spinSpeed_2)); }
	inline int32_t get_spinSpeed_2() const { return ___spinSpeed_2; }
	inline int32_t* get_address_of_spinSpeed_2() { return &___spinSpeed_2; }
	inline void set_spinSpeed_2(int32_t value)
	{
		___spinSpeed_2 = value;
	}

	inline static int32_t get_offset_of_itemCategory_3() { return static_cast<int32_t>(offsetof(Pickup_t726362880, ___itemCategory_3)); }
	inline int32_t get_itemCategory_3() const { return ___itemCategory_3; }
	inline int32_t* get_address_of_itemCategory_3() { return &___itemCategory_3; }
	inline void set_itemCategory_3(int32_t value)
	{
		___itemCategory_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
