#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Car
struct Car_t4262919282;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// Car PlayerController::car
	Car_t4262919282 * ___car_2;

public:
	inline static int32_t get_offset_of_car_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___car_2)); }
	inline Car_t4262919282 * get_car_2() const { return ___car_2; }
	inline Car_t4262919282 ** get_address_of_car_2() { return &___car_2; }
	inline void set_car_2(Car_t4262919282 * value)
	{
		___car_2 = value;
		Il2CppCodeGenWriteBarrier(&___car_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
