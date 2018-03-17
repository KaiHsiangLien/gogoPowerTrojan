#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Story
struct  Story_t2130679417  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button Story::confirmText
	Button_t2872111280 * ___confirmText_2;
	// UnityEngine.UI.Button Story::backText
	Button_t2872111280 * ___backText_3;

public:
	inline static int32_t get_offset_of_confirmText_2() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___confirmText_2)); }
	inline Button_t2872111280 * get_confirmText_2() const { return ___confirmText_2; }
	inline Button_t2872111280 ** get_address_of_confirmText_2() { return &___confirmText_2; }
	inline void set_confirmText_2(Button_t2872111280 * value)
	{
		___confirmText_2 = value;
		Il2CppCodeGenWriteBarrier(&___confirmText_2, value);
	}

	inline static int32_t get_offset_of_backText_3() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___backText_3)); }
	inline Button_t2872111280 * get_backText_3() const { return ___backText_3; }
	inline Button_t2872111280 ** get_address_of_backText_3() { return &___backText_3; }
	inline void set_backText_3(Button_t2872111280 * value)
	{
		___backText_3 = value;
		Il2CppCodeGenWriteBarrier(&___backText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
