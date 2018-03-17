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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuerySoundController
struct  QuerySoundController_t524343291  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] QuerySoundController::soundData
	AudioClipU5BU5D_t2203355011* ___soundData_2;

public:
	inline static int32_t get_offset_of_soundData_2() { return static_cast<int32_t>(offsetof(QuerySoundController_t524343291, ___soundData_2)); }
	inline AudioClipU5BU5D_t2203355011* get_soundData_2() const { return ___soundData_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_soundData_2() { return &___soundData_2; }
	inline void set_soundData_2(AudioClipU5BU5D_t2203355011* value)
	{
		___soundData_2 = value;
		Il2CppCodeGenWriteBarrier(&___soundData_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
