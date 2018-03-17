#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// CameraMover
struct CameraMover_t3326863596;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterPickUp
struct  CharacterPickUp_t2757380631  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image CharacterPickUp::characterIcon
	Image_t2042527209 * ___characterIcon_2;
	// UnityEngine.Sprite[] CharacterPickUp::characterIcons
	SpriteU5BU5D_t3359083662* ___characterIcons_3;
	// UnityEngine.UI.Button CharacterPickUp::confirmText
	Button_t2872111280 * ___confirmText_4;
	// UnityEngine.UI.Button CharacterPickUp::backText
	Button_t2872111280 * ___backText_5;
	// UnityEngine.UI.Button CharacterPickUp::storeText
	Button_t2872111280 * ___storeText_6;
	// UnityEngine.UI.Button CharacterPickUp::nextCharacterText
	Button_t2872111280 * ___nextCharacterText_7;
	// UnityEngine.UI.Button CharacterPickUp::previousCharacterText
	Button_t2872111280 * ___previousCharacterText_8;
	// UnityEngine.UI.Text CharacterPickUp::title
	Text_t356221433 * ___title_9;
	// UnityEngine.UI.Text CharacterPickUp::values
	Text_t356221433 * ___values_10;
	// UnityEngine.UI.Text CharacterPickUp::level
	Text_t356221433 * ___level_11;
	// UnityEngine.UI.Text CharacterPickUp::letterGrade
	Text_t356221433 * ___letterGrade_12;
	// UnityEngine.UI.Image CharacterPickUp::img
	Image_t2042527209 * ___img_13;
	// UnityEngine.UI.Image CharacterPickUp::skillImage
	Image_t2042527209 * ___skillImage_14;
	// UnityEngine.UI.Button[] CharacterPickUp::charList
	ButtonU5BU5D_t3071100561* ___charList_15;
	// UnityEngine.Sprite[] CharacterPickUp::spriteList
	SpriteU5BU5D_t3359083662* ___spriteList_16;
	// UnityEngine.Sprite[] CharacterPickUp::skillList
	SpriteU5BU5D_t3359083662* ___skillList_17;
	// UnityEngine.GameObject CharacterPickUp::expBar
	GameObject_t1756533147 * ___expBar_18;
	// UnityEngine.GameObject CharacterPickUp::HPBar
	GameObject_t1756533147 * ___HPBar_19;
	// UnityEngine.GameObject CharacterPickUp::MPBar
	GameObject_t1756533147 * ___MPBar_20;
	// UnityEngine.GameObject CharacterPickUp::speedBar
	GameObject_t1756533147 * ___speedBar_21;
	// UnityEngine.GameObject CharacterPickUp::CDBar
	GameObject_t1756533147 * ___CDBar_22;
	// UnityEngine.GameObject CharacterPickUp::attackBar
	GameObject_t1756533147 * ___attackBar_23;
	// UnityEngine.GameObject CharacterPickUp::defenseBar
	GameObject_t1756533147 * ___defenseBar_24;
	// UnityEngine.GameObject CharacterPickUp::hiddenChar
	GameObject_t1756533147 * ___hiddenChar_25;
	// UnityEngine.UI.Text CharacterPickUp::charValue
	Text_t356221433 * ___charValue_26;
	// UnityEngine.UI.Text CharacterPickUp::totalValue
	Text_t356221433 * ___totalValue_27;
	// UnityEngine.Color32 CharacterPickUp::cyan
	Color32_t874517518  ___cyan_28;
	// UnityEngine.Color32 CharacterPickUp::white
	Color32_t874517518  ___white_29;
	// CameraMover CharacterPickUp::MyCameraMover
	CameraMover_t3326863596 * ___MyCameraMover_31;

