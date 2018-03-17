#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// VideoPlayer
struct VideoPlayer_t2184999770;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadCompleteUI
struct  LoadCompleteUI_t3971955373  : public MonoBehaviour_t1158329972
{
public:
	// VideoPlayer LoadCompleteUI::startVideo
	VideoPlayer_t2184999770 * ___startVideo_2;

public:
	inline static int32_t get_offset_of_startVideo_2() { return static_cast<int32_t>(offsetof(LoadCompleteUI_t3971955373, ___startVideo_2)); }
	inline VideoPlayer_t2184999770 * get_startVideo_2() const { return ___startVideo_2; }
	inline VideoPlayer_t2184999770 ** get_address_of_startVideo_2() { return &___startVideo_2; }
	inline void set_startVideo_2(VideoPlayer_t2184999770 * value)
	{
		___startVideo_2 = value;
		Il2CppCodeGenWriteBarrier(&___startVideo_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
