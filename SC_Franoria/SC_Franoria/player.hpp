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
private:
	std::vector<Anim*> player_Anim;
	int x, y;
	int AnimMode;
	int hp;
	int hp_MAX;
	int spd;
	

};


