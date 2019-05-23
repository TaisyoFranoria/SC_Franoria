#include<Dxlib.h>
#include<iostream>
#include"System.hpp"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetMainWindowText("スクロールするやつ");
	SetGraphMode(1280, 720, 32);
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	System* GAME = new System();

	while (ProcessMessage() != -1 && !ScreenFlip() && !ClearDrawScreen()) {
		GAME->all();
		if(!GAME->getAlive())break;
	}

	MessageBox(NULL, TEXT("処理が終了しました。"), TEXT("ゲーム終了"), MB_OK);

	delete GAME;

	return 0;
}