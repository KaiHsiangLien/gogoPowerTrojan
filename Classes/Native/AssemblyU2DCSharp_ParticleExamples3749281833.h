#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleExamples
struct  ParticleExamples_t3749281833  : public Il2CppObject
{
public:
	// System.String ParticleExamples::title
	String_t* ___title_0;
	// System.String ParticleExamples::description
	String_t* ___description_1;
	// System.Boolean ParticleExamples::isWeaponEffect
	bool ___isWeaponEffect_2;
	// UnityEngine.GameObject ParticleExamples::particleSystemGO
	GameObject_t1756533147 * ___particleSystemGO_3;
	// UnityEngine.Vector3 ParticleExamples::particlePosition
	Vector3_t2243707580  ___particlePosition_4;
	// UnityEngine.Vector3 ParticleExamples::particleRotation
	Vector3_t2243707580  ___particleRotation_5;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(ParticleExamples_t3749281833, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(ParticleExamples_t3749281833, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}

	inline static int32_t get_offset_of_isWeaponEffect_2() { return static_cast<int32_t>(offsetof(ParticleExamples_t3749281833, ___isWeaponEffect_2)); }
	inline bool get_isWeaponEffect_2() const { return ___isWeaponEffect_2; }
	inline bool* get_address_of_isWeaponEffect_2() { return &___isWeaponEffect_2; }
	inline void set_isWeaponEffect_2(bool value)
	{
		___isWeaponEffect_2 = value;
	}

	inline static int32_t get_offset_of_particleSystemGO_3() { return static_cast<int32_t>(offsetof(ParticleExamples_t3749281833, ___particleSystemGO_3)); }
	inline GameObject_t1756533147 * get_particleSystemGO_3() const { return ___particleSystemGO_3; }
	inline GameObject_t1756533147 ** get_address_of_particleSystemGO_3() { return &___particleSystemGO_3; }
	inline void set_particleSystemGO_3(GameObject_t1756533147 * value)
	{
		___particleSystemGO_3 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystemGO_3, value);
	}

	inline static int32_t get_offset_of_particlePosition_4() { return static_cast<int32_t>(offsetof(ParticleExamples_t3749281833, ___particlePosition_4)); }
	inline Vector3_t2243707580  get_particlePosition_4() const { return ___particlePosition_4; }
	inline Vector3_t2243707580 * get_address_of_particlePosition_4() { return &___particlePosition_4; }
	inline void set_particlePosition_4(Vector3_t2243707580  value)
	{
		___particlePosition_4 = value;
	}

	inline static int32_t get_offset_of_particleRotation_5() { return static_cast<int32_t>(offsetof(ParticleExamples_t3749281833, ___particleRotation_5)); }
	inline Vector3_t2243707580  get_particleRotation_5() const { return ___particleRotation_5; }
	inline Vector3_t2243707580 * get_address_of_particleRotation_5() { return &___particleRotation_5; }
	inline void set_particleRotation_5(Vector3_t2243707580  value)
	{
		___particleRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
