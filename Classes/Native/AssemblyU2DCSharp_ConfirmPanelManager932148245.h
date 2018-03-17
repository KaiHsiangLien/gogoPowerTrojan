#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// DetailPanelController
struct DetailPanelController_t1354705833;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// CardStoreButtons
struct CardStoreButtons_t2774014152;
// System.String
struct String_t;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// GetCardPanel
struct GetCardPanel_t2346207600;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfirmPanelManager
struct  ConfirmPanelManager_t932148245  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ConfirmPanelManager::price
	float ___price_2;
	// DetailPanelController ConfirmPanelManager::detailController
	DetailPanelController_t1354705833 * ___detailController_3;
	// UnityEngine.GameObject ConfirmPanelManager::confirmBtn
	GameObject_t1756533147 * ___confirmBtn_4;
	// UnityEngine.GameObject ConfirmPanelManager::cancelBtn
	GameObject_t1756533147 * ___cancelBtn_5;
	// UnityEngine.GameObject ConfirmPanelManager::okBtn
	GameObject_t1756533147 * ___okBtn_6;
	// CardStoreButtons ConfirmPanelManager::cardStoreButtons
	CardStoreButtons_t2774014152 * ___cardStoreButtons_7;
	// System.Int32 ConfirmPanelManager::sellID
	int32_t ___sellID_8;
	// System.String ConfirmPanelManager::sellAttr
	String_t* ___sellAttr_9;
	// System.String ConfirmPanelManager::buyKey
	String_t* ___buyKey_10;
	// UnityEngine.UI.ScrollRect ConfirmPanelManager::scrollView
	ScrollRect_t1199013257 * ___scrollView_11;
	// UnityEngine.GameObject ConfirmPanelManager::MyGifImage
	GameObject_t1756533147 * ___MyGifImage_12;
	// GetCardPanel ConfirmPanelManager::getCardPanel
	GetCardPanel_t2346207600 * ___getCardPanel_13;
	// UnityEngine.UI.Text ConfirmPanelManager::confirmText
	Text_t356221433 * ___confirmText_14;

