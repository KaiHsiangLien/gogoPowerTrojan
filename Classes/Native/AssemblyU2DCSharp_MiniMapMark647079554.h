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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniMapMark
struct  MiniMapMark_t647079554  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform MiniMapMark::MyCar
	Transform_t3275118058 * ___MyCar_2;
	// System.Boolean MiniMapMark::carExist
	bool ___carExist_3;

public:
	inline static int32_t get_offset_of_MyCar_2() { return static_cast<int32_t>(offsetof(MiniMapMark_t647079554, ___MyCar_2)); }
	inline Transform_t3275118058 * get_MyCar_2() const { return ___MyCar_2; }
	inline Transform_t3275118058 ** get_address_of_MyCar_2() { return &___MyCar_2; }
	inline void set_MyCar_2(Transform_t3275118058 * value)
	{
		___MyCar_2 = value;
		Il2CppCodeGenWriteBarrier(&___MyCar_2, value);
	}

	inline static int32_t get_offset_of_carExist_3() { return static_cast<int32_t>(offsetof(MiniMapMark_t647079554, ___carExist_3)); }
	inline bool get_carExist_3() const { return ___carExist_3; }
	inline bool* get_address_of_carExist_3() { return &___carExist_3; }
	inline void set_carExist_3(bool value)
	{
		___carExist_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
