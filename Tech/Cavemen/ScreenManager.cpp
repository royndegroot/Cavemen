#include "ScreenManager.h"
#include "ScreenGame.h"

ScreenManager::ScreenManager() {
	screens["screenGame"] = new ScreenGame();
	currentScreen = screens["screenGame"];
}

void ScreenManager::setScreen( string name ) {
	currentScreen = screens[name];
}

void ScreenManager::update( sf::RenderWindow* window ) {
	currentScreen->update( window );
}