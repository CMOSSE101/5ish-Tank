#pragma once
class sprites
{
public:
	void flip();
	char asciiMap[40][40];
	int x;
	int y;
	int layer;
	int width;
	int height;
	int counter;
	void move(int up, int down, int left, int right);
};


// Ryan Brown - www.cmoss-electronics.com

