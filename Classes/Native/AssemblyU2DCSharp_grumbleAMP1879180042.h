#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// grumbleSong[]
struct grumbleSongU5BU5D_t580720164;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;
// UnityEngine.ResourceRequest[]
struct ResourceRequestU5BU5D_t1120789804;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// grumbleAMP
struct  grumbleAMP_t1879180042  : public MonoBehaviour_t1158329972
{
public:
	// grumbleSong[] grumbleAMP::songs
	grumbleSongU5BU5D_t580720164* ___songs_2;
	// System.Int32 grumbleAMP::multiplyLayersBy
	int32_t ___multiplyLayersBy_3;
	// System.Int32 grumbleAMP::activeMultiple
	int32_t ___activeMultiple_4;
	// System.Single grumbleAMP::accumulatedDeltaTime
	float ___accumulatedDeltaTime_5;
	// System.Single grumbleAMP::accumulatedDeltaTimeForPause
	float ___accumulatedDeltaTimeForPause_6;
	// System.Single grumbleAMP::startedFadeAt
	float ___startedFadeAt_7;
	// System.Single grumbleAMP::currentFadeLength
	float ___currentFadeLength_8;
	// System.Int32[] grumbleAMP::currentSongForPlayer
	Int32U5BU5D_t3030399641* ___currentSongForPlayer_9;
	// System.Int32[] grumbleAMP::currentLayerForPlayer
	Int32U5BU5D_t3030399641* ___currentLayerForPlayer_10;
	// System.Int32 grumbleAMP::switchingToPlayer
	int32_t ___switchingToPlayer_11;
	// System.Boolean grumbleAMP::crossfadeActive
	bool ___crossfadeActive_12;
	// System.Boolean grumbleAMP::loopCrossFadeActive
	bool ___loopCrossFadeActive_13;
	// System.Boolean grumbleAMP::fadeoutActive
	bool ___fadeoutActive_14;
	// System.Boolean grumbleAMP::fadeinActive
	bool ___fadeinActive_15;
	// System.Single[] grumbleAMP::preVolumeFadeFactor
	SingleU5BU5D_t577127397* ___preVolumeFadeFactor_16;
	// System.Single grumbleAMP::globalVolume
	float ___globalVolume_17;
	// System.Single grumbleAMP::globalCrossFadeTime
	float ___globalCrossFadeTime_18;
	// System.Boolean grumbleAMP::running
	bool ___running_19;
	// System.Single grumbleAMP::unPauseAt
	float ___unPauseAt_20;
	// System.Boolean grumbleAMP::paused
	bool ___paused_21;
	// System.Boolean grumbleAMP::pausedTimer
	bool ___pausedTimer_22;
	// UnityEngine.AudioSource[] grumbleAMP::players
	AudioSourceU5BU5D_t1873220070* ___players_23;
	// UnityEngine.ResourceRequest[] grumbleAMP::theLayerRequests
	ResourceRequestU5BU5D_t1120789804* ___theLayerRequests_24;
	// System.Boolean grumbleAMP::resourceRequestMode
	bool ___resourceRequestMode_25;
	// System.Boolean grumbleAMP::needToCheckResourceStatus
	bool ___needToCheckResourceStatus_26;
	// System.Single grumbleAMP::totalResourceProgress
	float ___totalResourceProgress_27;
	// System.Int32 grumbleAMP::songThatNeedsToPlayWhenLoaded
	int32_t ___songThatNeedsToPlayWhenLoaded_28;
	// System.Boolean grumbleAMP::arraysPopulated
	bool ___arraysPopulated_29;
	// System.Single grumbleAMP::defaultExpectedLatency
	float ___defaultExpectedLatency_30;

public:
	inline static int32_t get_offset_of_songs_2() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___songs_2)); }
	inline grumbleSongU5BU5D_t580720164* get_songs_2() const { return ___songs_2; }
	inline grumbleSongU5BU5D_t580720164** get_address_of_songs_2() { return &___songs_2; }
	inline void set_songs_2(grumbleSongU5BU5D_t580720164* value)
	{
		___songs_2 = value;
		Il2CppCodeGenWriteBarrier(&___songs_2, value);
	}

	inline static int32_t get_offset_of_multiplyLayersBy_3() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___multiplyLayersBy_3)); }
	inline int32_t get_multiplyLayersBy_3() const { return ___multiplyLayersBy_3; }
	inline int32_t* get_address_of_multiplyLayersBy_3() { return &___multiplyLayersBy_3; }
	inline void set_multiplyLayersBy_3(int32_t value)
	{
		___multiplyLayersBy_3 = value;
	}

	inline static int32_t get_offset_of_activeMultiple_4() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___activeMultiple_4)); }
	inline int32_t get_activeMultiple_4() const { return ___activeMultiple_4; }
	inline int32_t* get_address_of_activeMultiple_4() { return &___activeMultiple_4; }
	inline void set_activeMultiple_4(int32_t value)
	{
		___activeMultiple_4 = value;
	}

	inline static int32_t get_offset_of_accumulatedDeltaTime_5() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___accumulatedDeltaTime_5)); }
	inline float get_accumulatedDeltaTime_5() const { return ___accumulatedDeltaTime_5; }
	inline float* get_address_of_accumulatedDeltaTime_5() { return &___accumulatedDeltaTime_5; }
	inline void set_accumulatedDeltaTime_5(float value)
	{
		___accumulatedDeltaTime_5 = value;
	}

	inline static int32_t get_offset_of_accumulatedDeltaTimeForPause_6() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___accumulatedDeltaTimeForPause_6)); }
	inline float get_accumulatedDeltaTimeForPause_6() const { return ___accumulatedDeltaTimeForPause_6; }
	inline float* get_address_of_accumulatedDeltaTimeForPause_6() { return &___accumulatedDeltaTimeForPause_6; }
	inline void set_accumulatedDeltaTimeForPause_6(float value)
	{
		___accumulatedDeltaTimeForPause_6 = value;
	}

	inline static int32_t get_offset_of_startedFadeAt_7() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___startedFadeAt_7)); }
	inline float get_startedFadeAt_7() const { return ___startedFadeAt_7; }
	inline float* get_address_of_startedFadeAt_7() { return &___startedFadeAt_7; }
	inline void set_startedFadeAt_7(float value)
	{
		___startedFadeAt_7 = value;
	}

	inline static int32_t get_offset_of_currentFadeLength_8() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___currentFadeLength_8)); }
	inline float get_currentFadeLength_8() const { return ___currentFadeLength_8; }
	inline float* get_address_of_currentFadeLength_8() { return &___currentFadeLength_8; }
	inline void set_currentFadeLength_8(float value)
	{
		___currentFadeLength_8 = value;
	}

	inline static int32_t get_offset_of_currentSongForPlayer_9() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___currentSongForPlayer_9)); }
	inline Int32U5BU5D_t3030399641* get_currentSongForPlayer_9() const { return ___currentSongForPlayer_9; }
	inline Int32U5BU5D_t3030399641** get_address_of_currentSongForPlayer_9() { return &___currentSongForPlayer_9; }
	inline void set_currentSongForPlayer_9(Int32U5BU5D_t3030399641* value)
	{
		___currentSongForPlayer_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentSongForPlayer_9, value);
	}

	inline static int32_t get_offset_of_currentLayerForPlayer_10() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___currentLayerForPlayer_10)); }
	inline Int32U5BU5D_t3030399641* get_currentLayerForPlayer_10() const { return ___currentLayerForPlayer_10; }
	inline Int32U5BU5D_t3030399641** get_address_of_currentLayerForPlayer_10() { return &___currentLayerForPlayer_10; }
	inline void set_currentLayerForPlayer_10(Int32U5BU5D_t3030399641* value)
	{
		___currentLayerForPlayer_10 = value;
		Il2CppCodeGenWriteBarrier(&___currentLayerForPlayer_10, value);
	}

	inline static int32_t get_offset_of_switchingToPlayer_11() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___switchingToPlayer_11)); }
	inline int32_t get_switchingToPlayer_11() const { return ___switchingToPlayer_11; }
	inline int32_t* get_address_of_switchingToPlayer_11() { return &___switchingToPlayer_11; }
	inline void set_switchingToPlayer_11(int32_t value)
	{
		___switchingToPlayer_11 = value;
	}

	inline static int32_t get_offset_of_crossfadeActive_12() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___crossfadeActive_12)); }
	inline bool get_crossfadeActive_12() const { return ___crossfadeActive_12; }
	inline bool* get_address_of_crossfadeActive_12() { return &___crossfadeActive_12; }
	inline void set_crossfadeActive_12(bool value)
	{
		___crossfadeActive_12 = value;
	}

	inline static int32_t get_offset_of_loopCrossFadeActive_13() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___loopCrossFadeActive_13)); }
	inline bool get_loopCrossFadeActive_13() const { return ___loopCrossFadeActive_13; }
	inline bool* get_address_of_loopCrossFadeActive_13() { return &___loopCrossFadeActive_13; }
	inline void set_loopCrossFadeActive_13(bool value)
	{
		___loopCrossFadeActive_13 = value;
	}

	inline static int32_t get_offset_of_fadeoutActive_14() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___fadeoutActive_14)); }
	inline bool get_fadeoutActive_14() const { return ___fadeoutActive_14; }
	inline bool* get_address_of_fadeoutActive_14() { return &___fadeoutActive_14; }
	inline void set_fadeoutActive_14(bool value)
	{
		___fadeoutActive_14 = value;
	}

	inline static int32_t get_offset_of_fadeinActive_15() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___fadeinActive_15)); }
	inline bool get_fadeinActive_15() const { return ___fadeinActive_15; }
	inline bool* get_address_of_fadeinActive_15() { return &___fadeinActive_15; }
	inline void set_fadeinActive_15(bool value)
	{
		___fadeinActive_15 = value;
	}

	inline static int32_t get_offset_of_preVolumeFadeFactor_16() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___preVolumeFadeFactor_16)); }
	inline SingleU5BU5D_t577127397* get_preVolumeFadeFactor_16() const { return ___preVolumeFadeFactor_16; }
	inline SingleU5BU5D_t577127397** get_address_of_preVolumeFadeFactor_16() { return &___preVolumeFadeFactor_16; }
	inline void set_preVolumeFadeFactor_16(SingleU5BU5D_t577127397* value)
	{
		___preVolumeFadeFactor_16 = value;
		Il2CppCodeGenWriteBarrier(&___preVolumeFadeFactor_16, value);
	}

	inline static int32_t get_offset_of_globalVolume_17() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___globalVolume_17)); }
	inline float get_globalVolume_17() const { return ___globalVolume_17; }
	inline float* get_address_of_globalVolume_17() { return &___globalVolume_17; }
	inline void set_globalVolume_17(float value)
	{
		___globalVolume_17 = value;
	}

	inline static int32_t get_offset_of_globalCrossFadeTime_18() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___globalCrossFadeTime_18)); }
	inline float get_globalCrossFadeTime_18() const { return ___globalCrossFadeTime_18; }
	inline float* get_address_of_globalCrossFadeTime_18() { return &___globalCrossFadeTime_18; }
	inline void set_globalCrossFadeTime_18(float value)
	{
		___globalCrossFadeTime_18 = value;
	}

	inline static int32_t get_offset_of_running_19() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___running_19)); }
	inline bool get_running_19() const { return ___running_19; }
	inline bool* get_address_of_running_19() { return &___running_19; }
	inline void set_running_19(bool value)
	{
		___running_19 = value;
	}

	inline static int32_t get_offset_of_unPauseAt_20() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___unPauseAt_20)); }
	inline float get_unPauseAt_20() const { return ___unPauseAt_20; }
	inline float* get_address_of_unPauseAt_20() { return &___unPauseAt_20; }
	inline void set_unPauseAt_20(float value)
	{
		___unPauseAt_20 = value;
	}

	inline static int32_t get_offset_of_paused_21() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___paused_21)); }
	inline bool get_paused_21() const { return ___paused_21; }
	inline bool* get_address_of_paused_21() { return &___paused_21; }
	inline void set_paused_21(bool value)
	{
		___paused_21 = value;
	}

	inline static int32_t get_offset_of_pausedTimer_22() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___pausedTimer_22)); }
	inline bool get_pausedTimer_22() const { return ___pausedTimer_22; }
	inline bool* get_address_of_pausedTimer_22() { return &___pausedTimer_22; }
	inline void set_pausedTimer_22(bool value)
	{
		___pausedTimer_22 = value;
	}

	inline static int32_t get_offset_of_players_23() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___players_23)); }
	inline AudioSourceU5BU5D_t1873220070* get_players_23() const { return ___players_23; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_players_23() { return &___players_23; }
	inline void set_players_23(AudioSourceU5BU5D_t1873220070* value)
	{
		___players_23 = value;
		Il2CppCodeGenWriteBarrier(&___players_23, value);
	}

	inline static int32_t get_offset_of_theLayerRequests_24() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___theLayerRequests_24)); }
	inline ResourceRequestU5BU5D_t1120789804* get_theLayerRequests_24() const { return ___theLayerRequests_24; }
	inline ResourceRequestU5BU5D_t1120789804** get_address_of_theLayerRequests_24() { return &___theLayerRequests_24; }
	inline void set_theLayerRequests_24(ResourceRequestU5BU5D_t1120789804* value)
	{
		___theLayerRequests_24 = value;
		Il2CppCodeGenWriteBarrier(&___theLayerRequests_24, value);
	}

	inline static int32_t get_offset_of_resourceRequestMode_25() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___resourceRequestMode_25)); }
	inline bool get_resourceRequestMode_25() const { return ___resourceRequestMode_25; }
	inline bool* get_address_of_resourceRequestMode_25() { return &___resourceRequestMode_25; }
	inline void set_resourceRequestMode_25(bool value)
	{
		___resourceRequestMode_25 = value;
	}

	inline static int32_t get_offset_of_needToCheckResourceStatus_26() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___needToCheckResourceStatus_26)); }
	inline bool get_needToCheckResourceStatus_26() const { return ___needToCheckResourceStatus_26; }
	inline bool* get_address_of_needToCheckResourceStatus_26() { return &___needToCheckResourceStatus_26; }
	inline void set_needToCheckResourceStatus_26(bool value)
	{
		___needToCheckResourceStatus_26 = value;
	}

	inline static int32_t get_offset_of_totalResourceProgress_27() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___totalResourceProgress_27)); }
	inline float get_totalResourceProgress_27() const { return ___totalResourceProgress_27; }
	inline float* get_address_of_totalResourceProgress_27() { return &___totalResourceProgress_27; }
	inline void set_totalResourceProgress_27(float value)
	{
		___totalResourceProgress_27 = value;
	}

	inline static int32_t get_offset_of_songThatNeedsToPlayWhenLoaded_28() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___songThatNeedsToPlayWhenLoaded_28)); }
	inline int32_t get_songThatNeedsToPlayWhenLoaded_28() const { return ___songThatNeedsToPlayWhenLoaded_28; }
	inline int32_t* get_address_of_songThatNeedsToPlayWhenLoaded_28() { return &___songThatNeedsToPlayWhenLoaded_28; }
	inline void set_songThatNeedsToPlayWhenLoaded_28(int32_t value)
	{
		___songThatNeedsToPlayWhenLoaded_28 = value;
	}

	inline static int32_t get_offset_of_arraysPopulated_29() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___arraysPopulated_29)); }
	inline bool get_arraysPopulated_29() const { return ___arraysPopulated_29; }
	inline bool* get_address_of_arraysPopulated_29() { return &___arraysPopulated_29; }
	inline void set_arraysPopulated_29(bool value)
	{
		___arraysPopulated_29 = value;
	}

	inline static int32_t get_offset_of_defaultExpectedLatency_30() { return static_cast<int32_t>(offsetof(grumbleAMP_t1879180042, ___defaultExpectedLatency_30)); }
	inline float get_defaultExpectedLatency_30() const { return ___defaultExpectedLatency_30; }
	inline float* get_address_of_defaultExpectedLatency_30() { return &___defaultExpectedLatency_30; }
	inline void set_defaultExpectedLatency_30(float value)
	{
		___defaultExpectedLatency_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
