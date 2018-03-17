#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// Car
struct Car_t4262919282;
// CarStatus
struct CarStatus_t383877312;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// moveBtnOnClick
struct  moveBtnOnClick_t2838918694  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button moveBtnOnClick::MoveBtn
	Button_t2872111280 * ___MoveBtn_2;
	// Car moveBtnOnClick::car
	Car_t4262919282 * ___car_3;
	// CarStatus moveBtnOnClick::carStatus
	CarStatus_t383877312 * ___carStatus_4;
	// UnityEngine.Sprite[] moveBtnOnClick::moveIcons
	SpriteU5BU5D_t3359083662* ___moveIcons_5;
	// UnityEngine.UI.Image moveBtnOnClick::moveBtnImage
	Image_t2042527209 * ___moveBtnImage_6;

public:
	inline static int32_t get_offset_of_MoveBtn_2() { return static_cast<int32_t>(offsetof(moveBtnOnClick_t2838918694, ___MoveBtn_2)); }
	inline Button_t2872111280 * get_MoveBtn_2() const { return ___MoveBtn_2; }
	inline Button_t2872111280 ** get_address_of_MoveBtn_2() { return &___MoveBtn_2; }
	inline void set_MoveBtn_2(Button_t2872111280 * value)
	{
		___MoveBtn_2 = value;
		Il2CppCodeGenWriteBarrier(&___MoveBtn_2, value);
	}

	inline static int32_t get_offset_of_car_3() { return static_cast<int32_t>(offsetof(moveBtnOnClick_t2838918694, ___car_3)); }
	inline Car_t4262919282 * get_car_3() const { return ___car_3; }
	inline Car_t4262919282 ** get_address_of_car_3() { return &___car_3; }
	inline void set_car_3(Car_t4262919282 * value)
	{
		___car_3 = value;
		Il2CppCodeGenWriteBarrier(&___car_3, value);
	}

	inline static int32_t get_offset_of_carStatus_4() { return static_cast<int32_t>(offsetof(moveBtnOnClick_t2838918694, ___carStatus_4)); }
	inline CarStatus_t383877312 * get_carStatus_4() const { return ___carStatus_4; }
	inline CarStatus_t383877312 ** get_address_of_carStatus_4() { return &___carStatus_4; }
	inline void set_carStatus_4(CarStatus_t383877312 * value)
	{
		___carStatus_4 = value;
		Il2CppCodeGenWriteBarrier(&___carStatus_4, value);
	}

	inline static int32_t get_offset_of_moveIcons_5() { return static_cast<int32_t>(offsetof(moveBtnOnClick_t2838918694, ___moveIcons_5)); }
	inline SpriteU5BU5D_t3359083662* get_moveIcons_5() const { return ___moveIcons_5; }
	inline SpriteU5BU5D_t3359083662** get_address_of_moveIcons_5() { return &___moveIcons_5; }
	inline void set_moveIcons_5(SpriteU5BU5D_t3359083662* value)
	{
		___moveIcons_5 = value;
		Il2CppCodeGenWriteBarrier(&___moveIcons_5, value);
	}

	inline static int32_t get_offset_of_moveBtnImage_6() { return static_cast<int32_t>(offsetof(moveBtnOnClick_t2838918694, ___moveBtnImage_6)); }
	inline Image_t2042527209 * get_moveBtnImage_6() const { return ___moveBtnImage_6; }
	inline Image_t2042527209 ** get_address_of_moveBtnImage_6() { return &___moveBtnImage_6; }
	inline void set_moveBtnImage_6(Image_t2042527209 * value)
	{
		___moveBtnImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___moveBtnImage_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
