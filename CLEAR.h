#pragma once
#include "Engine/GameObject.h"
class CLEAR :
    public GameObject
{
	CLEAR(GameObject* parent);

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;
};
