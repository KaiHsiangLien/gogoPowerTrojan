#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STAT2051437640.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIA_SCALE2298611602.h"

// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// MediaPlayerCtrl/VideoResize
struct VideoResize_t2293664948;
// MediaPlayerCtrl/VideoReady
struct VideoReady_t2776178769;
// MediaPlayerCtrl/VideoEnd
struct VideoEnd_t1362782769;
// MediaPlayerCtrl/VideoError
struct VideoError_t491951502;
// MediaPlayerCtrl/VideoFirstFrameReady
struct VideoFirstFrameReady_t3566592450;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl
struct  MediaPlayerCtrl_t1284484152  : public MonoBehaviour_t1158329972
{
public:
	// System.String MediaPlayerCtrl::m_strFileName
	String_t* ___m_strFileName_2;
	// UnityEngine.GameObject[] MediaPlayerCtrl::m_TargetMaterial
	GameObjectU5BU5D_t3057952154* ___m_TargetMaterial_3;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTexture
	Texture2D_t3542995729 * ___m_VideoTexture_4;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummy
	Texture2D_t3542995729 * ___m_VideoTextureDummy_5;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureY
	Texture2D_t3542995729 * ___m_VideoTextureY_6;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureU
	Texture2D_t3542995729 * ___m_VideoTextureU_7;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureV
	Texture2D_t3542995729 * ___m_VideoTextureV_8;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummyY
	Texture2D_t3542995729 * ___m_VideoTextureDummyY_9;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummyU
	Texture2D_t3542995729 * ___m_VideoTextureDummyU_10;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummyV
	Texture2D_t3542995729 * ___m_VideoTextureDummyV_11;
	// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::m_CurrentState
	int32_t ___m_CurrentState_12;
	// System.Int32 MediaPlayerCtrl::m_iCurrentSeekPosition
	int32_t ___m_iCurrentSeekPosition_13;
	// System.Single MediaPlayerCtrl::m_fVolume
	float ___m_fVolume_14;
	// System.Int32 MediaPlayerCtrl::m_iWidth
	int32_t ___m_iWidth_15;
	// System.Int32 MediaPlayerCtrl::m_iHeight
	int32_t ___m_iHeight_16;
	// System.Single MediaPlayerCtrl::m_fSpeed
	float ___m_fSpeed_17;
	// System.Boolean MediaPlayerCtrl::m_bFullScreen
	bool ___m_bFullScreen_18;
	// System.Boolean MediaPlayerCtrl::m_bSupportRockchip
	bool ___m_bSupportRockchip_19;
	// System.Boolean MediaPlayerCtrl::m_bPC_FastMode
	bool ___m_bPC_FastMode_20;
	// MediaPlayerCtrl/VideoResize MediaPlayerCtrl::OnResize
	VideoResize_t2293664948 * ___OnResize_21;
	// MediaPlayerCtrl/VideoReady MediaPlayerCtrl::OnReady
	VideoReady_t2776178769 * ___OnReady_22;
	// MediaPlayerCtrl/VideoEnd MediaPlayerCtrl::OnEnd
	VideoEnd_t1362782769 * ___OnEnd_23;
	// MediaPlayerCtrl/VideoError MediaPlayerCtrl::OnVideoError
	VideoError_t491951502 * ___OnVideoError_24;
	// MediaPlayerCtrl/VideoFirstFrameReady MediaPlayerCtrl::OnVideoFirstFrameReady
	VideoFirstFrameReady_t3566592450 * ___OnVideoFirstFrameReady_25;
	// System.IntPtr MediaPlayerCtrl::m_texPtr
	IntPtr_t ___m_texPtr_26;
	// System.IntPtr MediaPlayerCtrl::m_texPtrY
	IntPtr_t ___m_texPtrY_27;
	// System.IntPtr MediaPlayerCtrl::m_texPtrU
	IntPtr_t ___m_texPtrU_28;
	// System.IntPtr MediaPlayerCtrl::m_texPtrV
	IntPtr_t ___m_texPtrV_29;
	// UnityEngine.Shader MediaPlayerCtrl::m_shaderYUV
	Shader_t2430389951 * ___m_shaderYUV_30;
	// System.Int32 MediaPlayerCtrl::m_iPauseFrame
	int32_t ___m_iPauseFrame_31;
	// System.Int32 MediaPlayerCtrl::m_iAndroidMgrID
	int32_t ___m_iAndroidMgrID_32;
	// System.Boolean MediaPlayerCtrl::m_bIsFirstFrameReady
	bool ___m_bIsFirstFrameReady_33;
	// System.Boolean MediaPlayerCtrl::m_bFirst
	bool ___m_bFirst_34;
	// MediaPlayerCtrl/MEDIA_SCALE MediaPlayerCtrl::m_ScaleValue
	int32_t ___m_ScaleValue_35;
	// UnityEngine.GameObject[] MediaPlayerCtrl::m_objResize
	GameObjectU5BU5D_t3057952154* ___m_objResize_36;
	// System.Boolean MediaPlayerCtrl::m_bLoop
	bool ___m_bLoop_37;
	// System.Boolean MediaPlayerCtrl::m_bAutoPlay
	bool ___m_bAutoPlay_38;
	// System.Boolean MediaPlayerCtrl::m_bStop
	bool ___m_bStop_39;
	// System.Boolean MediaPlayerCtrl::m_bInit
	bool ___m_bInit_40;
	// System.Boolean MediaPlayerCtrl::m_bCheckFBO
	bool ___m_bCheckFBO_41;
	// System.Boolean MediaPlayerCtrl::m_bPause
	bool ___m_bPause_42;
	// System.Boolean MediaPlayerCtrl::m_bReadyPlay
	bool ___m_bReadyPlay_43;
	// System.Int32 MediaPlayerCtrl::m_iID
	int32_t ___m_iID_44;
	// UnityEngine.Texture2D MediaPlayerCtrl::_videoTexture
	Texture2D_t3542995729 * ____videoTexture_45;
	// System.Boolean MediaPlayerCtrl::bFirstIOS
	bool ___bFirstIOS_46;
	// System.Collections.Generic.List`1<System.Action> MediaPlayerCtrl::unityMainThreadActionList
	List_1_t2595592884 * ___unityMainThreadActionList_47;
	// System.Boolean MediaPlayerCtrl::checkNewActions
	bool ___checkNewActions_48;
	// System.Object MediaPlayerCtrl::thisLock
	Il2CppObject * ___thisLock_49;

public:
	inline static int32_t get_offset_of_m_strFileName_2() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_strFileName_2)); }
	inline String_t* get_m_strFileName_2() const { return ___m_strFileName_2; }
	inline String_t** get_address_of_m_strFileName_2() { return &___m_strFileName_2; }
	inline void set_m_strFileName_2(String_t* value)
	{
		___m_strFileName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_strFileName_2, value);
	}

	inline static int32_t get_offset_of_m_TargetMaterial_3() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_TargetMaterial_3)); }
	inline GameObjectU5BU5D_t3057952154* get_m_TargetMaterial_3() const { return ___m_TargetMaterial_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_TargetMaterial_3() { return &___m_TargetMaterial_3; }
	inline void set_m_TargetMaterial_3(GameObjectU5BU5D_t3057952154* value)
	{
		___m_TargetMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetMaterial_3, value);
	}

	inline static int32_t get_offset_of_m_VideoTexture_4() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTexture_4)); }
	inline Texture2D_t3542995729 * get_m_VideoTexture_4() const { return ___m_VideoTexture_4; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTexture_4() { return &___m_VideoTexture_4; }
	inline void set_m_VideoTexture_4(Texture2D_t3542995729 * value)
	{
		___m_VideoTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTexture_4, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummy_5() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTextureDummy_5)); }
	inline Texture2D_t3542995729 * get_m_VideoTextureDummy_5() const { return ___m_VideoTextureDummy_5; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTextureDummy_5() { return &___m_VideoTextureDummy_5; }
	inline void set_m_VideoTextureDummy_5(Texture2D_t3542995729 * value)
	{
		___m_VideoTextureDummy_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureDummy_5, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureY_6() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTextureY_6)); }
	inline Texture2D_t3542995729 * get_m_VideoTextureY_6() const { return ___m_VideoTextureY_6; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTextureY_6() { return &___m_VideoTextureY_6; }
	inline void set_m_VideoTextureY_6(Texture2D_t3542995729 * value)
	{
		___m_VideoTextureY_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureY_6, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureU_7() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTextureU_7)); }
	inline Texture2D_t3542995729 * get_m_VideoTextureU_7() const { return ___m_VideoTextureU_7; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTextureU_7() { return &___m_VideoTextureU_7; }
	inline void set_m_VideoTextureU_7(Texture2D_t3542995729 * value)
	{
		___m_VideoTextureU_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureU_7, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureV_8() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTextureV_8)); }
	inline Texture2D_t3542995729 * get_m_VideoTextureV_8() const { return ___m_VideoTextureV_8; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTextureV_8() { return &___m_VideoTextureV_8; }
	inline void set_m_VideoTextureV_8(Texture2D_t3542995729 * value)
	{
		___m_VideoTextureV_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureV_8, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummyY_9() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTextureDummyY_9)); }
	inline Texture2D_t3542995729 * get_m_VideoTextureDummyY_9() const { return ___m_VideoTextureDummyY_9; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTextureDummyY_9() { return &___m_VideoTextureDummyY_9; }
	inline void set_m_VideoTextureDummyY_9(Texture2D_t3542995729 * value)
	{
		___m_VideoTextureDummyY_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureDummyY_9, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummyU_10() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTextureDummyU_10)); }
	inline Texture2D_t3542995729 * get_m_VideoTextureDummyU_10() const { return ___m_VideoTextureDummyU_10; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTextureDummyU_10() { return &___m_VideoTextureDummyU_10; }
	inline void set_m_VideoTextureDummyU_10(Texture2D_t3542995729 * value)
	{
		___m_VideoTextureDummyU_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureDummyU_10, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummyV_11() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_VideoTextureDummyV_11)); }
	inline Texture2D_t3542995729 * get_m_VideoTextureDummyV_11() const { return ___m_VideoTextureDummyV_11; }
	inline Texture2D_t3542995729 ** get_address_of_m_VideoTextureDummyV_11() { return &___m_VideoTextureDummyV_11; }
	inline void set_m_VideoTextureDummyV_11(Texture2D_t3542995729 * value)
	{
		___m_VideoTextureDummyV_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureDummyV_11, value);
	}

	inline static int32_t get_offset_of_m_CurrentState_12() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_CurrentState_12)); }
	inline int32_t get_m_CurrentState_12() const { return ___m_CurrentState_12; }
	inline int32_t* get_address_of_m_CurrentState_12() { return &___m_CurrentState_12; }
	inline void set_m_CurrentState_12(int32_t value)
	{
		___m_CurrentState_12 = value;
	}

	inline static int32_t get_offset_of_m_iCurrentSeekPosition_13() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_iCurrentSeekPosition_13)); }
	inline int32_t get_m_iCurrentSeekPosition_13() const { return ___m_iCurrentSeekPosition_13; }
	inline int32_t* get_address_of_m_iCurrentSeekPosition_13() { return &___m_iCurrentSeekPosition_13; }
	inline void set_m_iCurrentSeekPosition_13(int32_t value)
	{
		___m_iCurrentSeekPosition_13 = value;
	}

	inline static int32_t get_offset_of_m_fVolume_14() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_fVolume_14)); }
	inline float get_m_fVolume_14() const { return ___m_fVolume_14; }
	inline float* get_address_of_m_fVolume_14() { return &___m_fVolume_14; }
	inline void set_m_fVolume_14(float value)
	{
		___m_fVolume_14 = value;
	}

	inline static int32_t get_offset_of_m_iWidth_15() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_iWidth_15)); }
	inline int32_t get_m_iWidth_15() const { return ___m_iWidth_15; }
	inline int32_t* get_address_of_m_iWidth_15() { return &___m_iWidth_15; }
	inline void set_m_iWidth_15(int32_t value)
	{
		___m_iWidth_15 = value;
	}

	inline static int32_t get_offset_of_m_iHeight_16() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_iHeight_16)); }
	inline int32_t get_m_iHeight_16() const { return ___m_iHeight_16; }
	inline int32_t* get_address_of_m_iHeight_16() { return &___m_iHeight_16; }
	inline void set_m_iHeight_16(int32_t value)
	{
		___m_iHeight_16 = value;
	}

	inline static int32_t get_offset_of_m_fSpeed_17() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_fSpeed_17)); }
	inline float get_m_fSpeed_17() const { return ___m_fSpeed_17; }
	inline float* get_address_of_m_fSpeed_17() { return &___m_fSpeed_17; }
	inline void set_m_fSpeed_17(float value)
	{
		___m_fSpeed_17 = value;
	}

	inline static int32_t get_offset_of_m_bFullScreen_18() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bFullScreen_18)); }
	inline bool get_m_bFullScreen_18() const { return ___m_bFullScreen_18; }
	inline bool* get_address_of_m_bFullScreen_18() { return &___m_bFullScreen_18; }
	inline void set_m_bFullScreen_18(bool value)
	{
		___m_bFullScreen_18 = value;
	}

	inline static int32_t get_offset_of_m_bSupportRockchip_19() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bSupportRockchip_19)); }
	inline bool get_m_bSupportRockchip_19() const { return ___m_bSupportRockchip_19; }
	inline bool* get_address_of_m_bSupportRockchip_19() { return &___m_bSupportRockchip_19; }
	inline void set_m_bSupportRockchip_19(bool value)
	{
		___m_bSupportRockchip_19 = value;
	}

	inline static int32_t get_offset_of_m_bPC_FastMode_20() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bPC_FastMode_20)); }
	inline bool get_m_bPC_FastMode_20() const { return ___m_bPC_FastMode_20; }
	inline bool* get_address_of_m_bPC_FastMode_20() { return &___m_bPC_FastMode_20; }
	inline void set_m_bPC_FastMode_20(bool value)
	{
		___m_bPC_FastMode_20 = value;
	}

	inline static int32_t get_offset_of_OnResize_21() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___OnResize_21)); }
	inline VideoResize_t2293664948 * get_OnResize_21() const { return ___OnResize_21; }
	inline VideoResize_t2293664948 ** get_address_of_OnResize_21() { return &___OnResize_21; }
	inline void set_OnResize_21(VideoResize_t2293664948 * value)
	{
		___OnResize_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnResize_21, value);
	}

	inline static int32_t get_offset_of_OnReady_22() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___OnReady_22)); }
	inline VideoReady_t2776178769 * get_OnReady_22() const { return ___OnReady_22; }
	inline VideoReady_t2776178769 ** get_address_of_OnReady_22() { return &___OnReady_22; }
	inline void set_OnReady_22(VideoReady_t2776178769 * value)
	{
		___OnReady_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnReady_22, value);
	}

	inline static int32_t get_offset_of_OnEnd_23() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___OnEnd_23)); }
	inline VideoEnd_t1362782769 * get_OnEnd_23() const { return ___OnEnd_23; }
	inline VideoEnd_t1362782769 ** get_address_of_OnEnd_23() { return &___OnEnd_23; }
	inline void set_OnEnd_23(VideoEnd_t1362782769 * value)
	{
		___OnEnd_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnEnd_23, value);
	}

	inline static int32_t get_offset_of_OnVideoError_24() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___OnVideoError_24)); }
	inline VideoError_t491951502 * get_OnVideoError_24() const { return ___OnVideoError_24; }
	inline VideoError_t491951502 ** get_address_of_OnVideoError_24() { return &___OnVideoError_24; }
	inline void set_OnVideoError_24(VideoError_t491951502 * value)
	{
		___OnVideoError_24 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoError_24, value);
	}

	inline static int32_t get_offset_of_OnVideoFirstFrameReady_25() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___OnVideoFirstFrameReady_25)); }
	inline VideoFirstFrameReady_t3566592450 * get_OnVideoFirstFrameReady_25() const { return ___OnVideoFirstFrameReady_25; }
	inline VideoFirstFrameReady_t3566592450 ** get_address_of_OnVideoFirstFrameReady_25() { return &___OnVideoFirstFrameReady_25; }
	inline void set_OnVideoFirstFrameReady_25(VideoFirstFrameReady_t3566592450 * value)
	{
		___OnVideoFirstFrameReady_25 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoFirstFrameReady_25, value);
	}

	inline static int32_t get_offset_of_m_texPtr_26() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_texPtr_26)); }
	inline IntPtr_t get_m_texPtr_26() const { return ___m_texPtr_26; }
	inline IntPtr_t* get_address_of_m_texPtr_26() { return &___m_texPtr_26; }
	inline void set_m_texPtr_26(IntPtr_t value)
	{
		___m_texPtr_26 = value;
	}

	inline static int32_t get_offset_of_m_texPtrY_27() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_texPtrY_27)); }
	inline IntPtr_t get_m_texPtrY_27() const { return ___m_texPtrY_27; }
	inline IntPtr_t* get_address_of_m_texPtrY_27() { return &___m_texPtrY_27; }
	inline void set_m_texPtrY_27(IntPtr_t value)
	{
		___m_texPtrY_27 = value;
	}

	inline static int32_t get_offset_of_m_texPtrU_28() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_texPtrU_28)); }
	inline IntPtr_t get_m_texPtrU_28() const { return ___m_texPtrU_28; }
	inline IntPtr_t* get_address_of_m_texPtrU_28() { return &___m_texPtrU_28; }
	inline void set_m_texPtrU_28(IntPtr_t value)
	{
		___m_texPtrU_28 = value;
	}

	inline static int32_t get_offset_of_m_texPtrV_29() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_texPtrV_29)); }
	inline IntPtr_t get_m_texPtrV_29() const { return ___m_texPtrV_29; }
	inline IntPtr_t* get_address_of_m_texPtrV_29() { return &___m_texPtrV_29; }
	inline void set_m_texPtrV_29(IntPtr_t value)
	{
		___m_texPtrV_29 = value;
	}

	inline static int32_t get_offset_of_m_shaderYUV_30() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_shaderYUV_30)); }
	inline Shader_t2430389951 * get_m_shaderYUV_30() const { return ___m_shaderYUV_30; }
	inline Shader_t2430389951 ** get_address_of_m_shaderYUV_30() { return &___m_shaderYUV_30; }
	inline void set_m_shaderYUV_30(Shader_t2430389951 * value)
	{
		___m_shaderYUV_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_shaderYUV_30, value);
	}

	inline static int32_t get_offset_of_m_iPauseFrame_31() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_iPauseFrame_31)); }
	inline int32_t get_m_iPauseFrame_31() const { return ___m_iPauseFrame_31; }
	inline int32_t* get_address_of_m_iPauseFrame_31() { return &___m_iPauseFrame_31; }
	inline void set_m_iPauseFrame_31(int32_t value)
	{
		___m_iPauseFrame_31 = value;
	}

	inline static int32_t get_offset_of_m_iAndroidMgrID_32() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_iAndroidMgrID_32)); }
	inline int32_t get_m_iAndroidMgrID_32() const { return ___m_iAndroidMgrID_32; }
	inline int32_t* get_address_of_m_iAndroidMgrID_32() { return &___m_iAndroidMgrID_32; }
	inline void set_m_iAndroidMgrID_32(int32_t value)
	{
		___m_iAndroidMgrID_32 = value;
	}

	inline static int32_t get_offset_of_m_bIsFirstFrameReady_33() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bIsFirstFrameReady_33)); }
	inline bool get_m_bIsFirstFrameReady_33() const { return ___m_bIsFirstFrameReady_33; }
	inline bool* get_address_of_m_bIsFirstFrameReady_33() { return &___m_bIsFirstFrameReady_33; }
	inline void set_m_bIsFirstFrameReady_33(bool value)
	{
		___m_bIsFirstFrameReady_33 = value;
	}

	inline static int32_t get_offset_of_m_bFirst_34() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bFirst_34)); }
	inline bool get_m_bFirst_34() const { return ___m_bFirst_34; }
	inline bool* get_address_of_m_bFirst_34() { return &___m_bFirst_34; }
	inline void set_m_bFirst_34(bool value)
	{
		___m_bFirst_34 = value;
	}

	inline static int32_t get_offset_of_m_ScaleValue_35() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_ScaleValue_35)); }
	inline int32_t get_m_ScaleValue_35() const { return ___m_ScaleValue_35; }
	inline int32_t* get_address_of_m_ScaleValue_35() { return &___m_ScaleValue_35; }
	inline void set_m_ScaleValue_35(int32_t value)
	{
		___m_ScaleValue_35 = value;
	}

	inline static int32_t get_offset_of_m_objResize_36() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_objResize_36)); }
	inline GameObjectU5BU5D_t3057952154* get_m_objResize_36() const { return ___m_objResize_36; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_objResize_36() { return &___m_objResize_36; }
	inline void set_m_objResize_36(GameObjectU5BU5D_t3057952154* value)
	{
		___m_objResize_36 = value;
		Il2CppCodeGenWriteBarrier(&___m_objResize_36, value);
	}

	inline static int32_t get_offset_of_m_bLoop_37() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bLoop_37)); }
	inline bool get_m_bLoop_37() const { return ___m_bLoop_37; }
	inline bool* get_address_of_m_bLoop_37() { return &___m_bLoop_37; }
	inline void set_m_bLoop_37(bool value)
	{
		___m_bLoop_37 = value;
	}

	inline static int32_t get_offset_of_m_bAutoPlay_38() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bAutoPlay_38)); }
	inline bool get_m_bAutoPlay_38() const { return ___m_bAutoPlay_38; }
	inline bool* get_address_of_m_bAutoPlay_38() { return &___m_bAutoPlay_38; }
	inline void set_m_bAutoPlay_38(bool value)
	{
		___m_bAutoPlay_38 = value;
	}

	inline static int32_t get_offset_of_m_bStop_39() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bStop_39)); }
	inline bool get_m_bStop_39() const { return ___m_bStop_39; }
	inline bool* get_address_of_m_bStop_39() { return &___m_bStop_39; }
	inline void set_m_bStop_39(bool value)
	{
		___m_bStop_39 = value;
	}

	inline static int32_t get_offset_of_m_bInit_40() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bInit_40)); }
	inline bool get_m_bInit_40() const { return ___m_bInit_40; }
	inline bool* get_address_of_m_bInit_40() { return &___m_bInit_40; }
	inline void set_m_bInit_40(bool value)
	{
		___m_bInit_40 = value;
	}

	inline static int32_t get_offset_of_m_bCheckFBO_41() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bCheckFBO_41)); }
	inline bool get_m_bCheckFBO_41() const { return ___m_bCheckFBO_41; }
	inline bool* get_address_of_m_bCheckFBO_41() { return &___m_bCheckFBO_41; }
	inline void set_m_bCheckFBO_41(bool value)
	{
		___m_bCheckFBO_41 = value;
	}

	inline static int32_t get_offset_of_m_bPause_42() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bPause_42)); }
	inline bool get_m_bPause_42() const { return ___m_bPause_42; }
	inline bool* get_address_of_m_bPause_42() { return &___m_bPause_42; }
	inline void set_m_bPause_42(bool value)
	{
		___m_bPause_42 = value;
	}

	inline static int32_t get_offset_of_m_bReadyPlay_43() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_bReadyPlay_43)); }
	inline bool get_m_bReadyPlay_43() const { return ___m_bReadyPlay_43; }
	inline bool* get_address_of_m_bReadyPlay_43() { return &___m_bReadyPlay_43; }
	inline void set_m_bReadyPlay_43(bool value)
	{
		___m_bReadyPlay_43 = value;
	}

	inline static int32_t get_offset_of_m_iID_44() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___m_iID_44)); }
	inline int32_t get_m_iID_44() const { return ___m_iID_44; }
	inline int32_t* get_address_of_m_iID_44() { return &___m_iID_44; }
	inline void set_m_iID_44(int32_t value)
	{
		___m_iID_44 = value;
	}

	inline static int32_t get_offset_of__videoTexture_45() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ____videoTexture_45)); }
	inline Texture2D_t3542995729 * get__videoTexture_45() const { return ____videoTexture_45; }
	inline Texture2D_t3542995729 ** get_address_of__videoTexture_45() { return &____videoTexture_45; }
	inline void set__videoTexture_45(Texture2D_t3542995729 * value)
	{
		____videoTexture_45 = value;
		Il2CppCodeGenWriteBarrier(&____videoTexture_45, value);
	}

	inline static int32_t get_offset_of_bFirstIOS_46() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___bFirstIOS_46)); }
	inline bool get_bFirstIOS_46() const { return ___bFirstIOS_46; }
	inline bool* get_address_of_bFirstIOS_46() { return &___bFirstIOS_46; }
	inline void set_bFirstIOS_46(bool value)
	{
		___bFirstIOS_46 = value;
	}

	inline static int32_t get_offset_of_unityMainThreadActionList_47() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___unityMainThreadActionList_47)); }
	inline List_1_t2595592884 * get_unityMainThreadActionList_47() const { return ___unityMainThreadActionList_47; }
	inline List_1_t2595592884 ** get_address_of_unityMainThreadActionList_47() { return &___unityMainThreadActionList_47; }
	inline void set_unityMainThreadActionList_47(List_1_t2595592884 * value)
	{
		___unityMainThreadActionList_47 = value;
		Il2CppCodeGenWriteBarrier(&___unityMainThreadActionList_47, value);
	}

	inline static int32_t get_offset_of_checkNewActions_48() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___checkNewActions_48)); }
	inline bool get_checkNewActions_48() const { return ___checkNewActions_48; }
	inline bool* get_address_of_checkNewActions_48() { return &___checkNewActions_48; }
	inline void set_checkNewActions_48(bool value)
	{
		___checkNewActions_48 = value;
	}

	inline static int32_t get_offset_of_thisLock_49() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t1284484152, ___thisLock_49)); }
	inline Il2CppObject * get_thisLock_49() const { return ___thisLock_49; }
	inline Il2CppObject ** get_address_of_thisLock_49() { return &___thisLock_49; }
	inline void set_thisLock_49(Il2CppObject * value)
	{
		___thisLock_49 = value;
		Il2CppCodeGenWriteBarrier(&___thisLock_49, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
