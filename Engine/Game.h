/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();

private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void drawFace(int x, int y);
	void drawPoo(int x, int y);
	void drawTitle(int x, int y);
	void drawGameOver(int x, int y);
	void restartGame();

	int clampScreenX(int x, int width);
	int clampScreenY(int y, int height);

	bool isColliding(int x0, int y0, int x1, int y1, int height0, int width0, int height1, int width1);
	
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */




	bool isStarted = false;

	int	dudeX = 400;
	int dudeY = 300;
	int height = 20;
	int width = 20;



	int poo0X = 200;
	int poo0Y = 200;
	bool poo0isEaten = false;


	int poo1X = 600;
	int poo1Y = 500;
	bool poo1isEaten = false;

	int poo2X = 350;
	int poo2Y = 570;
	bool poo2isEaten = false;
	/********************************/
};