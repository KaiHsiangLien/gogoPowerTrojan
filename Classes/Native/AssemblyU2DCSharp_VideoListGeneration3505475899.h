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
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoListGeneration
struct  VideoListGeneration_t3505475899  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform VideoListGeneration::content
	RectTransform_t3349966182 * ___content_2;
	// UnityEngine.GameObject VideoListGeneration::buttonPrefab
	GameObject_t1756533147 * ___buttonPrefab_3;
	// UnityEngine.AudioClip[] VideoListGeneration::videoList
	AudioClipU5BU5D_t2203355011* ___videoList_4;
	// System.String[] VideoListGeneration::videoPathList
	StringU5BU5D_t1642385972* ___videoPathList_5;
	// System.Single VideoListGeneration::buttonHeight
	float ___buttonHeight_6;

public:
	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(VideoListGeneration_t3505475899, ___content_2)); }
	inline RectTransform_t3349966182 * get_content_2() const { return ___content_2; }
	inline RectTransform_t3349966182 ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(RectTransform_t3349966182 * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier(&___content_2, value);
	}

	inline static int32_t get_offset_of_buttonPrefab_3() { return static_cast<int32_t>(offsetof(VideoListGeneration_t3505475899, ___buttonPrefab_3)); }
	inline GameObject_t1756533147 * get_buttonPrefab_3() const { return ___buttonPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_buttonPrefab_3() { return &___buttonPrefab_3; }
	inline void set_buttonPrefab_3(GameObject_t1756533147 * value)
	{
		___buttonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPrefab_3, value);
	}

	inline static int32_t get_offset_of_videoList_4() { return static_cast<int32_t>(offsetof(VideoListGeneration_t3505475899, ___videoList_4)); }
	inline AudioClipU5BU5D_t2203355011* get_videoList_4() const { return ___videoList_4; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_videoList_4() { return &___videoList_4; }
	inline void set_videoList_4(AudioClipU5BU5D_t2203355011* value)
	{
		___videoList_4 = value;
		Il2CppCodeGenWriteBarrier(&___videoList_4, value);
	}

	inline static int32_t get_offset_of_videoPathList_5() { return static_cast<int32_t>(offsetof(VideoListGeneration_t3505475899, ___videoPathList_5)); }
	inline StringU5BU5D_t1642385972* get_videoPathList_5() const { return ___videoPathList_5; }
	inline StringU5BU5D_t1642385972** get_address_of_videoPathList_5() { return &___videoPathList_5; }
	inline void set_videoPathList_5(StringU5BU5D_t1642385972* value)
	{
		___videoPathList_5 = value;
		Il2CppCodeGenWriteBarrier(&___videoPathList_5, value);
	}

	inline static int32_t get_offset_of_buttonHeight_6() { return static_cast<int32_t>(offsetof(VideoListGeneration_t3505475899, ___buttonHeight_6)); }
	inline float get_buttonHeight_6() const { return ___buttonHeight_6; }
	inline float* get_address_of_buttonHeight_6() { return &___buttonHeight_6; }
	inline void set_buttonHeight_6(float value)
	{
		___buttonHeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
