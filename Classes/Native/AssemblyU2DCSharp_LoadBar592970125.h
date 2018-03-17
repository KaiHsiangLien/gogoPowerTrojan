#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadBar
struct  LoadBar_t592970125  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform LoadBar::backGround
	RectTransform_t3349966182 * ___backGround_2;
	// System.Single LoadBar::progress
	float ___progress_3;
	// System.Single LoadBar::progressSpeed
	float ___progressSpeed_4;
	// System.Single LoadBar::maxProgressSpeed
	float ___maxProgressSpeed_5;
	// System.Single LoadBar::maxProgress
	float ___maxProgress_6;
	// System.Single LoadBar::progressThres
	float ___progressThres_7;

public:
	inline static int32_t get_offset_of_backGround_2() { return static_cast<int32_t>(offsetof(LoadBar_t592970125, ___backGround_2)); }
	inline RectTransform_t3349966182 * get_backGround_2() const { return ___backGround_2; }
	inline RectTransform_t3349966182 ** get_address_of_backGround_2() { return &___backGround_2; }
	inline void set_backGround_2(RectTransform_t3349966182 * value)
	{
		___backGround_2 = value;
		Il2CppCodeGenWriteBarrier(&___backGround_2, value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(LoadBar_t592970125, ___progress_3)); }
	inline float get_progress_3() const { return ___progress_3; }
	inline float* get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(float value)
	{
		___progress_3 = value;
	}

	inline static int32_t get_offset_of_progressSpeed_4() { return static_cast<int32_t>(offsetof(LoadBar_t592970125, ___progressSpeed_4)); }
	inline float get_progressSpeed_4() const { return ___progressSpeed_4; }
	inline float* get_address_of_progressSpeed_4() { return &___progressSpeed_4; }
	inline void set_progressSpeed_4(float value)
	{
		___progressSpeed_4 = value;
	}

	inline static int32_t get_offset_of_maxProgressSpeed_5() { return static_cast<int32_t>(offsetof(LoadBar_t592970125, ___maxProgressSpeed_5)); }
	inline float get_maxProgressSpeed_5() const { return ___maxProgressSpeed_5; }
	inline float* get_address_of_maxProgressSpeed_5() { return &___maxProgressSpeed_5; }
	inline void set_maxProgressSpeed_5(float value)
	{
		___maxProgressSpeed_5 = value;
	}

	inline static int32_t get_offset_of_maxProgress_6() { return static_cast<int32_t>(offsetof(LoadBar_t592970125, ___maxProgress_6)); }
	inline float get_maxProgress_6() const { return ___maxProgress_6; }
	inline float* get_address_of_maxProgress_6() { return &___maxProgress_6; }
	inline void set_maxProgress_6(float value)
	{
		___maxProgress_6 = value;
	}

	inline static int32_t get_offset_of_progressThres_7() { return static_cast<int32_t>(offsetof(LoadBar_t592970125, ___progressThres_7)); }
	inline float get_progressThres_7() const { return ___progressThres_7; }
	inline float* get_address_of_progressThres_7() { return &___progressThres_7; }
	inline void set_progressThres_7(float value)
	{
		___progressThres_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
