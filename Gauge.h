#pragma once
#include "Engine/GameObject.h"
class Gauge :
    public GameObject
{
	int hGaugeBar_;//�Q�[�W�̉摜
	int hGaugeFrame_;//�Q�[�W�̃t���[��

	int gaugeMaxVal_;
	int gaugeCrrVal_;
public:
	//�R���X�g���N�^
	//�����Fparent  �e�I�u�W�F�N�g�iSceneManager�j
	Gauge(GameObject* parent);

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;
};

