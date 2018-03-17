#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AmbientController
struct  AmbientController_t2297488100  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AmbientController::cameraObject
	GameObject_t1756533147 * ___cameraObject_2;
	// UnityEngine.GameObject AmbientController::lightObject
	GameObject_t1756533147 * ___lightObject_3;
	// UnityEngine.GameObject AmbientController::spotLightObject
	GameObject_t1756533147 * ___spotLightObject_4;
	// UnityEngine.Vector3 AmbientController::lightBaseRotation
	Vector3_t2243707580  ___lightBaseRotation_5;
	// UnityEngine.Material[] AmbientController::skyboxMaterials
	MaterialU5BU5D_t3123989686* ___skyboxMaterials_6;
	// UnityEngine.GameObject[] AmbientController::particleObjects
	GameObjectU5BU5D_t3057952154* ___particleObjects_7;

public:
	inline static int32_t get_offset_of_cameraObject_2() { return static_cast<int32_t>(offsetof(AmbientController_t2297488100, ___cameraObject_2)); }
	inline GameObject_t1756533147 * get_cameraObject_2() const { return ___cameraObject_2; }
	inline GameObject_t1756533147 ** get_address_of_cameraObject_2() { return &___cameraObject_2; }
	inline void set_cameraObject_2(GameObject_t1756533147 * value)
	{
		___cameraObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraObject_2, value);
	}

	inline static int32_t get_offset_of_lightObject_3() { return static_cast<int32_t>(offsetof(AmbientController_t2297488100, ___lightObject_3)); }
	inline GameObject_t1756533147 * get_lightObject_3() const { return ___lightObject_3; }
	inline GameObject_t1756533147 ** get_address_of_lightObject_3() { return &___lightObject_3; }
	inline void set_lightObject_3(GameObject_t1756533147 * value)
	{
		___lightObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___lightObject_3, value);
	}

	inline static int32_t get_offset_of_spotLightObject_4() { return static_cast<int32_t>(offsetof(AmbientController_t2297488100, ___spotLightObject_4)); }
	inline GameObject_t1756533147 * get_spotLightObject_4() const { return ___spotLightObject_4; }
	inline GameObject_t1756533147 ** get_address_of_spotLightObject_4() { return &___spotLightObject_4; }
	inline void set_spotLightObject_4(GameObject_t1756533147 * value)
	{
		___spotLightObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___spotLightObject_4, value);
	}

	inline static int32_t get_offset_of_lightBaseRotation_5() { return static_cast<int32_t>(offsetof(AmbientController_t2297488100, ___lightBaseRotation_5)); }
	inline Vector3_t2243707580  get_lightBaseRotation_5() const { return ___lightBaseRotation_5; }
	inline Vector3_t2243707580 * get_address_of_lightBaseRotation_5() { return &___lightBaseRotation_5; }
	inline void set_lightBaseRotation_5(Vector3_t2243707580  value)
	{
		___lightBaseRotation_5 = value;
	}

	inline static int32_t get_offset_of_skyboxMaterials_6() { return static_cast<int32_t>(offsetof(AmbientController_t2297488100, ___skyboxMaterials_6)); }
	inline MaterialU5BU5D_t3123989686* get_skyboxMaterials_6() const { return ___skyboxMaterials_6; }
	inline MaterialU5BU5D_t3123989686** get_address_of_skyboxMaterials_6() { return &___skyboxMaterials_6; }
	inline void set_skyboxMaterials_6(MaterialU5BU5D_t3123989686* value)
	{
		___skyboxMaterials_6 = value;
		Il2CppCodeGenWriteBarrier(&___skyboxMaterials_6, value);
	}

	inline static int32_t get_offset_of_particleObjects_7() { return static_cast<int32_t>(offsetof(AmbientController_t2297488100, ___particleObjects_7)); }
	inline GameObjectU5BU5D_t3057952154* get_particleObjects_7() const { return ___particleObjects_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_particleObjects_7() { return &___particleObjects_7; }
	inline void set_particleObjects_7(GameObjectU5BU5D_t3057952154* value)
	{
		___particleObjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___particleObjects_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
