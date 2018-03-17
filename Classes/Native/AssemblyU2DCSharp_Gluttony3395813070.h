#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gluttony
struct  Gluttony_t3395813070  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera[] Gluttony::cameras
	CameraU5BU5D_t3079764780* ___cameras_2;
	// System.Single Gluttony::gluttonyRate
	float ___gluttonyRate_3;

public:
	inline static int32_t get_offset_of_cameras_2() { return static_cast<int32_t>(offsetof(Gluttony_t3395813070, ___cameras_2)); }
	inline CameraU5BU5D_t3079764780* get_cameras_2() const { return ___cameras_2; }
	inline CameraU5BU5D_t3079764780** get_address_of_cameras_2() { return &___cameras_2; }
	inline void set_cameras_2(CameraU5BU5D_t3079764780* value)
	{
		___cameras_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_2, value);
	}

	inline static int32_t get_offset_of_gluttonyRate_3() { return static_cast<int32_t>(offsetof(Gluttony_t3395813070, ___gluttonyRate_3)); }
	inline float get_gluttonyRate_3() const { return ___gluttonyRate_3; }
	inline float* get_address_of_gluttonyRate_3() { return &___gluttonyRate_3; }
	inline void set_gluttonyRate_3(float value)
	{
		___gluttonyRate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
