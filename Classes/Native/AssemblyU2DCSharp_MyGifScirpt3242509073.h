#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyGifScirpt
struct  MyGifScirpt_t3242509073  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] MyGifScirpt::sprites
	SpriteU5BU5D_t3359083662* ___sprites_2;
	// System.String MyGifScirpt::folderName
	String_t* ___folderName_3;
	// System.Single MyGifScirpt::cycleTime
	float ___cycleTime_4;
	// System.Single MyGifScirpt::whiteTime
	float ___whiteTime_5;
	// System.Int32 MyGifScirpt::cycles
	int32_t ___cycles_7;
	// System.Int32 MyGifScirpt::idx
	int32_t ___idx_8;
	// System.Single MyGifScirpt::timer
	float ___timer_9;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(MyGifScirpt_t3242509073, ___sprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_2() const { return ___sprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_2, value);
	}

	inline static int32_t get_offset_of_folderName_3() { return static_cast<int32_t>(offsetof(MyGifScirpt_t3242509073, ___folderName_3)); }
	inline String_t* get_folderName_3() const { return ___folderName_3; }
	inline String_t** get_address_of_folderName_3() { return &___folderName_3; }
	inline void set_folderName_3(String_t* value)
	{
		___folderName_3 = value;
		Il2CppCodeGenWriteBarrier(&___folderName_3, value);
	}

	inline static int32_t get_offset_of_cycleTime_4() { return static_cast<int32_t>(offsetof(MyGifScirpt_t3242509073, ___cycleTime_4)); }
	inline float get_cycleTime_4() const { return ___cycleTime_4; }
	inline float* get_address_of_cycleTime_4() { return &___cycleTime_4; }
	inline void set_cycleTime_4(float value)
	{
		___cycleTime_4 = value;
	}

	inline static int32_t get_offset_of_whiteTime_5() { return static_cast<int32_t>(offsetof(MyGifScirpt_t3242509073, ___whiteTime_5)); }
	inline float get_whiteTime_5() const { return ___whiteTime_5; }
	inline float* get_address_of_whiteTime_5() { return &___whiteTime_5; }
	inline void set_whiteTime_5(float value)
	{
		___whiteTime_5 = value;
	}

	inline static int32_t get_offset_of_cycles_7() { return static_cast<int32_t>(offsetof(MyGifScirpt_t3242509073, ___cycles_7)); }
	inline int32_t get_cycles_7() const { return ___cycles_7; }
	inline int32_t* get_address_of_cycles_7() { return &___cycles_7; }
	inline void set_cycles_7(int32_t value)
	{
		___cycles_7 = value;
	}

	inline static int32_t get_offset_of_idx_8() { return static_cast<int32_t>(offsetof(MyGifScirpt_t3242509073, ___idx_8)); }
	inline int32_t get_idx_8() const { return ___idx_8; }
	inline int32_t* get_address_of_idx_8() { return &___idx_8; }
	inline void set_idx_8(int32_t value)
	{
		___idx_8 = value;
	}

	inline static int32_t get_offset_of_timer_9() { return static_cast<int32_t>(offsetof(MyGifScirpt_t3242509073, ___timer_9)); }
	inline float get_timer_9() const { return ___timer_9; }
	inline float* get_address_of_timer_9() { return &___timer_9; }
	inline void set_timer_9(float value)
	{
		___timer_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
