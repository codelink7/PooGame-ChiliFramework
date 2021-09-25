
#include "Dude.h"
#include "Graphics.h"

bool Dude::isCollidingwith(int X, int Y, int width, int height)
{

	const int right0 = x + Dude::width;
	const int bottom0 = y + Dude::height;
	const int right1 = X + width;
	const int bottom1 = Y + height;

	return right0 >= X &&
		bottom0 >= Y &&
		right1 >= x &&
		bottom1 >= y;
}

void Dude::clampScreen()
{

	const int right = x + width;
	const int bottom = y + height;
	if (x <= 0)
	{
		x = 1;
	}
	if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
	}

	if (y <= 0)
	{
		y = 1;
	}

	if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
	}


}
