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

// LoadScene
struct  LoadScene_t1133380052  : public MonoBehaviour_t1158329972
{
public:
	// System.String LoadScene::nextSceneName
	String_t* ___nextSceneName_2;
	// System.Boolean LoadScene::useAsyncMethod
	bool ___useAsyncMethod_3;

public:
	inline static int32_t get_offset_of_nextSceneName_2() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___nextSceneName_2)); }
	inline String_t* get_nextSceneName_2() const { return ___nextSceneName_2; }
	inline String_t** get_address_of_nextSceneName_2() { return &___nextSceneName_2; }
	inline void set_nextSceneName_2(String_t* value)
	{
		___nextSceneName_2 = value;
		Il2CppCodeGenWriteBarrier(&___nextSceneName_2, value);
	}

	inline static int32_t get_offset_of_useAsyncMethod_3() { return static_cast<int32_t>(offsetof(LoadScene_t1133380052, ___useAsyncMethod_3)); }
	inline bool get_useAsyncMethod_3() const { return ___useAsyncMethod_3; }
	inline bool* get_address_of_useAsyncMethod_3() { return &___useAsyncMethod_3; }
	inline void set_useAsyncMethod_3(bool value)
	{
		___useAsyncMethod_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
