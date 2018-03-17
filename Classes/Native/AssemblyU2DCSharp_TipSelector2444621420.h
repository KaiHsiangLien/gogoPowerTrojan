#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TipSelector
struct  TipSelector_t2444621420  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture[] TipSelector::tips
	TextureU5BU5D_t2474608790* ___tips_2;
	// UnityEngine.Texture[] TipSelector::nightMareTips
	TextureU5BU5D_t2474608790* ___nightMareTips_3;

public:
	inline static int32_t get_offset_of_tips_2() { return static_cast<int32_t>(offsetof(TipSelector_t2444621420, ___tips_2)); }
	inline TextureU5BU5D_t2474608790* get_tips_2() const { return ___tips_2; }
	inline TextureU5BU5D_t2474608790** get_address_of_tips_2() { return &___tips_2; }
	inline void set_tips_2(TextureU5BU5D_t2474608790* value)
	{
		___tips_2 = value;
		Il2CppCodeGenWriteBarrier(&___tips_2, value);
	}

	inline static int32_t get_offset_of_nightMareTips_3() { return static_cast<int32_t>(offsetof(TipSelector_t2444621420, ___nightMareTips_3)); }
	inline TextureU5BU5D_t2474608790* get_nightMareTips_3() const { return ___nightMareTips_3; }
	inline TextureU5BU5D_t2474608790** get_address_of_nightMareTips_3() { return &___nightMareTips_3; }
	inline void set_nightMareTips_3(TextureU5BU5D_t2474608790* value)
	{
		___nightMareTips_3 = value;
		Il2CppCodeGenWriteBarrier(&___nightMareTips_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
