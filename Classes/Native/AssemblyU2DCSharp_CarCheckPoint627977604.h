#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// RankingSystem
struct RankingSystem_t855688853;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarCheckPoint
struct  CarCheckPoint_t627977604  : public MonoBehaviour_t1158329972
{
public:
	// RankingSystem CarCheckPoint::ranking
	RankingSystem_t855688853 * ___ranking_2;
	// System.Int32 CarCheckPoint::dist
	int32_t ___dist_3;

public:
	inline static int32_t get_offset_of_ranking_2() { return static_cast<int32_t>(offsetof(CarCheckPoint_t627977604, ___ranking_2)); }
	inline RankingSystem_t855688853 * get_ranking_2() const { return ___ranking_2; }
	inline RankingSystem_t855688853 ** get_address_of_ranking_2() { return &___ranking_2; }
	inline void set_ranking_2(RankingSystem_t855688853 * value)
	{
		___ranking_2 = value;
		Il2CppCodeGenWriteBarrier(&___ranking_2, value);
	}

	inline static int32_t get_offset_of_dist_3() { return static_cast<int32_t>(offsetof(CarCheckPoint_t627977604, ___dist_3)); }
	inline int32_t get_dist_3() const { return ___dist_3; }
	inline int32_t* get_address_of_dist_3() { return &___dist_3; }
	inline void set_dist_3(int32_t value)
	{
		___dist_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
