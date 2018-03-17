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
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Button,System.Boolean>
struct Dictionary_2_t2874101273;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AboutButtonChange
struct  AboutButtonChange_t4087623107  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AboutButtonChange::aboutCanvas
	GameObject_t1756533147 * ___aboutCanvas_2;
	// UnityEngine.GameObject AboutButtonChange::settingCanvas
	GameObject_t1756533147 * ___settingCanvas_3;
	// UnityEngine.GameObject AboutButtonChange::confirmPanel
	GameObject_t1756533147 * ___confirmPanel_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Button,System.Boolean> AboutButtonChange::btnInteractables
	Dictionary_2_t2874101273 * ___btnInteractables_5;

public:
	inline static int32_t get_offset_of_aboutCanvas_2() { return static_cast<int32_t>(offsetof(AboutButtonChange_t4087623107, ___aboutCanvas_2)); }
	inline GameObject_t1756533147 * get_aboutCanvas_2() const { return ___aboutCanvas_2; }
	inline GameObject_t1756533147 ** get_address_of_aboutCanvas_2() { return &___aboutCanvas_2; }
	inline void set_aboutCanvas_2(GameObject_t1756533147 * value)
	{
		___aboutCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___aboutCanvas_2, value);
	}

	inline static int32_t get_offset_of_settingCanvas_3() { return static_cast<int32_t>(offsetof(AboutButtonChange_t4087623107, ___settingCanvas_3)); }
	inline GameObject_t1756533147 * get_settingCanvas_3() const { return ___settingCanvas_3; }
	inline GameObject_t1756533147 ** get_address_of_settingCanvas_3() { return &___settingCanvas_3; }
	inline void set_settingCanvas_3(GameObject_t1756533147 * value)
	{
		___settingCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___settingCanvas_3, value);
	}

	inline static int32_t get_offset_of_confirmPanel_4() { return static_cast<int32_t>(offsetof(AboutButtonChange_t4087623107, ___confirmPanel_4)); }
	inline GameObject_t1756533147 * get_confirmPanel_4() const { return ___confirmPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_confirmPanel_4() { return &___confirmPanel_4; }
	inline void set_confirmPanel_4(GameObject_t1756533147 * value)
	{
		___confirmPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___confirmPanel_4, value);
	}

	inline static int32_t get_offset_of_btnInteractables_5() { return static_cast<int32_t>(offsetof(AboutButtonChange_t4087623107, ___btnInteractables_5)); }
	inline Dictionary_2_t2874101273 * get_btnInteractables_5() const { return ___btnInteractables_5; }
	inline Dictionary_2_t2874101273 ** get_address_of_btnInteractables_5() { return &___btnInteractables_5; }
	inline void set_btnInteractables_5(Dictionary_2_t2874101273 * value)
	{
		___btnInteractables_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnInteractables_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
