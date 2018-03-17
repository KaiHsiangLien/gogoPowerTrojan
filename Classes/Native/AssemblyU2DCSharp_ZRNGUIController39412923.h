#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZRNGUIController
struct  ZRNGUIController_t39412923  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ZRNGUIController::hSliderValue
	float ___hSliderValue_2;
	// System.Boolean ZRNGUIController::menuVisible
	bool ___menuVisible_3;
	// System.Int32 ZRNGUIController::operateCameraNumber
	int32_t ___operateCameraNumber_4;
	// System.Boolean ZRNGUIController::shadowOn
	bool ___shadowOn_5;
	// UnityEngine.GameObject[] ZRNGUIController::QueryObjects
	GameObjectU5BU5D_t3057952154* ___QueryObjects_8;
	// System.Int32 ZRNGUIController::previousCameraNumber
	int32_t ___previousCameraNumber_9;
	// System.String ZRNGUIController::playModeString
	String_t* ___playModeString_10;

public:
	inline static int32_t get_offset_of_hSliderValue_2() { return static_cast<int32_t>(offsetof(ZRNGUIController_t39412923, ___hSliderValue_2)); }
	inline float get_hSliderValue_2() const { return ___hSliderValue_2; }
	inline float* get_address_of_hSliderValue_2() { return &___hSliderValue_2; }
	inline void set_hSliderValue_2(float value)
	{
		___hSliderValue_2 = value;
	}

	inline static int32_t get_offset_of_menuVisible_3() { return static_cast<int32_t>(offsetof(ZRNGUIController_t39412923, ___menuVisible_3)); }
	inline bool get_menuVisible_3() const { return ___menuVisible_3; }
	inline bool* get_address_of_menuVisible_3() { return &___menuVisible_3; }
	inline void set_menuVisible_3(bool value)
	{
		___menuVisible_3 = value;
	}

	inline static int32_t get_offset_of_operateCameraNumber_4() { return static_cast<int32_t>(offsetof(ZRNGUIController_t39412923, ___operateCameraNumber_4)); }
	inline int32_t get_operateCameraNumber_4() const { return ___operateCameraNumber_4; }
	inline int32_t* get_address_of_operateCameraNumber_4() { return &___operateCameraNumber_4; }
	inline void set_operateCameraNumber_4(int32_t value)
	{
		___operateCameraNumber_4 = value;
	}

	inline static int32_t get_offset_of_shadowOn_5() { return static_cast<int32_t>(offsetof(ZRNGUIController_t39412923, ___shadowOn_5)); }
	inline bool get_shadowOn_5() const { return ___shadowOn_5; }
	inline bool* get_address_of_shadowOn_5() { return &___shadowOn_5; }
	inline void set_shadowOn_5(bool value)
	{
		___shadowOn_5 = value;
	}

	inline static int32_t get_offset_of_QueryObjects_8() { return static_cast<int32_t>(offsetof(ZRNGUIController_t39412923, ___QueryObjects_8)); }
	inline GameObjectU5BU5D_t3057952154* get_QueryObjects_8() const { return ___QueryObjects_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_QueryObjects_8() { return &___QueryObjects_8; }
	inline void set_QueryObjects_8(GameObjectU5BU5D_t3057952154* value)
	{
		___QueryObjects_8 = value;
		Il2CppCodeGenWriteBarrier(&___QueryObjects_8, value);
	}

	inline static int32_t get_offset_of_previousCameraNumber_9() { return static_cast<int32_t>(offsetof(ZRNGUIController_t39412923, ___previousCameraNumber_9)); }
	inline int32_t get_previousCameraNumber_9() const { return ___previousCameraNumber_9; }
	inline int32_t* get_address_of_previousCameraNumber_9() { return &___previousCameraNumber_9; }
	inline void set_previousCameraNumber_9(int32_t value)
	{
		___previousCameraNumber_9 = value;
	}

	inline static int32_t get_offset_of_playModeString_10() { return static_cast<int32_t>(offsetof(ZRNGUIController_t39412923, ___playModeString_10)); }
	inline String_t* get_playModeString_10() const { return ___playModeString_10; }
	inline String_t** get_address_of_playModeString_10() { return &___playModeString_10; }
	inline void set_playModeString_10(String_t* value)
	{
		___playModeString_10 = value;
		Il2CppCodeGenWriteBarrier(&___playModeString_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
