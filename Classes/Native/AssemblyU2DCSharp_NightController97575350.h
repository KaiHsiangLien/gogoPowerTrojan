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

// NightController
struct  NightController_t97575350  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite NightController::nightSprite
	Sprite_t309593783 * ___nightSprite_2;
	// UnityEngine.Sprite NightController::daySprite
	Sprite_t309593783 * ___daySprite_3;

public:
	inline static int32_t get_offset_of_nightSprite_2() { return static_cast<int32_t>(offsetof(NightController_t97575350, ___nightSprite_2)); }
	inline Sprite_t309593783 * get_nightSprite_2() const { return ___nightSprite_2; }
	inline Sprite_t309593783 ** get_address_of_nightSprite_2() { return &___nightSprite_2; }
	inline void set_nightSprite_2(Sprite_t309593783 * value)
	{
		___nightSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___nightSprite_2, value);
	}

	inline static int32_t get_offset_of_daySprite_3() { return static_cast<int32_t>(offsetof(NightController_t97575350, ___daySprite_3)); }
	inline Sprite_t309593783 * get_daySprite_3() const { return ___daySprite_3; }
	inline Sprite_t309593783 ** get_address_of_daySprite_3() { return &___daySprite_3; }
	inline void set_daySprite_3(Sprite_t309593783 * value)
	{
		___daySprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___daySprite_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
