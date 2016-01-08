#pragma once
#include <SFML/Graphics.hpp>

class Battle {
	sf::Texture texture;
public:
	Battle();
	~Battle();
	void update( sf::RenderWindow* window );
};

