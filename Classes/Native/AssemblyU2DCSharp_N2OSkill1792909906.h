#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Skill584798791.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1490986844;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// N2OSkill
struct  N2OSkill_t1792909906  : public Skill_t584798791
{
public:
	// UnityEngine.Rigidbody N2OSkill::rb
	Rigidbody_t4233889191 * ___rb_5;
	// System.Single N2OSkill::N2OPower
	float ___N2OPower_6;
	// System.Single N2OSkill::N2OTopSpeedModifier
	float ___N2OTopSpeedModifier_7;
	// System.Single N2OSkill::N2ORBAngularDrag
	float ___N2ORBAngularDrag_8;
	// UnityEngine.ParticleSystem[] N2OSkill::N2OParticles
	ParticleSystemU5BU5D_t1490986844* ___N2OParticles_9;
	// System.Single N2OSkill::N2OTimer
	float ___N2OTimer_10;
	// System.Single N2OSkill::N2OTime
	float ___N2OTime_11;
	// System.Boolean N2OSkill::isN2OReady
	bool ___isN2OReady_12;

public:
	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___rb_5)); }
	inline Rigidbody_t4233889191 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t4233889191 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_N2OPower_6() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___N2OPower_6)); }
	inline float get_N2OPower_6() const { return ___N2OPower_6; }
	inline float* get_address_of_N2OPower_6() { return &___N2OPower_6; }
	inline void set_N2OPower_6(float value)
	{
		___N2OPower_6 = value;
	}

	inline static int32_t get_offset_of_N2OTopSpeedModifier_7() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___N2OTopSpeedModifier_7)); }
	inline float get_N2OTopSpeedModifier_7() const { return ___N2OTopSpeedModifier_7; }
	inline float* get_address_of_N2OTopSpeedModifier_7() { return &___N2OTopSpeedModifier_7; }
	inline void set_N2OTopSpeedModifier_7(float value)
	{
		___N2OTopSpeedModifier_7 = value;
	}

	inline static int32_t get_offset_of_N2ORBAngularDrag_8() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___N2ORBAngularDrag_8)); }
	inline float get_N2ORBAngularDrag_8() const { return ___N2ORBAngularDrag_8; }
	inline float* get_address_of_N2ORBAngularDrag_8() { return &___N2ORBAngularDrag_8; }
	inline void set_N2ORBAngularDrag_8(float value)
	{
		___N2ORBAngularDrag_8 = value;
	}

	inline static int32_t get_offset_of_N2OParticles_9() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___N2OParticles_9)); }
	inline ParticleSystemU5BU5D_t1490986844* get_N2OParticles_9() const { return ___N2OParticles_9; }
	inline ParticleSystemU5BU5D_t1490986844** get_address_of_N2OParticles_9() { return &___N2OParticles_9; }
	inline void set_N2OParticles_9(ParticleSystemU5BU5D_t1490986844* value)
	{
		___N2OParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___N2OParticles_9, value);
	}

	inline static int32_t get_offset_of_N2OTimer_10() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___N2OTimer_10)); }
	inline float get_N2OTimer_10() const { return ___N2OTimer_10; }
	inline float* get_address_of_N2OTimer_10() { return &___N2OTimer_10; }
	inline void set_N2OTimer_10(float value)
	{
		___N2OTimer_10 = value;
	}

	inline static int32_t get_offset_of_N2OTime_11() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___N2OTime_11)); }
	inline float get_N2OTime_11() const { return ___N2OTime_11; }
	inline float* get_address_of_N2OTime_11() { return &___N2OTime_11; }
	inline void set_N2OTime_11(float value)
	{
		___N2OTime_11 = value;
	}

	inline static int32_t get_offset_of_isN2OReady_12() { return static_cast<int32_t>(offsetof(N2OSkill_t1792909906, ___isN2OReady_12)); }
	inline bool get_isN2OReady_12() const { return ___isN2OReady_12; }
	inline bool* get_address_of_isN2OReady_12() { return &___isN2OReady_12; }
	inline void set_isN2OReady_12(bool value)
	{
		___isN2OReady_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
