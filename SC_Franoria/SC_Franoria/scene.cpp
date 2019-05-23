#include"scene.hpp"

scene::scene() {
	alive = true;
	wld = new world();
}

scene::~scene() {
	delete wld;
	alive = false;
}

void scene::update() {
	wld->update();
}

void scene::draw() {
	wld->draw();
}

bool scene::getAlive() {
	return alive;
}
