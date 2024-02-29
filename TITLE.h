#pragma once
#include "Engine/GameObject.h"
class TITLE :
    public GameObject
{
	int hT;
public:
	TITLE(GameObject* parent);

	//‰Šú‰»
	void Initialize() override;

	//XV
	void Update() override;

	//•`‰æ
	void Draw() override;

	//ŠJ•ú
	void Release() override;
};

