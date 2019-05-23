#include"player.hpp"

player::player() {
	player_Anim.push_back(new Anim("shikimi/idle"));
	player_Anim.push_back(new Anim("shikimi/dash"));
	x = 0;
	y = 0;
	hp = 10;
	hp_MAX = hp;
	spd = 10;
	AnimMode = 0;
}

player::~player() {
	for (int i = 0, n = (unsigned)player_Anim.size(); i < n; i++) {
		delete player_Anim[i];
		player_Anim.erase(player_Anim.begin() + i);
	}
}

void player::update() {
	//test
	x = 610;
	y = 360;
	switch (AnimMode) {
	case 0:
		player_Anim[0]->update(x, y);
	case ANIMMODE_DASH:
		player_Anim[1]->update(x,y);
	default :
		player_Anim[0]->update(x, y);
	}
}

void player::draw() {
	switch (AnimMode) {
	case ANIMMODE_IDLE:
		player_Anim[0]->draw();
	case ANIMMODE_DASH:
		player_Anim[1]->draw();
	default:
		//DebugBreak();
		player_Anim[0]->draw();
	}
}

int player::getPoint(int axis) {
	switch (axis) {
	case 0:
		return x;
	case 1:
		return y;
	default:
		DebugBreak();
		return 0;
	}
}