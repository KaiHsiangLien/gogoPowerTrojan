#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_t4224369806;
// CameraLogic
struct CameraLogic_t1357494393;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinLosePose
struct  WinLosePose_t3284975926  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] WinLosePose::win_animations
	StringU5BU5D_t1642385972* ___win_animations_2;
	// System.String[] WinLosePose::lose_animations
	StringU5BU5D_t1642385972* ___lose_animations_3;
	// UnityEngine.Animator[] WinLosePose::m_animators
	AnimatorU5BU5D_t4224369806* ___m_animators_4;
	// CameraLogic WinLosePose::m_cameraLogic
	CameraLogic_t1357494393 * ___m_cameraLogic_5;
	// System.Boolean WinLosePose::debug
	bool ___debug_6;
	// System.Int32 WinLosePose::myDebugRanking
	int32_t ___myDebugRanking_7;

public:
	inline static int32_t get_offset_of_win_animations_2() { return static_cast<int32_t>(offsetof(WinLosePose_t3284975926, ___win_animations_2)); }
	inline StringU5BU5D_t1642385972* get_win_animations_2() const { return ___win_animations_2; }
	inline StringU5BU5D_t1642385972** get_address_of_win_animations_2() { return &___win_animations_2; }
	inline void set_win_animations_2(StringU5BU5D_t1642385972* value)
	{
		___win_animations_2 = value;
		Il2CppCodeGenWriteBarrier(&___win_animations_2, value);
	}

	inline static int32_t get_offset_of_lose_animations_3() { return static_cast<int32_t>(offsetof(WinLosePose_t3284975926, ___lose_animations_3)); }
	inline StringU5BU5D_t1642385972* get_lose_animations_3() const { return ___lose_animations_3; }
	inline StringU5BU5D_t1642385972** get_address_of_lose_animations_3() { return &___lose_animations_3; }
	inline void set_lose_animations_3(StringU5BU5D_t1642385972* value)
	{
		___lose_animations_3 = value;
		Il2CppCodeGenWriteBarrier(&___lose_animations_3, value);
	}

	inline static int32_t get_offset_of_m_animators_4() { return static_cast<int32_t>(offsetof(WinLosePose_t3284975926, ___m_animators_4)); }
	inline AnimatorU5BU5D_t4224369806* get_m_animators_4() const { return ___m_animators_4; }
	inline AnimatorU5BU5D_t4224369806** get_address_of_m_animators_4() { return &___m_animators_4; }
	inline void set_m_animators_4(AnimatorU5BU5D_t4224369806* value)
	{
		___m_animators_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_animators_4, value);
	}

	inline static int32_t get_offset_of_m_cameraLogic_5() { return static_cast<int32_t>(offsetof(WinLosePose_t3284975926, ___m_cameraLogic_5)); }
	inline CameraLogic_t1357494393 * get_m_cameraLogic_5() const { return ___m_cameraLogic_5; }
	inline CameraLogic_t1357494393 ** get_address_of_m_cameraLogic_5() { return &___m_cameraLogic_5; }
	inline void set_m_cameraLogic_5(CameraLogic_t1357494393 * value)
	{
		___m_cameraLogic_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_cameraLogic_5, value);
	}

	inline static int32_t get_offset_of_debug_6() { return static_cast<int32_t>(offsetof(WinLosePose_t3284975926, ___debug_6)); }
	inline bool get_debug_6() const { return ___debug_6; }
	inline bool* get_address_of_debug_6() { return &___debug_6; }
	inline void set_debug_6(bool value)
	{
		___debug_6 = value;
	}

	inline static int32_t get_offset_of_myDebugRanking_7() { return static_cast<int32_t>(offsetof(WinLosePose_t3284975926, ___myDebugRanking_7)); }
	inline int32_t get_myDebugRanking_7() const { return ___myDebugRanking_7; }
	inline int32_t* get_address_of_myDebugRanking_7() { return &___myDebugRanking_7; }
	inline void set_myDebugRanking_7(int32_t value)
	{
		___myDebugRanking_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
