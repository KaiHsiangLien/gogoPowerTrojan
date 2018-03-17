#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicStreamingController
struct  MusicStreamingController_t1516711767  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource MusicStreamingController::audioSource
	AudioSource_t1135106623 * ___audioSource_2;
	// System.Boolean MusicStreamingController::isPickUpScene
	bool ___isPickUpScene_3;
	// System.Boolean MusicStreamingController::isStoreScene
	bool ___isStoreScene_4;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(MusicStreamingController_t1516711767, ___audioSource_2)); }
	inline AudioSource_t1135106623 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t1135106623 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_isPickUpScene_3() { return static_cast<int32_t>(offsetof(MusicStreamingController_t1516711767, ___isPickUpScene_3)); }
	inline bool get_isPickUpScene_3() const { return ___isPickUpScene_3; }
	inline bool* get_address_of_isPickUpScene_3() { return &___isPickUpScene_3; }
	inline void set_isPickUpScene_3(bool value)
	{
		___isPickUpScene_3 = value;
	}

	inline static int32_t get_offset_of_isStoreScene_4() { return static_cast<int32_t>(offsetof(MusicStreamingController_t1516711767, ___isStoreScene_4)); }
	inline bool get_isStoreScene_4() const { return ___isStoreScene_4; }
	inline bool* get_address_of_isStoreScene_4() { return &___isStoreScene_4; }
	inline void set_isStoreScene_4(bool value)
	{
		___isStoreScene_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
