#pragma once

#include<Dxlib.h>
#include<vector>
#include"Anim.hpp"

#define ANIMMODE_IDLE (0xFFFFFF)
#define ANIMMODE_DASH (0xFFFFFE)

class player{
	public :
	player();
	~player();
	void update();
	void draw();
	int getPoint(int axis);
	void setPoint(int valueX,int valueY);

private:
	void AnimUpdate();
	void CalcUpdate();

	std::vector<Anim*> player_Anim;
	int x, y;
	int AnimMode;
	int hp;
	int hp_MAX;
	int spd;
	
	bool Gravity;


};