public:
	inline static int32_t get_offset_of_price_2() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___price_2)); }
	inline float get_price_2() const { return ___price_2; }
	inline float* get_address_of_price_2() { return &___price_2; }
	inline void set_price_2(float value)
	{
		___price_2 = value;
	}

	inline static int32_t get_offset_of_detailController_3() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___detailController_3)); }
	inline DetailPanelController_t1354705833 * get_detailController_3() const { return ___detailController_3; }
	inline DetailPanelController_t1354705833 ** get_address_of_detailController_3() { return &___detailController_3; }
	inline void set_detailController_3(DetailPanelController_t1354705833 * value)
	{
		___detailController_3 = value;
		Il2CppCodeGenWriteBarrier(&___detailController_3, value);
	}

	inline static int32_t get_offset_of_confirmBtn_4() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___confirmBtn_4)); }
	inline GameObject_t1756533147 * get_confirmBtn_4() const { return ___confirmBtn_4; }
	inline GameObject_t1756533147 ** get_address_of_confirmBtn_4() { return &___confirmBtn_4; }
	inline void set_confirmBtn_4(GameObject_t1756533147 * value)
	{
		___confirmBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___confirmBtn_4, value);
	}

	inline static int32_t get_offset_of_cancelBtn_5() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___cancelBtn_5)); }
	inline GameObject_t1756533147 * get_cancelBtn_5() const { return ___cancelBtn_5; }
	inline GameObject_t1756533147 ** get_address_of_cancelBtn_5() { return &___cancelBtn_5; }
	inline void set_cancelBtn_5(GameObject_t1756533147 * value)
	{
		___cancelBtn_5 = value;
		Il2CppCodeGenWriteBarrier(&___cancelBtn_5, value);
	}

	inline static int32_t get_offset_of_okBtn_6() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___okBtn_6)); }
	inline GameObject_t1756533147 * get_okBtn_6() const { return ___okBtn_6; }
	inline GameObject_t1756533147 ** get_address_of_okBtn_6() { return &___okBtn_6; }
	inline void set_okBtn_6(GameObject_t1756533147 * value)
	{
		___okBtn_6 = value;
		Il2CppCodeGenWriteBarrier(&___okBtn_6, value);
	}

	inline static int32_t get_offset_of_cardStoreButtons_7() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___cardStoreButtons_7)); }
	inline CardStoreButtons_t2774014152 * get_cardStoreButtons_7() const { return ___cardStoreButtons_7; }
	inline CardStoreButtons_t2774014152 ** get_address_of_cardStoreButtons_7() { return &___cardStoreButtons_7; }
	inline void set_cardStoreButtons_7(CardStoreButtons_t2774014152 * value)
	{
		___cardStoreButtons_7 = value;
		Il2CppCodeGenWriteBarrier(&___cardStoreButtons_7, value);
	}

	inline static int32_t get_offset_of_sellID_8() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___sellID_8)); }
	inline int32_t get_sellID_8() const { return ___sellID_8; }
	inline int32_t* get_address_of_sellID_8() { return &___sellID_8; }
	inline void set_sellID_8(int32_t value)
	{
		___sellID_8 = value;
	}

	inline static int32_t get_offset_of_sellAttr_9() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___sellAttr_9)); }
	inline String_t* get_sellAttr_9() const { return ___sellAttr_9; }
	inline String_t** get_address_of_sellAttr_9() { return &___sellAttr_9; }
	inline void set_sellAttr_9(String_t* value)
	{
		___sellAttr_9 = value;
		Il2CppCodeGenWriteBarrier(&___sellAttr_9, value);
	}

	inline static int32_t get_offset_of_buyKey_10() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___buyKey_10)); }
	inline String_t* get_buyKey_10() const { return ___buyKey_10; }
	inline String_t** get_address_of_buyKey_10() { return &___buyKey_10; }
	inline void set_buyKey_10(String_t* value)
	{
		___buyKey_10 = value;
		Il2CppCodeGenWriteBarrier(&___buyKey_10, value);
	}

	inline static int32_t get_offset_of_scrollView_11() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___scrollView_11)); }
	inline ScrollRect_t1199013257 * get_scrollView_11() const { return ___scrollView_11; }
	inline ScrollRect_t1199013257 ** get_address_of_scrollView_11() { return &___scrollView_11; }
	inline void set_scrollView_11(ScrollRect_t1199013257 * value)
	{
		___scrollView_11 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_11, value);
	}

	inline static int32_t get_offset_of_MyGifImage_12() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___MyGifImage_12)); }
	inline GameObject_t1756533147 * get_MyGifImage_12() const { return ___MyGifImage_12; }
	inline GameObject_t1756533147 ** get_address_of_MyGifImage_12() { return &___MyGifImage_12; }
	inline void set_MyGifImage_12(GameObject_t1756533147 * value)
	{
		___MyGifImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___MyGifImage_12, value);
	}

	inline static int32_t get_offset_of_getCardPanel_13() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___getCardPanel_13)); }
	inline GetCardPanel_t2346207600 * get_getCardPanel_13() const { return ___getCardPanel_13; }
	inline GetCardPanel_t2346207600 ** get_address_of_getCardPanel_13() { return &___getCardPanel_13; }
	inline void set_getCardPanel_13(GetCardPanel_t2346207600 * value)
	{
		___getCardPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___getCardPanel_13, value);
	}

	inline static int32_t get_offset_of_confirmText_14() { return static_cast<int32_t>(offsetof(ConfirmPanelManager_t932148245, ___confirmText_14)); }
	inline Text_t356221433 * get_confirmText_14() const { return ___confirmText_14; }
	inline Text_t356221433 ** get_address_of_confirmText_14() { return &___confirmText_14; }
	inline void set_confirmText_14(Text_t356221433 * value)
	{
		___confirmText_14 = value;
		Il2CppCodeGenWriteBarrier(&___confirmText_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
