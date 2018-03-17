#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GE_ELF_Demo
struct  GE_ELF_Demo_t2582567072  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas GE_ELF_Demo::m_UIs
	Canvas_t209405766 * ___m_UIs_2;
	// UnityEngine.Canvas GE_ELF_Demo::m_Toggle
	Canvas_t209405766 * ___m_Toggle_3;
	// UnityEngine.Canvas GE_ELF_Demo::m_Settings
	Canvas_t209405766 * ___m_Settings_4;
	// UnityEngine.Canvas GE_ELF_Demo::m_CategoryAndParticle
	Canvas_t209405766 * ___m_CategoryAndParticle_5;
	// UnityEngine.UI.Text GE_ELF_Demo::m_Category
	Text_t356221433 * ___m_Category_6;
	// UnityEngine.UI.Text GE_ELF_Demo::m_Particle
	Text_t356221433 * ___m_Particle_7;
	// UnityEngine.Color GE_ELF_Demo::m_ColorFire
	Color_t2020392075  ___m_ColorFire_8;
	// UnityEngine.Color GE_ELF_Demo::m_ColorWater
	Color_t2020392075  ___m_ColorWater_9;
	// UnityEngine.Color GE_ELF_Demo::m_ColorWind
	Color_t2020392075  ___m_ColorWind_10;
	// UnityEngine.Color GE_ELF_Demo::m_ColorEarth
	Color_t2020392075  ___m_ColorEarth_11;
	// UnityEngine.Color GE_ELF_Demo::m_ColorThunder
	Color_t2020392075  ___m_ColorThunder_12;
	// UnityEngine.Color GE_ELF_Demo::m_ColorIce
	Color_t2020392075  ___m_ColorIce_13;
	// UnityEngine.Color GE_ELF_Demo::m_ColorLight
	Color_t2020392075  ___m_ColorLight_14;
	// UnityEngine.Color GE_ELF_Demo::m_ColorDarkness
	Color_t2020392075  ___m_ColorDarkness_15;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListFire
	GameObjectU5BU5D_t3057952154* ___m_PrefabListFire_16;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListWater
	GameObjectU5BU5D_t3057952154* ___m_PrefabListWater_17;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListWind
	GameObjectU5BU5D_t3057952154* ___m_PrefabListWind_18;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListEarth
	GameObjectU5BU5D_t3057952154* ___m_PrefabListEarth_19;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListThunder
	GameObjectU5BU5D_t3057952154* ___m_PrefabListThunder_20;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListIce
	GameObjectU5BU5D_t3057952154* ___m_PrefabListIce_21;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListLight
	GameObjectU5BU5D_t3057952154* ___m_PrefabListLight_22;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_PrefabListDarkness
	GameObjectU5BU5D_t3057952154* ___m_PrefabListDarkness_23;
	// System.Int32 GE_ELF_Demo::m_CurrentCategoryIndex
	int32_t ___m_CurrentCategoryIndex_24;
	// System.Int32 GE_ELF_Demo::m_CurrentParticleIndex
	int32_t ___m_CurrentParticleIndex_25;
	// System.String GE_ELF_Demo::m_CategoryName
	String_t* ___m_CategoryName_26;
	// System.String GE_ELF_Demo::m_ParticleName
	String_t* ___m_ParticleName_27;
	// UnityEngine.GameObject[] GE_ELF_Demo::m_CurrentCategory
	GameObjectU5BU5D_t3057952154* ___m_CurrentCategory_28;
	// UnityEngine.GameObject GE_ELF_Demo::m_CurrentParticle
	GameObject_t1756533147 * ___m_CurrentParticle_29;
	// UnityEngine.Vector3 GE_ELF_Demo::m_PreviousMousePosition
	Vector3_t2243707580  ___m_PreviousMousePosition_30;
	// System.Boolean GE_ELF_Demo::m_ShowParticleWhenTouchEnded
	bool ___m_ShowParticleWhenTouchEnded_31;

