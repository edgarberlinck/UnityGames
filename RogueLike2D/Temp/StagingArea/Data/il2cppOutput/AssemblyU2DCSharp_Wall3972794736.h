#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wall
struct  Wall_t3972794736  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip Wall::chopSound1
	AudioClip_t1932558630 * ___chopSound1_2;
	// UnityEngine.AudioClip Wall::chopSound2
	AudioClip_t1932558630 * ___chopSound2_3;
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_t309593783 * ___dmgSprite_4;
	// System.Int32 Wall::hp
	int32_t ___hp_5;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_6;

public:
	inline static int32_t get_offset_of_chopSound1_2() { return static_cast<int32_t>(offsetof(Wall_t3972794736, ___chopSound1_2)); }
	inline AudioClip_t1932558630 * get_chopSound1_2() const { return ___chopSound1_2; }
	inline AudioClip_t1932558630 ** get_address_of_chopSound1_2() { return &___chopSound1_2; }
	inline void set_chopSound1_2(AudioClip_t1932558630 * value)
	{
		___chopSound1_2 = value;
		Il2CppCodeGenWriteBarrier(&___chopSound1_2, value);
	}

	inline static int32_t get_offset_of_chopSound2_3() { return static_cast<int32_t>(offsetof(Wall_t3972794736, ___chopSound2_3)); }
	inline AudioClip_t1932558630 * get_chopSound2_3() const { return ___chopSound2_3; }
	inline AudioClip_t1932558630 ** get_address_of_chopSound2_3() { return &___chopSound2_3; }
	inline void set_chopSound2_3(AudioClip_t1932558630 * value)
	{
		___chopSound2_3 = value;
		Il2CppCodeGenWriteBarrier(&___chopSound2_3, value);
	}

	inline static int32_t get_offset_of_dmgSprite_4() { return static_cast<int32_t>(offsetof(Wall_t3972794736, ___dmgSprite_4)); }
	inline Sprite_t309593783 * get_dmgSprite_4() const { return ___dmgSprite_4; }
	inline Sprite_t309593783 ** get_address_of_dmgSprite_4() { return &___dmgSprite_4; }
	inline void set_dmgSprite_4(Sprite_t309593783 * value)
	{
		___dmgSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___dmgSprite_4, value);
	}

	inline static int32_t get_offset_of_hp_5() { return static_cast<int32_t>(offsetof(Wall_t3972794736, ___hp_5)); }
	inline int32_t get_hp_5() const { return ___hp_5; }
	inline int32_t* get_address_of_hp_5() { return &___hp_5; }
	inline void set_hp_5(int32_t value)
	{
		___hp_5 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_6() { return static_cast<int32_t>(offsetof(Wall_t3972794736, ___spriteRenderer_6)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_6() const { return ___spriteRenderer_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_6() { return &___spriteRenderer_6; }
	inline void set_spriteRenderer_6(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
