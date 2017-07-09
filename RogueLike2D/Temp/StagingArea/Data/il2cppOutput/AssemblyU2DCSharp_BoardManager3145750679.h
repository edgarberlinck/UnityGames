#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// BoardManager/Count
struct Count_t4032695119;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardManager
struct  BoardManager_t3145750679  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 BoardManager::columns
	int32_t ___columns_2;
	// System.Int32 BoardManager::rows
	int32_t ___rows_3;
	// BoardManager/Count BoardManager::wallCount
	Count_t4032695119 * ___wallCount_4;
	// BoardManager/Count BoardManager::foodCount
	Count_t4032695119 * ___foodCount_5;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_t1756533147 * ___exit_6;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_t3057952154* ___floorTiles_7;
	// UnityEngine.GameObject[] BoardManager::wallTiles
	GameObjectU5BU5D_t3057952154* ___wallTiles_8;
	// UnityEngine.GameObject[] BoardManager::foodTiles
	GameObjectU5BU5D_t3057952154* ___foodTiles_9;
	// UnityEngine.GameObject[] BoardManager::enemyTiles
	GameObjectU5BU5D_t3057952154* ___enemyTiles_10;
	// UnityEngine.GameObject[] BoardManager::outerWallTiles
	GameObjectU5BU5D_t3057952154* ___outerWallTiles_11;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_t3275118058 * ___boardHolder_12;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BoardManager::gridPositions
	List_1_t1612828712 * ___gridPositions_13;

public:
	inline static int32_t get_offset_of_columns_2() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___columns_2)); }
	inline int32_t get_columns_2() const { return ___columns_2; }
	inline int32_t* get_address_of_columns_2() { return &___columns_2; }
	inline void set_columns_2(int32_t value)
	{
		___columns_2 = value;
	}

	inline static int32_t get_offset_of_rows_3() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___rows_3)); }
	inline int32_t get_rows_3() const { return ___rows_3; }
	inline int32_t* get_address_of_rows_3() { return &___rows_3; }
	inline void set_rows_3(int32_t value)
	{
		___rows_3 = value;
	}

	inline static int32_t get_offset_of_wallCount_4() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___wallCount_4)); }
	inline Count_t4032695119 * get_wallCount_4() const { return ___wallCount_4; }
	inline Count_t4032695119 ** get_address_of_wallCount_4() { return &___wallCount_4; }
	inline void set_wallCount_4(Count_t4032695119 * value)
	{
		___wallCount_4 = value;
		Il2CppCodeGenWriteBarrier(&___wallCount_4, value);
	}

	inline static int32_t get_offset_of_foodCount_5() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___foodCount_5)); }
	inline Count_t4032695119 * get_foodCount_5() const { return ___foodCount_5; }
	inline Count_t4032695119 ** get_address_of_foodCount_5() { return &___foodCount_5; }
	inline void set_foodCount_5(Count_t4032695119 * value)
	{
		___foodCount_5 = value;
		Il2CppCodeGenWriteBarrier(&___foodCount_5, value);
	}

	inline static int32_t get_offset_of_exit_6() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___exit_6)); }
	inline GameObject_t1756533147 * get_exit_6() const { return ___exit_6; }
	inline GameObject_t1756533147 ** get_address_of_exit_6() { return &___exit_6; }
	inline void set_exit_6(GameObject_t1756533147 * value)
	{
		___exit_6 = value;
		Il2CppCodeGenWriteBarrier(&___exit_6, value);
	}

	inline static int32_t get_offset_of_floorTiles_7() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___floorTiles_7)); }
	inline GameObjectU5BU5D_t3057952154* get_floorTiles_7() const { return ___floorTiles_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_floorTiles_7() { return &___floorTiles_7; }
	inline void set_floorTiles_7(GameObjectU5BU5D_t3057952154* value)
	{
		___floorTiles_7 = value;
		Il2CppCodeGenWriteBarrier(&___floorTiles_7, value);
	}

	inline static int32_t get_offset_of_wallTiles_8() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___wallTiles_8)); }
	inline GameObjectU5BU5D_t3057952154* get_wallTiles_8() const { return ___wallTiles_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_wallTiles_8() { return &___wallTiles_8; }
	inline void set_wallTiles_8(GameObjectU5BU5D_t3057952154* value)
	{
		___wallTiles_8 = value;
		Il2CppCodeGenWriteBarrier(&___wallTiles_8, value);
	}

	inline static int32_t get_offset_of_foodTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___foodTiles_9)); }
	inline GameObjectU5BU5D_t3057952154* get_foodTiles_9() const { return ___foodTiles_9; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_foodTiles_9() { return &___foodTiles_9; }
	inline void set_foodTiles_9(GameObjectU5BU5D_t3057952154* value)
	{
		___foodTiles_9 = value;
		Il2CppCodeGenWriteBarrier(&___foodTiles_9, value);
	}

	inline static int32_t get_offset_of_enemyTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___enemyTiles_10)); }
	inline GameObjectU5BU5D_t3057952154* get_enemyTiles_10() const { return ___enemyTiles_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_enemyTiles_10() { return &___enemyTiles_10; }
	inline void set_enemyTiles_10(GameObjectU5BU5D_t3057952154* value)
	{
		___enemyTiles_10 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTiles_10, value);
	}

	inline static int32_t get_offset_of_outerWallTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___outerWallTiles_11)); }
	inline GameObjectU5BU5D_t3057952154* get_outerWallTiles_11() const { return ___outerWallTiles_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_outerWallTiles_11() { return &___outerWallTiles_11; }
	inline void set_outerWallTiles_11(GameObjectU5BU5D_t3057952154* value)
	{
		___outerWallTiles_11 = value;
		Il2CppCodeGenWriteBarrier(&___outerWallTiles_11, value);
	}

	inline static int32_t get_offset_of_boardHolder_12() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___boardHolder_12)); }
	inline Transform_t3275118058 * get_boardHolder_12() const { return ___boardHolder_12; }
	inline Transform_t3275118058 ** get_address_of_boardHolder_12() { return &___boardHolder_12; }
	inline void set_boardHolder_12(Transform_t3275118058 * value)
	{
		___boardHolder_12 = value;
		Il2CppCodeGenWriteBarrier(&___boardHolder_12, value);
	}

	inline static int32_t get_offset_of_gridPositions_13() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___gridPositions_13)); }
	inline List_1_t1612828712 * get_gridPositions_13() const { return ___gridPositions_13; }
	inline List_1_t1612828712 ** get_address_of_gridPositions_13() { return &___gridPositions_13; }
	inline void set_gridPositions_13(List_1_t1612828712 * value)
	{
		___gridPositions_13 = value;
		Il2CppCodeGenWriteBarrier(&___gridPositions_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
