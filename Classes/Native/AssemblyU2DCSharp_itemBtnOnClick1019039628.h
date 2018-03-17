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
// ItemCollector
struct ItemCollector_t3470289710;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// itemBtnOnClick
struct  itemBtnOnClick_t1019039628  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button itemBtnOnClick::ItemBtn
	Button_t2872111280 * ___ItemBtn_2;
	// ItemCollector itemBtnOnClick::playerItemCollector
	ItemCollector_t3470289710 * ___playerItemCollector_3;
	// UnityEngine.Sprite[] itemBtnOnClick::itemIcons
	SpriteU5BU5D_t3359083662* ___itemIcons_4;
	// UnityEngine.UI.Image itemBtnOnClick::itemBtnImage
	Image_t2042527209 * ___itemBtnImage_5;
	// System.Int32 itemBtnOnClick::itemIdx
	int32_t ___itemIdx_6;

public:
	inline static int32_t get_offset_of_ItemBtn_2() { return static_cast<int32_t>(offsetof(itemBtnOnClick_t1019039628, ___ItemBtn_2)); }
	inline Button_t2872111280 * get_ItemBtn_2() const { return ___ItemBtn_2; }
	inline Button_t2872111280 ** get_address_of_ItemBtn_2() { return &___ItemBtn_2; }
	inline void set_ItemBtn_2(Button_t2872111280 * value)
	{
		___ItemBtn_2 = value;
		Il2CppCodeGenWriteBarrier(&___ItemBtn_2, value);
	}

	inline static int32_t get_offset_of_playerItemCollector_3() { return static_cast<int32_t>(offsetof(itemBtnOnClick_t1019039628, ___playerItemCollector_3)); }
	inline ItemCollector_t3470289710 * get_playerItemCollector_3() const { return ___playerItemCollector_3; }
	inline ItemCollector_t3470289710 ** get_address_of_playerItemCollector_3() { return &___playerItemCollector_3; }
	inline void set_playerItemCollector_3(ItemCollector_t3470289710 * value)
	{
		___playerItemCollector_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerItemCollector_3, value);
	}

	inline static int32_t get_offset_of_itemIcons_4() { return static_cast<int32_t>(offsetof(itemBtnOnClick_t1019039628, ___itemIcons_4)); }
	inline SpriteU5BU5D_t3359083662* get_itemIcons_4() const { return ___itemIcons_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_itemIcons_4() { return &___itemIcons_4; }
	inline void set_itemIcons_4(SpriteU5BU5D_t3359083662* value)
	{
		___itemIcons_4 = value;
		Il2CppCodeGenWriteBarrier(&___itemIcons_4, value);
	}

	inline static int32_t get_offset_of_itemBtnImage_5() { return static_cast<int32_t>(offsetof(itemBtnOnClick_t1019039628, ___itemBtnImage_5)); }
	inline Image_t2042527209 * get_itemBtnImage_5() const { return ___itemBtnImage_5; }
	inline Image_t2042527209 ** get_address_of_itemBtnImage_5() { return &___itemBtnImage_5; }
	inline void set_itemBtnImage_5(Image_t2042527209 * value)
	{
		___itemBtnImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___itemBtnImage_5, value);
	}

	inline static int32_t get_offset_of_itemIdx_6() { return static_cast<int32_t>(offsetof(itemBtnOnClick_t1019039628, ___itemIdx_6)); }
	inline int32_t get_itemIdx_6() const { return ___itemIdx_6; }
	inline int32_t* get_address_of_itemIdx_6() { return &___itemIdx_6; }
	inline void set_itemIdx_6(int32_t value)
	{
		___itemIdx_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
