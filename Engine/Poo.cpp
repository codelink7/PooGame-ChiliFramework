#include "Poo.h"
#include "Graphics.h"

void Poo::Update()
{


	x += vx;
	y += vy;


	int right = x + Poo::width;
	if (x <= 0)
	{
		x = 1;
		vx = -vx;
	}
	if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - Poo::width;
		vx = -vx;
	}


	int bottom = y + Poo::height;

	if (y <= 0)
	{
		y = 1;
		vy = -vy;
	}

	if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - Poo::height;
		vy = -vy;
	}



}