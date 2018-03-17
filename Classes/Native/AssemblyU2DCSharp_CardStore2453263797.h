#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardStore
struct  CardStore_t2453263797  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text CardStore::totalCoins
	Text_t356221433 * ___totalCoins_2;
	// UnityEngine.Transform CardStore::firstContentPanel
	Transform_t3275118058 * ___firstContentPanel_3;

public:
	inline static int32_t get_offset_of_totalCoins_2() { return static_cast<int32_t>(offsetof(CardStore_t2453263797, ___totalCoins_2)); }
	inline Text_t356221433 * get_totalCoins_2() const { return ___totalCoins_2; }
	inline Text_t356221433 ** get_address_of_totalCoins_2() { return &___totalCoins_2; }
	inline void set_totalCoins_2(Text_t356221433 * value)
	{
		___totalCoins_2 = value;
		Il2CppCodeGenWriteBarrier(&___totalCoins_2, value);
	}

	inline static int32_t get_offset_of_firstContentPanel_3() { return static_cast<int32_t>(offsetof(CardStore_t2453263797, ___firstContentPanel_3)); }
	inline Transform_t3275118058 * get_firstContentPanel_3() const { return ___firstContentPanel_3; }
	inline Transform_t3275118058 ** get_address_of_firstContentPanel_3() { return &___firstContentPanel_3; }
	inline void set_firstContentPanel_3(Transform_t3275118058 * value)
	{
		___firstContentPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___firstContentPanel_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
