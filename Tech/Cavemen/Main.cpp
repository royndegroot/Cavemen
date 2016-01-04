#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window( sf::VideoMode( 800, 480 ), "Cavemen" );
	sf::CircleShape shape( 100.f );
	shape.setFillColor( sf::Color::Green );

	sf::Texture texture;
	if ( !texture.loadFromFile( "Images/logo-cavemen.png" ) ) {
		// Handle failure
	}

	sf::Sprite sprite;
	sf::FloatRect bounds = sprite.getGlobalBounds();
	sprite.setPosition( (800 - 392) * 0.5f, (480 - 128) * 0.5f );
	sprite.setTexture( texture );

	while ( window.isOpen() ) {
		sf::Event event;
		while ( window.pollEvent( event ) ) {
			if ( event.type == sf::Event::Closed || ( event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape ) ) {
				window.close();
			}
		}

		window.clear();
		window.draw( sprite );
		window.display();
	}

	return 0;
}