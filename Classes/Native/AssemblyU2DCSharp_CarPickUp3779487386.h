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

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.String
struct String_t;
// CameraMover
struct CameraMover_t3326863596;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarPickUp
struct  CarPickUp_t3779487386  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button CarPickUp::confirmText
	Button_t2872111280 * ___confirmText_2;
	// UnityEngine.UI.Button CarPickUp::backText
	Button_t2872111280 * ___backText_3;
	// UnityEngine.UI.Button CarPickUp::storeText
	Button_t2872111280 * ___storeText_4;
	// UnityEngine.UI.Text CarPickUp::title
	Text_t356221433 * ___title_5;
	// UnityEngine.GameObject CarPickUp::slot
	GameObject_t1756533147 * ___slot_6;
	// UnityEngine.UI.Text CarPickUp::values
	Text_t356221433 * ___values_7;
	// UnityEngine.UI.Text CarPickUp::level
	Text_t356221433 * ___level_8;
	// UnityEngine.UI.Text CarPickUp::totalValue
	Text_t356221433 * ___totalValue_9;
	// UnityEngine.UI.Text CarPickUp::charValue
	Text_t356221433 * ___charValue_10;
	// UnityEngine.UI.Text CarPickUp::carValue
	Text_t356221433 * ___carValue_11;
	// UnityEngine.UI.Image CarPickUp::carIcon
	Image_t2042527209 * ___carIcon_12;
	// UnityEngine.UI.Image CarPickUp::charIcon
	Image_t2042527209 * ___charIcon_13;
	// UnityEngine.UI.Button[] CarPickUp::carList
	ButtonU5BU5D_t3071100561* ___carList_14;
	// UnityEngine.Sprite[] CarPickUp::spriteList
	SpriteU5BU5D_t3359083662* ___spriteList_15;
	// UnityEngine.Sprite[] CarPickUp::cardList
	SpriteU5BU5D_t3359083662* ___cardList_16;
	// UnityEngine.Sprite[] CarPickUp::carIconList
	SpriteU5BU5D_t3359083662* ___carIconList_17;
	// UnityEngine.Sprite[] CarPickUp::charIconList
	SpriteU5BU5D_t3359083662* ___charIconList_18;
	// UnityEngine.GameObject CarPickUp::expBar
	GameObject_t1756533147 * ___expBar_19;
	// UnityEngine.GameObject CarPickUp::HPBar
	GameObject_t1756533147 * ___HPBar_20;
	// UnityEngine.GameObject CarPickUp::MPBar
	GameObject_t1756533147 * ___MPBar_21;
	// UnityEngine.GameObject CarPickUp::speedBar
	GameObject_t1756533147 * ___speedBar_22;
	// UnityEngine.GameObject CarPickUp::CDBar
	GameObject_t1756533147 * ___CDBar_23;
	// UnityEngine.GameObject CarPickUp::attackBar
	GameObject_t1756533147 * ___attackBar_24;
	// UnityEngine.GameObject CarPickUp::defenseBar
	GameObject_t1756533147 * ___defenseBar_25;
	// UnityEngine.GameObject CarPickUp::equipCardPan
	GameObject_t1756533147 * ___equipCardPan_26;
	// UnityEngine.GameObject CarPickUp::confirmCardPan
	GameObject_t1756533147 * ___confirmCardPan_27;
	// UnityEngine.GameObject CarPickUp::cardButtonList
	GameObject_t1756533147 * ___cardButtonList_28;
	// System.Int32 CarPickUp::cardPicked
	int32_t ___cardPicked_29;
	// System.Int32 CarPickUp::slotPicked
	int32_t ___slotPicked_30;
	// System.String CarPickUp::cardTypePicked
	String_t* ___cardTypePicked_31;
	// UnityEngine.Color32 CarPickUp::atk
	Color32_t874517518  ___atk_32;
	// UnityEngine.Color32 CarPickUp::def
	Color32_t874517518  ___def_33;
	// UnityEngine.Color32 CarPickUp::spe
	Color32_t874517518  ___spe_34;
	// UnityEngine.Color32 CarPickUp::cyan
	Color32_t874517518  ___cyan_35;
	// UnityEngine.Color32 CarPickUp::white
	Color32_t874517518  ___white_36;
	// System.Boolean CarPickUp::isCurrCardClosed
	bool ___isCurrCardClosed_37;
	// System.Boolean CarPickUp::isCardExpand
	bool ___isCardExpand_38;
	// System.Int32 CarPickUp::lastCardPicked
	int32_t ___lastCardPicked_39;
	// UnityEngine.GameObject CarPickUp::removeButton
	GameObject_t1756533147 * ___removeButton_40;
	// CameraMover CarPickUp::MyCameraMover
	CameraMover_t3326863596 * ___MyCameraMover_42;

