#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// WallCreate
struct WallCreate_t4231421612;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wallHeightAdjust
struct  wallHeightAdjust_t1799866240  : public MonoBehaviour_t1158329972
{
public:
	// WallCreate wallHeightAdjust::leftWall
	WallCreate_t4231421612 * ___leftWall_2;
	// WallCreate wallHeightAdjust::rightWall
	WallCreate_t4231421612 * ___rightWall_3;
	// System.Single wallHeightAdjust::leftHeight
	float ___leftHeight_4;
	// System.Single wallHeightAdjust::rightHeight
	float ___rightHeight_5;

public:
	inline static int32_t get_offset_of_leftWall_2() { return static_cast<int32_t>(offsetof(wallHeightAdjust_t1799866240, ___leftWall_2)); }
	inline WallCreate_t4231421612 * get_leftWall_2() const { return ___leftWall_2; }
	inline WallCreate_t4231421612 ** get_address_of_leftWall_2() { return &___leftWall_2; }
	inline void set_leftWall_2(WallCreate_t4231421612 * value)
	{
		___leftWall_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftWall_2, value);
	}

	inline static int32_t get_offset_of_rightWall_3() { return static_cast<int32_t>(offsetof(wallHeightAdjust_t1799866240, ___rightWall_3)); }
	inline WallCreate_t4231421612 * get_rightWall_3() const { return ___rightWall_3; }
	inline WallCreate_t4231421612 ** get_address_of_rightWall_3() { return &___rightWall_3; }
	inline void set_rightWall_3(WallCreate_t4231421612 * value)
	{
		___rightWall_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightWall_3, value);
	}

	inline static int32_t get_offset_of_leftHeight_4() { return static_cast<int32_t>(offsetof(wallHeightAdjust_t1799866240, ___leftHeight_4)); }
	inline float get_leftHeight_4() const { return ___leftHeight_4; }
	inline float* get_address_of_leftHeight_4() { return &___leftHeight_4; }
	inline void set_leftHeight_4(float value)
	{
		___leftHeight_4 = value;
	}

	inline static int32_t get_offset_of_rightHeight_5() { return static_cast<int32_t>(offsetof(wallHeightAdjust_t1799866240, ___rightHeight_5)); }
	inline float get_rightHeight_5() const { return ___rightHeight_5; }
	inline float* get_address_of_rightHeight_5() { return &___rightHeight_5; }
	inline void set_rightHeight_5(float value)
	{
		___rightHeight_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
