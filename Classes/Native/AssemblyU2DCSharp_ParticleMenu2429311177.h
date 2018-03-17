#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ParticleExamples[]
struct ParticleExamplesU5BU5D_t3021247764;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleMenu
struct  ParticleMenu_t2429311177  : public MonoBehaviour_t1158329972
{
public:
	// ParticleExamples[] ParticleMenu::particleSystems
	ParticleExamplesU5BU5D_t3021247764* ___particleSystems_2;
	// UnityEngine.GameObject ParticleMenu::gunGameObject
	GameObject_t1756533147 * ___gunGameObject_3;
	// System.Int32 ParticleMenu::currentIndex
	int32_t ___currentIndex_4;
	// UnityEngine.GameObject ParticleMenu::currentGO
	GameObject_t1756533147 * ___currentGO_5;
	// UnityEngine.Transform ParticleMenu::spawnLocation
	Transform_t3275118058 * ___spawnLocation_6;
	// UnityEngine.UI.Text ParticleMenu::title
	Text_t356221433 * ___title_7;
	// UnityEngine.UI.Text ParticleMenu::description
	Text_t356221433 * ___description_8;
	// UnityEngine.UI.Text ParticleMenu::navigationDetails
	Text_t356221433 * ___navigationDetails_9;

public:
	inline static int32_t get_offset_of_particleSystems_2() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___particleSystems_2)); }
	inline ParticleExamplesU5BU5D_t3021247764* get_particleSystems_2() const { return ___particleSystems_2; }
	inline ParticleExamplesU5BU5D_t3021247764** get_address_of_particleSystems_2() { return &___particleSystems_2; }
	inline void set_particleSystems_2(ParticleExamplesU5BU5D_t3021247764* value)
	{
		___particleSystems_2 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystems_2, value);
	}

	inline static int32_t get_offset_of_gunGameObject_3() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___gunGameObject_3)); }
	inline GameObject_t1756533147 * get_gunGameObject_3() const { return ___gunGameObject_3; }
	inline GameObject_t1756533147 ** get_address_of_gunGameObject_3() { return &___gunGameObject_3; }
	inline void set_gunGameObject_3(GameObject_t1756533147 * value)
	{
		___gunGameObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___gunGameObject_3, value);
	}

	inline static int32_t get_offset_of_currentIndex_4() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___currentIndex_4)); }
	inline int32_t get_currentIndex_4() const { return ___currentIndex_4; }
	inline int32_t* get_address_of_currentIndex_4() { return &___currentIndex_4; }
	inline void set_currentIndex_4(int32_t value)
	{
		___currentIndex_4 = value;
	}

	inline static int32_t get_offset_of_currentGO_5() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___currentGO_5)); }
	inline GameObject_t1756533147 * get_currentGO_5() const { return ___currentGO_5; }
	inline GameObject_t1756533147 ** get_address_of_currentGO_5() { return &___currentGO_5; }
	inline void set_currentGO_5(GameObject_t1756533147 * value)
	{
		___currentGO_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentGO_5, value);
	}

	inline static int32_t get_offset_of_spawnLocation_6() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___spawnLocation_6)); }
	inline Transform_t3275118058 * get_spawnLocation_6() const { return ___spawnLocation_6; }
	inline Transform_t3275118058 ** get_address_of_spawnLocation_6() { return &___spawnLocation_6; }
	inline void set_spawnLocation_6(Transform_t3275118058 * value)
	{
		___spawnLocation_6 = value;
		Il2CppCodeGenWriteBarrier(&___spawnLocation_6, value);
	}

	inline static int32_t get_offset_of_title_7() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___title_7)); }
	inline Text_t356221433 * get_title_7() const { return ___title_7; }
	inline Text_t356221433 ** get_address_of_title_7() { return &___title_7; }
	inline void set_title_7(Text_t356221433 * value)
	{
		___title_7 = value;
		Il2CppCodeGenWriteBarrier(&___title_7, value);
	}

	inline static int32_t get_offset_of_description_8() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___description_8)); }
	inline Text_t356221433 * get_description_8() const { return ___description_8; }
	inline Text_t356221433 ** get_address_of_description_8() { return &___description_8; }
	inline void set_description_8(Text_t356221433 * value)
	{
		___description_8 = value;
		Il2CppCodeGenWriteBarrier(&___description_8, value);
	}

	inline static int32_t get_offset_of_navigationDetails_9() { return static_cast<int32_t>(offsetof(ParticleMenu_t2429311177, ___navigationDetails_9)); }
	inline Text_t356221433 * get_navigationDetails_9() const { return ___navigationDetails_9; }
	inline Text_t356221433 ** get_address_of_navigationDetails_9() { return &___navigationDetails_9; }
	inline void set_navigationDetails_9(Text_t356221433 * value)
	{
		___navigationDetails_9 = value;
		Il2CppCodeGenWriteBarrier(&___navigationDetails_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
