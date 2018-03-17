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
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharPnaelController
struct  CharPnaelController_t3082321540  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CharPnaelController::homePanel
	GameObject_t1756533147 * ___homePanel_2;
	// System.Int32 CharPnaelController::charIdx
	int32_t ___charIdx_3;
	// System.Int32[] CharPnaelController::charLv
	Int32U5BU5D_t3030399641* ___charLv_6;
	// UnityEngine.UI.Text CharPnaelController::title
	Text_t356221433 * ___title_7;
	// UnityEngine.UI.Text CharPnaelController::description
	Text_t356221433 * ___description_8;
	// UnityEngine.UI.Text CharPnaelController::levelText
	Text_t356221433 * ___levelText_9;
	// UnityEngine.Sprite[] CharPnaelController::iconSprites
	SpriteU5BU5D_t3359083662* ___iconSprites_10;
	// UnityEngine.UI.Image CharPnaelController::icon
	Image_t2042527209 * ___icon_11;

public:
	inline static int32_t get_offset_of_homePanel_2() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___homePanel_2)); }
	inline GameObject_t1756533147 * get_homePanel_2() const { return ___homePanel_2; }
	inline GameObject_t1756533147 ** get_address_of_homePanel_2() { return &___homePanel_2; }
	inline void set_homePanel_2(GameObject_t1756533147 * value)
	{
		___homePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___homePanel_2, value);
	}

	inline static int32_t get_offset_of_charIdx_3() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___charIdx_3)); }
	inline int32_t get_charIdx_3() const { return ___charIdx_3; }
	inline int32_t* get_address_of_charIdx_3() { return &___charIdx_3; }
	inline void set_charIdx_3(int32_t value)
	{
		___charIdx_3 = value;
	}

	inline static int32_t get_offset_of_charLv_6() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___charLv_6)); }
	inline Int32U5BU5D_t3030399641* get_charLv_6() const { return ___charLv_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_charLv_6() { return &___charLv_6; }
	inline void set_charLv_6(Int32U5BU5D_t3030399641* value)
	{
		___charLv_6 = value;
		Il2CppCodeGenWriteBarrier(&___charLv_6, value);
	}

	inline static int32_t get_offset_of_title_7() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___title_7)); }
	inline Text_t356221433 * get_title_7() const { return ___title_7; }
	inline Text_t356221433 ** get_address_of_title_7() { return &___title_7; }
	inline void set_title_7(Text_t356221433 * value)
	{
		___title_7 = value;
		Il2CppCodeGenWriteBarrier(&___title_7, value);
	}

	inline static int32_t get_offset_of_description_8() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___description_8)); }
	inline Text_t356221433 * get_description_8() const { return ___description_8; }
	inline Text_t356221433 ** get_address_of_description_8() { return &___description_8; }
	inline void set_description_8(Text_t356221433 * value)
	{
		___description_8 = value;
		Il2CppCodeGenWriteBarrier(&___description_8, value);
	}

	inline static int32_t get_offset_of_levelText_9() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___levelText_9)); }
	inline Text_t356221433 * get_levelText_9() const { return ___levelText_9; }
	inline Text_t356221433 ** get_address_of_levelText_9() { return &___levelText_9; }
	inline void set_levelText_9(Text_t356221433 * value)
	{
		___levelText_9 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_9, value);
	}

	inline static int32_t get_offset_of_iconSprites_10() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___iconSprites_10)); }
	inline SpriteU5BU5D_t3359083662* get_iconSprites_10() const { return ___iconSprites_10; }
	inline SpriteU5BU5D_t3359083662** get_address_of_iconSprites_10() { return &___iconSprites_10; }
	inline void set_iconSprites_10(SpriteU5BU5D_t3359083662* value)
	{
		___iconSprites_10 = value;
		Il2CppCodeGenWriteBarrier(&___iconSprites_10, value);
	}

	inline static int32_t get_offset_of_icon_11() { return static_cast<int32_t>(offsetof(CharPnaelController_t3082321540, ___icon_11)); }
	inline Image_t2042527209 * get_icon_11() const { return ___icon_11; }
	inline Image_t2042527209 ** get_address_of_icon_11() { return &___icon_11; }
	inline void set_icon_11(Image_t2042527209 * value)
	{
		___icon_11 = value;
		Il2CppCodeGenWriteBarrier(&___icon_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
