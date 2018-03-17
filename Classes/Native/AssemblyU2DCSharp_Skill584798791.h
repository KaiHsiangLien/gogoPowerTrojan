#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skill
struct  Skill_t584798791  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip Skill::skillAudio
	AudioClip_t1932558630 * ___skillAudio_2;
	// UnityEngine.AudioSource Skill::skillSound
	AudioSource_t1135106623 * ___skillSound_3;
	// System.Boolean Skill::isSkillUsing
	bool ___isSkillUsing_4;

public:
	inline static int32_t get_offset_of_skillAudio_2() { return static_cast<int32_t>(offsetof(Skill_t584798791, ___skillAudio_2)); }
	inline AudioClip_t1932558630 * get_skillAudio_2() const { return ___skillAudio_2; }
	inline AudioClip_t1932558630 ** get_address_of_skillAudio_2() { return &___skillAudio_2; }
	inline void set_skillAudio_2(AudioClip_t1932558630 * value)
	{
		___skillAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___skillAudio_2, value);
	}

	inline static int32_t get_offset_of_skillSound_3() { return static_cast<int32_t>(offsetof(Skill_t584798791, ___skillSound_3)); }
	inline AudioSource_t1135106623 * get_skillSound_3() const { return ___skillSound_3; }
	inline AudioSource_t1135106623 ** get_address_of_skillSound_3() { return &___skillSound_3; }
	inline void set_skillSound_3(AudioSource_t1135106623 * value)
	{
		___skillSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___skillSound_3, value);
	}

	inline static int32_t get_offset_of_isSkillUsing_4() { return static_cast<int32_t>(offsetof(Skill_t584798791, ___isSkillUsing_4)); }
	inline bool get_isSkillUsing_4() const { return ___isSkillUsing_4; }
	inline bool* get_address_of_isSkillUsing_4() { return &___isSkillUsing_4; }
	inline void set_isSkillUsing_4(bool value)
	{
		___isSkillUsing_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
