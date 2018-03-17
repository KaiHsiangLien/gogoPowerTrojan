#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMover
struct  CameraMover_t3326863596  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] CameraMover::Transforms
	TransformU5BU5D_t3764228911* ___Transforms_2;
	// System.Int32 CameraMover::currentIndex
	int32_t ___currentIndex_3;

public:
	inline static int32_t get_offset_of_Transforms_2() { return static_cast<int32_t>(offsetof(CameraMover_t3326863596, ___Transforms_2)); }
	inline TransformU5BU5D_t3764228911* get_Transforms_2() const { return ___Transforms_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_Transforms_2() { return &___Transforms_2; }
	inline void set_Transforms_2(TransformU5BU5D_t3764228911* value)
	{
		___Transforms_2 = value;
		Il2CppCodeGenWriteBarrier(&___Transforms_2, value);
	}

	inline static int32_t get_offset_of_currentIndex_3() { return static_cast<int32_t>(offsetof(CameraMover_t3326863596, ___currentIndex_3)); }
	inline int32_t get_currentIndex_3() const { return ___currentIndex_3; }
	inline int32_t* get_address_of_currentIndex_3() { return &___currentIndex_3; }
	inline void set_currentIndex_3(int32_t value)
	{
		___currentIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
