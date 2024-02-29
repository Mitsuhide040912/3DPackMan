#include "TITLE.h"
#include "Engine/Image.h"
#include "Engine/Input.h"
#include "Engine/SceneManager.h"
TITLE::TITLE(GameObject* parent)
	:GameObject(parent,"TITLE"),hT(-1)
{
}

void TITLE::Initialize()
{
	/*hT = Image::Load("");
	assert(hT >= 0);*/
}

void TITLE::Update()
{
	/*if (Input::IsKeyDown(DIK_T)) {
		SceneManager* pSceneManager = (SceneManager*)FindObject("SceneManager");
		pSceneManager->ChangeScene(SCENE_ID_PLAY);
	}*/
}

void TITLE::Draw()
{
}

void TITLE::Release()
{
}
