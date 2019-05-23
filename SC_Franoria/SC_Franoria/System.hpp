#pragma once

#include<Dxlib.h>
#include"scene.hpp"

class System {
public :
	System();
	~System();
	void all();
	bool getAlive();
private:
	bool alive;
	void update();
	void draw();
	scene* sc;
};