#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// MediaPlayerCtrl
struct MediaPlayerCtrl_t1284484152;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlayer
struct  VideoPlayer_t2184999770  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean VideoPlayer::isCoursePreview
	bool ___isCoursePreview_2;
	// System.String VideoPlayer::videoName
	String_t* ___videoName_3;
	// MediaPlayerCtrl VideoPlayer::mediaPlayerCtrl
	MediaPlayerCtrl_t1284484152 * ___mediaPlayerCtrl_4;
	// UnityEngine.GameObject VideoPlayer::UIStart
	GameObject_t1756533147 * ___UIStart_5;
	// UnityEngine.GameObject VideoPlayer::miniMapBorderUI
	GameObject_t1756533147 * ___miniMapBorderUI_6;
	// UnityEngine.Camera VideoPlayer::miniMapCam
	Camera_t189460977 * ___miniMapCam_7;
	// System.Boolean VideoPlayer::enableNightMarePreview
	bool ___enableNightMarePreview_8;

public:
	inline static int32_t get_offset_of_isCoursePreview_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t2184999770, ___isCoursePreview_2)); }
	inline bool get_isCoursePreview_2() const { return ___isCoursePreview_2; }
	inline bool* get_address_of_isCoursePreview_2() { return &___isCoursePreview_2; }
	inline void set_isCoursePreview_2(bool value)
	{
		___isCoursePreview_2 = value;
	}

	inline static int32_t get_offset_of_videoName_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t2184999770, ___videoName_3)); }
	inline String_t* get_videoName_3() const { return ___videoName_3; }
	inline String_t** get_address_of_videoName_3() { return &___videoName_3; }
	inline void set_videoName_3(String_t* value)
	{
		___videoName_3 = value;
		Il2CppCodeGenWriteBarrier(&___videoName_3, value);
	}

	inline static int32_t get_offset_of_mediaPlayerCtrl_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t2184999770, ___mediaPlayerCtrl_4)); }
	inline MediaPlayerCtrl_t1284484152 * get_mediaPlayerCtrl_4() const { return ___mediaPlayerCtrl_4; }
	inline MediaPlayerCtrl_t1284484152 ** get_address_of_mediaPlayerCtrl_4() { return &___mediaPlayerCtrl_4; }
	inline void set_mediaPlayerCtrl_4(MediaPlayerCtrl_t1284484152 * value)
	{
		___mediaPlayerCtrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___mediaPlayerCtrl_4, value);
	}

	inline static int32_t get_offset_of_UIStart_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t2184999770, ___UIStart_5)); }
	inline GameObject_t1756533147 * get_UIStart_5() const { return ___UIStart_5; }
	inline GameObject_t1756533147 ** get_address_of_UIStart_5() { return &___UIStart_5; }
	inline void set_UIStart_5(GameObject_t1756533147 * value)
	{
		___UIStart_5 = value;
		Il2CppCodeGenWriteBarrier(&___UIStart_5, value);
	}

	inline static int32_t get_offset_of_miniMapBorderUI_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t2184999770, ___miniMapBorderUI_6)); }
	inline GameObject_t1756533147 * get_miniMapBorderUI_6() const { return ___miniMapBorderUI_6; }
	inline GameObject_t1756533147 ** get_address_of_miniMapBorderUI_6() { return &___miniMapBorderUI_6; }
	inline void set_miniMapBorderUI_6(GameObject_t1756533147 * value)
	{
		___miniMapBorderUI_6 = value;
		Il2CppCodeGenWriteBarrier(&___miniMapBorderUI_6, value);
	}

	inline static int32_t get_offset_of_miniMapCam_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t2184999770, ___miniMapCam_7)); }
	inline Camera_t189460977 * get_miniMapCam_7() const { return ___miniMapCam_7; }
	inline Camera_t189460977 ** get_address_of_miniMapCam_7() { return &___miniMapCam_7; }
	inline void set_miniMapCam_7(Camera_t189460977 * value)
	{
		___miniMapCam_7 = value;
		Il2CppCodeGenWriteBarrier(&___miniMapCam_7, value);
	}

	inline static int32_t get_offset_of_enableNightMarePreview_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t2184999770, ___enableNightMarePreview_8)); }
	inline bool get_enableNightMarePreview_8() const { return ___enableNightMarePreview_8; }
	inline bool* get_address_of_enableNightMarePreview_8() { return &___enableNightMarePreview_8; }
	inline void set_enableNightMarePreview_8(bool value)
	{
		___enableNightMarePreview_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
