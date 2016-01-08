#include <SFML/Graphics.hpp>

#include "ScreenManager.h"

int main() {
	sf::RenderWindow window( sf::VideoMode( 800, 480 ), "Cavemen" );
	sf::CircleShape shape( 100.f );
	shape.setFillColor( sf::Color::Green );

	while ( window.isOpen() ) {
		sf::Event event;
		while ( window.pollEvent( event ) ) {
			if ( event.type == sf::Event::Closed || ( event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape ) ) {
				window.close();
			}
		}

		window.clear();
		ScreenManager::instance().update( &window );
		window.display();
	}

	return 0;
}