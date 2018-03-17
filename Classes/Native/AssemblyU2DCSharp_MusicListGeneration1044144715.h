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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicListGeneration
struct  MusicListGeneration_t1044144715  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform MusicListGeneration::content
	RectTransform_t3349966182 * ___content_2;
	// UnityEngine.GameObject MusicListGeneration::buttonPrefab
	GameObject_t1756533147 * ___buttonPrefab_3;
	// UnityEngine.AudioClip[] MusicListGeneration::musicList
	AudioClipU5BU5D_t2203355011* ___musicList_4;
	// UnityEngine.AudioSource MusicListGeneration::audioSource
	AudioSource_t1135106623 * ___audioSource_5;
	// System.String[] MusicListGeneration::musicPath
	StringU5BU5D_t1642385972* ___musicPath_6;
	// System.Single MusicListGeneration::buttonHeight
	float ___buttonHeight_7;

public:
	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(MusicListGeneration_t1044144715, ___content_2)); }
	inline RectTransform_t3349966182 * get_content_2() const { return ___content_2; }
	inline RectTransform_t3349966182 ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(RectTransform_t3349966182 * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier(&___content_2, value);
	}

	inline static int32_t get_offset_of_buttonPrefab_3() { return static_cast<int32_t>(offsetof(MusicListGeneration_t1044144715, ___buttonPrefab_3)); }
	inline GameObject_t1756533147 * get_buttonPrefab_3() const { return ___buttonPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_buttonPrefab_3() { return &___buttonPrefab_3; }
	inline void set_buttonPrefab_3(GameObject_t1756533147 * value)
	{
		___buttonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPrefab_3, value);
	}

	inline static int32_t get_offset_of_musicList_4() { return static_cast<int32_t>(offsetof(MusicListGeneration_t1044144715, ___musicList_4)); }
	inline AudioClipU5BU5D_t2203355011* get_musicList_4() const { return ___musicList_4; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_musicList_4() { return &___musicList_4; }
	inline void set_musicList_4(AudioClipU5BU5D_t2203355011* value)
	{
		___musicList_4 = value;
		Il2CppCodeGenWriteBarrier(&___musicList_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(MusicListGeneration_t1044144715, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_musicPath_6() { return static_cast<int32_t>(offsetof(MusicListGeneration_t1044144715, ___musicPath_6)); }
	inline StringU5BU5D_t1642385972* get_musicPath_6() const { return ___musicPath_6; }
	inline StringU5BU5D_t1642385972** get_address_of_musicPath_6() { return &___musicPath_6; }
	inline void set_musicPath_6(StringU5BU5D_t1642385972* value)
	{
		___musicPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___musicPath_6, value);
	}

	inline static int32_t get_offset_of_buttonHeight_7() { return static_cast<int32_t>(offsetof(MusicListGeneration_t1044144715, ___buttonHeight_7)); }
	inline float get_buttonHeight_7() const { return ___buttonHeight_7; }
	inline float* get_address_of_buttonHeight_7() { return &___buttonHeight_7; }
	inline void set_buttonHeight_7(float value)
	{
		___buttonHeight_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
