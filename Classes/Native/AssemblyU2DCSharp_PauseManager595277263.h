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
// StatImageManager
struct StatImageManager_t3694657478;
// StatBtnOnClick
struct StatBtnOnClick_t2919959295;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseManager
struct  PauseManager_t595277263  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button PauseManager::btn
	Button_t2872111280 * ___btn_2;
	// StatImageManager PauseManager::statManager
	StatImageManager_t3694657478 * ___statManager_3;
	// StatBtnOnClick PauseManager::statBtn
	StatBtnOnClick_t2919959295 * ___statBtn_4;

public:
	inline static int32_t get_offset_of_btn_2() { return static_cast<int32_t>(offsetof(PauseManager_t595277263, ___btn_2)); }
	inline Button_t2872111280 * get_btn_2() const { return ___btn_2; }
	inline Button_t2872111280 ** get_address_of_btn_2() { return &___btn_2; }
	inline void set_btn_2(Button_t2872111280 * value)
	{
		___btn_2 = value;
		Il2CppCodeGenWriteBarrier(&___btn_2, value);
	}

	inline static int32_t get_offset_of_statManager_3() { return static_cast<int32_t>(offsetof(PauseManager_t595277263, ___statManager_3)); }
	inline StatImageManager_t3694657478 * get_statManager_3() const { return ___statManager_3; }
	inline StatImageManager_t3694657478 ** get_address_of_statManager_3() { return &___statManager_3; }
	inline void set_statManager_3(StatImageManager_t3694657478 * value)
	{
		___statManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___statManager_3, value);
	}

	inline static int32_t get_offset_of_statBtn_4() { return static_cast<int32_t>(offsetof(PauseManager_t595277263, ___statBtn_4)); }
	inline StatBtnOnClick_t2919959295 * get_statBtn_4() const { return ___statBtn_4; }
	inline StatBtnOnClick_t2919959295 ** get_address_of_statBtn_4() { return &___statBtn_4; }
	inline void set_statBtn_4(StatBtnOnClick_t2919959295 * value)
	{
		___statBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___statBtn_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
