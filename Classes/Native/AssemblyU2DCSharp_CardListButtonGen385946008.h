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
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardListButtonGen
struct  CardListButtonGen_t385946008  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CardListButtonGen::buttonPrefab
	GameObject_t1756533147 * ___buttonPrefab_2;
	// UnityEngine.GameObject CardListButtonGen::content
	GameObject_t1756533147 * ___content_3;
	// System.Single CardListButtonGen::buttonHeight
	float ___buttonHeight_4;
	// UnityEngine.UI.Text CardListButtonGen::title
	Text_t356221433 * ___title_5;
	// UnityEngine.UI.Text CardListButtonGen::description
	Text_t356221433 * ___description_6;

public:
	inline static int32_t get_offset_of_buttonPrefab_2() { return static_cast<int32_t>(offsetof(CardListButtonGen_t385946008, ___buttonPrefab_2)); }
	inline GameObject_t1756533147 * get_buttonPrefab_2() const { return ___buttonPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_buttonPrefab_2() { return &___buttonPrefab_2; }
	inline void set_buttonPrefab_2(GameObject_t1756533147 * value)
	{
		___buttonPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPrefab_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(CardListButtonGen_t385946008, ___content_3)); }
	inline GameObject_t1756533147 * get_content_3() const { return ___content_3; }
	inline GameObject_t1756533147 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(GameObject_t1756533147 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_buttonHeight_4() { return static_cast<int32_t>(offsetof(CardListButtonGen_t385946008, ___buttonHeight_4)); }
	inline float get_buttonHeight_4() const { return ___buttonHeight_4; }
	inline float* get_address_of_buttonHeight_4() { return &___buttonHeight_4; }
	inline void set_buttonHeight_4(float value)
	{
		___buttonHeight_4 = value;
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(CardListButtonGen_t385946008, ___title_5)); }
	inline Text_t356221433 * get_title_5() const { return ___title_5; }
	inline Text_t356221433 ** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(Text_t356221433 * value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier(&___title_5, value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(CardListButtonGen_t385946008, ___description_6)); }
	inline Text_t356221433 * get_description_6() const { return ___description_6; }
	inline Text_t356221433 ** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(Text_t356221433 * value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier(&___description_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
