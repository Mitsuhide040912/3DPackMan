#pragma once
#include "Engine/GameObject.h"
class TITLE :
    public GameObject
{
	int hT;
public:
	TITLE(GameObject* parent);

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;
};

