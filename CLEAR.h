#pragma once
#include "Engine/GameObject.h"
class CLEAR :
    public GameObject
{
	int hGameOver;
public:
	CLEAR(GameObject* parent);

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;
};

