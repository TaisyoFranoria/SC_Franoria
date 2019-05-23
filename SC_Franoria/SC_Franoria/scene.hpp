#pragma once
#include<Dxlib.h>
#include"world.hpp"

class scene {
public:
	scene();
	~scene();
	void update();
	void draw();
	bool getAlive();
private:
	bool alive;
	world* wld;
};
