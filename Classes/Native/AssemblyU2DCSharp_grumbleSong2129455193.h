#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// grumbleSong
struct  grumbleSong_t2129455193  : public ScriptableObject_t1975622470
{
public:
	// System.String grumbleSong::textName
	String_t* ___textName_2;
	// UnityEngine.AudioClip[] grumbleSong::layer
	AudioClipU5BU5D_t2203355011* ___layer_3;
	// System.String[] grumbleSong::layerNames
	StringU5BU5D_t1642385972* ___layerNames_4;
	// System.Single[] grumbleSong::volumes
	SingleU5BU5D_t577127397* ___volumes_5;
	// System.Single grumbleSong::loopCrossfadeBy
	float ___loopCrossfadeBy_6;
	// System.Single grumbleSong::layerCrossfadeBy
	float ___layerCrossfadeBy_7;
	// System.Boolean grumbleSong::loop
	bool ___loop_8;
	// System.String[] grumbleSong::layerResourceNames
	StringU5BU5D_t1642385972* ___layerResourceNames_9;

public:
	inline static int32_t get_offset_of_textName_2() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___textName_2)); }
	inline String_t* get_textName_2() const { return ___textName_2; }
	inline String_t** get_address_of_textName_2() { return &___textName_2; }
	inline void set_textName_2(String_t* value)
	{
		___textName_2 = value;
		Il2CppCodeGenWriteBarrier(&___textName_2, value);
	}

	inline static int32_t get_offset_of_layer_3() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___layer_3)); }
	inline AudioClipU5BU5D_t2203355011* get_layer_3() const { return ___layer_3; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_layer_3() { return &___layer_3; }
	inline void set_layer_3(AudioClipU5BU5D_t2203355011* value)
	{
		___layer_3 = value;
		Il2CppCodeGenWriteBarrier(&___layer_3, value);
	}

	inline static int32_t get_offset_of_layerNames_4() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___layerNames_4)); }
	inline StringU5BU5D_t1642385972* get_layerNames_4() const { return ___layerNames_4; }
	inline StringU5BU5D_t1642385972** get_address_of_layerNames_4() { return &___layerNames_4; }
	inline void set_layerNames_4(StringU5BU5D_t1642385972* value)
	{
		___layerNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___layerNames_4, value);
	}

	inline static int32_t get_offset_of_volumes_5() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___volumes_5)); }
	inline SingleU5BU5D_t577127397* get_volumes_5() const { return ___volumes_5; }
	inline SingleU5BU5D_t577127397** get_address_of_volumes_5() { return &___volumes_5; }
	inline void set_volumes_5(SingleU5BU5D_t577127397* value)
	{
		___volumes_5 = value;
		Il2CppCodeGenWriteBarrier(&___volumes_5, value);
	}

	inline static int32_t get_offset_of_loopCrossfadeBy_6() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___loopCrossfadeBy_6)); }
	inline float get_loopCrossfadeBy_6() const { return ___loopCrossfadeBy_6; }
	inline float* get_address_of_loopCrossfadeBy_6() { return &___loopCrossfadeBy_6; }
	inline void set_loopCrossfadeBy_6(float value)
	{
		___loopCrossfadeBy_6 = value;
	}

	inline static int32_t get_offset_of_layerCrossfadeBy_7() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___layerCrossfadeBy_7)); }
	inline float get_layerCrossfadeBy_7() const { return ___layerCrossfadeBy_7; }
	inline float* get_address_of_layerCrossfadeBy_7() { return &___layerCrossfadeBy_7; }
	inline void set_layerCrossfadeBy_7(float value)
	{
		___layerCrossfadeBy_7 = value;
	}

	inline static int32_t get_offset_of_loop_8() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___loop_8)); }
	inline bool get_loop_8() const { return ___loop_8; }
	inline bool* get_address_of_loop_8() { return &___loop_8; }
	inline void set_loop_8(bool value)
	{
		___loop_8 = value;
	}

	inline static int32_t get_offset_of_layerResourceNames_9() { return static_cast<int32_t>(offsetof(grumbleSong_t2129455193, ___layerResourceNames_9)); }
	inline StringU5BU5D_t1642385972* get_layerResourceNames_9() const { return ___layerResourceNames_9; }
	inline StringU5BU5D_t1642385972** get_address_of_layerResourceNames_9() { return &___layerResourceNames_9; }
	inline void set_layerResourceNames_9(StringU5BU5D_t1642385972* value)
	{
		___layerResourceNames_9 = value;
		Il2CppCodeGenWriteBarrier(&___layerResourceNames_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
