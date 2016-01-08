#pragma once
#include "Battle.h"
#include "Screen.h"
#include "Overworld.h"

class ScreenGame :
	public Screen {
	Overworld overworld;
	Battle battle;
	bool hasBattle = true;
public:
	ScreenGame();
	~ScreenGame();
	void update( sf::RenderWindow* window );
};

