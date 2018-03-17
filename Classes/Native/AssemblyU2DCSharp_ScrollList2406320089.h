#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// SimpleObjectPool
struct SimpleObjectPool_t1737383141;
// UnityEngine.UI.Text
struct Text_t356221433;
// DetailPanelController
struct DetailPanelController_t1354705833;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollList
struct  ScrollList_t2406320089  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ScrollList::contentPanel
	Transform_t3275118058 * ___contentPanel_2;
	// SimpleObjectPool ScrollList::buttonObjectPool
	SimpleObjectPool_t1737383141 * ___buttonObjectPool_3;
	// UnityEngine.UI.Text ScrollList::TotalCoins
	Text_t356221433 * ___TotalCoins_4;
	// DetailPanelController ScrollList::detailPanelControl
	DetailPanelController_t1354705833 * ___detailPanelControl_5;

public:
	inline static int32_t get_offset_of_contentPanel_2() { return static_cast<int32_t>(offsetof(ScrollList_t2406320089, ___contentPanel_2)); }
	inline Transform_t3275118058 * get_contentPanel_2() const { return ___contentPanel_2; }
	inline Transform_t3275118058 ** get_address_of_contentPanel_2() { return &___contentPanel_2; }
	inline void set_contentPanel_2(Transform_t3275118058 * value)
	{
		___contentPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___contentPanel_2, value);
	}

	inline static int32_t get_offset_of_buttonObjectPool_3() { return static_cast<int32_t>(offsetof(ScrollList_t2406320089, ___buttonObjectPool_3)); }
	inline SimpleObjectPool_t1737383141 * get_buttonObjectPool_3() const { return ___buttonObjectPool_3; }
	inline SimpleObjectPool_t1737383141 ** get_address_of_buttonObjectPool_3() { return &___buttonObjectPool_3; }
	inline void set_buttonObjectPool_3(SimpleObjectPool_t1737383141 * value)
	{
		___buttonObjectPool_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonObjectPool_3, value);
	}

	inline static int32_t get_offset_of_TotalCoins_4() { return static_cast<int32_t>(offsetof(ScrollList_t2406320089, ___TotalCoins_4)); }
	inline Text_t356221433 * get_TotalCoins_4() const { return ___TotalCoins_4; }
	inline Text_t356221433 ** get_address_of_TotalCoins_4() { return &___TotalCoins_4; }
	inline void set_TotalCoins_4(Text_t356221433 * value)
	{
		___TotalCoins_4 = value;
		Il2CppCodeGenWriteBarrier(&___TotalCoins_4, value);
	}

	inline static int32_t get_offset_of_detailPanelControl_5() { return static_cast<int32_t>(offsetof(ScrollList_t2406320089, ___detailPanelControl_5)); }
	inline DetailPanelController_t1354705833 * get_detailPanelControl_5() const { return ___detailPanelControl_5; }
	inline DetailPanelController_t1354705833 ** get_address_of_detailPanelControl_5() { return &___detailPanelControl_5; }
	inline void set_detailPanelControl_5(DetailPanelController_t1354705833 * value)
	{
		___detailPanelControl_5 = value;
		Il2CppCodeGenWriteBarrier(&___detailPanelControl_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