public:
	inline static int32_t get_offset_of_characterIcon_2() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___characterIcon_2)); }
	inline Image_t2042527209 * get_characterIcon_2() const { return ___characterIcon_2; }
	inline Image_t2042527209 ** get_address_of_characterIcon_2() { return &___characterIcon_2; }
	inline void set_characterIcon_2(Image_t2042527209 * value)
	{
		___characterIcon_2 = value;
		Il2CppCodeGenWriteBarrier(&___characterIcon_2, value);
	}

	inline static int32_t get_offset_of_characterIcons_3() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___characterIcons_3)); }
	inline SpriteU5BU5D_t3359083662* get_characterIcons_3() const { return ___characterIcons_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_characterIcons_3() { return &___characterIcons_3; }
	inline void set_characterIcons_3(SpriteU5BU5D_t3359083662* value)
	{
		___characterIcons_3 = value;
		Il2CppCodeGenWriteBarrier(&___characterIcons_3, value);
	}

	inline static int32_t get_offset_of_confirmText_4() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___confirmText_4)); }
	inline Button_t2872111280 * get_confirmText_4() const { return ___confirmText_4; }
	inline Button_t2872111280 ** get_address_of_confirmText_4() { return &___confirmText_4; }
	inline void set_confirmText_4(Button_t2872111280 * value)
	{
		___confirmText_4 = value;
		Il2CppCodeGenWriteBarrier(&___confirmText_4, value);
	}

	inline static int32_t get_offset_of_backText_5() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___backText_5)); }
	inline Button_t2872111280 * get_backText_5() const { return ___backText_5; }
	inline Button_t2872111280 ** get_address_of_backText_5() { return &___backText_5; }
	inline void set_backText_5(Button_t2872111280 * value)
	{
		___backText_5 = value;
		Il2CppCodeGenWriteBarrier(&___backText_5, value);
	}

	inline static int32_t get_offset_of_storeText_6() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___storeText_6)); }
	inline Button_t2872111280 * get_storeText_6() const { return ___storeText_6; }
	inline Button_t2872111280 ** get_address_of_storeText_6() { return &___storeText_6; }
	inline void set_storeText_6(Button_t2872111280 * value)
	{
		___storeText_6 = value;
		Il2CppCodeGenWriteBarrier(&___storeText_6, value);
	}

	inline static int32_t get_offset_of_nextCharacterText_7() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___nextCharacterText_7)); }
	inline Button_t2872111280 * get_nextCharacterText_7() const { return ___nextCharacterText_7; }
	inline Button_t2872111280 ** get_address_of_nextCharacterText_7() { return &___nextCharacterText_7; }
	inline void set_nextCharacterText_7(Button_t2872111280 * value)
	{
		___nextCharacterText_7 = value;
		Il2CppCodeGenWriteBarrier(&___nextCharacterText_7, value);
	}

	inline static int32_t get_offset_of_previousCharacterText_8() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___previousCharacterText_8)); }
	inline Button_t2872111280 * get_previousCharacterText_8() const { return ___previousCharacterText_8; }
	inline Button_t2872111280 ** get_address_of_previousCharacterText_8() { return &___previousCharacterText_8; }
	inline void set_previousCharacterText_8(Button_t2872111280 * value)
	{
		___previousCharacterText_8 = value;
		Il2CppCodeGenWriteBarrier(&___previousCharacterText_8, value);
	}

	inline static int32_t get_offset_of_title_9() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___title_9)); }
	inline Text_t356221433 * get_title_9() const { return ___title_9; }
	inline Text_t356221433 ** get_address_of_title_9() { return &___title_9; }
	inline void set_title_9(Text_t356221433 * value)
	{
		___title_9 = value;
		Il2CppCodeGenWriteBarrier(&___title_9, value);
	}

	inline static int32_t get_offset_of_values_10() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___values_10)); }
	inline Text_t356221433 * get_values_10() const { return ___values_10; }
	inline Text_t356221433 ** get_address_of_values_10() { return &___values_10; }
	inline void set_values_10(Text_t356221433 * value)
	{
		___values_10 = value;
		Il2CppCodeGenWriteBarrier(&___values_10, value);
	}

	inline static int32_t get_offset_of_level_11() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___level_11)); }
	inline Text_t356221433 * get_level_11() const { return ___level_11; }
	inline Text_t356221433 ** get_address_of_level_11() { return &___level_11; }
	inline void set_level_11(Text_t356221433 * value)
	{
		___level_11 = value;
		Il2CppCodeGenWriteBarrier(&___level_11, value);
	}

	inline static int32_t get_offset_of_letterGrade_12() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___letterGrade_12)); }
	inline Text_t356221433 * get_letterGrade_12() const { return ___letterGrade_12; }
	inline Text_t356221433 ** get_address_of_letterGrade_12() { return &___letterGrade_12; }
	inline void set_letterGrade_12(Text_t356221433 * value)
	{
		___letterGrade_12 = value;
		Il2CppCodeGenWriteBarrier(&___letterGrade_12, value);
	}

	inline static int32_t get_offset_of_img_13() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___img_13)); }
	inline Image_t2042527209 * get_img_13() const { return ___img_13; }
	inline Image_t2042527209 ** get_address_of_img_13() { return &___img_13; }
	inline void set_img_13(Image_t2042527209 * value)
	{
		___img_13 = value;
		Il2CppCodeGenWriteBarrier(&___img_13, value);
	}

	inline static int32_t get_offset_of_skillImage_14() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___skillImage_14)); }
	inline Image_t2042527209 * get_skillImage_14() const { return ___skillImage_14; }
	inline Image_t2042527209 ** get_address_of_skillImage_14() { return &___skillImage_14; }
	inline void set_skillImage_14(Image_t2042527209 * value)
	{
		___skillImage_14 = value;
		Il2CppCodeGenWriteBarrier(&___skillImage_14, value);
	}

	inline static int32_t get_offset_of_charList_15() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___charList_15)); }
	inline ButtonU5BU5D_t3071100561* get_charList_15() const { return ___charList_15; }
	inline ButtonU5BU5D_t3071100561** get_address_of_charList_15() { return &___charList_15; }
	inline void set_charList_15(ButtonU5BU5D_t3071100561* value)
	{
		___charList_15 = value;
		Il2CppCodeGenWriteBarrier(&___charList_15, value);
	}

	inline static int32_t get_offset_of_spriteList_16() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___spriteList_16)); }
	inline SpriteU5BU5D_t3359083662* get_spriteList_16() const { return ___spriteList_16; }
	inline SpriteU5BU5D_t3359083662** get_address_of_spriteList_16() { return &___spriteList_16; }
	inline void set_spriteList_16(SpriteU5BU5D_t3359083662* value)
	{
		___spriteList_16 = value;
		Il2CppCodeGenWriteBarrier(&___spriteList_16, value);
	}

	inline static int32_t get_offset_of_skillList_17() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___skillList_17)); }
	inline SpriteU5BU5D_t3359083662* get_skillList_17() const { return ___skillList_17; }
	inline SpriteU5BU5D_t3359083662** get_address_of_skillList_17() { return &___skillList_17; }
	inline void set_skillList_17(SpriteU5BU5D_t3359083662* value)
	{
		___skillList_17 = value;
		Il2CppCodeGenWriteBarrier(&___skillList_17, value);
	}

	inline static int32_t get_offset_of_expBar_18() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___expBar_18)); }
	inline GameObject_t1756533147 * get_expBar_18() const { return ___expBar_18; }
	inline GameObject_t1756533147 ** get_address_of_expBar_18() { return &___expBar_18; }
	inline void set_expBar_18(GameObject_t1756533147 * value)
	{
		___expBar_18 = value;
		Il2CppCodeGenWriteBarrier(&___expBar_18, value);
	}

	inline static int32_t get_offset_of_HPBar_19() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___HPBar_19)); }
	inline GameObject_t1756533147 * get_HPBar_19() const { return ___HPBar_19; }
	inline GameObject_t1756533147 ** get_address_of_HPBar_19() { return &___HPBar_19; }
	inline void set_HPBar_19(GameObject_t1756533147 * value)
	{
		___HPBar_19 = value;
		Il2CppCodeGenWriteBarrier(&___HPBar_19, value);
	}

	inline static int32_t get_offset_of_MPBar_20() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___MPBar_20)); }
	inline GameObject_t1756533147 * get_MPBar_20() const { return ___MPBar_20; }
	inline GameObject_t1756533147 ** get_address_of_MPBar_20() { return &___MPBar_20; }
	inline void set_MPBar_20(GameObject_t1756533147 * value)
	{
		___MPBar_20 = value;
		Il2CppCodeGenWriteBarrier(&___MPBar_20, value);
	}

	inline static int32_t get_offset_of_speedBar_21() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___speedBar_21)); }
	inline GameObject_t1756533147 * get_speedBar_21() const { return ___speedBar_21; }
	inline GameObject_t1756533147 ** get_address_of_speedBar_21() { return &___speedBar_21; }
	inline void set_speedBar_21(GameObject_t1756533147 * value)
	{
		___speedBar_21 = value;
		Il2CppCodeGenWriteBarrier(&___speedBar_21, value);
	}

	inline static int32_t get_offset_of_CDBar_22() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___CDBar_22)); }
	inline GameObject_t1756533147 * get_CDBar_22() const { return ___CDBar_22; }
	inline GameObject_t1756533147 ** get_address_of_CDBar_22() { return &___CDBar_22; }
	inline void set_CDBar_22(GameObject_t1756533147 * value)
	{
		___CDBar_22 = value;
		Il2CppCodeGenWriteBarrier(&___CDBar_22, value);
	}

	inline static int32_t get_offset_of_attackBar_23() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___attackBar_23)); }
	inline GameObject_t1756533147 * get_attackBar_23() const { return ___attackBar_23; }
	inline GameObject_t1756533147 ** get_address_of_attackBar_23() { return &___attackBar_23; }
	inline void set_attackBar_23(GameObject_t1756533147 * value)
	{
		___attackBar_23 = value;
		Il2CppCodeGenWriteBarrier(&___attackBar_23, value);
	}

	inline static int32_t get_offset_of_defenseBar_24() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___defenseBar_24)); }
	inline GameObject_t1756533147 * get_defenseBar_24() const { return ___defenseBar_24; }
	inline GameObject_t1756533147 ** get_address_of_defenseBar_24() { return &___defenseBar_24; }
	inline void set_defenseBar_24(GameObject_t1756533147 * value)
	{
		___defenseBar_24 = value;
		Il2CppCodeGenWriteBarrier(&___defenseBar_24, value);
	}

	inline static int32_t get_offset_of_hiddenChar_25() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___hiddenChar_25)); }
	inline GameObject_t1756533147 * get_hiddenChar_25() const { return ___hiddenChar_25; }
	inline GameObject_t1756533147 ** get_address_of_hiddenChar_25() { return &___hiddenChar_25; }
	inline void set_hiddenChar_25(GameObject_t1756533147 * value)
	{
		___hiddenChar_25 = value;
		Il2CppCodeGenWriteBarrier(&___hiddenChar_25, value);
	}

	inline static int32_t get_offset_of_charValue_26() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___charValue_26)); }
	inline Text_t356221433 * get_charValue_26() const { return ___charValue_26; }
	inline Text_t356221433 ** get_address_of_charValue_26() { return &___charValue_26; }
	inline void set_charValue_26(Text_t356221433 * value)
	{
		___charValue_26 = value;
		Il2CppCodeGenWriteBarrier(&___charValue_26, value);
	}

	inline static int32_t get_offset_of_totalValue_27() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___totalValue_27)); }
	inline Text_t356221433 * get_totalValue_27() const { return ___totalValue_27; }
	inline Text_t356221433 ** get_address_of_totalValue_27() { return &___totalValue_27; }
	inline void set_totalValue_27(Text_t356221433 * value)
	{
		___totalValue_27 = value;
		Il2CppCodeGenWriteBarrier(&___totalValue_27, value);
	}

	inline static int32_t get_offset_of_cyan_28() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___cyan_28)); }
	inline Color32_t874517518  get_cyan_28() const { return ___cyan_28; }
	inline Color32_t874517518 * get_address_of_cyan_28() { return &___cyan_28; }
	inline void set_cyan_28(Color32_t874517518  value)
	{
		___cyan_28 = value;
	}

	inline static int32_t get_offset_of_white_29() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___white_29)); }
	inline Color32_t874517518  get_white_29() const { return ___white_29; }
	inline Color32_t874517518 * get_address_of_white_29() { return &___white_29; }
	inline void set_white_29(Color32_t874517518  value)
	{
		___white_29 = value;
	}

	inline static int32_t get_offset_of_MyCameraMover_31() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631, ___MyCameraMover_31)); }
	inline CameraMover_t3326863596 * get_MyCameraMover_31() const { return ___MyCameraMover_31; }
	inline CameraMover_t3326863596 ** get_address_of_MyCameraMover_31() { return &___MyCameraMover_31; }
	inline void set_MyCameraMover_31(CameraMover_t3326863596 * value)
	{
		___MyCameraMover_31 = value;
		Il2CppCodeGenWriteBarrier(&___MyCameraMover_31, value);
	}
};

struct CharacterPickUp_t2757380631_StaticFields
{
public:
	// System.Int32 CharacterPickUp::characterPicked
	int32_t ___characterPicked_30;

public:
	inline static int32_t get_offset_of_characterPicked_30() { return static_cast<int32_t>(offsetof(CharacterPickUp_t2757380631_StaticFields, ___characterPicked_30)); }
	inline int32_t get_characterPicked_30() const { return ___characterPicked_30; }
	inline int32_t* get_address_of_characterPicked_30() { return &___characterPicked_30; }
	inline void set_characterPicked_30(int32_t value)
	{
		___characterPicked_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
