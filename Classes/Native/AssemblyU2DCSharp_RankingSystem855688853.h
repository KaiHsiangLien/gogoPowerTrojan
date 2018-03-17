#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.Dictionary`2<Car,System.Int32>
struct Dictionary_2_t1954075929;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RankingSystem
struct  RankingSystem_t855688853  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text RankingSystem::rankingText
	Text_t356221433 * ___rankingText_2;
	// System.Collections.Generic.Dictionary`2<Car,System.Int32> RankingSystem::carDistMapping
	Dictionary_2_t1954075929 * ___carDistMapping_3;
	// System.Int32 RankingSystem::totalCarNum
	int32_t ___totalCarNum_4;

public:
	inline static int32_t get_offset_of_rankingText_2() { return static_cast<int32_t>(offsetof(RankingSystem_t855688853, ___rankingText_2)); }
	inline Text_t356221433 * get_rankingText_2() const { return ___rankingText_2; }
	inline Text_t356221433 ** get_address_of_rankingText_2() { return &___rankingText_2; }
	inline void set_rankingText_2(Text_t356221433 * value)
	{
		___rankingText_2 = value;
		Il2CppCodeGenWriteBarrier(&___rankingText_2, value);
	}

	inline static int32_t get_offset_of_carDistMapping_3() { return static_cast<int32_t>(offsetof(RankingSystem_t855688853, ___carDistMapping_3)); }
	inline Dictionary_2_t1954075929 * get_carDistMapping_3() const { return ___carDistMapping_3; }
	inline Dictionary_2_t1954075929 ** get_address_of_carDistMapping_3() { return &___carDistMapping_3; }
	inline void set_carDistMapping_3(Dictionary_2_t1954075929 * value)
	{
		___carDistMapping_3 = value;
		Il2CppCodeGenWriteBarrier(&___carDistMapping_3, value);
	}

	inline static int32_t get_offset_of_totalCarNum_4() { return static_cast<int32_t>(offsetof(RankingSystem_t855688853, ___totalCarNum_4)); }
	inline int32_t get_totalCarNum_4() const { return ___totalCarNum_4; }
	inline int32_t* get_address_of_totalCarNum_4() { return &___totalCarNum_4; }
	inline void set_totalCarNum_4(int32_t value)
	{
		___totalCarNum_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
