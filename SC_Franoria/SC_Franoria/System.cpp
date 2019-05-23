#include"System.hpp"

System::System() {
	alive = true;
	sc = new scene();
}

System::~System() {
	delete sc;
	alive = false;
}

void System::update() {
	sc->update();
	if (CheckHitKey(KEY_INPUT_ESCAPE))alive = false;
}

void System::draw() {
	sc->draw();
}

void System::all() {
	if (alive) {
		update();
		draw();
	}
}

bool System::getAlive() {
	return alive;
}