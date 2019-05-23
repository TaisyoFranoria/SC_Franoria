#pragma once
#include<Dxlib.h>
#include<vector>
#include<string>
class Anim {
public:
	Anim(std::string gra_path);
	~Anim();
	void update(int x,int y);
	void draw();
	int getAnimLength();
private:
	int x, y;
	int count;
	int frame_now;
	std::vector<int> gra;
	int AnimLength;
	void AnimGraph_Load(std::string path);
};
