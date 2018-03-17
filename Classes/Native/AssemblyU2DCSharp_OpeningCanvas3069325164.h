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
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpeningCanvas
struct  OpeningCanvas_t3069325164  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean OpeningCanvas::isEnding
	bool ___isEnding_2;
	// System.Boolean OpeningCanvas::clickable
	bool ___clickable_3;
	// UnityEngine.UI.Text OpeningCanvas::clickText
	Text_t356221433 * ___clickText_4;
	// UnityEngine.UI.Image OpeningCanvas::backGround
	Image_t2042527209 * ___backGround_5;
	// UnityEngine.UI.Image OpeningCanvas::title
	Image_t2042527209 * ___title_6;
	// System.Single OpeningCanvas::renderTime
	float ___renderTime_7;
	// System.Single OpeningCanvas::textTime
	float ___textTime_8;
	// System.String OpeningCanvas::nextSceneName
	String_t* ___nextSceneName_9;

public:
	inline static int32_t get_offset_of_isEnding_2() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___isEnding_2)); }
	inline bool get_isEnding_2() const { return ___isEnding_2; }
	inline bool* get_address_of_isEnding_2() { return &___isEnding_2; }
	inline void set_isEnding_2(bool value)
	{
		___isEnding_2 = value;
	}

	inline static int32_t get_offset_of_clickable_3() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___clickable_3)); }
	inline bool get_clickable_3() const { return ___clickable_3; }
	inline bool* get_address_of_clickable_3() { return &___clickable_3; }
	inline void set_clickable_3(bool value)
	{
		___clickable_3 = value;
	}

	inline static int32_t get_offset_of_clickText_4() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___clickText_4)); }
	inline Text_t356221433 * get_clickText_4() const { return ___clickText_4; }
	inline Text_t356221433 ** get_address_of_clickText_4() { return &___clickText_4; }
	inline void set_clickText_4(Text_t356221433 * value)
	{
		___clickText_4 = value;
		Il2CppCodeGenWriteBarrier(&___clickText_4, value);
	}

	inline static int32_t get_offset_of_backGround_5() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___backGround_5)); }
	inline Image_t2042527209 * get_backGround_5() const { return ___backGround_5; }
	inline Image_t2042527209 ** get_address_of_backGround_5() { return &___backGround_5; }
	inline void set_backGround_5(Image_t2042527209 * value)
	{
		___backGround_5 = value;
		Il2CppCodeGenWriteBarrier(&___backGround_5, value);
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___title_6)); }
	inline Image_t2042527209 * get_title_6() const { return ___title_6; }
	inline Image_t2042527209 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(Image_t2042527209 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_renderTime_7() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___renderTime_7)); }
	inline float get_renderTime_7() const { return ___renderTime_7; }
	inline float* get_address_of_renderTime_7() { return &___renderTime_7; }
	inline void set_renderTime_7(float value)
	{
		___renderTime_7 = value;
	}

	inline static int32_t get_offset_of_textTime_8() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___textTime_8)); }
	inline float get_textTime_8() const { return ___textTime_8; }
	inline float* get_address_of_textTime_8() { return &___textTime_8; }
	inline void set_textTime_8(float value)
	{
		___textTime_8 = value;
	}

	inline static int32_t get_offset_of_nextSceneName_9() { return static_cast<int32_t>(offsetof(OpeningCanvas_t3069325164, ___nextSceneName_9)); }
	inline String_t* get_nextSceneName_9() const { return ___nextSceneName_9; }
	inline String_t** get_address_of_nextSceneName_9() { return &___nextSceneName_9; }
	inline void set_nextSceneName_9(String_t* value)
	{
		___nextSceneName_9 = value;
		Il2CppCodeGenWriteBarrier(&___nextSceneName_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
