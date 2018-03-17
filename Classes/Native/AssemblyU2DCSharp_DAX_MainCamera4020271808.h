#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DAX_MainCamera
struct  DAX_MainCamera_t4020271808  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] DAX_MainCamera::Items
	GameObjectU5BU5D_t3057952154* ___Items_2;
	// System.String[] DAX_MainCamera::Descr
	StringU5BU5D_t1642385972* ___Descr_3;
	// UnityEngine.UI.Text DAX_MainCamera::OutText
	Text_t356221433 * ___OutText_4;
	// UnityEngine.UI.Text DAX_MainCamera::OutDescr
	Text_t356221433 * ___OutDescr_5;
	// System.Int32 DAX_MainCamera::curIndex
	int32_t ___curIndex_6;
	// UnityEngine.GameObject DAX_MainCamera::curPrefab
	GameObject_t1756533147 * ___curPrefab_7;

public:
	inline static int32_t get_offset_of_Items_2() { return static_cast<int32_t>(offsetof(DAX_MainCamera_t4020271808, ___Items_2)); }
	inline GameObjectU5BU5D_t3057952154* get_Items_2() const { return ___Items_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_Items_2() { return &___Items_2; }
	inline void set_Items_2(GameObjectU5BU5D_t3057952154* value)
	{
		___Items_2 = value;
		Il2CppCodeGenWriteBarrier(&___Items_2, value);
	}

	inline static int32_t get_offset_of_Descr_3() { return static_cast<int32_t>(offsetof(DAX_MainCamera_t4020271808, ___Descr_3)); }
	inline StringU5BU5D_t1642385972* get_Descr_3() const { return ___Descr_3; }
	inline StringU5BU5D_t1642385972** get_address_of_Descr_3() { return &___Descr_3; }
	inline void set_Descr_3(StringU5BU5D_t1642385972* value)
	{
		___Descr_3 = value;
		Il2CppCodeGenWriteBarrier(&___Descr_3, value);
	}

	inline static int32_t get_offset_of_OutText_4() { return static_cast<int32_t>(offsetof(DAX_MainCamera_t4020271808, ___OutText_4)); }
	inline Text_t356221433 * get_OutText_4() const { return ___OutText_4; }
	inline Text_t356221433 ** get_address_of_OutText_4() { return &___OutText_4; }
	inline void set_OutText_4(Text_t356221433 * value)
	{
		___OutText_4 = value;
		Il2CppCodeGenWriteBarrier(&___OutText_4, value);
	}

	inline static int32_t get_offset_of_OutDescr_5() { return static_cast<int32_t>(offsetof(DAX_MainCamera_t4020271808, ___OutDescr_5)); }
	inline Text_t356221433 * get_OutDescr_5() const { return ___OutDescr_5; }
	inline Text_t356221433 ** get_address_of_OutDescr_5() { return &___OutDescr_5; }
	inline void set_OutDescr_5(Text_t356221433 * value)
	{
		___OutDescr_5 = value;
		Il2CppCodeGenWriteBarrier(&___OutDescr_5, value);
	}

	inline static int32_t get_offset_of_curIndex_6() { return static_cast<int32_t>(offsetof(DAX_MainCamera_t4020271808, ___curIndex_6)); }
	inline int32_t get_curIndex_6() const { return ___curIndex_6; }
	inline int32_t* get_address_of_curIndex_6() { return &___curIndex_6; }
	inline void set_curIndex_6(int32_t value)
	{
		___curIndex_6 = value;
	}

	inline static int32_t get_offset_of_curPrefab_7() { return static_cast<int32_t>(offsetof(DAX_MainCamera_t4020271808, ___curPrefab_7)); }
	inline GameObject_t1756533147 * get_curPrefab_7() const { return ___curPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_curPrefab_7() { return &___curPrefab_7; }
	inline void set_curPrefab_7(GameObject_t1756533147 * value)
	{
		___curPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___curPrefab_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
