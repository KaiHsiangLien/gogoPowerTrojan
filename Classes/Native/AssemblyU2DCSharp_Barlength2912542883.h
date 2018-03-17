#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// Car
struct Car_t4262919282;
// CarStatus
struct CarStatus_t383877312;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Barlength
struct  Barlength_t2912542883  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Barlength::isHPBar
	bool ___isHPBar_2;
	// UnityEngine.RectTransform Barlength::rectTransform
	RectTransform_t3349966182 * ___rectTransform_3;
	// Car Barlength::car
	Car_t4262919282 * ___car_4;
	// CarStatus Barlength::carStatus
	CarStatus_t383877312 * ___carStatus_5;

public:
	inline static int32_t get_offset_of_isHPBar_2() { return static_cast<int32_t>(offsetof(Barlength_t2912542883, ___isHPBar_2)); }
	inline bool get_isHPBar_2() const { return ___isHPBar_2; }
	inline bool* get_address_of_isHPBar_2() { return &___isHPBar_2; }
	inline void set_isHPBar_2(bool value)
	{
		___isHPBar_2 = value;
	}

	inline static int32_t get_offset_of_rectTransform_3() { return static_cast<int32_t>(offsetof(Barlength_t2912542883, ___rectTransform_3)); }
	inline RectTransform_t3349966182 * get_rectTransform_3() const { return ___rectTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_3() { return &___rectTransform_3; }
	inline void set_rectTransform_3(RectTransform_t3349966182 * value)
	{
		___rectTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_3, value);
	}

	inline static int32_t get_offset_of_car_4() { return static_cast<int32_t>(offsetof(Barlength_t2912542883, ___car_4)); }
	inline Car_t4262919282 * get_car_4() const { return ___car_4; }
	inline Car_t4262919282 ** get_address_of_car_4() { return &___car_4; }
	inline void set_car_4(Car_t4262919282 * value)
	{
		___car_4 = value;
		Il2CppCodeGenWriteBarrier(&___car_4, value);
	}

	inline static int32_t get_offset_of_carStatus_5() { return static_cast<int32_t>(offsetof(Barlength_t2912542883, ___carStatus_5)); }
	inline CarStatus_t383877312 * get_carStatus_5() const { return ___carStatus_5; }
	inline CarStatus_t383877312 ** get_address_of_carStatus_5() { return &___carStatus_5; }
	inline void set_carStatus_5(CarStatus_t383877312 * value)
	{
		___carStatus_5 = value;
		Il2CppCodeGenWriteBarrier(&___carStatus_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
