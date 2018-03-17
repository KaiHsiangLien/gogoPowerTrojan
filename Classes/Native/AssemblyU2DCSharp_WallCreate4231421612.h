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
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// wallTransform[]
struct wallTransformU5BU5D_t90830221;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WallCreate
struct  WallCreate_t4231421612  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WallCreate::wallObject
	GameObject_t1756533147 * ___wallObject_2;
	// UnityEngine.GameObject WallCreate::pointParent
	GameObject_t1756533147 * ___pointParent_3;
	// UnityEngine.GameObject WallCreate::wallParent
	GameObject_t1756533147 * ___wallParent_4;
	// UnityEngine.Transform[] WallCreate::wallPoints
	TransformU5BU5D_t3764228911* ___wallPoints_5;
	// wallTransform[] WallCreate::wallObjects
	wallTransformU5BU5D_t90830221* ___wallObjects_6;
	// System.Single WallCreate::drawWallThreshold
	float ___drawWallThreshold_7;
	// System.Single WallCreate::width
	float ___width_8;
	// System.Single WallCreate::height
	float ___height_9;

public:
	inline static int32_t get_offset_of_wallObject_2() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___wallObject_2)); }
	inline GameObject_t1756533147 * get_wallObject_2() const { return ___wallObject_2; }
	inline GameObject_t1756533147 ** get_address_of_wallObject_2() { return &___wallObject_2; }
	inline void set_wallObject_2(GameObject_t1756533147 * value)
	{
		___wallObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___wallObject_2, value);
	}

	inline static int32_t get_offset_of_pointParent_3() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___pointParent_3)); }
	inline GameObject_t1756533147 * get_pointParent_3() const { return ___pointParent_3; }
	inline GameObject_t1756533147 ** get_address_of_pointParent_3() { return &___pointParent_3; }
	inline void set_pointParent_3(GameObject_t1756533147 * value)
	{
		___pointParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointParent_3, value);
	}

	inline static int32_t get_offset_of_wallParent_4() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___wallParent_4)); }
	inline GameObject_t1756533147 * get_wallParent_4() const { return ___wallParent_4; }
	inline GameObject_t1756533147 ** get_address_of_wallParent_4() { return &___wallParent_4; }
	inline void set_wallParent_4(GameObject_t1756533147 * value)
	{
		___wallParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___wallParent_4, value);
	}

	inline static int32_t get_offset_of_wallPoints_5() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___wallPoints_5)); }
	inline TransformU5BU5D_t3764228911* get_wallPoints_5() const { return ___wallPoints_5; }
	inline TransformU5BU5D_t3764228911** get_address_of_wallPoints_5() { return &___wallPoints_5; }
	inline void set_wallPoints_5(TransformU5BU5D_t3764228911* value)
	{
		___wallPoints_5 = value;
		Il2CppCodeGenWriteBarrier(&___wallPoints_5, value);
	}

	inline static int32_t get_offset_of_wallObjects_6() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___wallObjects_6)); }
	inline wallTransformU5BU5D_t90830221* get_wallObjects_6() const { return ___wallObjects_6; }
	inline wallTransformU5BU5D_t90830221** get_address_of_wallObjects_6() { return &___wallObjects_6; }
	inline void set_wallObjects_6(wallTransformU5BU5D_t90830221* value)
	{
		___wallObjects_6 = value;
		Il2CppCodeGenWriteBarrier(&___wallObjects_6, value);
	}

	inline static int32_t get_offset_of_drawWallThreshold_7() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___drawWallThreshold_7)); }
	inline float get_drawWallThreshold_7() const { return ___drawWallThreshold_7; }
	inline float* get_address_of_drawWallThreshold_7() { return &___drawWallThreshold_7; }
	inline void set_drawWallThreshold_7(float value)
	{
		___drawWallThreshold_7 = value;
	}

	inline static int32_t get_offset_of_width_8() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___width_8)); }
	inline float get_width_8() const { return ___width_8; }
	inline float* get_address_of_width_8() { return &___width_8; }
	inline void set_width_8(float value)
	{
		___width_8 = value;
	}

	inline static int32_t get_offset_of_height_9() { return static_cast<int32_t>(offsetof(WallCreate_t4231421612, ___height_9)); }
	inline float get_height_9() const { return ___height_9; }
	inline float* get_address_of_height_9() { return &___height_9; }
	inline void set_height_9(float value)
	{
		___height_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
