#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Button,System.Boolean>
struct Dictionary_2_t2874101273;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogBoxController
struct  DialogBoxController_t2997064991  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text DialogBoxController::myText
	Text_t356221433 * ___myText_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Button,System.Boolean> DialogBoxController::interactableValues
	Dictionary_2_t2874101273 * ___interactableValues_3;

public:
	inline static int32_t get_offset_of_myText_2() { return static_cast<int32_t>(offsetof(DialogBoxController_t2997064991, ___myText_2)); }
	inline Text_t356221433 * get_myText_2() const { return ___myText_2; }
	inline Text_t356221433 ** get_address_of_myText_2() { return &___myText_2; }
	inline void set_myText_2(Text_t356221433 * value)
	{
		___myText_2 = value;
		Il2CppCodeGenWriteBarrier(&___myText_2, value);
	}

	inline static int32_t get_offset_of_interactableValues_3() { return static_cast<int32_t>(offsetof(DialogBoxController_t2997064991, ___interactableValues_3)); }
	inline Dictionary_2_t2874101273 * get_interactableValues_3() const { return ___interactableValues_3; }
	inline Dictionary_2_t2874101273 ** get_address_of_interactableValues_3() { return &___interactableValues_3; }
	inline void set_interactableValues_3(Dictionary_2_t2874101273 * value)
	{
		___interactableValues_3 = value;
		Il2CppCodeGenWriteBarrier(&___interactableValues_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
