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
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MedaiPlayerSampleGUI
struct  MedaiPlayerSampleGUI_t1330597946  : public MonoBehaviour_t1158329972
{
public:
	// MediaPlayerCtrl MedaiPlayerSampleGUI::scrMedia
	MediaPlayerCtrl_t1284484152 * ___scrMedia_2;
	// System.Boolean MedaiPlayerSampleGUI::m_bFinish
	bool ___m_bFinish_3;
	// UnityEngine.Texture2D MedaiPlayerSampleGUI::buttonImage
	Texture2D_t3542995729 * ___buttonImage_4;
	// UnityEngine.GameObject MedaiPlayerSampleGUI::miniMapBorderUI
	GameObject_t1756533147 * ___miniMapBorderUI_5;
	// UnityEngine.GameObject MedaiPlayerSampleGUI::UIStart
	GameObject_t1756533147 * ___UIStart_6;
	// UnityEngine.GameObject MedaiPlayerSampleGUI::fullscreenObject
	GameObject_t1756533147 * ___fullscreenObject_7;
	// UnityEngine.Camera MedaiPlayerSampleGUI::miniMapCam
	Camera_t189460977 * ___miniMapCam_8;

public:
	inline static int32_t get_offset_of_scrMedia_2() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1330597946, ___scrMedia_2)); }
	inline MediaPlayerCtrl_t1284484152 * get_scrMedia_2() const { return ___scrMedia_2; }
	inline MediaPlayerCtrl_t1284484152 ** get_address_of_scrMedia_2() { return &___scrMedia_2; }
	inline void set_scrMedia_2(MediaPlayerCtrl_t1284484152 * value)
	{
		___scrMedia_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrMedia_2, value);
	}

	inline static int32_t get_offset_of_m_bFinish_3() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1330597946, ___m_bFinish_3)); }
	inline bool get_m_bFinish_3() const { return ___m_bFinish_3; }
	inline bool* get_address_of_m_bFinish_3() { return &___m_bFinish_3; }
	inline void set_m_bFinish_3(bool value)
	{
		___m_bFinish_3 = value;
	}

	inline static int32_t get_offset_of_buttonImage_4() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1330597946, ___buttonImage_4)); }
	inline Texture2D_t3542995729 * get_buttonImage_4() const { return ___buttonImage_4; }
	inline Texture2D_t3542995729 ** get_address_of_buttonImage_4() { return &___buttonImage_4; }
	inline void set_buttonImage_4(Texture2D_t3542995729 * value)
	{
		___buttonImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___buttonImage_4, value);
	}

	inline static int32_t get_offset_of_miniMapBorderUI_5() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1330597946, ___miniMapBorderUI_5)); }
	inline GameObject_t1756533147 * get_miniMapBorderUI_5() const { return ___miniMapBorderUI_5; }
	inline GameObject_t1756533147 ** get_address_of_miniMapBorderUI_5() { return &___miniMapBorderUI_5; }
	inline void set_miniMapBorderUI_5(GameObject_t1756533147 * value)
	{
		___miniMapBorderUI_5 = value;
		Il2CppCodeGenWriteBarrier(&___miniMapBorderUI_5, value);
	}

	inline static int32_t get_offset_of_UIStart_6() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1330597946, ___UIStart_6)); }
	inline GameObject_t1756533147 * get_UIStart_6() const { return ___UIStart_6; }
	inline GameObject_t1756533147 ** get_address_of_UIStart_6() { return &___UIStart_6; }
	inline void set_UIStart_6(GameObject_t1756533147 * value)
	{
		___UIStart_6 = value;
		Il2CppCodeGenWriteBarrier(&___UIStart_6, value);
	}

	inline static int32_t get_offset_of_fullscreenObject_7() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1330597946, ___fullscreenObject_7)); }
	inline GameObject_t1756533147 * get_fullscreenObject_7() const { return ___fullscreenObject_7; }
	inline GameObject_t1756533147 ** get_address_of_fullscreenObject_7() { return &___fullscreenObject_7; }
	inline void set_fullscreenObject_7(GameObject_t1756533147 * value)
	{
		___fullscreenObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___fullscreenObject_7, value);
	}

	inline static int32_t get_offset_of_miniMapCam_8() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1330597946, ___miniMapCam_8)); }
	inline Camera_t189460977 * get_miniMapCam_8() const { return ___miniMapCam_8; }
	inline Camera_t189460977 ** get_address_of_miniMapCam_8() { return &___miniMapCam_8; }
	inline void set_miniMapCam_8(Camera_t189460977 * value)
	{
		___miniMapCam_8 = value;
		Il2CppCodeGenWriteBarrier(&___miniMapCam_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
