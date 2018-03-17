#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AttributeBar
struct  AttributeBar_t2574941547  : public MonoBehaviour_t1158329972
{
public:
	// System.Single AttributeBar::fillAmount
	float ___fillAmount_2;
	// UnityEngine.UI.Image AttributeBar::content
	Image_t2042527209 * ___content_3;
	// UnityEngine.UI.Text AttributeBar::valueText
	Text_t356221433 * ___valueText_4;
	// System.Single AttributeBar::lerpSpeed
	float ___lerpSpeed_5;
	// System.Boolean AttributeBar::lerpColors
	bool ___lerpColors_6;
	// UnityEngine.Color AttributeBar::fullColor
	Color_t2020392075  ___fullColor_7;
	// UnityEngine.Color AttributeBar::lowColor
	Color_t2020392075  ___lowColor_8;
	// System.Single AttributeBar::<MaxValue>k__BackingField
	float ___U3CMaxValueU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_fillAmount_2() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___fillAmount_2)); }
	inline float get_fillAmount_2() const { return ___fillAmount_2; }
	inline float* get_address_of_fillAmount_2() { return &___fillAmount_2; }
	inline void set_fillAmount_2(float value)
	{
		___fillAmount_2 = value;
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___content_3)); }
	inline Image_t2042527209 * get_content_3() const { return ___content_3; }
	inline Image_t2042527209 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(Image_t2042527209 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_valueText_4() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___valueText_4)); }
	inline Text_t356221433 * get_valueText_4() const { return ___valueText_4; }
	inline Text_t356221433 ** get_address_of_valueText_4() { return &___valueText_4; }
	inline void set_valueText_4(Text_t356221433 * value)
	{
		___valueText_4 = value;
		Il2CppCodeGenWriteBarrier(&___valueText_4, value);
	}

	inline static int32_t get_offset_of_lerpSpeed_5() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___lerpSpeed_5)); }
	inline float get_lerpSpeed_5() const { return ___lerpSpeed_5; }
	inline float* get_address_of_lerpSpeed_5() { return &___lerpSpeed_5; }
	inline void set_lerpSpeed_5(float value)
	{
		___lerpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_lerpColors_6() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___lerpColors_6)); }
	inline bool get_lerpColors_6() const { return ___lerpColors_6; }
	inline bool* get_address_of_lerpColors_6() { return &___lerpColors_6; }
	inline void set_lerpColors_6(bool value)
	{
		___lerpColors_6 = value;
	}

	inline static int32_t get_offset_of_fullColor_7() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___fullColor_7)); }
	inline Color_t2020392075  get_fullColor_7() const { return ___fullColor_7; }
	inline Color_t2020392075 * get_address_of_fullColor_7() { return &___fullColor_7; }
	inline void set_fullColor_7(Color_t2020392075  value)
	{
		___fullColor_7 = value;
	}

	inline static int32_t get_offset_of_lowColor_8() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___lowColor_8)); }
	inline Color_t2020392075  get_lowColor_8() const { return ___lowColor_8; }
	inline Color_t2020392075 * get_address_of_lowColor_8() { return &___lowColor_8; }
	inline void set_lowColor_8(Color_t2020392075  value)
	{
		___lowColor_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxValueU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AttributeBar_t2574941547, ___U3CMaxValueU3Ek__BackingField_9)); }
	inline float get_U3CMaxValueU3Ek__BackingField_9() const { return ___U3CMaxValueU3Ek__BackingField_9; }
	inline float* get_address_of_U3CMaxValueU3Ek__BackingField_9() { return &___U3CMaxValueU3Ek__BackingField_9; }
	inline void set_U3CMaxValueU3Ek__BackingField_9(float value)
	{
		___U3CMaxValueU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
