#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t1411648341;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarUpgrade
struct  CarUpgrade_t3205128182  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] CarUpgrade::carIcons
	SpriteU5BU5D_t3359083662* ___carIcons_2;
	// UnityEngine.UI.Image CarUpgrade::carIcon
	Image_t2042527209 * ___carIcon_3;
	// UnityEngine.GameObject CarUpgrade::okBtnGameObject
	GameObject_t1756533147 * ___okBtnGameObject_4;
	// UnityEngine.GameObject CarUpgrade::yesBtnGameObject
	GameObject_t1756533147 * ___yesBtnGameObject_5;
	// UnityEngine.GameObject CarUpgrade::noBtnGameObject
	GameObject_t1756533147 * ___noBtnGameObject_6;
	// UnityEngine.UI.Text CarUpgrade::upgradeText
	Text_t356221433 * ___upgradeText_7;
	// UnityEngine.UI.Text CarUpgrade::upgradeTextShadow
	Text_t356221433 * ___upgradeTextShadow_8;
	// UnityEngine.UI.Text CarUpgrade::upgradeBtnText
	Text_t356221433 * ___upgradeBtnText_9;
	// UnityEngine.UI.Text CarUpgrade::upgradeBtnTextShadow
	Text_t356221433 * ___upgradeBtnTextShadow_10;
	// UnityEngine.UI.Text CarUpgrade::coinText
	Text_t356221433 * ___coinText_11;
	// UnityEngine.UI.Text CarUpgrade::priceText
	Text_t356221433 * ___priceText_12;
	// UnityEngine.UI.Button CarUpgrade::upgrade
	Button_t2872111280 * ___upgrade_13;
	// UnityEngine.UI.Button CarUpgrade::previousButton
	Button_t2872111280 * ___previousButton_14;
	// UnityEngine.UI.Button CarUpgrade::nextButton
	Button_t2872111280 * ___nextButton_15;
	// UnityEngine.UI.Button CarUpgrade::backButton
	Button_t2872111280 * ___backButton_16;
	// UnityEngine.GameObject CarUpgrade::confirmUpgrade
	GameObject_t1756533147 * ___confirmUpgrade_17;
	// UnityEngine.GameObject CarUpgrade::locked
	GameObject_t1756533147 * ___locked_18;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> CarUpgrade::starList
	List_1_t1411648341 * ___starList_19;
	// System.Single CarUpgrade::lerpSpeed
	float ___lerpSpeed_20;
	// System.Single CarUpgrade::totalCoins
	float ___totalCoins_21;
	// System.Single CarUpgrade::upgradePrice
	float ___upgradePrice_22;
	// System.Int32 CarUpgrade::carSelected
	int32_t ___carSelected_23;
	// System.Single CarUpgrade::currentLevel
	float ___currentLevel_24;
	// System.Boolean CarUpgrade::carChanged
	bool ___carChanged_25;
	// System.Boolean CarUpgrade::upgraded
	bool ___upgraded_26;
	// System.Collections.Generic.List`1<System.Single> CarUpgrade::currentAttribute
	List_1_t1445631064 * ___currentAttribute_27;
	// System.Collections.Generic.List`1<System.Single> CarUpgrade::nextAttribute
	List_1_t1445631064 * ___nextAttribute_28;
	// System.Collections.Generic.List`1<System.Single> CarUpgrade::maxAttribute
	List_1_t1445631064 * ___maxAttribute_29;
	// UnityEngine.UI.Image CarUpgrade::currentBarHP
	Image_t2042527209 * ___currentBarHP_30;
	// UnityEngine.UI.Image CarUpgrade::nextBarHP
	Image_t2042527209 * ___nextBarHP_31;
	// System.Single CarUpgrade::currentHP
	float ___currentHP_32;
	// System.Single CarUpgrade::nextHP
	float ___nextHP_33;
	// System.Single CarUpgrade::maxHP
	float ___maxHP_34;
	// UnityEngine.UI.Image CarUpgrade::currentBarMP
	Image_t2042527209 * ___currentBarMP_35;
	// UnityEngine.UI.Image CarUpgrade::nextBarMP
	Image_t2042527209 * ___nextBarMP_36;
	// System.Single CarUpgrade::currentMP
	float ___currentMP_37;
	// System.Single CarUpgrade::nextMP
	float ___nextMP_38;
	// System.Single CarUpgrade::maxMP
	float ___maxMP_39;
	// UnityEngine.UI.Image CarUpgrade::currentBarSPD
	Image_t2042527209 * ___currentBarSPD_40;
	// UnityEngine.UI.Image CarUpgrade::nextBarSPD
	Image_t2042527209 * ___nextBarSPD_41;
	// System.Single CarUpgrade::currentSPD
	float ___currentSPD_42;
	// System.Single CarUpgrade::nextSPD
	float ___nextSPD_43;
	// System.Single CarUpgrade::maxSPD
	float ___maxSPD_44;
	// UnityEngine.UI.Image CarUpgrade::currentBarCDR
	Image_t2042527209 * ___currentBarCDR_45;
	// UnityEngine.UI.Image CarUpgrade::nextBarCDR
	Image_t2042527209 * ___nextBarCDR_46;
	// System.Single CarUpgrade::currentCDR
	float ___currentCDR_47;
	// System.Single CarUpgrade::nextCDR
	float ___nextCDR_48;
	// System.Single CarUpgrade::maxCDR
	float ___maxCDR_49;
	// UnityEngine.UI.Image CarUpgrade::currentBarATK
	Image_t2042527209 * ___currentBarATK_50;
	// UnityEngine.UI.Image CarUpgrade::nextBarATK
	Image_t2042527209 * ___nextBarATK_51;
	// System.Single CarUpgrade::currentATK
	float ___currentATK_52;
	// System.Single CarUpgrade::nextATK
	float ___nextATK_53;
	// System.Single CarUpgrade::maxATK
	float ___maxATK_54;
	// UnityEngine.UI.Image CarUpgrade::currentBarDEF
	Image_t2042527209 * ___currentBarDEF_55;
	// UnityEngine.UI.Image CarUpgrade::nextBarDEF
	Image_t2042527209 * ___nextBarDEF_56;
	// System.Single CarUpgrade::currentDEF
	float ___currentDEF_57;
	// System.Single CarUpgrade::nextDEF
	float ___nextDEF_58;
	// System.Single CarUpgrade::maxDEF
	float ___maxDEF_59;