public:
	inline static int32_t get_offset_of_m_UIs_2() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_UIs_2)); }
	inline Canvas_t209405766 * get_m_UIs_2() const { return ___m_UIs_2; }
	inline Canvas_t209405766 ** get_address_of_m_UIs_2() { return &___m_UIs_2; }
	inline void set_m_UIs_2(Canvas_t209405766 * value)
	{
		___m_UIs_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIs_2, value);
	}

	inline static int32_t get_offset_of_m_Toggle_3() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_Toggle_3)); }
	inline Canvas_t209405766 * get_m_Toggle_3() const { return ___m_Toggle_3; }
	inline Canvas_t209405766 ** get_address_of_m_Toggle_3() { return &___m_Toggle_3; }
	inline void set_m_Toggle_3(Canvas_t209405766 * value)
	{
		___m_Toggle_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Toggle_3, value);
	}

	inline static int32_t get_offset_of_m_Settings_4() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_Settings_4)); }
	inline Canvas_t209405766 * get_m_Settings_4() const { return ___m_Settings_4; }
	inline Canvas_t209405766 ** get_address_of_m_Settings_4() { return &___m_Settings_4; }
	inline void set_m_Settings_4(Canvas_t209405766 * value)
	{
		___m_Settings_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Settings_4, value);
	}

	inline static int32_t get_offset_of_m_CategoryAndParticle_5() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_CategoryAndParticle_5)); }
	inline Canvas_t209405766 * get_m_CategoryAndParticle_5() const { return ___m_CategoryAndParticle_5; }
	inline Canvas_t209405766 ** get_address_of_m_CategoryAndParticle_5() { return &___m_CategoryAndParticle_5; }
	inline void set_m_CategoryAndParticle_5(Canvas_t209405766 * value)
	{
		___m_CategoryAndParticle_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_CategoryAndParticle_5, value);
	}

	inline static int32_t get_offset_of_m_Category_6() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_Category_6)); }
	inline Text_t356221433 * get_m_Category_6() const { return ___m_Category_6; }
	inline Text_t356221433 ** get_address_of_m_Category_6() { return &___m_Category_6; }
	inline void set_m_Category_6(Text_t356221433 * value)
	{
		___m_Category_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Category_6, value);
	}

	inline static int32_t get_offset_of_m_Particle_7() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_Particle_7)); }
	inline Text_t356221433 * get_m_Particle_7() const { return ___m_Particle_7; }
	inline Text_t356221433 ** get_address_of_m_Particle_7() { return &___m_Particle_7; }
	inline void set_m_Particle_7(Text_t356221433 * value)
	{
		___m_Particle_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Particle_7, value);
	}

	inline static int32_t get_offset_of_m_ColorFire_8() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorFire_8)); }
	inline Color_t2020392075  get_m_ColorFire_8() const { return ___m_ColorFire_8; }
	inline Color_t2020392075 * get_address_of_m_ColorFire_8() { return &___m_ColorFire_8; }
	inline void set_m_ColorFire_8(Color_t2020392075  value)
	{
		___m_ColorFire_8 = value;
	}

	inline static int32_t get_offset_of_m_ColorWater_9() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorWater_9)); }
	inline Color_t2020392075  get_m_ColorWater_9() const { return ___m_ColorWater_9; }
	inline Color_t2020392075 * get_address_of_m_ColorWater_9() { return &___m_ColorWater_9; }
	inline void set_m_ColorWater_9(Color_t2020392075  value)
	{
		___m_ColorWater_9 = value;
	}

	inline static int32_t get_offset_of_m_ColorWind_10() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorWind_10)); }
	inline Color_t2020392075  get_m_ColorWind_10() const { return ___m_ColorWind_10; }
	inline Color_t2020392075 * get_address_of_m_ColorWind_10() { return &___m_ColorWind_10; }
	inline void set_m_ColorWind_10(Color_t2020392075  value)
	{
		___m_ColorWind_10 = value;
	}

	inline static int32_t get_offset_of_m_ColorEarth_11() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorEarth_11)); }
	inline Color_t2020392075  get_m_ColorEarth_11() const { return ___m_ColorEarth_11; }
	inline Color_t2020392075 * get_address_of_m_ColorEarth_11() { return &___m_ColorEarth_11; }
	inline void set_m_ColorEarth_11(Color_t2020392075  value)
	{
		___m_ColorEarth_11 = value;
	}

	inline static int32_t get_offset_of_m_ColorThunder_12() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorThunder_12)); }
	inline Color_t2020392075  get_m_ColorThunder_12() const { return ___m_ColorThunder_12; }
	inline Color_t2020392075 * get_address_of_m_ColorThunder_12() { return &___m_ColorThunder_12; }
	inline void set_m_ColorThunder_12(Color_t2020392075  value)
	{
		___m_ColorThunder_12 = value;
	}

	inline static int32_t get_offset_of_m_ColorIce_13() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorIce_13)); }
	inline Color_t2020392075  get_m_ColorIce_13() const { return ___m_ColorIce_13; }
	inline Color_t2020392075 * get_address_of_m_ColorIce_13() { return &___m_ColorIce_13; }
	inline void set_m_ColorIce_13(Color_t2020392075  value)
	{
		___m_ColorIce_13 = value;
	}

	inline static int32_t get_offset_of_m_ColorLight_14() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorLight_14)); }
	inline Color_t2020392075  get_m_ColorLight_14() const { return ___m_ColorLight_14; }
	inline Color_t2020392075 * get_address_of_m_ColorLight_14() { return &___m_ColorLight_14; }
	inline void set_m_ColorLight_14(Color_t2020392075  value)
	{
		___m_ColorLight_14 = value;
	}

	inline static int32_t get_offset_of_m_ColorDarkness_15() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ColorDarkness_15)); }
	inline Color_t2020392075  get_m_ColorDarkness_15() const { return ___m_ColorDarkness_15; }
	inline Color_t2020392075 * get_address_of_m_ColorDarkness_15() { return &___m_ColorDarkness_15; }
	inline void set_m_ColorDarkness_15(Color_t2020392075  value)
	{
		___m_ColorDarkness_15 = value;
	}

	inline static int32_t get_offset_of_m_PrefabListFire_16() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListFire_16)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListFire_16() const { return ___m_PrefabListFire_16; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListFire_16() { return &___m_PrefabListFire_16; }
	inline void set_m_PrefabListFire_16(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListFire_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListFire_16, value);
	}

	inline static int32_t get_offset_of_m_PrefabListWater_17() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListWater_17)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListWater_17() const { return ___m_PrefabListWater_17; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListWater_17() { return &___m_PrefabListWater_17; }
	inline void set_m_PrefabListWater_17(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListWater_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListWater_17, value);
	}

	inline static int32_t get_offset_of_m_PrefabListWind_18() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListWind_18)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListWind_18() const { return ___m_PrefabListWind_18; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListWind_18() { return &___m_PrefabListWind_18; }
	inline void set_m_PrefabListWind_18(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListWind_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListWind_18, value);
	}

	inline static int32_t get_offset_of_m_PrefabListEarth_19() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListEarth_19)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListEarth_19() const { return ___m_PrefabListEarth_19; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListEarth_19() { return &___m_PrefabListEarth_19; }
	inline void set_m_PrefabListEarth_19(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListEarth_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListEarth_19, value);
	}

	inline static int32_t get_offset_of_m_PrefabListThunder_20() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListThunder_20)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListThunder_20() const { return ___m_PrefabListThunder_20; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListThunder_20() { return &___m_PrefabListThunder_20; }
	inline void set_m_PrefabListThunder_20(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListThunder_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListThunder_20, value);
	}

	inline static int32_t get_offset_of_m_PrefabListIce_21() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListIce_21)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListIce_21() const { return ___m_PrefabListIce_21; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListIce_21() { return &___m_PrefabListIce_21; }
	inline void set_m_PrefabListIce_21(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListIce_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListIce_21, value);
	}

	inline static int32_t get_offset_of_m_PrefabListLight_22() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListLight_22)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListLight_22() const { return ___m_PrefabListLight_22; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListLight_22() { return &___m_PrefabListLight_22; }
	inline void set_m_PrefabListLight_22(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListLight_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListLight_22, value);
	}

	inline static int32_t get_offset_of_m_PrefabListDarkness_23() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PrefabListDarkness_23)); }
	inline GameObjectU5BU5D_t3057952154* get_m_PrefabListDarkness_23() const { return ___m_PrefabListDarkness_23; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_PrefabListDarkness_23() { return &___m_PrefabListDarkness_23; }
	inline void set_m_PrefabListDarkness_23(GameObjectU5BU5D_t3057952154* value)
	{
		___m_PrefabListDarkness_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_PrefabListDarkness_23, value);
	}

	inline static int32_t get_offset_of_m_CurrentCategoryIndex_24() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_CurrentCategoryIndex_24)); }
	inline int32_t get_m_CurrentCategoryIndex_24() const { return ___m_CurrentCategoryIndex_24; }
	inline int32_t* get_address_of_m_CurrentCategoryIndex_24() { return &___m_CurrentCategoryIndex_24; }
	inline void set_m_CurrentCategoryIndex_24(int32_t value)
	{
		___m_CurrentCategoryIndex_24 = value;
	}

	inline static int32_t get_offset_of_m_CurrentParticleIndex_25() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_CurrentParticleIndex_25)); }
	inline int32_t get_m_CurrentParticleIndex_25() const { return ___m_CurrentParticleIndex_25; }
	inline int32_t* get_address_of_m_CurrentParticleIndex_25() { return &___m_CurrentParticleIndex_25; }
	inline void set_m_CurrentParticleIndex_25(int32_t value)
	{
		___m_CurrentParticleIndex_25 = value;
	}

	inline static int32_t get_offset_of_m_CategoryName_26() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_CategoryName_26)); }
	inline String_t* get_m_CategoryName_26() const { return ___m_CategoryName_26; }
	inline String_t** get_address_of_m_CategoryName_26() { return &___m_CategoryName_26; }
	inline void set_m_CategoryName_26(String_t* value)
	{
		___m_CategoryName_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_CategoryName_26, value);
	}

	inline static int32_t get_offset_of_m_ParticleName_27() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ParticleName_27)); }
	inline String_t* get_m_ParticleName_27() const { return ___m_ParticleName_27; }
	inline String_t** get_address_of_m_ParticleName_27() { return &___m_ParticleName_27; }
	inline void set_m_ParticleName_27(String_t* value)
	{
		___m_ParticleName_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParticleName_27, value);
	}

	inline static int32_t get_offset_of_m_CurrentCategory_28() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_CurrentCategory_28)); }
	inline GameObjectU5BU5D_t3057952154* get_m_CurrentCategory_28() const { return ___m_CurrentCategory_28; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_CurrentCategory_28() { return &___m_CurrentCategory_28; }
	inline void set_m_CurrentCategory_28(GameObjectU5BU5D_t3057952154* value)
	{
		___m_CurrentCategory_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentCategory_28, value);
	}

	inline static int32_t get_offset_of_m_CurrentParticle_29() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_CurrentParticle_29)); }
	inline GameObject_t1756533147 * get_m_CurrentParticle_29() const { return ___m_CurrentParticle_29; }
	inline GameObject_t1756533147 ** get_address_of_m_CurrentParticle_29() { return &___m_CurrentParticle_29; }
	inline void set_m_CurrentParticle_29(GameObject_t1756533147 * value)
	{
		___m_CurrentParticle_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentParticle_29, value);
	}

	inline static int32_t get_offset_of_m_PreviousMousePosition_30() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_PreviousMousePosition_30)); }
	inline Vector3_t2243707580  get_m_PreviousMousePosition_30() const { return ___m_PreviousMousePosition_30; }
	inline Vector3_t2243707580 * get_address_of_m_PreviousMousePosition_30() { return &___m_PreviousMousePosition_30; }
	inline void set_m_PreviousMousePosition_30(Vector3_t2243707580  value)
	{
		___m_PreviousMousePosition_30 = value;
	}

	inline static int32_t get_offset_of_m_ShowParticleWhenTouchEnded_31() { return static_cast<int32_t>(offsetof(GE_ELF_Demo_t2582567072, ___m_ShowParticleWhenTouchEnded_31)); }
	inline bool get_m_ShowParticleWhenTouchEnded_31() const { return ___m_ShowParticleWhenTouchEnded_31; }
	inline bool* get_address_of_m_ShowParticleWhenTouchEnded_31() { return &___m_ShowParticleWhenTouchEnded_31; }
	inline void set_m_ShowParticleWhenTouchEnded_31(bool value)
	{
		___m_ShowParticleWhenTouchEnded_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
