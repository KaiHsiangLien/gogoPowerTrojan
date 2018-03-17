#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// DetailPanelController
struct DetailPanelController_t1354705833;
// IconController
struct IconController_t3007737481;
// JSONObject
struct JSONObject_t1971882247;
// System.String
struct String_t;
// BuyCardScrollList
struct BuyCardScrollList_t3183790095;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GetCardPanel
struct GetCardPanel_t2346207600;
// UnityEngine.Random
struct Random_t1170710517;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BuyCardButton
struct  BuyCardButton_t374186166  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button BuyCardButton::button
	Button_t2872111280 * ___button_2;
	// UnityEngine.UI.Text BuyCardButton::nameLabel
	Text_t356221433 * ___nameLabel_3;
	// UnityEngine.UI.Text BuyCardButton::priceLabel
	Text_t356221433 * ___priceLabel_4;
	// UnityEngine.UI.Image BuyCardButton::iconImage
	Image_t2042527209 * ___iconImage_5;
	// DetailPanelController BuyCardButton::detailPanelControl
	DetailPanelController_t1354705833 * ___detailPanelControl_6;
	// IconController BuyCardButton::iconControl
	IconController_t3007737481 * ___iconControl_7;
	// JSONObject BuyCardButton::buyTypeInfo
	JSONObject_t1971882247 * ___buyTypeInfo_8;
	// System.String BuyCardButton::buyType
	String_t* ___buyType_9;
	// BuyCardScrollList BuyCardButton::buyCardList
	BuyCardScrollList_t3183790095 * ___buyCardList_10;
	// UnityEngine.GameObject BuyCardButton::detailPanel
	GameObject_t1756533147 * ___detailPanel_11;
	// UnityEngine.GameObject BuyCardButton::confirmPanel
	GameObject_t1756533147 * ___confirmPanel_12;
	// GetCardPanel BuyCardButton::getCardPanel
	GetCardPanel_t2346207600 * ___getCardPanel_13;
	// UnityEngine.Random BuyCardButton::random
	Random_t1170710517 * ___random_14;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___button_2)); }
	inline Button_t2872111280 * get_button_2() const { return ___button_2; }
	inline Button_t2872111280 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t2872111280 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_nameLabel_3() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___nameLabel_3)); }
	inline Text_t356221433 * get_nameLabel_3() const { return ___nameLabel_3; }
	inline Text_t356221433 ** get_address_of_nameLabel_3() { return &___nameLabel_3; }
	inline void set_nameLabel_3(Text_t356221433 * value)
	{
		___nameLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___nameLabel_3, value);
	}

	inline static int32_t get_offset_of_priceLabel_4() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___priceLabel_4)); }
	inline Text_t356221433 * get_priceLabel_4() const { return ___priceLabel_4; }
	inline Text_t356221433 ** get_address_of_priceLabel_4() { return &___priceLabel_4; }
	inline void set_priceLabel_4(Text_t356221433 * value)
	{
		___priceLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___priceLabel_4, value);
	}

	inline static int32_t get_offset_of_iconImage_5() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___iconImage_5)); }
	inline Image_t2042527209 * get_iconImage_5() const { return ___iconImage_5; }
	inline Image_t2042527209 ** get_address_of_iconImage_5() { return &___iconImage_5; }
	inline void set_iconImage_5(Image_t2042527209 * value)
	{
		___iconImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___iconImage_5, value);
	}

	inline static int32_t get_offset_of_detailPanelControl_6() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___detailPanelControl_6)); }
	inline DetailPanelController_t1354705833 * get_detailPanelControl_6() const { return ___detailPanelControl_6; }
	inline DetailPanelController_t1354705833 ** get_address_of_detailPanelControl_6() { return &___detailPanelControl_6; }
	inline void set_detailPanelControl_6(DetailPanelController_t1354705833 * value)
	{
		___detailPanelControl_6 = value;
		Il2CppCodeGenWriteBarrier(&___detailPanelControl_6, value);
	}

	inline static int32_t get_offset_of_iconControl_7() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___iconControl_7)); }
	inline IconController_t3007737481 * get_iconControl_7() const { return ___iconControl_7; }
	inline IconController_t3007737481 ** get_address_of_iconControl_7() { return &___iconControl_7; }
	inline void set_iconControl_7(IconController_t3007737481 * value)
	{
		___iconControl_7 = value;
		Il2CppCodeGenWriteBarrier(&___iconControl_7, value);
	}

	inline static int32_t get_offset_of_buyTypeInfo_8() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___buyTypeInfo_8)); }
	inline JSONObject_t1971882247 * get_buyTypeInfo_8() const { return ___buyTypeInfo_8; }
	inline JSONObject_t1971882247 ** get_address_of_buyTypeInfo_8() { return &___buyTypeInfo_8; }
	inline void set_buyTypeInfo_8(JSONObject_t1971882247 * value)
	{
		___buyTypeInfo_8 = value;
		Il2CppCodeGenWriteBarrier(&___buyTypeInfo_8, value);
	}

	inline static int32_t get_offset_of_buyType_9() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___buyType_9)); }
	inline String_t* get_buyType_9() const { return ___buyType_9; }
	inline String_t** get_address_of_buyType_9() { return &___buyType_9; }
	inline void set_buyType_9(String_t* value)
	{
		___buyType_9 = value;
		Il2CppCodeGenWriteBarrier(&___buyType_9, value);
	}

	inline static int32_t get_offset_of_buyCardList_10() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___buyCardList_10)); }
	inline BuyCardScrollList_t3183790095 * get_buyCardList_10() const { return ___buyCardList_10; }
	inline BuyCardScrollList_t3183790095 ** get_address_of_buyCardList_10() { return &___buyCardList_10; }
	inline void set_buyCardList_10(BuyCardScrollList_t3183790095 * value)
	{
		___buyCardList_10 = value;
		Il2CppCodeGenWriteBarrier(&___buyCardList_10, value);
	}

	inline static int32_t get_offset_of_detailPanel_11() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___detailPanel_11)); }
	inline GameObject_t1756533147 * get_detailPanel_11() const { return ___detailPanel_11; }
	inline GameObject_t1756533147 ** get_address_of_detailPanel_11() { return &___detailPanel_11; }
	inline void set_detailPanel_11(GameObject_t1756533147 * value)
	{
		___detailPanel_11 = value;
		Il2CppCodeGenWriteBarrier(&___detailPanel_11, value);
	}

	inline static int32_t get_offset_of_confirmPanel_12() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___confirmPanel_12)); }
	inline GameObject_t1756533147 * get_confirmPanel_12() const { return ___confirmPanel_12; }
	inline GameObject_t1756533147 ** get_address_of_confirmPanel_12() { return &___confirmPanel_12; }
	inline void set_confirmPanel_12(GameObject_t1756533147 * value)
	{
		___confirmPanel_12 = value;
		Il2CppCodeGenWriteBarrier(&___confirmPanel_12, value);
	}

	inline static int32_t get_offset_of_getCardPanel_13() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___getCardPanel_13)); }
	inline GetCardPanel_t2346207600 * get_getCardPanel_13() const { return ___getCardPanel_13; }
	inline GetCardPanel_t2346207600 ** get_address_of_getCardPanel_13() { return &___getCardPanel_13; }
	inline void set_getCardPanel_13(GetCardPanel_t2346207600 * value)
	{
		___getCardPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___getCardPanel_13, value);
	}

	inline static int32_t get_offset_of_random_14() { return static_cast<int32_t>(offsetof(BuyCardButton_t374186166, ___random_14)); }
	inline Random_t1170710517 * get_random_14() const { return ___random_14; }
	inline Random_t1170710517 ** get_address_of_random_14() { return &___random_14; }
	inline void set_random_14(Random_t1170710517 * value)
	{
		___random_14 = value;
		Il2CppCodeGenWriteBarrier(&___random_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
