#pragma once

class Dude
{

public:

	bool isCollidingwith(int x, int y, int width, int height);
	void clampScreen();

	int	x;
	int y;
	static constexpr int height = 20;
	static constexpr int width = 20;

};
