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

// PathManager
struct  PathManager_t2373741454  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] PathManager::pathArray
	TransformU5BU5D_t3764228911* ___pathArray_2;

public:
	inline static int32_t get_offset_of_pathArray_2() { return static_cast<int32_t>(offsetof(PathManager_t2373741454, ___pathArray_2)); }
	inline TransformU5BU5D_t3764228911* get_pathArray_2() const { return ___pathArray_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_pathArray_2() { return &___pathArray_2; }
	inline void set_pathArray_2(TransformU5BU5D_t3764228911* value)
	{
		___pathArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___pathArray_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
