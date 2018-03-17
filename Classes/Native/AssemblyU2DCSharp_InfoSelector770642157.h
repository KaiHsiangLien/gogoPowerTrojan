#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfoSelector
struct  InfoSelector_t770642157  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean InfoSelector::isNight
	bool ___isNight_2;
	// UnityEngine.UI.Image InfoSelector::Background
	Image_t2042527209 * ___Background_3;

public:
	inline static int32_t get_offset_of_isNight_2() { return static_cast<int32_t>(offsetof(InfoSelector_t770642157, ___isNight_2)); }
	inline bool get_isNight_2() const { return ___isNight_2; }
	inline bool* get_address_of_isNight_2() { return &___isNight_2; }
	inline void set_isNight_2(bool value)
	{
		___isNight_2 = value;
	}

	inline static int32_t get_offset_of_Background_3() { return static_cast<int32_t>(offsetof(InfoSelector_t770642157, ___Background_3)); }
	inline Image_t2042527209 * get_Background_3() const { return ___Background_3; }
	inline Image_t2042527209 ** get_address_of_Background_3() { return &___Background_3; }
	inline void set_Background_3(Image_t2042527209 * value)
	{
		___Background_3 = value;
		Il2CppCodeGenWriteBarrier(&___Background_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
