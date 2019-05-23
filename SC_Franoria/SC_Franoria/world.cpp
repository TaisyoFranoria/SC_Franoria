#include"world.hpp"

world::world() {
	pl = new player();
	tr = new terrain();
}

world::~world() {
	delete pl;
}

void world::update() {
	pl->update();
	tr->update();
}

void world::draw() {
	pl->draw();
	tr->draw();
}