#pragma once
#include "Engine/GameObject.h"
class CLEAR :
    public GameObject
{
	int hGameOver;
public:
	CLEAR(GameObject* parent);

	//‰Šú‰»
	void Initialize() override;

	//XV
	void Update() override;

	//•`‰æ
	void Draw() override;

	//ŠJ•ú
	void Release() override;
};

