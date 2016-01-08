#include "Battle.h"

Battle::Battle() {
	if ( !texture.loadFromFile( "Images/logo-cavemen.png" ) ) {
		// handle error
	}
}

Battle::~Battle() {

}

void Battle::update( sf::RenderWindow* window ) {

	sf::Sprite sprite;
	sprite.setPosition( ( 800 - 392 ) * 0.5f, ( 480 - 128 ) * 0.5f );
	sprite.setTexture( texture );

	window->draw( sprite );
}