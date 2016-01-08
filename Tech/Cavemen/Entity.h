#pragma once
#include<SFML\Graphics.hpp>
class Entity {
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Entity();
	~Entity();
	void update( sf::RenderWindow window );
};

