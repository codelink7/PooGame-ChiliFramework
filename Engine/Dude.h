#pragma once
#include "Graphics.h"

class Dude
{

public:

	void clampScreen();
	void draw(Graphics& gfx);

	int	x;
	int y;
	static constexpr int height = 20;
	static constexpr int width = 20;

};
