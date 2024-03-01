#include "CLEAR.h"
#include "Engine/Image.h"
#include "Engine/Input.h"
#include "Engine/SceneManager.h"
CLEAR::CLEAR(GameObject* parent)
	:GameObject(parent,"TITLE"),hGameOver(-1)
{
}

void CLEAR::Initialize()
{
	hGameOver = Image::Load("CLEAR.png");
	assert(hGameOver >= 0);
}

void CLEAR::Update()
{
	if (Input::IsKeyDown(DIK_R)) {
		SceneManager* pSceneManager = (SceneManager*)FindObject("SceneManager");
		pSceneManager->ChangeScene(SCENE_ID_TITLE);
	}
}

void CLEAR::Draw()
{
	Image::SetTransform(hGameOver, transform_);
	Image::Draw(hGameOver);
}

void CLEAR::Release()
{
}
