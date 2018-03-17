#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// MediaPlayerCtrl
struct MediaPlayerCtrl_t1284484152;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpeningPlayer
struct  OpeningPlayer_t2088045749  : public MonoBehaviour_t1158329972
{
public:
	// System.Single OpeningPlayer::waitTime
	float ___waitTime_2;
	// System.Single OpeningPlayer::waitTimer
	float ___waitTimer_3;
	// UnityEngine.GameObject OpeningPlayer::openingCanvas
	GameObject_t1756533147 * ___openingCanvas_4;
	// UnityEngine.GameObject OpeningPlayer::musicController
	GameObject_t1756533147 * ___musicController_5;
	// UnityEngine.GameObject OpeningPlayer::generalCanvas
	GameObject_t1756533147 * ___generalCanvas_6;
	// MediaPlayerCtrl OpeningPlayer::mController
	MediaPlayerCtrl_t1284484152 * ___mController_7;
	// System.String OpeningPlayer::videoName
	String_t* ___videoName_8;
	// System.Boolean OpeningPlayer::lateSetFlag
	bool ___lateSetFlag_9;

public:
	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_waitTimer_3() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___waitTimer_3)); }
	inline float get_waitTimer_3() const { return ___waitTimer_3; }
	inline float* get_address_of_waitTimer_3() { return &___waitTimer_3; }
	inline void set_waitTimer_3(float value)
	{
		___waitTimer_3 = value;
	}

	inline static int32_t get_offset_of_openingCanvas_4() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___openingCanvas_4)); }
	inline GameObject_t1756533147 * get_openingCanvas_4() const { return ___openingCanvas_4; }
	inline GameObject_t1756533147 ** get_address_of_openingCanvas_4() { return &___openingCanvas_4; }
	inline void set_openingCanvas_4(GameObject_t1756533147 * value)
	{
		___openingCanvas_4 = value;
		Il2CppCodeGenWriteBarrier(&___openingCanvas_4, value);
	}

	inline static int32_t get_offset_of_musicController_5() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___musicController_5)); }
	inline GameObject_t1756533147 * get_musicController_5() const { return ___musicController_5; }
	inline GameObject_t1756533147 ** get_address_of_musicController_5() { return &___musicController_5; }
	inline void set_musicController_5(GameObject_t1756533147 * value)
	{
		___musicController_5 = value;
		Il2CppCodeGenWriteBarrier(&___musicController_5, value);
	}

	inline static int32_t get_offset_of_generalCanvas_6() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___generalCanvas_6)); }
	inline GameObject_t1756533147 * get_generalCanvas_6() const { return ___generalCanvas_6; }
	inline GameObject_t1756533147 ** get_address_of_generalCanvas_6() { return &___generalCanvas_6; }
	inline void set_generalCanvas_6(GameObject_t1756533147 * value)
	{
		___generalCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___generalCanvas_6, value);
	}

	inline static int32_t get_offset_of_mController_7() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___mController_7)); }
	inline MediaPlayerCtrl_t1284484152 * get_mController_7() const { return ___mController_7; }
	inline MediaPlayerCtrl_t1284484152 ** get_address_of_mController_7() { return &___mController_7; }
	inline void set_mController_7(MediaPlayerCtrl_t1284484152 * value)
	{
		___mController_7 = value;
		Il2CppCodeGenWriteBarrier(&___mController_7, value);
	}

	inline static int32_t get_offset_of_videoName_8() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___videoName_8)); }
	inline String_t* get_videoName_8() const { return ___videoName_8; }
	inline String_t** get_address_of_videoName_8() { return &___videoName_8; }
	inline void set_videoName_8(String_t* value)
	{
		___videoName_8 = value;
		Il2CppCodeGenWriteBarrier(&___videoName_8, value);
	}

	inline static int32_t get_offset_of_lateSetFlag_9() { return static_cast<int32_t>(offsetof(OpeningPlayer_t2088045749, ___lateSetFlag_9)); }
	inline bool get_lateSetFlag_9() const { return ___lateSetFlag_9; }
	inline bool* get_address_of_lateSetFlag_9() { return &___lateSetFlag_9; }
	inline void set_lateSetFlag_9(bool value)
	{
		___lateSetFlag_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
