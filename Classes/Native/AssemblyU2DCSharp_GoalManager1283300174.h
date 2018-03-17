#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// StatImageManager
struct StatImageManager_t3694657478;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoalManager
struct  GoalManager_t1283300174  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GoalManager::isOver
	bool ___isOver_2;
	// StatImageManager GoalManager::statImage
	StatImageManager_t3694657478 * ___statImage_3;
	// System.Boolean GoalManager::debugIsOver
	bool ___debugIsOver_4;

public:
	inline static int32_t get_offset_of_isOver_2() { return static_cast<int32_t>(offsetof(GoalManager_t1283300174, ___isOver_2)); }
	inline bool get_isOver_2() const { return ___isOver_2; }
	inline bool* get_address_of_isOver_2() { return &___isOver_2; }
	inline void set_isOver_2(bool value)
	{
		___isOver_2 = value;
	}

	inline static int32_t get_offset_of_statImage_3() { return static_cast<int32_t>(offsetof(GoalManager_t1283300174, ___statImage_3)); }
	inline StatImageManager_t3694657478 * get_statImage_3() const { return ___statImage_3; }
	inline StatImageManager_t3694657478 ** get_address_of_statImage_3() { return &___statImage_3; }
	inline void set_statImage_3(StatImageManager_t3694657478 * value)
	{
		___statImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___statImage_3, value);
	}

	inline static int32_t get_offset_of_debugIsOver_4() { return static_cast<int32_t>(offsetof(GoalManager_t1283300174, ___debugIsOver_4)); }
	inline bool get_debugIsOver_4() const { return ___debugIsOver_4; }
	inline bool* get_address_of_debugIsOver_4() { return &___debugIsOver_4; }
	inline void set_debugIsOver_4(bool value)
	{
		___debugIsOver_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
