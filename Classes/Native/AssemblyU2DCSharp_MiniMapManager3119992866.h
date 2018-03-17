#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniMapManager
struct  MiniMapManager_t3119992866  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera MiniMapManager::minimapCam
	Camera_t189460977 * ___minimapCam_2;
	// UnityEngine.Material[] MiniMapManager::materials
	MaterialU5BU5D_t3123989686* ___materials_3;

public:
	inline static int32_t get_offset_of_minimapCam_2() { return static_cast<int32_t>(offsetof(MiniMapManager_t3119992866, ___minimapCam_2)); }
	inline Camera_t189460977 * get_minimapCam_2() const { return ___minimapCam_2; }
	inline Camera_t189460977 ** get_address_of_minimapCam_2() { return &___minimapCam_2; }
	inline void set_minimapCam_2(Camera_t189460977 * value)
	{
		___minimapCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___minimapCam_2, value);
	}

	inline static int32_t get_offset_of_materials_3() { return static_cast<int32_t>(offsetof(MiniMapManager_t3119992866, ___materials_3)); }
	inline MaterialU5BU5D_t3123989686* get_materials_3() const { return ___materials_3; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_3() { return &___materials_3; }
	inline void set_materials_3(MaterialU5BU5D_t3123989686* value)
	{
		___materials_3 = value;
		Il2CppCodeGenWriteBarrier(&___materials_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
