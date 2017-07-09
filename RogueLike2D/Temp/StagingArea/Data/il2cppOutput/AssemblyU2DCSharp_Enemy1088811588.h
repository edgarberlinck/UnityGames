#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_MovingObject4252805171.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1088811588  : public MovingObject_t4252805171
{
public:
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_7;
	// UnityEngine.AudioClip Enemy::enemyAttack1
	AudioClip_t1932558630 * ___enemyAttack1_8;
	// UnityEngine.AudioClip Enemy::enemyAttack2
	AudioClip_t1932558630 * ___enemyAttack2_9;
	// UnityEngine.Animator Enemy::animator
	Animator_t69676727 * ___animator_10;
	// UnityEngine.Transform Enemy::target
	Transform_t3275118058 * ___target_11;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_12;

public:
	inline static int32_t get_offset_of_playerDamage_7() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___playerDamage_7)); }
	inline int32_t get_playerDamage_7() const { return ___playerDamage_7; }
	inline int32_t* get_address_of_playerDamage_7() { return &___playerDamage_7; }
	inline void set_playerDamage_7(int32_t value)
	{
		___playerDamage_7 = value;
	}

	inline static int32_t get_offset_of_enemyAttack1_8() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___enemyAttack1_8)); }
	inline AudioClip_t1932558630 * get_enemyAttack1_8() const { return ___enemyAttack1_8; }
	inline AudioClip_t1932558630 ** get_address_of_enemyAttack1_8() { return &___enemyAttack1_8; }
	inline void set_enemyAttack1_8(AudioClip_t1932558630 * value)
	{
		___enemyAttack1_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemyAttack1_8, value);
	}

	inline static int32_t get_offset_of_enemyAttack2_9() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___enemyAttack2_9)); }
	inline AudioClip_t1932558630 * get_enemyAttack2_9() const { return ___enemyAttack2_9; }
	inline AudioClip_t1932558630 ** get_address_of_enemyAttack2_9() { return &___enemyAttack2_9; }
	inline void set_enemyAttack2_9(AudioClip_t1932558630 * value)
	{
		___enemyAttack2_9 = value;
		Il2CppCodeGenWriteBarrier(&___enemyAttack2_9, value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___animator_10)); }
	inline Animator_t69676727 * get_animator_10() const { return ___animator_10; }
	inline Animator_t69676727 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t69676727 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier(&___animator_10, value);
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___target_11)); }
	inline Transform_t3275118058 * get_target_11() const { return ___target_11; }
	inline Transform_t3275118058 ** get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Transform_t3275118058 * value)
	{
		___target_11 = value;
		Il2CppCodeGenWriteBarrier(&___target_11, value);
	}

	inline static int32_t get_offset_of_skipMove_12() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___skipMove_12)); }
	inline bool get_skipMove_12() const { return ___skipMove_12; }
	inline bool* get_address_of_skipMove_12() { return &___skipMove_12; }
	inline void set_skipMove_12(bool value)
	{
		___skipMove_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
