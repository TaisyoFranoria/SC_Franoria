#include"Anim.hpp"

Anim::Anim(std::string gra_path) {
	AnimGraph_Load(gra_path);
	AnimLength = gra.size();
}

Anim::~Anim() {
	//ゔぇくたーのなかみけせ！！！！！！！！！！！！！イレイズをつかうんだ
	std::vector<int>().swap(gra);
}

void Anim::update(int x,int y) {
	this->x = x;
	this->y = y;

	if (count%5==0) {
		frame_now++;
	}
	if(frame_now>=AnimLength) {
		frame_now = 0;
	}

	count++;
}

void Anim::draw() {
	DrawRotaGraph(x,y,1.0,0.0,gra[frame_now],TRUE);
}
int Anim::getAnimLength() {
	return AnimLength;
}

void Anim::AnimGraph_Load(std::string path) {
	bool success = false;
	std::string fileh = "img/"+path+"/";
	std::string filename;
	for (int i = 0; i < 100; i++) {
		filename = fileh + std::to_string(i) + ".png";
		int a = LoadGraph(filename.c_str());
		if (a != -1) {
			this->gra.push_back(a);
			success = true;
		}

	}
	if (!success)this->gra.push_back(LoadGraph("img/animation/nodata.png"));
}
