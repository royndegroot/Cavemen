#pragma once

#include <sfml/Graphics.hpp>

class Screen {
public:
	Screen();
	~Screen();
	virtual void update( sf::RenderWindow* window ) =0;
};

