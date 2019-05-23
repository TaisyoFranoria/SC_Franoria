#include"player.hpp"

player::player() {
	player_Anim.push_back(new Anim("shikimi/idle"));
	player_Anim.push_back(new Anim("shikimi/dash"));
	x = 0;
	y = 0;
	hp = 10;
	hp_MAX = hp;
	spd = 10;
	AnimMode = ANIMMODE_IDLE;
}

player::~player() {
	std::vector<Anim*>().swap(player_Anim);
}

void player::update() {
	//test
	x = 610;
	y = 360;
	switch (AnimMode) {
	case ANIMMODE_IDLE:
		player_Anim[0]->update(x, y);
		break;
	case ANIMMODE_DASH:
		player_Anim[1]->update(x,y);
		break;
	default :
		DebugBreak();
		break;
	}

	if (CheckHitKey(KEY_INPUT_RIGHT) || CheckHitKey(KEY_INPUT_LEFT)) AnimMode = ANIMMODE_DASH;
	else AnimMode = ANIMMODE_IDLE;
}

void player::draw() {
	switch (AnimMode) {
	case ANIMMODE_IDLE:
		player_Anim[0]->draw();
		break;
	case ANIMMODE_DASH:
		player_Anim[1]->draw();
		break;
	default:
		//DebugBreak();
		DebugBreak();
		break;
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