public:
	inline static int32_t get_offset_of_confirmText_2() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___confirmText_2)); }
	inline Button_t2872111280 * get_confirmText_2() const { return ___confirmText_2; }
	inline Button_t2872111280 ** get_address_of_confirmText_2() { return &___confirmText_2; }
	inline void set_confirmText_2(Button_t2872111280 * value)
	{
		___confirmText_2 = value;
		Il2CppCodeGenWriteBarrier(&___confirmText_2, value);
	}

	inline static int32_t get_offset_of_backText_3() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___backText_3)); }
	inline Button_t2872111280 * get_backText_3() const { return ___backText_3; }
	inline Button_t2872111280 ** get_address_of_backText_3() { return &___backText_3; }
	inline void set_backText_3(Button_t2872111280 * value)
	{
		___backText_3 = value;
		Il2CppCodeGenWriteBarrier(&___backText_3, value);
	}

	inline static int32_t get_offset_of_storeText_4() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___storeText_4)); }
	inline Button_t2872111280 * get_storeText_4() const { return ___storeText_4; }
	inline Button_t2872111280 ** get_address_of_storeText_4() { return &___storeText_4; }
	inline void set_storeText_4(Button_t2872111280 * value)
	{
		___storeText_4 = value;
		Il2CppCodeGenWriteBarrier(&___storeText_4, value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___title_5)); }
	inline Text_t356221433 * get_title_5() const { return ___title_5; }
	inline Text_t356221433 ** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(Text_t356221433 * value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier(&___title_5, value);
	}

	inline static int32_t get_offset_of_slot_6() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___slot_6)); }
	inline GameObject_t1756533147 * get_slot_6() const { return ___slot_6; }
	inline GameObject_t1756533147 ** get_address_of_slot_6() { return &___slot_6; }
	inline void set_slot_6(GameObject_t1756533147 * value)
	{
		___slot_6 = value;
		Il2CppCodeGenWriteBarrier(&___slot_6, value);
	}

	inline static int32_t get_offset_of_values_7() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___values_7)); }
	inline Text_t356221433 * get_values_7() const { return ___values_7; }
	inline Text_t356221433 ** get_address_of_values_7() { return &___values_7; }
	inline void set_values_7(Text_t356221433 * value)
	{
		___values_7 = value;
		Il2CppCodeGenWriteBarrier(&___values_7, value);
	}

	inline static int32_t get_offset_of_level_8() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___level_8)); }
	inline Text_t356221433 * get_level_8() const { return ___level_8; }
	inline Text_t356221433 ** get_address_of_level_8() { return &___level_8; }
	inline void set_level_8(Text_t356221433 * value)
	{
		___level_8 = value;
		Il2CppCodeGenWriteBarrier(&___level_8, value);
	}

	inline static int32_t get_offset_of_totalValue_9() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___totalValue_9)); }
	inline Text_t356221433 * get_totalValue_9() const { return ___totalValue_9; }
	inline Text_t356221433 ** get_address_of_totalValue_9() { return &___totalValue_9; }
	inline void set_totalValue_9(Text_t356221433 * value)
	{
		___totalValue_9 = value;
		Il2CppCodeGenWriteBarrier(&___totalValue_9, value);
	}

	inline static int32_t get_offset_of_charValue_10() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___charValue_10)); }
	inline Text_t356221433 * get_charValue_10() const { return ___charValue_10; }
	inline Text_t356221433 ** get_address_of_charValue_10() { return &___charValue_10; }
	inline void set_charValue_10(Text_t356221433 * value)
	{
		___charValue_10 = value;
		Il2CppCodeGenWriteBarrier(&___charValue_10, value);
	}

	inline static int32_t get_offset_of_carValue_11() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___carValue_11)); }
	inline Text_t356221433 * get_carValue_11() const { return ___carValue_11; }
	inline Text_t356221433 ** get_address_of_carValue_11() { return &___carValue_11; }
	inline void set_carValue_11(Text_t356221433 * value)
	{
		___carValue_11 = value;
		Il2CppCodeGenWriteBarrier(&___carValue_11, value);
	}

	inline static int32_t get_offset_of_carIcon_12() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___carIcon_12)); }
	inline Image_t2042527209 * get_carIcon_12() const { return ___carIcon_12; }
	inline Image_t2042527209 ** get_address_of_carIcon_12() { return &___carIcon_12; }
	inline void set_carIcon_12(Image_t2042527209 * value)
	{
		___carIcon_12 = value;
		Il2CppCodeGenWriteBarrier(&___carIcon_12, value);
	}

	inline static int32_t get_offset_of_charIcon_13() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___charIcon_13)); }
	inline Image_t2042527209 * get_charIcon_13() const { return ___charIcon_13; }
	inline Image_t2042527209 ** get_address_of_charIcon_13() { return &___charIcon_13; }
	inline void set_charIcon_13(Image_t2042527209 * value)
	{
		___charIcon_13 = value;
		Il2CppCodeGenWriteBarrier(&___charIcon_13, value);
	}

	inline static int32_t get_offset_of_carList_14() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___carList_14)); }
	inline ButtonU5BU5D_t3071100561* get_carList_14() const { return ___carList_14; }
	inline ButtonU5BU5D_t3071100561** get_address_of_carList_14() { return &___carList_14; }
	inline void set_carList_14(ButtonU5BU5D_t3071100561* value)
	{
		___carList_14 = value;
		Il2CppCodeGenWriteBarrier(&___carList_14, value);
	}

	inline static int32_t get_offset_of_spriteList_15() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___spriteList_15)); }
	inline SpriteU5BU5D_t3359083662* get_spriteList_15() const { return ___spriteList_15; }
	inline SpriteU5BU5D_t3359083662** get_address_of_spriteList_15() { return &___spriteList_15; }
	inline void set_spriteList_15(SpriteU5BU5D_t3359083662* value)
	{
		___spriteList_15 = value;
		Il2CppCodeGenWriteBarrier(&___spriteList_15, value);
	}

	inline static int32_t get_offset_of_cardList_16() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___cardList_16)); }
	inline SpriteU5BU5D_t3359083662* get_cardList_16() const { return ___cardList_16; }
	inline SpriteU5BU5D_t3359083662** get_address_of_cardList_16() { return &___cardList_16; }
	inline void set_cardList_16(SpriteU5BU5D_t3359083662* value)
	{
		___cardList_16 = value;
		Il2CppCodeGenWriteBarrier(&___cardList_16, value);
	}

	inline static int32_t get_offset_of_carIconList_17() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___carIconList_17)); }
	inline SpriteU5BU5D_t3359083662* get_carIconList_17() const { return ___carIconList_17; }
	inline SpriteU5BU5D_t3359083662** get_address_of_carIconList_17() { return &___carIconList_17; }
	inline void set_carIconList_17(SpriteU5BU5D_t3359083662* value)
	{
		___carIconList_17 = value;
		Il2CppCodeGenWriteBarrier(&___carIconList_17, value);
	}

	inline static int32_t get_offset_of_charIconList_18() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___charIconList_18)); }
	inline SpriteU5BU5D_t3359083662* get_charIconList_18() const { return ___charIconList_18; }
	inline SpriteU5BU5D_t3359083662** get_address_of_charIconList_18() { return &___charIconList_18; }
	inline void set_charIconList_18(SpriteU5BU5D_t3359083662* value)
	{
		___charIconList_18 = value;
		Il2CppCodeGenWriteBarrier(&___charIconList_18, value);
	}

	inline static int32_t get_offset_of_expBar_19() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___expBar_19)); }
	inline GameObject_t1756533147 * get_expBar_19() const { return ___expBar_19; }
	inline GameObject_t1756533147 ** get_address_of_expBar_19() { return &___expBar_19; }
	inline void set_expBar_19(GameObject_t1756533147 * value)
	{
		___expBar_19 = value;
		Il2CppCodeGenWriteBarrier(&___expBar_19, value);
	}

	inline static int32_t get_offset_of_HPBar_20() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___HPBar_20)); }
	inline GameObject_t1756533147 * get_HPBar_20() const { return ___HPBar_20; }
	inline GameObject_t1756533147 ** get_address_of_HPBar_20() { return &___HPBar_20; }
	inline void set_HPBar_20(GameObject_t1756533147 * value)
	{
		___HPBar_20 = value;
		Il2CppCodeGenWriteBarrier(&___HPBar_20, value);
	}

	inline static int32_t get_offset_of_MPBar_21() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___MPBar_21)); }
	inline GameObject_t1756533147 * get_MPBar_21() const { return ___MPBar_21; }
	inline GameObject_t1756533147 ** get_address_of_MPBar_21() { return &___MPBar_21; }
	inline void set_MPBar_21(GameObject_t1756533147 * value)
	{
		___MPBar_21 = value;
		Il2CppCodeGenWriteBarrier(&___MPBar_21, value);
	}

	inline static int32_t get_offset_of_speedBar_22() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___speedBar_22)); }
	inline GameObject_t1756533147 * get_speedBar_22() const { return ___speedBar_22; }
	inline GameObject_t1756533147 ** get_address_of_speedBar_22() { return &___speedBar_22; }
	inline void set_speedBar_22(GameObject_t1756533147 * value)
	{
		___speedBar_22 = value;
		Il2CppCodeGenWriteBarrier(&___speedBar_22, value);
	}

	inline static int32_t get_offset_of_CDBar_23() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___CDBar_23)); }
	inline GameObject_t1756533147 * get_CDBar_23() const { return ___CDBar_23; }
	inline GameObject_t1756533147 ** get_address_of_CDBar_23() { return &___CDBar_23; }
	inline void set_CDBar_23(GameObject_t1756533147 * value)
	{
		___CDBar_23 = value;
		Il2CppCodeGenWriteBarrier(&___CDBar_23, value);
	}

	inline static int32_t get_offset_of_attackBar_24() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___attackBar_24)); }
	inline GameObject_t1756533147 * get_attackBar_24() const { return ___attackBar_24; }
	inline GameObject_t1756533147 ** get_address_of_attackBar_24() { return &___attackBar_24; }
	inline void set_attackBar_24(GameObject_t1756533147 * value)
	{
		___attackBar_24 = value;
		Il2CppCodeGenWriteBarrier(&___attackBar_24, value);
	}

	inline static int32_t get_offset_of_defenseBar_25() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___defenseBar_25)); }
	inline GameObject_t1756533147 * get_defenseBar_25() const { return ___defenseBar_25; }
	inline GameObject_t1756533147 ** get_address_of_defenseBar_25() { return &___defenseBar_25; }
	inline void set_defenseBar_25(GameObject_t1756533147 * value)
	{
		___defenseBar_25 = value;
		Il2CppCodeGenWriteBarrier(&___defenseBar_25, value);
	}

	inline static int32_t get_offset_of_equipCardPan_26() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___equipCardPan_26)); }
	inline GameObject_t1756533147 * get_equipCardPan_26() const { return ___equipCardPan_26; }
	inline GameObject_t1756533147 ** get_address_of_equipCardPan_26() { return &___equipCardPan_26; }
	inline void set_equipCardPan_26(GameObject_t1756533147 * value)
	{
		___equipCardPan_26 = value;
		Il2CppCodeGenWriteBarrier(&___equipCardPan_26, value);
	}

	inline static int32_t get_offset_of_confirmCardPan_27() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___confirmCardPan_27)); }
	inline GameObject_t1756533147 * get_confirmCardPan_27() const { return ___confirmCardPan_27; }
	inline GameObject_t1756533147 ** get_address_of_confirmCardPan_27() { return &___confirmCardPan_27; }
	inline void set_confirmCardPan_27(GameObject_t1756533147 * value)
	{
		___confirmCardPan_27 = value;
		Il2CppCodeGenWriteBarrier(&___confirmCardPan_27, value);
	}

	inline static int32_t get_offset_of_cardButtonList_28() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___cardButtonList_28)); }
	inline GameObject_t1756533147 * get_cardButtonList_28() const { return ___cardButtonList_28; }
	inline GameObject_t1756533147 ** get_address_of_cardButtonList_28() { return &___cardButtonList_28; }
	inline void set_cardButtonList_28(GameObject_t1756533147 * value)
	{
		___cardButtonList_28 = value;
		Il2CppCodeGenWriteBarrier(&___cardButtonList_28, value);
	}

	inline static int32_t get_offset_of_cardPicked_29() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___cardPicked_29)); }
	inline int32_t get_cardPicked_29() const { return ___cardPicked_29; }
	inline int32_t* get_address_of_cardPicked_29() { return &___cardPicked_29; }
	inline void set_cardPicked_29(int32_t value)
	{
		___cardPicked_29 = value;
	}

	inline static int32_t get_offset_of_slotPicked_30() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___slotPicked_30)); }
	inline int32_t get_slotPicked_30() const { return ___slotPicked_30; }
	inline int32_t* get_address_of_slotPicked_30() { return &___slotPicked_30; }
	inline void set_slotPicked_30(int32_t value)
	{
		___slotPicked_30 = value;
	}

	inline static int32_t get_offset_of_cardTypePicked_31() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___cardTypePicked_31)); }
	inline String_t* get_cardTypePicked_31() const { return ___cardTypePicked_31; }
	inline String_t** get_address_of_cardTypePicked_31() { return &___cardTypePicked_31; }
	inline void set_cardTypePicked_31(String_t* value)
	{
		___cardTypePicked_31 = value;
		Il2CppCodeGenWriteBarrier(&___cardTypePicked_31, value);
	}

	inline static int32_t get_offset_of_atk_32() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___atk_32)); }
	inline Color32_t874517518  get_atk_32() const { return ___atk_32; }
	inline Color32_t874517518 * get_address_of_atk_32() { return &___atk_32; }
	inline void set_atk_32(Color32_t874517518  value)
	{
		___atk_32 = value;
	}

	inline static int32_t get_offset_of_def_33() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___def_33)); }
	inline Color32_t874517518  get_def_33() const { return ___def_33; }
	inline Color32_t874517518 * get_address_of_def_33() { return &___def_33; }
	inline void set_def_33(Color32_t874517518  value)
	{
		___def_33 = value;
	}

	inline static int32_t get_offset_of_spe_34() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___spe_34)); }
	inline Color32_t874517518  get_spe_34() const { return ___spe_34; }
	inline Color32_t874517518 * get_address_of_spe_34() { return &___spe_34; }
	inline void set_spe_34(Color32_t874517518  value)
	{
		___spe_34 = value;
	}

	inline static int32_t get_offset_of_cyan_35() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___cyan_35)); }
	inline Color32_t874517518  get_cyan_35() const { return ___cyan_35; }
	inline Color32_t874517518 * get_address_of_cyan_35() { return &___cyan_35; }
	inline void set_cyan_35(Color32_t874517518  value)
	{
		___cyan_35 = value;
	}

	inline static int32_t get_offset_of_white_36() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___white_36)); }
	inline Color32_t874517518  get_white_36() const { return ___white_36; }
	inline Color32_t874517518 * get_address_of_white_36() { return &___white_36; }
	inline void set_white_36(Color32_t874517518  value)
	{
		___white_36 = value;
	}

	inline static int32_t get_offset_of_isCurrCardClosed_37() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___isCurrCardClosed_37)); }
	inline bool get_isCurrCardClosed_37() const { return ___isCurrCardClosed_37; }
	inline bool* get_address_of_isCurrCardClosed_37() { return &___isCurrCardClosed_37; }
	inline void set_isCurrCardClosed_37(bool value)
	{
		___isCurrCardClosed_37 = value;
	}

	inline static int32_t get_offset_of_isCardExpand_38() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___isCardExpand_38)); }
	inline bool get_isCardExpand_38() const { return ___isCardExpand_38; }
	inline bool* get_address_of_isCardExpand_38() { return &___isCardExpand_38; }
	inline void set_isCardExpand_38(bool value)
	{
		___isCardExpand_38 = value;
	}

	inline static int32_t get_offset_of_lastCardPicked_39() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___lastCardPicked_39)); }
	inline int32_t get_lastCardPicked_39() const { return ___lastCardPicked_39; }
	inline int32_t* get_address_of_lastCardPicked_39() { return &___lastCardPicked_39; }
	inline void set_lastCardPicked_39(int32_t value)
	{
		___lastCardPicked_39 = value;
	}

	inline static int32_t get_offset_of_removeButton_40() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___removeButton_40)); }
	inline GameObject_t1756533147 * get_removeButton_40() const { return ___removeButton_40; }
	inline GameObject_t1756533147 ** get_address_of_removeButton_40() { return &___removeButton_40; }
	inline void set_removeButton_40(GameObject_t1756533147 * value)
	{
		___removeButton_40 = value;
		Il2CppCodeGenWriteBarrier(&___removeButton_40, value);
	}

	inline static int32_t get_offset_of_MyCameraMover_42() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386, ___MyCameraMover_42)); }
	inline CameraMover_t3326863596 * get_MyCameraMover_42() const { return ___MyCameraMover_42; }
	inline CameraMover_t3326863596 ** get_address_of_MyCameraMover_42() { return &___MyCameraMover_42; }
	inline void set_MyCameraMover_42(CameraMover_t3326863596 * value)
	{
		___MyCameraMover_42 = value;
		Il2CppCodeGenWriteBarrier(&___MyCameraMover_42, value);
	}
};

struct CarPickUp_t3779487386_StaticFields
{
public:
	// System.Int32 CarPickUp::carPicked
	int32_t ___carPicked_41;

public:
	inline static int32_t get_offset_of_carPicked_41() { return static_cast<int32_t>(offsetof(CarPickUp_t3779487386_StaticFields, ___carPicked_41)); }
	inline int32_t get_carPicked_41() const { return ___carPicked_41; }
	inline int32_t* get_address_of_carPicked_41() { return &___carPicked_41; }
	inline void set_carPicked_41(int32_t value)
	{
		___carPicked_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
