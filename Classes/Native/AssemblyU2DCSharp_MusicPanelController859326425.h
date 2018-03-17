#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicPanelController
struct  MusicPanelController_t859326425  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MusicPanelController::homePanel
	GameObject_t1756533147 * ___homePanel_2;
	// UnityEngine.Sprite MusicPanelController::playButtonSprite
	Sprite_t309593783 * ___playButtonSprite_3;
	// UnityEngine.Sprite MusicPanelController::pauseButtonSprite
	Sprite_t309593783 * ___pauseButtonSprite_4;
	// UnityEngine.AudioSource MusicPanelController::audioSource
	AudioSource_t1135106623 * ___audioSource_5;
	// UnityEngine.UI.Button MusicPanelController::playButton
	Button_t2872111280 * ___playButton_6;
	// UnityEngine.UI.Text MusicPanelController::musicTitle
	Text_t356221433 * ___musicTitle_7;
	// UnityEngine.UI.Text MusicPanelController::musicTime
	Text_t356221433 * ___musicTime_8;
	// System.Int32 MusicPanelController::musicIDX
	int32_t ___musicIDX_9;

public:
	inline static int32_t get_offset_of_homePanel_2() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___homePanel_2)); }
	inline GameObject_t1756533147 * get_homePanel_2() const { return ___homePanel_2; }
	inline GameObject_t1756533147 ** get_address_of_homePanel_2() { return &___homePanel_2; }
	inline void set_homePanel_2(GameObject_t1756533147 * value)
	{
		___homePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___homePanel_2, value);
	}

	inline static int32_t get_offset_of_playButtonSprite_3() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___playButtonSprite_3)); }
	inline Sprite_t309593783 * get_playButtonSprite_3() const { return ___playButtonSprite_3; }
	inline Sprite_t309593783 ** get_address_of_playButtonSprite_3() { return &___playButtonSprite_3; }
	inline void set_playButtonSprite_3(Sprite_t309593783 * value)
	{
		___playButtonSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___playButtonSprite_3, value);
	}

	inline static int32_t get_offset_of_pauseButtonSprite_4() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___pauseButtonSprite_4)); }
	inline Sprite_t309593783 * get_pauseButtonSprite_4() const { return ___pauseButtonSprite_4; }
	inline Sprite_t309593783 ** get_address_of_pauseButtonSprite_4() { return &___pauseButtonSprite_4; }
	inline void set_pauseButtonSprite_4(Sprite_t309593783 * value)
	{
		___pauseButtonSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___pauseButtonSprite_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_playButton_6() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___playButton_6)); }
	inline Button_t2872111280 * get_playButton_6() const { return ___playButton_6; }
	inline Button_t2872111280 ** get_address_of_playButton_6() { return &___playButton_6; }
	inline void set_playButton_6(Button_t2872111280 * value)
	{
		___playButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___playButton_6, value);
	}

	inline static int32_t get_offset_of_musicTitle_7() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___musicTitle_7)); }
	inline Text_t356221433 * get_musicTitle_7() const { return ___musicTitle_7; }
	inline Text_t356221433 ** get_address_of_musicTitle_7() { return &___musicTitle_7; }
	inline void set_musicTitle_7(Text_t356221433 * value)
	{
		___musicTitle_7 = value;
		Il2CppCodeGenWriteBarrier(&___musicTitle_7, value);
	}

	inline static int32_t get_offset_of_musicTime_8() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___musicTime_8)); }
	inline Text_t356221433 * get_musicTime_8() const { return ___musicTime_8; }
	inline Text_t356221433 ** get_address_of_musicTime_8() { return &___musicTime_8; }
	inline void set_musicTime_8(Text_t356221433 * value)
	{
		___musicTime_8 = value;
		Il2CppCodeGenWriteBarrier(&___musicTime_8, value);
	}

	inline static int32_t get_offset_of_musicIDX_9() { return static_cast<int32_t>(offsetof(MusicPanelController_t859326425, ___musicIDX_9)); }
	inline int32_t get_musicIDX_9() const { return ___musicIDX_9; }
	inline int32_t* get_address_of_musicIDX_9() { return &___musicIDX_9; }
	inline void set_musicIDX_9(int32_t value)
	{
		___musicIDX_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
