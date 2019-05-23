#pragma once

#include<Dxlib.h>
#include<vector>
#include"player.hpp"
#include"terrain.hpp"

class world {
public:
	world();
	~world();
	void update();
	void draw();
private:
	player* pl;
	terrain* tr;
	struct WorldData {
		int player_wx;
		int player_wy;
	};
};
