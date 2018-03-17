#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniMapBorderGUI
struct  MiniMapBorderGUI_t2821900316  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture MiniMapBorderGUI::boxTexture
	Texture_t2243626319 * ___boxTexture_2;
	// UnityEngine.GUIStyle MiniMapBorderGUI::currentStyle
	GUIStyle_t1799908754 * ___currentStyle_3;

public:
	inline static int32_t get_offset_of_boxTexture_2() { return static_cast<int32_t>(offsetof(MiniMapBorderGUI_t2821900316, ___boxTexture_2)); }
	inline Texture_t2243626319 * get_boxTexture_2() const { return ___boxTexture_2; }
	inline Texture_t2243626319 ** get_address_of_boxTexture_2() { return &___boxTexture_2; }
	inline void set_boxTexture_2(Texture_t2243626319 * value)
	{
		___boxTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___boxTexture_2, value);
	}

	inline static int32_t get_offset_of_currentStyle_3() { return static_cast<int32_t>(offsetof(MiniMapBorderGUI_t2821900316, ___currentStyle_3)); }
	inline GUIStyle_t1799908754 * get_currentStyle_3() const { return ___currentStyle_3; }
	inline GUIStyle_t1799908754 ** get_address_of_currentStyle_3() { return &___currentStyle_3; }
	inline void set_currentStyle_3(GUIStyle_t1799908754 * value)
	{
		___currentStyle_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentStyle_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
