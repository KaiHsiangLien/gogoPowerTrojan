#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoreBackButtonController
struct  StoreBackButtonController_t3061168766  : public MonoBehaviour_t1158329972
{
public:
	// System.String StoreBackButtonController::mySceneName
	String_t* ___mySceneName_2;

public:
	inline static int32_t get_offset_of_mySceneName_2() { return static_cast<int32_t>(offsetof(StoreBackButtonController_t3061168766, ___mySceneName_2)); }
	inline String_t* get_mySceneName_2() const { return ___mySceneName_2; }
	inline String_t** get_address_of_mySceneName_2() { return &___mySceneName_2; }
	inline void set_mySceneName_2(String_t* value)
	{
		___mySceneName_2 = value;
		Il2CppCodeGenWriteBarrier(&___mySceneName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
