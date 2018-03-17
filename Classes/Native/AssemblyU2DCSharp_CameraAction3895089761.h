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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraAction
struct  CameraAction_t3895089761  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraAction::queryChan
	GameObject_t1756533147 * ___queryChan_2;
	// System.Single CameraAction::startPosX
	float ___startPosX_3;
	// System.Single CameraAction::rotatePosX
	float ___rotatePosX_4;
	// System.Boolean CameraAction::click
	bool ___click_5;

public:
	inline static int32_t get_offset_of_queryChan_2() { return static_cast<int32_t>(offsetof(CameraAction_t3895089761, ___queryChan_2)); }
	inline GameObject_t1756533147 * get_queryChan_2() const { return ___queryChan_2; }
	inline GameObject_t1756533147 ** get_address_of_queryChan_2() { return &___queryChan_2; }
	inline void set_queryChan_2(GameObject_t1756533147 * value)
	{
		___queryChan_2 = value;
		Il2CppCodeGenWriteBarrier(&___queryChan_2, value);
	}

	inline static int32_t get_offset_of_startPosX_3() { return static_cast<int32_t>(offsetof(CameraAction_t3895089761, ___startPosX_3)); }
	inline float get_startPosX_3() const { return ___startPosX_3; }
	inline float* get_address_of_startPosX_3() { return &___startPosX_3; }
	inline void set_startPosX_3(float value)
	{
		___startPosX_3 = value;
	}

	inline static int32_t get_offset_of_rotatePosX_4() { return static_cast<int32_t>(offsetof(CameraAction_t3895089761, ___rotatePosX_4)); }
	inline float get_rotatePosX_4() const { return ___rotatePosX_4; }
	inline float* get_address_of_rotatePosX_4() { return &___rotatePosX_4; }
	inline void set_rotatePosX_4(float value)
	{
		___rotatePosX_4 = value;
	}

	inline static int32_t get_offset_of_click_5() { return static_cast<int32_t>(offsetof(CameraAction_t3895089761, ___click_5)); }
	inline bool get_click_5() const { return ___click_5; }
	inline bool* get_address_of_click_5() { return &___click_5; }
	inline void set_click_5(bool value)
	{
		___click_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
