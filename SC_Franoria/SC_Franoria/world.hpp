#pragma once

#include<Dxlib.h>
#include<vector>
#include"player.hpp"

class world {
public:
	world();
	~world();
	void update();
	void draw();
private:
	player* pl;
};
