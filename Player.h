#pragma once
#include "Engine/GameObject.h"

class Stage;

class PRect
{
public:
	PRect();
	void SetRectCenter(float _cx, float _cy, float _width, float _height);
	void SetRectTopBottom(float _left, float _top, float _width, float _height);
	~PRect();
	float GetLeft();
	float GetRight();
	float GetTop();
	float GetBottom();
	float GetCenterx();
	float GetCentery();
	float GetWidth();
	float GetHeight();
	float top;
	float bottom;
	float left;
	float right;
	float centerx;
	float centery;
	float width;
	float height;
};

class Player :
    public GameObject
{
	int hpMax_;
	int hp_Crr_;
	int hModel_;
	float speed_;
	Stage* pStage_;
	PRect pr;
public:
	//コンストラクタ
	//引数：parent  親オブジェクト（SceneManager）
	Player(GameObject* parent);

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;
};

