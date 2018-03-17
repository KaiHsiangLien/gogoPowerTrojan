#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicController
struct  MusicController_t4192593383  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] MusicController::musicList
	AudioClipU5BU5D_t2203355011* ___musicList_2;
	// UnityEngine.AudioSource MusicController::audioSource
	AudioSource_t1135106623 * ___audioSource_3;

public:
	inline static int32_t get_offset_of_musicList_2() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___musicList_2)); }
	inline AudioClipU5BU5D_t2203355011* get_musicList_2() const { return ___musicList_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_musicList_2() { return &___musicList_2; }
	inline void set_musicList_2(AudioClipU5BU5D_t2203355011* value)
	{
		___musicList_2 = value;
		Il2CppCodeGenWriteBarrier(&___musicList_2, value);
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
