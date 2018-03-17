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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraController::cameraObject
	GameObject_t1756533147 * ___cameraObject_2;
	// UnityEngine.GameObject[] CameraController::targetCameraPoints
	GameObjectU5BU5D_t3057952154* ___targetCameraPoints_3;
	// System.Collections.Generic.List`1<System.String> CameraController::targetCameraNames
	List_1_t1398341365 * ___targetCameraNames_4;
	// System.Int32 CameraController::activeCameraNum
	int32_t ___activeCameraNum_5;
	// UnityEngine.GameObject CameraController::targetCameraFlyingQueryChan
	GameObject_t1756533147 * ___targetCameraFlyingQueryChan_8;
	// UnityEngine.GameObject CameraController::targetCameraAIDrivingCar
	GameObject_t1756533147 * ___targetCameraAIDrivingCar_9;

public:
	inline static int32_t get_offset_of_cameraObject_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___cameraObject_2)); }
	inline GameObject_t1756533147 * get_cameraObject_2() const { return ___cameraObject_2; }
	inline GameObject_t1756533147 ** get_address_of_cameraObject_2() { return &___cameraObject_2; }
	inline void set_cameraObject_2(GameObject_t1756533147 * value)
	{
		___cameraObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraObject_2, value);
	}

	inline static int32_t get_offset_of_targetCameraPoints_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___targetCameraPoints_3)); }
	inline GameObjectU5BU5D_t3057952154* get_targetCameraPoints_3() const { return ___targetCameraPoints_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_targetCameraPoints_3() { return &___targetCameraPoints_3; }
	inline void set_targetCameraPoints_3(GameObjectU5BU5D_t3057952154* value)
	{
		___targetCameraPoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetCameraPoints_3, value);
	}

	inline static int32_t get_offset_of_targetCameraNames_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___targetCameraNames_4)); }
	inline List_1_t1398341365 * get_targetCameraNames_4() const { return ___targetCameraNames_4; }
	inline List_1_t1398341365 ** get_address_of_targetCameraNames_4() { return &___targetCameraNames_4; }
	inline void set_targetCameraNames_4(List_1_t1398341365 * value)
	{
		___targetCameraNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetCameraNames_4, value);
	}

	inline static int32_t get_offset_of_activeCameraNum_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___activeCameraNum_5)); }
	inline int32_t get_activeCameraNum_5() const { return ___activeCameraNum_5; }
	inline int32_t* get_address_of_activeCameraNum_5() { return &___activeCameraNum_5; }
	inline void set_activeCameraNum_5(int32_t value)
	{
		___activeCameraNum_5 = value;
	}

	inline static int32_t get_offset_of_targetCameraFlyingQueryChan_8() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___targetCameraFlyingQueryChan_8)); }
	inline GameObject_t1756533147 * get_targetCameraFlyingQueryChan_8() const { return ___targetCameraFlyingQueryChan_8; }
	inline GameObject_t1756533147 ** get_address_of_targetCameraFlyingQueryChan_8() { return &___targetCameraFlyingQueryChan_8; }
	inline void set_targetCameraFlyingQueryChan_8(GameObject_t1756533147 * value)
	{
		___targetCameraFlyingQueryChan_8 = value;
		Il2CppCodeGenWriteBarrier(&___targetCameraFlyingQueryChan_8, value);
	}

	inline static int32_t get_offset_of_targetCameraAIDrivingCar_9() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___targetCameraAIDrivingCar_9)); }
	inline GameObject_t1756533147 * get_targetCameraAIDrivingCar_9() const { return ___targetCameraAIDrivingCar_9; }
	inline GameObject_t1756533147 ** get_address_of_targetCameraAIDrivingCar_9() { return &___targetCameraAIDrivingCar_9; }
	inline void set_targetCameraAIDrivingCar_9(GameObject_t1756533147 * value)
	{
		___targetCameraAIDrivingCar_9 = value;
		Il2CppCodeGenWriteBarrier(&___targetCameraAIDrivingCar_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
