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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GunAim
struct  GunAim_t2119054011  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GunAim::borderLeft
	int32_t ___borderLeft_2;
	// System.Int32 GunAim::borderRight
	int32_t ___borderRight_3;
	// System.Int32 GunAim::borderTop
	int32_t ___borderTop_4;
	// System.Int32 GunAim::borderBottom
	int32_t ___borderBottom_5;
	// UnityEngine.Camera GunAim::parentCamera
	Camera_t189460977 * ___parentCamera_6;
	// System.Boolean GunAim::isOutOfBounds
	bool ___isOutOfBounds_7;

public:
	inline static int32_t get_offset_of_borderLeft_2() { return static_cast<int32_t>(offsetof(GunAim_t2119054011, ___borderLeft_2)); }
	inline int32_t get_borderLeft_2() const { return ___borderLeft_2; }
	inline int32_t* get_address_of_borderLeft_2() { return &___borderLeft_2; }
	inline void set_borderLeft_2(int32_t value)
	{
		___borderLeft_2 = value;
	}

	inline static int32_t get_offset_of_borderRight_3() { return static_cast<int32_t>(offsetof(GunAim_t2119054011, ___borderRight_3)); }
	inline int32_t get_borderRight_3() const { return ___borderRight_3; }
	inline int32_t* get_address_of_borderRight_3() { return &___borderRight_3; }
	inline void set_borderRight_3(int32_t value)
	{
		___borderRight_3 = value;
	}

	inline static int32_t get_offset_of_borderTop_4() { return static_cast<int32_t>(offsetof(GunAim_t2119054011, ___borderTop_4)); }
	inline int32_t get_borderTop_4() const { return ___borderTop_4; }
	inline int32_t* get_address_of_borderTop_4() { return &___borderTop_4; }
	inline void set_borderTop_4(int32_t value)
	{
		___borderTop_4 = value;
	}

	inline static int32_t get_offset_of_borderBottom_5() { return static_cast<int32_t>(offsetof(GunAim_t2119054011, ___borderBottom_5)); }
	inline int32_t get_borderBottom_5() const { return ___borderBottom_5; }
	inline int32_t* get_address_of_borderBottom_5() { return &___borderBottom_5; }
	inline void set_borderBottom_5(int32_t value)
	{
		___borderBottom_5 = value;
	}

	inline static int32_t get_offset_of_parentCamera_6() { return static_cast<int32_t>(offsetof(GunAim_t2119054011, ___parentCamera_6)); }
	inline Camera_t189460977 * get_parentCamera_6() const { return ___parentCamera_6; }
	inline Camera_t189460977 ** get_address_of_parentCamera_6() { return &___parentCamera_6; }
	inline void set_parentCamera_6(Camera_t189460977 * value)
	{
		___parentCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___parentCamera_6, value);
	}

	inline static int32_t get_offset_of_isOutOfBounds_7() { return static_cast<int32_t>(offsetof(GunAim_t2119054011, ___isOutOfBounds_7)); }
	inline bool get_isOutOfBounds_7() const { return ___isOutOfBounds_7; }
	inline bool* get_address_of_isOutOfBounds_7() { return &___isOutOfBounds_7; }
	inline void set_isOutOfBounds_7(bool value)
	{
		___isOutOfBounds_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
