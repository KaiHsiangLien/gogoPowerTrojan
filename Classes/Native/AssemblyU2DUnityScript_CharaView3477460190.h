#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityScript.Lang.Array
struct Array_t1396575355;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharaView
struct  CharaView_t3477460190  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CharaView::roteSpeed
	float ___roteSpeed_2;
	// System.Single CharaView::animationSpeed
	float ___animationSpeed_3;
	// System.UInt32 CharaView::animationCount
	uint32_t ___animationCount_4;
	// UnityScript.Lang.Array CharaView::animationList
	Array_t1396575355 * ___animationList_5;

public:
	inline static int32_t get_offset_of_roteSpeed_2() { return static_cast<int32_t>(offsetof(CharaView_t3477460190, ___roteSpeed_2)); }
	inline float get_roteSpeed_2() const { return ___roteSpeed_2; }
	inline float* get_address_of_roteSpeed_2() { return &___roteSpeed_2; }
	inline void set_roteSpeed_2(float value)
	{
		___roteSpeed_2 = value;
	}

	inline static int32_t get_offset_of_animationSpeed_3() { return static_cast<int32_t>(offsetof(CharaView_t3477460190, ___animationSpeed_3)); }
	inline float get_animationSpeed_3() const { return ___animationSpeed_3; }
	inline float* get_address_of_animationSpeed_3() { return &___animationSpeed_3; }
	inline void set_animationSpeed_3(float value)
	{
		___animationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_animationCount_4() { return static_cast<int32_t>(offsetof(CharaView_t3477460190, ___animationCount_4)); }
	inline uint32_t get_animationCount_4() const { return ___animationCount_4; }
	inline uint32_t* get_address_of_animationCount_4() { return &___animationCount_4; }
	inline void set_animationCount_4(uint32_t value)
	{
		___animationCount_4 = value;
	}

	inline static int32_t get_offset_of_animationList_5() { return static_cast<int32_t>(offsetof(CharaView_t3477460190, ___animationList_5)); }
	inline Array_t1396575355 * get_animationList_5() const { return ___animationList_5; }
	inline Array_t1396575355 ** get_address_of_animationList_5() { return &___animationList_5; }
	inline void set_animationList_5(Array_t1396575355 * value)
	{
		___animationList_5 = value;
		Il2CppCodeGenWriteBarrier(&___animationList_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
