#pragma once
#include "Dude.h"
#include "Graphics.h"
class Poo 
{
public:
	
	void Update();
	void processConsumption(const Dude& dude);
	void draw(Graphics& gfx);

	int x;						
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool isEaten = false;
};