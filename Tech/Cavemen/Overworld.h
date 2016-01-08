#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"
class Overworld {
	Entity entities[10];
public:
	Overworld();
	~Overworld();
	void update( sf::RenderWindow* window );
};

