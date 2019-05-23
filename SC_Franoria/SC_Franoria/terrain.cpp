#include"terrain.hpp"

terrain::terrain() {
	for (int y = 0; y < 23; y++) {
		for (int x = 0; x < 40; x++) {
			if (testcell[y][x] == 1) {
				world_cell.push_back({x,y,0,true});
			}
		}
	}
}

terrain::~terrain() {
	std::vector<Cell>().swap(world_cell);
}

void terrain::update() {

}

void terrain::draw() {
	for (int i = 0, n = (unsigned)world_cell.size(); i < n; i++) {
		DrawBox(world_cell[i].x*32,world_cell[i].y*32,
			( world_cell[i].x*32+CELL_WIDTH), (world_cell[i].y*32+CELL_HIGHT),
			0xFFFFF2,TRUE);
	}
}