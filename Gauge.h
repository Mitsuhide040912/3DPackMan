#pragma once
#include "Engine/GameObject.h"
class Gauge :
    public GameObject
{
	int hGaugeBar_;//ゲージの画像
	int hGaugeFrame_;//ゲージのフレーム

	int gaugeMaxVal_;
	int gaugeCrrVal_;
public:
	//コンストラクタ
	//引数：parent  親オブジェクト（SceneManager）
	Gauge(GameObject* parent);

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;
};

