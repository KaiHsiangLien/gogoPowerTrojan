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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIController
struct  GUIController_t1156756649  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 GUIController::PosDefault
	Vector3_t2243707580  ___PosDefault_2;
	// UnityEngine.GameObject GUIController::CameraObj
	GameObject_t1756533147 * ___CameraObj_3;
	// System.Boolean GUIController::cameraUp
	bool ___cameraUp_4;
	// UnityEngine.GameObject GUIController::queryChan
	GameObject_t1756533147 * ___queryChan_5;
	// System.Int32 GUIController::querySoundNumber
	int32_t ___querySoundNumber_6;
	// System.Int32 GUIController::targetNum
	int32_t ___targetNum_7;
	// System.Collections.Generic.List`1<System.String> GUIController::targetSounds
	List_1_t1398341365 * ___targetSounds_8;

public:
	inline static int32_t get_offset_of_PosDefault_2() { return static_cast<int32_t>(offsetof(GUIController_t1156756649, ___PosDefault_2)); }
	inline Vector3_t2243707580  get_PosDefault_2() const { return ___PosDefault_2; }
	inline Vector3_t2243707580 * get_address_of_PosDefault_2() { return &___PosDefault_2; }
	inline void set_PosDefault_2(Vector3_t2243707580  value)
	{
		___PosDefault_2 = value;
	}

	inline static int32_t get_offset_of_CameraObj_3() { return static_cast<int32_t>(offsetof(GUIController_t1156756649, ___CameraObj_3)); }
	inline GameObject_t1756533147 * get_CameraObj_3() const { return ___CameraObj_3; }
	inline GameObject_t1756533147 ** get_address_of_CameraObj_3() { return &___CameraObj_3; }
	inline void set_CameraObj_3(GameObject_t1756533147 * value)
	{
		___CameraObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___CameraObj_3, value);
	}

	inline static int32_t get_offset_of_cameraUp_4() { return static_cast<int32_t>(offsetof(GUIController_t1156756649, ___cameraUp_4)); }
	inline bool get_cameraUp_4() const { return ___cameraUp_4; }
	inline bool* get_address_of_cameraUp_4() { return &___cameraUp_4; }
	inline void set_cameraUp_4(bool value)
	{
		___cameraUp_4 = value;
	}

	inline static int32_t get_offset_of_queryChan_5() { return static_cast<int32_t>(offsetof(GUIController_t1156756649, ___queryChan_5)); }
	inline GameObject_t1756533147 * get_queryChan_5() const { return ___queryChan_5; }
	inline GameObject_t1756533147 ** get_address_of_queryChan_5() { return &___queryChan_5; }
	inline void set_queryChan_5(GameObject_t1756533147 * value)
	{
		___queryChan_5 = value;
		Il2CppCodeGenWriteBarrier(&___queryChan_5, value);
	}

	inline static int32_t get_offset_of_querySoundNumber_6() { return static_cast<int32_t>(offsetof(GUIController_t1156756649, ___querySoundNumber_6)); }
	inline int32_t get_querySoundNumber_6() const { return ___querySoundNumber_6; }
	inline int32_t* get_address_of_querySoundNumber_6() { return &___querySoundNumber_6; }
	inline void set_querySoundNumber_6(int32_t value)
	{
		___querySoundNumber_6 = value;
	}

	inline static int32_t get_offset_of_targetNum_7() { return static_cast<int32_t>(offsetof(GUIController_t1156756649, ___targetNum_7)); }
	inline int32_t get_targetNum_7() const { return ___targetNum_7; }
	inline int32_t* get_address_of_targetNum_7() { return &___targetNum_7; }
	inline void set_targetNum_7(int32_t value)
	{
		___targetNum_7 = value;
	}

	inline static int32_t get_offset_of_targetSounds_8() { return static_cast<int32_t>(offsetof(GUIController_t1156756649, ___targetSounds_8)); }
	inline List_1_t1398341365 * get_targetSounds_8() const { return ___targetSounds_8; }
	inline List_1_t1398341365 ** get_address_of_targetSounds_8() { return &___targetSounds_8; }
	inline void set_targetSounds_8(List_1_t1398341365 * value)
	{
		___targetSounds_8 = value;
		Il2CppCodeGenWriteBarrier(&___targetSounds_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
