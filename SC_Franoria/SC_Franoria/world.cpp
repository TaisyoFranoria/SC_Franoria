#include"world.hpp"

world::world() {
	pl = new player();
}

world::~world() {
	delete pl;
}

void world::update() {
	pl->update();
}

void world::draw() {
	pl->draw();
}