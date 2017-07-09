#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_MovingObject4252805171.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MovingObject_t4252805171
{
public:
	// System.Single Player::restartLevelDelay
	float ___restartLevelDelay_7;
	// System.Int32 Player::pointsPerFood
	int32_t ___pointsPerFood_8;
	// System.Int32 Player::pointsPerSoda
	int32_t ___pointsPerSoda_9;
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_10;
	// UnityEngine.UI.Text Player::foodText
	Text_t356221433 * ___foodText_11;
	// UnityEngine.AudioClip Player::moveSound1
	AudioClip_t1932558630 * ___moveSound1_12;
	// UnityEngine.AudioClip Player::moveSound2
	AudioClip_t1932558630 * ___moveSound2_13;
	// UnityEngine.AudioClip Player::eatSound1
	AudioClip_t1932558630 * ___eatSound1_14;
	// UnityEngine.AudioClip Player::eatSound2
	AudioClip_t1932558630 * ___eatSound2_15;
	// UnityEngine.AudioClip Player::drinkSound1
	AudioClip_t1932558630 * ___drinkSound1_16;
	// UnityEngine.AudioClip Player::drinkSound2
	AudioClip_t1932558630 * ___drinkSound2_17;
	// UnityEngine.AudioClip Player::gameOverSound
	AudioClip_t1932558630 * ___gameOverSound_18;
	// UnityEngine.Animator Player::animator
	Animator_t69676727 * ___animator_19;
	// System.Int32 Player::food
	int32_t ___food_20;

public:
	inline static int32_t get_offset_of_restartLevelDelay_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___restartLevelDelay_7)); }
	inline float get_restartLevelDelay_7() const { return ___restartLevelDelay_7; }
	inline float* get_address_of_restartLevelDelay_7() { return &___restartLevelDelay_7; }
	inline void set_restartLevelDelay_7(float value)
	{
		___restartLevelDelay_7 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___pointsPerFood_8)); }
	inline int32_t get_pointsPerFood_8() const { return ___pointsPerFood_8; }
	inline int32_t* get_address_of_pointsPerFood_8() { return &___pointsPerFood_8; }
	inline void set_pointsPerFood_8(int32_t value)
	{
		___pointsPerFood_8 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___pointsPerSoda_9)); }
	inline int32_t get_pointsPerSoda_9() const { return ___pointsPerSoda_9; }
	inline int32_t* get_address_of_pointsPerSoda_9() { return &___pointsPerSoda_9; }
	inline void set_pointsPerSoda_9(int32_t value)
	{
		___pointsPerSoda_9 = value;
	}

	inline static int32_t get_offset_of_wallDamage_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallDamage_10)); }
	inline int32_t get_wallDamage_10() const { return ___wallDamage_10; }
	inline int32_t* get_address_of_wallDamage_10() { return &___wallDamage_10; }
	inline void set_wallDamage_10(int32_t value)
	{
		___wallDamage_10 = value;
	}

	inline static int32_t get_offset_of_foodText_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___foodText_11)); }
	inline Text_t356221433 * get_foodText_11() const { return ___foodText_11; }
	inline Text_t356221433 ** get_address_of_foodText_11() { return &___foodText_11; }
	inline void set_foodText_11(Text_t356221433 * value)
	{
		___foodText_11 = value;
		Il2CppCodeGenWriteBarrier(&___foodText_11, value);
	}

	inline static int32_t get_offset_of_moveSound1_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveSound1_12)); }
	inline AudioClip_t1932558630 * get_moveSound1_12() const { return ___moveSound1_12; }
	inline AudioClip_t1932558630 ** get_address_of_moveSound1_12() { return &___moveSound1_12; }
	inline void set_moveSound1_12(AudioClip_t1932558630 * value)
	{
		___moveSound1_12 = value;
		Il2CppCodeGenWriteBarrier(&___moveSound1_12, value);
	}

	inline static int32_t get_offset_of_moveSound2_13() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveSound2_13)); }
	inline AudioClip_t1932558630 * get_moveSound2_13() const { return ___moveSound2_13; }
	inline AudioClip_t1932558630 ** get_address_of_moveSound2_13() { return &___moveSound2_13; }
	inline void set_moveSound2_13(AudioClip_t1932558630 * value)
	{
		___moveSound2_13 = value;
		Il2CppCodeGenWriteBarrier(&___moveSound2_13, value);
	}

	inline static int32_t get_offset_of_eatSound1_14() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___eatSound1_14)); }
	inline AudioClip_t1932558630 * get_eatSound1_14() const { return ___eatSound1_14; }
	inline AudioClip_t1932558630 ** get_address_of_eatSound1_14() { return &___eatSound1_14; }
	inline void set_eatSound1_14(AudioClip_t1932558630 * value)
	{
		___eatSound1_14 = value;
		Il2CppCodeGenWriteBarrier(&___eatSound1_14, value);
	}

	inline static int32_t get_offset_of_eatSound2_15() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___eatSound2_15)); }
	inline AudioClip_t1932558630 * get_eatSound2_15() const { return ___eatSound2_15; }
	inline AudioClip_t1932558630 ** get_address_of_eatSound2_15() { return &___eatSound2_15; }
	inline void set_eatSound2_15(AudioClip_t1932558630 * value)
	{
		___eatSound2_15 = value;
		Il2CppCodeGenWriteBarrier(&___eatSound2_15, value);
	}

	inline static int32_t get_offset_of_drinkSound1_16() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___drinkSound1_16)); }
	inline AudioClip_t1932558630 * get_drinkSound1_16() const { return ___drinkSound1_16; }
	inline AudioClip_t1932558630 ** get_address_of_drinkSound1_16() { return &___drinkSound1_16; }
	inline void set_drinkSound1_16(AudioClip_t1932558630 * value)
	{
		___drinkSound1_16 = value;
		Il2CppCodeGenWriteBarrier(&___drinkSound1_16, value);
	}

	inline static int32_t get_offset_of_drinkSound2_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___drinkSound2_17)); }
	inline AudioClip_t1932558630 * get_drinkSound2_17() const { return ___drinkSound2_17; }
	inline AudioClip_t1932558630 ** get_address_of_drinkSound2_17() { return &___drinkSound2_17; }
	inline void set_drinkSound2_17(AudioClip_t1932558630 * value)
	{
		___drinkSound2_17 = value;
		Il2CppCodeGenWriteBarrier(&___drinkSound2_17, value);
	}

	inline static int32_t get_offset_of_gameOverSound_18() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___gameOverSound_18)); }
	inline AudioClip_t1932558630 * get_gameOverSound_18() const { return ___gameOverSound_18; }
	inline AudioClip_t1932558630 ** get_address_of_gameOverSound_18() { return &___gameOverSound_18; }
	inline void set_gameOverSound_18(AudioClip_t1932558630 * value)
	{
		___gameOverSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSound_18, value);
	}

	inline static int32_t get_offset_of_animator_19() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___animator_19)); }
	inline Animator_t69676727 * get_animator_19() const { return ___animator_19; }
	inline Animator_t69676727 ** get_address_of_animator_19() { return &___animator_19; }
	inline void set_animator_19(Animator_t69676727 * value)
	{
		___animator_19 = value;
		Il2CppCodeGenWriteBarrier(&___animator_19, value);
	}

	inline static int32_t get_offset_of_food_20() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___food_20)); }
	inline int32_t get_food_20() const { return ___food_20; }
	inline int32_t* get_address_of_food_20() { return &___food_20; }
	inline void set_food_20(int32_t value)
	{
		___food_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
