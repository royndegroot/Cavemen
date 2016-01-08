#include "ScreenGame.h"

ScreenGame::ScreenGame() {
	
}

ScreenGame::~ScreenGame() {
}

void ScreenGame::update( sf::RenderWindow* window ) {
	if ( hasBattle == true ) {
		battle.update( window );
	} else {
		overworld.update( window );
	}
}