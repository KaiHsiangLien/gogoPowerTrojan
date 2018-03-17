#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialOnComplete
struct  TutorialOnComplete_t3512804976  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource TutorialOnComplete::musicController
	AudioSource_t1135106623 * ___musicController_2;
	// UnityEngine.GameObject TutorialOnComplete::PlayerCanvas
	GameObject_t1756533147 * ___PlayerCanvas_3;

public:
	inline static int32_t get_offset_of_musicController_2() { return static_cast<int32_t>(offsetof(TutorialOnComplete_t3512804976, ___musicController_2)); }
	inline AudioSource_t1135106623 * get_musicController_2() const { return ___musicController_2; }
	inline AudioSource_t1135106623 ** get_address_of_musicController_2() { return &___musicController_2; }
	inline void set_musicController_2(AudioSource_t1135106623 * value)
	{
		___musicController_2 = value;
		Il2CppCodeGenWriteBarrier(&___musicController_2, value);
	}

	inline static int32_t get_offset_of_PlayerCanvas_3() { return static_cast<int32_t>(offsetof(TutorialOnComplete_t3512804976, ___PlayerCanvas_3)); }
	inline GameObject_t1756533147 * get_PlayerCanvas_3() const { return ___PlayerCanvas_3; }
	inline GameObject_t1756533147 ** get_address_of_PlayerCanvas_3() { return &___PlayerCanvas_3; }
	inline void set_PlayerCanvas_3(GameObject_t1756533147 * value)
	{
		___PlayerCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerCanvas_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
