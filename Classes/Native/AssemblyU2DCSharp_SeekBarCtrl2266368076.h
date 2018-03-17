#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// MediaPlayerCtrl
struct MediaPlayerCtrl_t1284484152;
// UnityEngine.UI.Slider
struct Slider_t297367283;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SeekBarCtrl
struct  SeekBarCtrl_t2266368076  : public MonoBehaviour_t1158329972
{
public:
	// MediaPlayerCtrl SeekBarCtrl::m_srcVideo
	MediaPlayerCtrl_t1284484152 * ___m_srcVideo_2;
	// UnityEngine.UI.Slider SeekBarCtrl::m_srcSlider
	Slider_t297367283 * ___m_srcSlider_3;
	// System.Single SeekBarCtrl::m_fDragTime
	float ___m_fDragTime_4;
	// System.Boolean SeekBarCtrl::m_bActiveDrag
	bool ___m_bActiveDrag_5;
	// System.Boolean SeekBarCtrl::m_bUpdate
	bool ___m_bUpdate_6;
	// System.Single SeekBarCtrl::m_fDeltaTime
	float ___m_fDeltaTime_7;
	// System.Single SeekBarCtrl::m_fLastValue
	float ___m_fLastValue_8;
	// System.Single SeekBarCtrl::m_fLastSetValue
	float ___m_fLastSetValue_9;

public:
	inline static int32_t get_offset_of_m_srcVideo_2() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_srcVideo_2)); }
	inline MediaPlayerCtrl_t1284484152 * get_m_srcVideo_2() const { return ___m_srcVideo_2; }
	inline MediaPlayerCtrl_t1284484152 ** get_address_of_m_srcVideo_2() { return &___m_srcVideo_2; }
	inline void set_m_srcVideo_2(MediaPlayerCtrl_t1284484152 * value)
	{
		___m_srcVideo_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_srcVideo_2, value);
	}

	inline static int32_t get_offset_of_m_srcSlider_3() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_srcSlider_3)); }
	inline Slider_t297367283 * get_m_srcSlider_3() const { return ___m_srcSlider_3; }
	inline Slider_t297367283 ** get_address_of_m_srcSlider_3() { return &___m_srcSlider_3; }
	inline void set_m_srcSlider_3(Slider_t297367283 * value)
	{
		___m_srcSlider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_srcSlider_3, value);
	}

	inline static int32_t get_offset_of_m_fDragTime_4() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_fDragTime_4)); }
	inline float get_m_fDragTime_4() const { return ___m_fDragTime_4; }
	inline float* get_address_of_m_fDragTime_4() { return &___m_fDragTime_4; }
	inline void set_m_fDragTime_4(float value)
	{
		___m_fDragTime_4 = value;
	}

	inline static int32_t get_offset_of_m_bActiveDrag_5() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_bActiveDrag_5)); }
	inline bool get_m_bActiveDrag_5() const { return ___m_bActiveDrag_5; }
	inline bool* get_address_of_m_bActiveDrag_5() { return &___m_bActiveDrag_5; }
	inline void set_m_bActiveDrag_5(bool value)
	{
		___m_bActiveDrag_5 = value;
	}

	inline static int32_t get_offset_of_m_bUpdate_6() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_bUpdate_6)); }
	inline bool get_m_bUpdate_6() const { return ___m_bUpdate_6; }
	inline bool* get_address_of_m_bUpdate_6() { return &___m_bUpdate_6; }
	inline void set_m_bUpdate_6(bool value)
	{
		___m_bUpdate_6 = value;
	}

	inline static int32_t get_offset_of_m_fDeltaTime_7() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_fDeltaTime_7)); }
	inline float get_m_fDeltaTime_7() const { return ___m_fDeltaTime_7; }
	inline float* get_address_of_m_fDeltaTime_7() { return &___m_fDeltaTime_7; }
	inline void set_m_fDeltaTime_7(float value)
	{
		___m_fDeltaTime_7 = value;
	}

	inline static int32_t get_offset_of_m_fLastValue_8() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_fLastValue_8)); }
	inline float get_m_fLastValue_8() const { return ___m_fLastValue_8; }
	inline float* get_address_of_m_fLastValue_8() { return &___m_fLastValue_8; }
	inline void set_m_fLastValue_8(float value)
	{
		___m_fLastValue_8 = value;
	}

	inline static int32_t get_offset_of_m_fLastSetValue_9() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t2266368076, ___m_fLastSetValue_9)); }
	inline float get_m_fLastSetValue_9() const { return ___m_fLastSetValue_9; }
	inline float* get_address_of_m_fLastSetValue_9() { return &___m_fLastSetValue_9; }
	inline void set_m_fLastSetValue_9(float value)
	{
		___m_fLastSetValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
