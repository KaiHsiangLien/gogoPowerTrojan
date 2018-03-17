#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExpBar
struct  ExpBar_t1667744316  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ExpBar::debugExp
	float ___debugExp_2;
	// System.Single ExpBar::pointsToGain
	float ___pointsToGain_3;
	// System.Single ExpBar::speed
	float ___speed_4;
	// System.Single ExpBar::totalTime
	float ___totalTime_5;
	// System.Single ExpBar::maxWidth
	float ___maxWidth_6;
	// System.Boolean ExpBar::isFinished
	bool ___isFinished_7;
	// System.Single ExpBar::accExp
	float ___accExp_8;
	// System.Boolean ExpBar::setProgressIsOver
	bool ___setProgressIsOver_9;
	// UnityEngine.UI.Button[] ExpBar::btns
	ButtonU5BU5D_t3071100561* ___btns_10;
	// UnityEngine.UI.Text ExpBar::description
	Text_t356221433 * ___description_11;

public:
	inline static int32_t get_offset_of_debugExp_2() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___debugExp_2)); }
	inline float get_debugExp_2() const { return ___debugExp_2; }
	inline float* get_address_of_debugExp_2() { return &___debugExp_2; }
	inline void set_debugExp_2(float value)
	{
		___debugExp_2 = value;
	}

	inline static int32_t get_offset_of_pointsToGain_3() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___pointsToGain_3)); }
	inline float get_pointsToGain_3() const { return ___pointsToGain_3; }
	inline float* get_address_of_pointsToGain_3() { return &___pointsToGain_3; }
	inline void set_pointsToGain_3(float value)
	{
		___pointsToGain_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_totalTime_5() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___totalTime_5)); }
	inline float get_totalTime_5() const { return ___totalTime_5; }
	inline float* get_address_of_totalTime_5() { return &___totalTime_5; }
	inline void set_totalTime_5(float value)
	{
		___totalTime_5 = value;
	}

	inline static int32_t get_offset_of_maxWidth_6() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___maxWidth_6)); }
	inline float get_maxWidth_6() const { return ___maxWidth_6; }
	inline float* get_address_of_maxWidth_6() { return &___maxWidth_6; }
	inline void set_maxWidth_6(float value)
	{
		___maxWidth_6 = value;
	}

	inline static int32_t get_offset_of_isFinished_7() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___isFinished_7)); }
	inline bool get_isFinished_7() const { return ___isFinished_7; }
	inline bool* get_address_of_isFinished_7() { return &___isFinished_7; }
	inline void set_isFinished_7(bool value)
	{
		___isFinished_7 = value;
	}

	inline static int32_t get_offset_of_accExp_8() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___accExp_8)); }
	inline float get_accExp_8() const { return ___accExp_8; }
	inline float* get_address_of_accExp_8() { return &___accExp_8; }
	inline void set_accExp_8(float value)
	{
		___accExp_8 = value;
	}

	inline static int32_t get_offset_of_setProgressIsOver_9() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___setProgressIsOver_9)); }
	inline bool get_setProgressIsOver_9() const { return ___setProgressIsOver_9; }
	inline bool* get_address_of_setProgressIsOver_9() { return &___setProgressIsOver_9; }
	inline void set_setProgressIsOver_9(bool value)
	{
		___setProgressIsOver_9 = value;
	}

	inline static int32_t get_offset_of_btns_10() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___btns_10)); }
	inline ButtonU5BU5D_t3071100561* get_btns_10() const { return ___btns_10; }
	inline ButtonU5BU5D_t3071100561** get_address_of_btns_10() { return &___btns_10; }
	inline void set_btns_10(ButtonU5BU5D_t3071100561* value)
	{
		___btns_10 = value;
		Il2CppCodeGenWriteBarrier(&___btns_10, value);
	}

	inline static int32_t get_offset_of_description_11() { return static_cast<int32_t>(offsetof(ExpBar_t1667744316, ___description_11)); }
	inline Text_t356221433 * get_description_11() const { return ___description_11; }
	inline Text_t356221433 ** get_address_of_description_11() { return &___description_11; }
	inline void set_description_11(Text_t356221433 * value)
	{
		___description_11 = value;
		Il2CppCodeGenWriteBarrier(&___description_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
