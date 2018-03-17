#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BGSelector
struct  BGSelector_t87622066  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite BGSelector::normalBG
	Sprite_t309593783 * ___normalBG_2;
	// UnityEngine.Sprite BGSelector::nightmareBG
	Sprite_t309593783 * ___nightmareBG_3;
	// System.Boolean BGSelector::isNight
	bool ___isNight_4;

public:
	inline static int32_t get_offset_of_normalBG_2() { return static_cast<int32_t>(offsetof(BGSelector_t87622066, ___normalBG_2)); }
	inline Sprite_t309593783 * get_normalBG_2() const { return ___normalBG_2; }
	inline Sprite_t309593783 ** get_address_of_normalBG_2() { return &___normalBG_2; }
	inline void set_normalBG_2(Sprite_t309593783 * value)
	{
		___normalBG_2 = value;
		Il2CppCodeGenWriteBarrier(&___normalBG_2, value);
	}

	inline static int32_t get_offset_of_nightmareBG_3() { return static_cast<int32_t>(offsetof(BGSelector_t87622066, ___nightmareBG_3)); }
	inline Sprite_t309593783 * get_nightmareBG_3() const { return ___nightmareBG_3; }
	inline Sprite_t309593783 ** get_address_of_nightmareBG_3() { return &___nightmareBG_3; }
	inline void set_nightmareBG_3(Sprite_t309593783 * value)
	{
		___nightmareBG_3 = value;
		Il2CppCodeGenWriteBarrier(&___nightmareBG_3, value);
	}

	inline static int32_t get_offset_of_isNight_4() { return static_cast<int32_t>(offsetof(BGSelector_t87622066, ___isNight_4)); }
	inline bool get_isNight_4() const { return ___isNight_4; }
	inline bool* get_address_of_isNight_4() { return &___isNight_4; }
	inline void set_isNight_4(bool value)
	{
		___isNight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
