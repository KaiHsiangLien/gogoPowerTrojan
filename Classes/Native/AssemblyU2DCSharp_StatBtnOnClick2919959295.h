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
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StatBtnOnClick
struct  StatBtnOnClick_t2919959295  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean StatBtnOnClick::pauseFlag
	bool ___pauseFlag_2;
	// UnityEngine.UI.Button StatBtnOnClick::leaveBtn
	Button_t2872111280 * ___leaveBtn_3;
	// UnityEngine.UI.Button StatBtnOnClick::againBtn
	Button_t2872111280 * ___againBtn_4;
	// StatImageManager StatBtnOnClick::statManager
	StatImageManager_t3694657478 * ___statManager_5;
	// UnityEngine.GameObject StatBtnOnClick::reloadImage
	GameObject_t1756533147 * ___reloadImage_6;

public:
	inline static int32_t get_offset_of_pauseFlag_2() { return static_cast<int32_t>(offsetof(StatBtnOnClick_t2919959295, ___pauseFlag_2)); }
	inline bool get_pauseFlag_2() const { return ___pauseFlag_2; }
	inline bool* get_address_of_pauseFlag_2() { return &___pauseFlag_2; }
	inline void set_pauseFlag_2(bool value)
	{
		___pauseFlag_2 = value;
	}

	inline static int32_t get_offset_of_leaveBtn_3() { return static_cast<int32_t>(offsetof(StatBtnOnClick_t2919959295, ___leaveBtn_3)); }
	inline Button_t2872111280 * get_leaveBtn_3() const { return ___leaveBtn_3; }
	inline Button_t2872111280 ** get_address_of_leaveBtn_3() { return &___leaveBtn_3; }
	inline void set_leaveBtn_3(Button_t2872111280 * value)
	{
		___leaveBtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___leaveBtn_3, value);
	}

	inline static int32_t get_offset_of_againBtn_4() { return static_cast<int32_t>(offsetof(StatBtnOnClick_t2919959295, ___againBtn_4)); }
	inline Button_t2872111280 * get_againBtn_4() const { return ___againBtn_4; }
	inline Button_t2872111280 ** get_address_of_againBtn_4() { return &___againBtn_4; }
	inline void set_againBtn_4(Button_t2872111280 * value)
	{
		___againBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___againBtn_4, value);
	}

	inline static int32_t get_offset_of_statManager_5() { return static_cast<int32_t>(offsetof(StatBtnOnClick_t2919959295, ___statManager_5)); }
	inline StatImageManager_t3694657478 * get_statManager_5() const { return ___statManager_5; }
	inline StatImageManager_t3694657478 ** get_address_of_statManager_5() { return &___statManager_5; }
	inline void set_statManager_5(StatImageManager_t3694657478 * value)
	{
		___statManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___statManager_5, value);
	}

	inline static int32_t get_offset_of_reloadImage_6() { return static_cast<int32_t>(offsetof(StatBtnOnClick_t2919959295, ___reloadImage_6)); }
	inline GameObject_t1756533147 * get_reloadImage_6() const { return ___reloadImage_6; }
	inline GameObject_t1756533147 ** get_address_of_reloadImage_6() { return &___reloadImage_6; }
	inline void set_reloadImage_6(GameObject_t1756533147 * value)
	{
		___reloadImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___reloadImage_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
