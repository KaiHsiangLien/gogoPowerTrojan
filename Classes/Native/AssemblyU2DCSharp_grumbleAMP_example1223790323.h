#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_grumbleAMP_example_PlayState2583139227.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Font
struct Font_t4239498691;
// grumbleAMP
struct grumbleAMP_t1879180042;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// grumbleAMP_example
struct  grumbleAMP_example_t1223790323  : public MonoBehaviour_t1158329972
{
public:
	// System.Single grumbleAMP_example::globalCrossFadeTime
	float ___globalCrossFadeTime_2;
	// System.String grumbleAMP_example::globalCrossFadeTimeString
	String_t* ___globalCrossFadeTimeString_3;
	// System.Single grumbleAMP_example::defaultGlobalCrossFadeTime
	float ___defaultGlobalCrossFadeTime_4;
	// System.Single grumbleAMP_example::fadeInTime
	float ___fadeInTime_5;
	// System.String grumbleAMP_example::fadeInTimeString
	String_t* ___fadeInTimeString_6;
	// System.Single grumbleAMP_example::fadeOutTime
	float ___fadeOutTime_7;
	// System.String grumbleAMP_example::fadeOutTimeString
	String_t* ___fadeOutTimeString_8;
	// System.Single grumbleAMP_example::masterVolume
	float ___masterVolume_9;
	// System.String grumbleAMP_example::masterVolumeString
	String_t* ___masterVolumeString_10;
	// System.Single grumbleAMP_example::defaultMasterVolume
	float ___defaultMasterVolume_11;
	// System.Int32 grumbleAMP_example::activeSong
	int32_t ___activeSong_12;
	// System.Int32 grumbleAMP_example::activeLayer
	int32_t ___activeLayer_13;
	// UnityEngine.Texture2D grumbleAMP_example::activeTexture
	Texture2D_t3542995729 * ___activeTexture_14;
	// UnityEngine.Texture2D grumbleAMP_example::inactiveTexture
	Texture2D_t3542995729 * ___inactiveTexture_15;
	// UnityEngine.Texture2D grumbleAMP_example::whiteTexture
	Texture2D_t3542995729 * ___whiteTexture_16;
	// grumbleAMP_example/PlayState grumbleAMP_example::thePlayState
	int32_t ___thePlayState_17;
	// System.Single grumbleAMP_example::accumulatedDeltaTime
	float ___accumulatedDeltaTime_18;
	// System.Single grumbleAMP_example::alarmAt
	float ___alarmAt_19;
	// System.Boolean grumbleAMP_example::alarmSet
	bool ___alarmSet_20;
	// UnityEngine.Font grumbleAMP_example::computerFont
	Font_t4239498691 * ___computerFont_21;
	// UnityEngine.Texture2D grumbleAMP_example::boxTexture
	Texture2D_t3542995729 * ___boxTexture_22;
	// UnityEngine.Texture2D grumbleAMP_example::logo
	Texture2D_t3542995729 * ___logo_23;
	// grumbleAMP grumbleAMP_example::gA
	grumbleAMP_t1879180042 * ___gA_24;

public:
	inline static int32_t get_offset_of_globalCrossFadeTime_2() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___globalCrossFadeTime_2)); }
	inline float get_globalCrossFadeTime_2() const { return ___globalCrossFadeTime_2; }
	inline float* get_address_of_globalCrossFadeTime_2() { return &___globalCrossFadeTime_2; }
	inline void set_globalCrossFadeTime_2(float value)
	{
		___globalCrossFadeTime_2 = value;
	}

	inline static int32_t get_offset_of_globalCrossFadeTimeString_3() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___globalCrossFadeTimeString_3)); }
	inline String_t* get_globalCrossFadeTimeString_3() const { return ___globalCrossFadeTimeString_3; }
	inline String_t** get_address_of_globalCrossFadeTimeString_3() { return &___globalCrossFadeTimeString_3; }
	inline void set_globalCrossFadeTimeString_3(String_t* value)
	{
		___globalCrossFadeTimeString_3 = value;
		Il2CppCodeGenWriteBarrier(&___globalCrossFadeTimeString_3, value);
	}

	inline static int32_t get_offset_of_defaultGlobalCrossFadeTime_4() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___defaultGlobalCrossFadeTime_4)); }
	inline float get_defaultGlobalCrossFadeTime_4() const { return ___defaultGlobalCrossFadeTime_4; }
	inline float* get_address_of_defaultGlobalCrossFadeTime_4() { return &___defaultGlobalCrossFadeTime_4; }
	inline void set_defaultGlobalCrossFadeTime_4(float value)
	{
		___defaultGlobalCrossFadeTime_4 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_5() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___fadeInTime_5)); }
	inline float get_fadeInTime_5() const { return ___fadeInTime_5; }
	inline float* get_address_of_fadeInTime_5() { return &___fadeInTime_5; }
	inline void set_fadeInTime_5(float value)
	{
		___fadeInTime_5 = value;
	}

	inline static int32_t get_offset_of_fadeInTimeString_6() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___fadeInTimeString_6)); }
	inline String_t* get_fadeInTimeString_6() const { return ___fadeInTimeString_6; }
	inline String_t** get_address_of_fadeInTimeString_6() { return &___fadeInTimeString_6; }
	inline void set_fadeInTimeString_6(String_t* value)
	{
		___fadeInTimeString_6 = value;
		Il2CppCodeGenWriteBarrier(&___fadeInTimeString_6, value);
	}

	inline static int32_t get_offset_of_fadeOutTime_7() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___fadeOutTime_7)); }
	inline float get_fadeOutTime_7() const { return ___fadeOutTime_7; }
	inline float* get_address_of_fadeOutTime_7() { return &___fadeOutTime_7; }
	inline void set_fadeOutTime_7(float value)
	{
		___fadeOutTime_7 = value;
	}

	inline static int32_t get_offset_of_fadeOutTimeString_8() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___fadeOutTimeString_8)); }
	inline String_t* get_fadeOutTimeString_8() const { return ___fadeOutTimeString_8; }
	inline String_t** get_address_of_fadeOutTimeString_8() { return &___fadeOutTimeString_8; }
	inline void set_fadeOutTimeString_8(String_t* value)
	{
		___fadeOutTimeString_8 = value;
		Il2CppCodeGenWriteBarrier(&___fadeOutTimeString_8, value);
	}

	inline static int32_t get_offset_of_masterVolume_9() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___masterVolume_9)); }
	inline float get_masterVolume_9() const { return ___masterVolume_9; }
	inline float* get_address_of_masterVolume_9() { return &___masterVolume_9; }
	inline void set_masterVolume_9(float value)
	{
		___masterVolume_9 = value;
	}

	inline static int32_t get_offset_of_masterVolumeString_10() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___masterVolumeString_10)); }
	inline String_t* get_masterVolumeString_10() const { return ___masterVolumeString_10; }
	inline String_t** get_address_of_masterVolumeString_10() { return &___masterVolumeString_10; }
	inline void set_masterVolumeString_10(String_t* value)
	{
		___masterVolumeString_10 = value;
		Il2CppCodeGenWriteBarrier(&___masterVolumeString_10, value);
	}

	inline static int32_t get_offset_of_defaultMasterVolume_11() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___defaultMasterVolume_11)); }
	inline float get_defaultMasterVolume_11() const { return ___defaultMasterVolume_11; }
	inline float* get_address_of_defaultMasterVolume_11() { return &___defaultMasterVolume_11; }
	inline void set_defaultMasterVolume_11(float value)
	{
		___defaultMasterVolume_11 = value;
	}

	inline static int32_t get_offset_of_activeSong_12() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___activeSong_12)); }
	inline int32_t get_activeSong_12() const { return ___activeSong_12; }
	inline int32_t* get_address_of_activeSong_12() { return &___activeSong_12; }
	inline void set_activeSong_12(int32_t value)
	{
		___activeSong_12 = value;
	}

	inline static int32_t get_offset_of_activeLayer_13() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___activeLayer_13)); }
	inline int32_t get_activeLayer_13() const { return ___activeLayer_13; }
	inline int32_t* get_address_of_activeLayer_13() { return &___activeLayer_13; }
	inline void set_activeLayer_13(int32_t value)
	{
		___activeLayer_13 = value;
	}

	inline static int32_t get_offset_of_activeTexture_14() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___activeTexture_14)); }
	inline Texture2D_t3542995729 * get_activeTexture_14() const { return ___activeTexture_14; }
	inline Texture2D_t3542995729 ** get_address_of_activeTexture_14() { return &___activeTexture_14; }
	inline void set_activeTexture_14(Texture2D_t3542995729 * value)
	{
		___activeTexture_14 = value;
		Il2CppCodeGenWriteBarrier(&___activeTexture_14, value);
	}

	inline static int32_t get_offset_of_inactiveTexture_15() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___inactiveTexture_15)); }
	inline Texture2D_t3542995729 * get_inactiveTexture_15() const { return ___inactiveTexture_15; }
	inline Texture2D_t3542995729 ** get_address_of_inactiveTexture_15() { return &___inactiveTexture_15; }
	inline void set_inactiveTexture_15(Texture2D_t3542995729 * value)
	{
		___inactiveTexture_15 = value;
		Il2CppCodeGenWriteBarrier(&___inactiveTexture_15, value);
	}

	inline static int32_t get_offset_of_whiteTexture_16() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___whiteTexture_16)); }
	inline Texture2D_t3542995729 * get_whiteTexture_16() const { return ___whiteTexture_16; }
	inline Texture2D_t3542995729 ** get_address_of_whiteTexture_16() { return &___whiteTexture_16; }
	inline void set_whiteTexture_16(Texture2D_t3542995729 * value)
	{
		___whiteTexture_16 = value;
		Il2CppCodeGenWriteBarrier(&___whiteTexture_16, value);
	}

	inline static int32_t get_offset_of_thePlayState_17() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___thePlayState_17)); }
	inline int32_t get_thePlayState_17() const { return ___thePlayState_17; }
	inline int32_t* get_address_of_thePlayState_17() { return &___thePlayState_17; }
	inline void set_thePlayState_17(int32_t value)
	{
		___thePlayState_17 = value;
	}

	inline static int32_t get_offset_of_accumulatedDeltaTime_18() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___accumulatedDeltaTime_18)); }
	inline float get_accumulatedDeltaTime_18() const { return ___accumulatedDeltaTime_18; }
	inline float* get_address_of_accumulatedDeltaTime_18() { return &___accumulatedDeltaTime_18; }
	inline void set_accumulatedDeltaTime_18(float value)
	{
		___accumulatedDeltaTime_18 = value;
	}

	inline static int32_t get_offset_of_alarmAt_19() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___alarmAt_19)); }
	inline float get_alarmAt_19() const { return ___alarmAt_19; }
	inline float* get_address_of_alarmAt_19() { return &___alarmAt_19; }
	inline void set_alarmAt_19(float value)
	{
		___alarmAt_19 = value;
	}

	inline static int32_t get_offset_of_alarmSet_20() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___alarmSet_20)); }
	inline bool get_alarmSet_20() const { return ___alarmSet_20; }
	inline bool* get_address_of_alarmSet_20() { return &___alarmSet_20; }
	inline void set_alarmSet_20(bool value)
	{
		___alarmSet_20 = value;
	}

	inline static int32_t get_offset_of_computerFont_21() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___computerFont_21)); }
	inline Font_t4239498691 * get_computerFont_21() const { return ___computerFont_21; }
	inline Font_t4239498691 ** get_address_of_computerFont_21() { return &___computerFont_21; }
	inline void set_computerFont_21(Font_t4239498691 * value)
	{
		___computerFont_21 = value;
		Il2CppCodeGenWriteBarrier(&___computerFont_21, value);
	}

	inline static int32_t get_offset_of_boxTexture_22() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___boxTexture_22)); }
	inline Texture2D_t3542995729 * get_boxTexture_22() const { return ___boxTexture_22; }
	inline Texture2D_t3542995729 ** get_address_of_boxTexture_22() { return &___boxTexture_22; }
	inline void set_boxTexture_22(Texture2D_t3542995729 * value)
	{
		___boxTexture_22 = value;
		Il2CppCodeGenWriteBarrier(&___boxTexture_22, value);
	}

	inline static int32_t get_offset_of_logo_23() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___logo_23)); }
	inline Texture2D_t3542995729 * get_logo_23() const { return ___logo_23; }
	inline Texture2D_t3542995729 ** get_address_of_logo_23() { return &___logo_23; }
	inline void set_logo_23(Texture2D_t3542995729 * value)
	{
		___logo_23 = value;
		Il2CppCodeGenWriteBarrier(&___logo_23, value);
	}

	inline static int32_t get_offset_of_gA_24() { return static_cast<int32_t>(offsetof(grumbleAMP_example_t1223790323, ___gA_24)); }
	inline grumbleAMP_t1879180042 * get_gA_24() const { return ___gA_24; }
	inline grumbleAMP_t1879180042 ** get_address_of_gA_24() { return &___gA_24; }
	inline void set_gA_24(grumbleAMP_t1879180042 * value)
	{
		___gA_24 = value;
		Il2CppCodeGenWriteBarrier(&___gA_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