public:
	inline static int32_t get_offset_of_carIcons_2() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___carIcons_2)); }
	inline SpriteU5BU5D_t3359083662* get_carIcons_2() const { return ___carIcons_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_carIcons_2() { return &___carIcons_2; }
	inline void set_carIcons_2(SpriteU5BU5D_t3359083662* value)
	{
		___carIcons_2 = value;
		Il2CppCodeGenWriteBarrier(&___carIcons_2, value);
	}

	inline static int32_t get_offset_of_carIcon_3() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___carIcon_3)); }
	inline Image_t2042527209 * get_carIcon_3() const { return ___carIcon_3; }
	inline Image_t2042527209 ** get_address_of_carIcon_3() { return &___carIcon_3; }
	inline void set_carIcon_3(Image_t2042527209 * value)
	{
		___carIcon_3 = value;
		Il2CppCodeGenWriteBarrier(&___carIcon_3, value);
	}

	inline static int32_t get_offset_of_okBtnGameObject_4() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___okBtnGameObject_4)); }
	inline GameObject_t1756533147 * get_okBtnGameObject_4() const { return ___okBtnGameObject_4; }
	inline GameObject_t1756533147 ** get_address_of_okBtnGameObject_4() { return &___okBtnGameObject_4; }
	inline void set_okBtnGameObject_4(GameObject_t1756533147 * value)
	{
		___okBtnGameObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___okBtnGameObject_4, value);
	}

	inline static int32_t get_offset_of_yesBtnGameObject_5() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___yesBtnGameObject_5)); }
	inline GameObject_t1756533147 * get_yesBtnGameObject_5() const { return ___yesBtnGameObject_5; }
	inline GameObject_t1756533147 ** get_address_of_yesBtnGameObject_5() { return &___yesBtnGameObject_5; }
	inline void set_yesBtnGameObject_5(GameObject_t1756533147 * value)
	{
		___yesBtnGameObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___yesBtnGameObject_5, value);
	}

	inline static int32_t get_offset_of_noBtnGameObject_6() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___noBtnGameObject_6)); }
	inline GameObject_t1756533147 * get_noBtnGameObject_6() const { return ___noBtnGameObject_6; }
	inline GameObject_t1756533147 ** get_address_of_noBtnGameObject_6() { return &___noBtnGameObject_6; }
	inline void set_noBtnGameObject_6(GameObject_t1756533147 * value)
	{
		___noBtnGameObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___noBtnGameObject_6, value);
	}

	inline static int32_t get_offset_of_upgradeText_7() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___upgradeText_7)); }
	inline Text_t356221433 * get_upgradeText_7() const { return ___upgradeText_7; }
	inline Text_t356221433 ** get_address_of_upgradeText_7() { return &___upgradeText_7; }
	inline void set_upgradeText_7(Text_t356221433 * value)
	{
		___upgradeText_7 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeText_7, value);
	}

	inline static int32_t get_offset_of_upgradeTextShadow_8() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___upgradeTextShadow_8)); }
	inline Text_t356221433 * get_upgradeTextShadow_8() const { return ___upgradeTextShadow_8; }
	inline Text_t356221433 ** get_address_of_upgradeTextShadow_8() { return &___upgradeTextShadow_8; }
	inline void set_upgradeTextShadow_8(Text_t356221433 * value)
	{
		___upgradeTextShadow_8 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeTextShadow_8, value);
	}

	inline static int32_t get_offset_of_upgradeBtnText_9() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___upgradeBtnText_9)); }
	inline Text_t356221433 * get_upgradeBtnText_9() const { return ___upgradeBtnText_9; }
	inline Text_t356221433 ** get_address_of_upgradeBtnText_9() { return &___upgradeBtnText_9; }
	inline void set_upgradeBtnText_9(Text_t356221433 * value)
	{
		___upgradeBtnText_9 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeBtnText_9, value);
	}

	inline static int32_t get_offset_of_upgradeBtnTextShadow_10() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___upgradeBtnTextShadow_10)); }
	inline Text_t356221433 * get_upgradeBtnTextShadow_10() const { return ___upgradeBtnTextShadow_10; }
	inline Text_t356221433 ** get_address_of_upgradeBtnTextShadow_10() { return &___upgradeBtnTextShadow_10; }
	inline void set_upgradeBtnTextShadow_10(Text_t356221433 * value)
	{
		___upgradeBtnTextShadow_10 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeBtnTextShadow_10, value);
	}

	inline static int32_t get_offset_of_coinText_11() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___coinText_11)); }
	inline Text_t356221433 * get_coinText_11() const { return ___coinText_11; }
	inline Text_t356221433 ** get_address_of_coinText_11() { return &___coinText_11; }
	inline void set_coinText_11(Text_t356221433 * value)
	{
		___coinText_11 = value;
		Il2CppCodeGenWriteBarrier(&___coinText_11, value);
	}

	inline static int32_t get_offset_of_priceText_12() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___priceText_12)); }
	inline Text_t356221433 * get_priceText_12() const { return ___priceText_12; }
	inline Text_t356221433 ** get_address_of_priceText_12() { return &___priceText_12; }
	inline void set_priceText_12(Text_t356221433 * value)
	{
		___priceText_12 = value;
		Il2CppCodeGenWriteBarrier(&___priceText_12, value);
	}

	inline static int32_t get_offset_of_upgrade_13() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___upgrade_13)); }
	inline Button_t2872111280 * get_upgrade_13() const { return ___upgrade_13; }
	inline Button_t2872111280 ** get_address_of_upgrade_13() { return &___upgrade_13; }
	inline void set_upgrade_13(Button_t2872111280 * value)
	{
		___upgrade_13 = value;
		Il2CppCodeGenWriteBarrier(&___upgrade_13, value);
	}

	inline static int32_t get_offset_of_previousButton_14() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___previousButton_14)); }
	inline Button_t2872111280 * get_previousButton_14() const { return ___previousButton_14; }
	inline Button_t2872111280 ** get_address_of_previousButton_14() { return &___previousButton_14; }
	inline void set_previousButton_14(Button_t2872111280 * value)
	{
		___previousButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___previousButton_14, value);
	}

	inline static int32_t get_offset_of_nextButton_15() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextButton_15)); }
	inline Button_t2872111280 * get_nextButton_15() const { return ___nextButton_15; }
	inline Button_t2872111280 ** get_address_of_nextButton_15() { return &___nextButton_15; }
	inline void set_nextButton_15(Button_t2872111280 * value)
	{
		___nextButton_15 = value;
		Il2CppCodeGenWriteBarrier(&___nextButton_15, value);
	}

	inline static int32_t get_offset_of_backButton_16() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___backButton_16)); }
	inline Button_t2872111280 * get_backButton_16() const { return ___backButton_16; }
	inline Button_t2872111280 ** get_address_of_backButton_16() { return &___backButton_16; }
	inline void set_backButton_16(Button_t2872111280 * value)
	{
		___backButton_16 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_16, value);
	}

	inline static int32_t get_offset_of_confirmUpgrade_17() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___confirmUpgrade_17)); }
	inline GameObject_t1756533147 * get_confirmUpgrade_17() const { return ___confirmUpgrade_17; }
	inline GameObject_t1756533147 ** get_address_of_confirmUpgrade_17() { return &___confirmUpgrade_17; }
	inline void set_confirmUpgrade_17(GameObject_t1756533147 * value)
	{
		___confirmUpgrade_17 = value;
		Il2CppCodeGenWriteBarrier(&___confirmUpgrade_17, value);
	}

	inline static int32_t get_offset_of_locked_18() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___locked_18)); }
	inline GameObject_t1756533147 * get_locked_18() const { return ___locked_18; }
	inline GameObject_t1756533147 ** get_address_of_locked_18() { return &___locked_18; }
	inline void set_locked_18(GameObject_t1756533147 * value)
	{
		___locked_18 = value;
		Il2CppCodeGenWriteBarrier(&___locked_18, value);
	}

	inline static int32_t get_offset_of_starList_19() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___starList_19)); }
	inline List_1_t1411648341 * get_starList_19() const { return ___starList_19; }
	inline List_1_t1411648341 ** get_address_of_starList_19() { return &___starList_19; }
	inline void set_starList_19(List_1_t1411648341 * value)
	{
		___starList_19 = value;
		Il2CppCodeGenWriteBarrier(&___starList_19, value);
	}

	inline static int32_t get_offset_of_lerpSpeed_20() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___lerpSpeed_20)); }
	inline float get_lerpSpeed_20() const { return ___lerpSpeed_20; }
	inline float* get_address_of_lerpSpeed_20() { return &___lerpSpeed_20; }
	inline void set_lerpSpeed_20(float value)
	{
		___lerpSpeed_20 = value;
	}

	inline static int32_t get_offset_of_totalCoins_21() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___totalCoins_21)); }
	inline float get_totalCoins_21() const { return ___totalCoins_21; }
	inline float* get_address_of_totalCoins_21() { return &___totalCoins_21; }
	inline void set_totalCoins_21(float value)
	{
		___totalCoins_21 = value;
	}

	inline static int32_t get_offset_of_upgradePrice_22() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___upgradePrice_22)); }
	inline float get_upgradePrice_22() const { return ___upgradePrice_22; }
	inline float* get_address_of_upgradePrice_22() { return &___upgradePrice_22; }
	inline void set_upgradePrice_22(float value)
	{
		___upgradePrice_22 = value;
	}

	inline static int32_t get_offset_of_carSelected_23() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___carSelected_23)); }
	inline int32_t get_carSelected_23() const { return ___carSelected_23; }
	inline int32_t* get_address_of_carSelected_23() { return &___carSelected_23; }
	inline void set_carSelected_23(int32_t value)
	{
		___carSelected_23 = value;
	}

	inline static int32_t get_offset_of_currentLevel_24() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentLevel_24)); }
	inline float get_currentLevel_24() const { return ___currentLevel_24; }
	inline float* get_address_of_currentLevel_24() { return &___currentLevel_24; }
	inline void set_currentLevel_24(float value)
	{
		___currentLevel_24 = value;
	}

	inline static int32_t get_offset_of_carChanged_25() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___carChanged_25)); }
	inline bool get_carChanged_25() const { return ___carChanged_25; }
	inline bool* get_address_of_carChanged_25() { return &___carChanged_25; }
	inline void set_carChanged_25(bool value)
	{
		___carChanged_25 = value;
	}

	inline static int32_t get_offset_of_upgraded_26() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___upgraded_26)); }
	inline bool get_upgraded_26() const { return ___upgraded_26; }
	inline bool* get_address_of_upgraded_26() { return &___upgraded_26; }
	inline void set_upgraded_26(bool value)
	{
		___upgraded_26 = value;
	}

	inline static int32_t get_offset_of_currentAttribute_27() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentAttribute_27)); }
	inline List_1_t1445631064 * get_currentAttribute_27() const { return ___currentAttribute_27; }
	inline List_1_t1445631064 ** get_address_of_currentAttribute_27() { return &___currentAttribute_27; }
	inline void set_currentAttribute_27(List_1_t1445631064 * value)
	{
		___currentAttribute_27 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttribute_27, value);
	}

	inline static int32_t get_offset_of_nextAttribute_28() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextAttribute_28)); }
	inline List_1_t1445631064 * get_nextAttribute_28() const { return ___nextAttribute_28; }
	inline List_1_t1445631064 ** get_address_of_nextAttribute_28() { return &___nextAttribute_28; }
	inline void set_nextAttribute_28(List_1_t1445631064 * value)
	{
		___nextAttribute_28 = value;
		Il2CppCodeGenWriteBarrier(&___nextAttribute_28, value);
	}

	inline static int32_t get_offset_of_maxAttribute_29() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___maxAttribute_29)); }
	inline List_1_t1445631064 * get_maxAttribute_29() const { return ___maxAttribute_29; }
	inline List_1_t1445631064 ** get_address_of_maxAttribute_29() { return &___maxAttribute_29; }
	inline void set_maxAttribute_29(List_1_t1445631064 * value)
	{
		___maxAttribute_29 = value;
		Il2CppCodeGenWriteBarrier(&___maxAttribute_29, value);
	}

	inline static int32_t get_offset_of_currentBarHP_30() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentBarHP_30)); }
	inline Image_t2042527209 * get_currentBarHP_30() const { return ___currentBarHP_30; }
	inline Image_t2042527209 ** get_address_of_currentBarHP_30() { return &___currentBarHP_30; }
	inline void set_currentBarHP_30(Image_t2042527209 * value)
	{
		___currentBarHP_30 = value;
		Il2CppCodeGenWriteBarrier(&___currentBarHP_30, value);
	}

	inline static int32_t get_offset_of_nextBarHP_31() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextBarHP_31)); }
	inline Image_t2042527209 * get_nextBarHP_31() const { return ___nextBarHP_31; }
	inline Image_t2042527209 ** get_address_of_nextBarHP_31() { return &___nextBarHP_31; }
	inline void set_nextBarHP_31(Image_t2042527209 * value)
	{
		___nextBarHP_31 = value;
		Il2CppCodeGenWriteBarrier(&___nextBarHP_31, value);
	}

	inline static int32_t get_offset_of_currentHP_32() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentHP_32)); }
	inline float get_currentHP_32() const { return ___currentHP_32; }
	inline float* get_address_of_currentHP_32() { return &___currentHP_32; }
	inline void set_currentHP_32(float value)
	{
		___currentHP_32 = value;
	}

	inline static int32_t get_offset_of_nextHP_33() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextHP_33)); }
	inline float get_nextHP_33() const { return ___nextHP_33; }
	inline float* get_address_of_nextHP_33() { return &___nextHP_33; }
	inline void set_nextHP_33(float value)
	{
		___nextHP_33 = value;
	}

	inline static int32_t get_offset_of_maxHP_34() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___maxHP_34)); }
	inline float get_maxHP_34() const { return ___maxHP_34; }
	inline float* get_address_of_maxHP_34() { return &___maxHP_34; }
	inline void set_maxHP_34(float value)
	{
		___maxHP_34 = value;
	}

	inline static int32_t get_offset_of_currentBarMP_35() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentBarMP_35)); }
	inline Image_t2042527209 * get_currentBarMP_35() const { return ___currentBarMP_35; }
	inline Image_t2042527209 ** get_address_of_currentBarMP_35() { return &___currentBarMP_35; }
	inline void set_currentBarMP_35(Image_t2042527209 * value)
	{
		___currentBarMP_35 = value;
		Il2CppCodeGenWriteBarrier(&___currentBarMP_35, value);
	}

	inline static int32_t get_offset_of_nextBarMP_36() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextBarMP_36)); }
	inline Image_t2042527209 * get_nextBarMP_36() const { return ___nextBarMP_36; }
	inline Image_t2042527209 ** get_address_of_nextBarMP_36() { return &___nextBarMP_36; }
	inline void set_nextBarMP_36(Image_t2042527209 * value)
	{
		___nextBarMP_36 = value;
		Il2CppCodeGenWriteBarrier(&___nextBarMP_36, value);
	}

	inline static int32_t get_offset_of_currentMP_37() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentMP_37)); }
	inline float get_currentMP_37() const { return ___currentMP_37; }
	inline float* get_address_of_currentMP_37() { return &___currentMP_37; }
	inline void set_currentMP_37(float value)
	{
		___currentMP_37 = value;
	}

	inline static int32_t get_offset_of_nextMP_38() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextMP_38)); }
	inline float get_nextMP_38() const { return ___nextMP_38; }
	inline float* get_address_of_nextMP_38() { return &___nextMP_38; }
	inline void set_nextMP_38(float value)
	{
		___nextMP_38 = value;
	}

	inline static int32_t get_offset_of_maxMP_39() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___maxMP_39)); }
	inline float get_maxMP_39() const { return ___maxMP_39; }
	inline float* get_address_of_maxMP_39() { return &___maxMP_39; }
	inline void set_maxMP_39(float value)
	{
		___maxMP_39 = value;
	}

	inline static int32_t get_offset_of_currentBarSPD_40() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentBarSPD_40)); }
	inline Image_t2042527209 * get_currentBarSPD_40() const { return ___currentBarSPD_40; }
	inline Image_t2042527209 ** get_address_of_currentBarSPD_40() { return &___currentBarSPD_40; }
	inline void set_currentBarSPD_40(Image_t2042527209 * value)
	{
		___currentBarSPD_40 = value;
		Il2CppCodeGenWriteBarrier(&___currentBarSPD_40, value);
	}

	inline static int32_t get_offset_of_nextBarSPD_41() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextBarSPD_41)); }
	inline Image_t2042527209 * get_nextBarSPD_41() const { return ___nextBarSPD_41; }
	inline Image_t2042527209 ** get_address_of_nextBarSPD_41() { return &___nextBarSPD_41; }
	inline void set_nextBarSPD_41(Image_t2042527209 * value)
	{
		___nextBarSPD_41 = value;
		Il2CppCodeGenWriteBarrier(&___nextBarSPD_41, value);
	}

	inline static int32_t get_offset_of_currentSPD_42() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentSPD_42)); }
	inline float get_currentSPD_42() const { return ___currentSPD_42; }
	inline float* get_address_of_currentSPD_42() { return &___currentSPD_42; }
	inline void set_currentSPD_42(float value)
	{
		___currentSPD_42 = value;
	}

	inline static int32_t get_offset_of_nextSPD_43() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextSPD_43)); }
	inline float get_nextSPD_43() const { return ___nextSPD_43; }
	inline float* get_address_of_nextSPD_43() { return &___nextSPD_43; }
	inline void set_nextSPD_43(float value)
	{
		___nextSPD_43 = value;
	}

	inline static int32_t get_offset_of_maxSPD_44() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___maxSPD_44)); }
	inline float get_maxSPD_44() const { return ___maxSPD_44; }
	inline float* get_address_of_maxSPD_44() { return &___maxSPD_44; }
	inline void set_maxSPD_44(float value)
	{
		___maxSPD_44 = value;
	}

	inline static int32_t get_offset_of_currentBarCDR_45() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentBarCDR_45)); }
	inline Image_t2042527209 * get_currentBarCDR_45() const { return ___currentBarCDR_45; }
	inline Image_t2042527209 ** get_address_of_currentBarCDR_45() { return &___currentBarCDR_45; }
	inline void set_currentBarCDR_45(Image_t2042527209 * value)
	{
		___currentBarCDR_45 = value;
		Il2CppCodeGenWriteBarrier(&___currentBarCDR_45, value);
	}

	inline static int32_t get_offset_of_nextBarCDR_46() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextBarCDR_46)); }
	inline Image_t2042527209 * get_nextBarCDR_46() const { return ___nextBarCDR_46; }
	inline Image_t2042527209 ** get_address_of_nextBarCDR_46() { return &___nextBarCDR_46; }
	inline void set_nextBarCDR_46(Image_t2042527209 * value)
	{
		___nextBarCDR_46 = value;
		Il2CppCodeGenWriteBarrier(&___nextBarCDR_46, value);
	}

	inline static int32_t get_offset_of_currentCDR_47() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentCDR_47)); }
	inline float get_currentCDR_47() const { return ___currentCDR_47; }
	inline float* get_address_of_currentCDR_47() { return &___currentCDR_47; }
	inline void set_currentCDR_47(float value)
	{
		___currentCDR_47 = value;
	}

	inline static int32_t get_offset_of_nextCDR_48() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextCDR_48)); }
	inline float get_nextCDR_48() const { return ___nextCDR_48; }
	inline float* get_address_of_nextCDR_48() { return &___nextCDR_48; }
	inline void set_nextCDR_48(float value)
	{
		___nextCDR_48 = value;
	}

	inline static int32_t get_offset_of_maxCDR_49() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___maxCDR_49)); }
	inline float get_maxCDR_49() const { return ___maxCDR_49; }
	inline float* get_address_of_maxCDR_49() { return &___maxCDR_49; }
	inline void set_maxCDR_49(float value)
	{
		___maxCDR_49 = value;
	}

	inline static int32_t get_offset_of_currentBarATK_50() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentBarATK_50)); }
	inline Image_t2042527209 * get_currentBarATK_50() const { return ___currentBarATK_50; }
	inline Image_t2042527209 ** get_address_of_currentBarATK_50() { return &___currentBarATK_50; }
	inline void set_currentBarATK_50(Image_t2042527209 * value)
	{
		___currentBarATK_50 = value;
		Il2CppCodeGenWriteBarrier(&___currentBarATK_50, value);
	}

	inline static int32_t get_offset_of_nextBarATK_51() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextBarATK_51)); }
	inline Image_t2042527209 * get_nextBarATK_51() const { return ___nextBarATK_51; }
	inline Image_t2042527209 ** get_address_of_nextBarATK_51() { return &___nextBarATK_51; }
	inline void set_nextBarATK_51(Image_t2042527209 * value)
	{
		___nextBarATK_51 = value;
		Il2CppCodeGenWriteBarrier(&___nextBarATK_51, value);
	}

	inline static int32_t get_offset_of_currentATK_52() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentATK_52)); }
	inline float get_currentATK_52() const { return ___currentATK_52; }
	inline float* get_address_of_currentATK_52() { return &___currentATK_52; }
	inline void set_currentATK_52(float value)
	{
		___currentATK_52 = value;
	}

	inline static int32_t get_offset_of_nextATK_53() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextATK_53)); }
	inline float get_nextATK_53() const { return ___nextATK_53; }
	inline float* get_address_of_nextATK_53() { return &___nextATK_53; }
	inline void set_nextATK_53(float value)
	{
		___nextATK_53 = value;
	}

	inline static int32_t get_offset_of_maxATK_54() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___maxATK_54)); }
	inline float get_maxATK_54() const { return ___maxATK_54; }
	inline float* get_address_of_maxATK_54() { return &___maxATK_54; }
	inline void set_maxATK_54(float value)
	{
		___maxATK_54 = value;
	}

	inline static int32_t get_offset_of_currentBarDEF_55() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentBarDEF_55)); }
	inline Image_t2042527209 * get_currentBarDEF_55() const { return ___currentBarDEF_55; }
	inline Image_t2042527209 ** get_address_of_currentBarDEF_55() { return &___currentBarDEF_55; }
	inline void set_currentBarDEF_55(Image_t2042527209 * value)
	{
		___currentBarDEF_55 = value;
		Il2CppCodeGenWriteBarrier(&___currentBarDEF_55, value);
	}

	inline static int32_t get_offset_of_nextBarDEF_56() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextBarDEF_56)); }
	inline Image_t2042527209 * get_nextBarDEF_56() const { return ___nextBarDEF_56; }
	inline Image_t2042527209 ** get_address_of_nextBarDEF_56() { return &___nextBarDEF_56; }
	inline void set_nextBarDEF_56(Image_t2042527209 * value)
	{
		___nextBarDEF_56 = value;
		Il2CppCodeGenWriteBarrier(&___nextBarDEF_56, value);
	}

	inline static int32_t get_offset_of_currentDEF_57() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___currentDEF_57)); }
	inline float get_currentDEF_57() const { return ___currentDEF_57; }
	inline float* get_address_of_currentDEF_57() { return &___currentDEF_57; }
	inline void set_currentDEF_57(float value)
	{
		___currentDEF_57 = value;
	}

	inline static int32_t get_offset_of_nextDEF_58() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___nextDEF_58)); }
	inline float get_nextDEF_58() const { return ___nextDEF_58; }
	inline float* get_address_of_nextDEF_58() { return &___nextDEF_58; }
	inline void set_nextDEF_58(float value)
	{
		___nextDEF_58 = value;
	}

	inline static int32_t get_offset_of_maxDEF_59() { return static_cast<int32_t>(offsetof(CarUpgrade_t3205128182, ___maxDEF_59)); }
	inline float get_maxDEF_59() const { return ___maxDEF_59; }
	inline float* get_address_of_maxDEF_59() { return &___maxDEF_59; }
	inline void set_maxDEF_59(float value)
	{
		___maxDEF_59 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
