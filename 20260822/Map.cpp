#include "Map.h"
#include "Collision.h"
#include"DxLib.h"

//===================================
// コンストラクタ
//===================================
Map::Map()
{
	for (int i = 0; i < Config::MAP_IMG_X_NUM*Config::MAP_IMG_Y_NUM; i++)
	{
		mapChipImg[i] = -1;
	}
}

//===================================
// デストラクタ
//===================================
Map::~Map()
{
	for (int i = 0; i < Config::MAP_IMG_X_NUM*Config::MAP_IMG_Y_NUM; i++)
	{
		if (mapChipImg[i] != -1) 
		{
			DeleteGraph(mapChipImg[i]);

			mapChipImg[i] = -1;
		}
	}
}
//===================================
// 初期化
//===================================

	

