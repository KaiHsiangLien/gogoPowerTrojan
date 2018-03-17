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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveCamera
struct  MoveCamera_t3193441886  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MoveCamera::targetCamera
	GameObject_t1756533147 * ___targetCamera_2;
	// UnityEngine.Vector3[] MoveCamera::cameraPositions
	Vector3U5BU5D_t1172311765* ___cameraPositions_3;
	// UnityEngine.Vector3[] MoveCamera::cameraRotaions
	Vector3U5BU5D_t1172311765* ___cameraRotaions_4;
	// System.Boolean MoveCamera::streetAnimIsPlaying
	bool ___streetAnimIsPlaying_5;
	// System.Boolean MoveCamera::rotaryAnimIsPlaying
	bool ___rotaryAnimIsPlaying_6;

public:
	inline static int32_t get_offset_of_targetCamera_2() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___targetCamera_2)); }
	inline GameObject_t1756533147 * get_targetCamera_2() const { return ___targetCamera_2; }
	inline GameObject_t1756533147 ** get_address_of_targetCamera_2() { return &___targetCamera_2; }
	inline void set_targetCamera_2(GameObject_t1756533147 * value)
	{
		___targetCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetCamera_2, value);
	}

	inline static int32_t get_offset_of_cameraPositions_3() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___cameraPositions_3)); }
	inline Vector3U5BU5D_t1172311765* get_cameraPositions_3() const { return ___cameraPositions_3; }
	inline Vector3U5BU5D_t1172311765** get_address_of_cameraPositions_3() { return &___cameraPositions_3; }
	inline void set_cameraPositions_3(Vector3U5BU5D_t1172311765* value)
	{
		___cameraPositions_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraPositions_3, value);
	}

	inline static int32_t get_offset_of_cameraRotaions_4() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___cameraRotaions_4)); }
	inline Vector3U5BU5D_t1172311765* get_cameraRotaions_4() const { return ___cameraRotaions_4; }
	inline Vector3U5BU5D_t1172311765** get_address_of_cameraRotaions_4() { return &___cameraRotaions_4; }
	inline void set_cameraRotaions_4(Vector3U5BU5D_t1172311765* value)
	{
		___cameraRotaions_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraRotaions_4, value);
	}

	inline static int32_t get_offset_of_streetAnimIsPlaying_5() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___streetAnimIsPlaying_5)); }
	inline bool get_streetAnimIsPlaying_5() const { return ___streetAnimIsPlaying_5; }
	inline bool* get_address_of_streetAnimIsPlaying_5() { return &___streetAnimIsPlaying_5; }
	inline void set_streetAnimIsPlaying_5(bool value)
	{
		___streetAnimIsPlaying_5 = value;
	}

	inline static int32_t get_offset_of_rotaryAnimIsPlaying_6() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___rotaryAnimIsPlaying_6)); }
	inline bool get_rotaryAnimIsPlaying_6() const { return ___rotaryAnimIsPlaying_6; }
	inline bool* get_address_of_rotaryAnimIsPlaying_6() { return &___rotaryAnimIsPlaying_6; }
	inline void set_rotaryAnimIsPlaying_6(bool value)
	{
		___rotaryAnimIsPlaying_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
