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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerTimer
struct  PlayerTimer_t1292066730  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text PlayerTimer::timerText
	Text_t356221433 * ___timerText_2;
	// UnityEngine.UI.Image PlayerTimer::preTimerImage
	Image_t2042527209 * ___preTimerImage_3;
	// UnityEngine.Sprite[] PlayerTimer::preTimersprites
	SpriteU5BU5D_t3359083662* ___preTimersprites_4;
	// System.Single PlayerTimer::startTime
	float ___startTime_5;
	// System.Single PlayerTimer::departTime
	float ___departTime_6;
	// System.String PlayerTimer::totalMinute
	String_t* ___totalMinute_7;
	// System.String PlayerTimer::totalSecond
	String_t* ___totalSecond_8;
	// System.String PlayerTimer::totalMiliSecond
	String_t* ___totalMiliSecond_9;
	// System.Int32 PlayerTimer::testTime
	int32_t ___testTime_10;
	// System.Boolean PlayerTimer::finished
	bool ___finished_11;
	// System.Boolean PlayerTimer::canStartRacing
	bool ___canStartRacing_12;

public:
	inline static int32_t get_offset_of_timerText_2() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___timerText_2)); }
	inline Text_t356221433 * get_timerText_2() const { return ___timerText_2; }
	inline Text_t356221433 ** get_address_of_timerText_2() { return &___timerText_2; }
	inline void set_timerText_2(Text_t356221433 * value)
	{
		___timerText_2 = value;
		Il2CppCodeGenWriteBarrier(&___timerText_2, value);
	}

	inline static int32_t get_offset_of_preTimerImage_3() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___preTimerImage_3)); }
	inline Image_t2042527209 * get_preTimerImage_3() const { return ___preTimerImage_3; }
	inline Image_t2042527209 ** get_address_of_preTimerImage_3() { return &___preTimerImage_3; }
	inline void set_preTimerImage_3(Image_t2042527209 * value)
	{
		___preTimerImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___preTimerImage_3, value);
	}

	inline static int32_t get_offset_of_preTimersprites_4() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___preTimersprites_4)); }
	inline SpriteU5BU5D_t3359083662* get_preTimersprites_4() const { return ___preTimersprites_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_preTimersprites_4() { return &___preTimersprites_4; }
	inline void set_preTimersprites_4(SpriteU5BU5D_t3359083662* value)
	{
		___preTimersprites_4 = value;
		Il2CppCodeGenWriteBarrier(&___preTimersprites_4, value);
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}

	inline static int32_t get_offset_of_departTime_6() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___departTime_6)); }
	inline float get_departTime_6() const { return ___departTime_6; }
	inline float* get_address_of_departTime_6() { return &___departTime_6; }
	inline void set_departTime_6(float value)
	{
		___departTime_6 = value;
	}

	inline static int32_t get_offset_of_totalMinute_7() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___totalMinute_7)); }
	inline String_t* get_totalMinute_7() const { return ___totalMinute_7; }
	inline String_t** get_address_of_totalMinute_7() { return &___totalMinute_7; }
	inline void set_totalMinute_7(String_t* value)
	{
		___totalMinute_7 = value;
		Il2CppCodeGenWriteBarrier(&___totalMinute_7, value);
	}

	inline static int32_t get_offset_of_totalSecond_8() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___totalSecond_8)); }
	inline String_t* get_totalSecond_8() const { return ___totalSecond_8; }
	inline String_t** get_address_of_totalSecond_8() { return &___totalSecond_8; }
	inline void set_totalSecond_8(String_t* value)
	{
		___totalSecond_8 = value;
		Il2CppCodeGenWriteBarrier(&___totalSecond_8, value);
	}

	inline static int32_t get_offset_of_totalMiliSecond_9() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___totalMiliSecond_9)); }
	inline String_t* get_totalMiliSecond_9() const { return ___totalMiliSecond_9; }
	inline String_t** get_address_of_totalMiliSecond_9() { return &___totalMiliSecond_9; }
	inline void set_totalMiliSecond_9(String_t* value)
	{
		___totalMiliSecond_9 = value;
		Il2CppCodeGenWriteBarrier(&___totalMiliSecond_9, value);
	}

	inline static int32_t get_offset_of_testTime_10() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___testTime_10)); }
	inline int32_t get_testTime_10() const { return ___testTime_10; }
	inline int32_t* get_address_of_testTime_10() { return &___testTime_10; }
	inline void set_testTime_10(int32_t value)
	{
		___testTime_10 = value;
	}

	inline static int32_t get_offset_of_finished_11() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___finished_11)); }
	inline bool get_finished_11() const { return ___finished_11; }
	inline bool* get_address_of_finished_11() { return &___finished_11; }
	inline void set_finished_11(bool value)
	{
		___finished_11 = value;
	}

	inline static int32_t get_offset_of_canStartRacing_12() { return static_cast<int32_t>(offsetof(PlayerTimer_t1292066730, ___canStartRacing_12)); }
	inline bool get_canStartRacing_12() const { return ___canStartRacing_12; }
	inline bool* get_address_of_canStartRacing_12() { return &___canStartRacing_12; }
	inline void set_canStartRacing_12(bool value)
	{
		___canStartRacing_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
