#pragma once

#include <sfml/Graphics.hpp>
#include <Map>
#include <string>

#include "Screen.h"

using namespace std;

class ScreenManager {
	ScreenManager();
	ScreenManager( ScreenManager const& copy );

	Screen* currentScreen;
	map<string, Screen*> screens;
public:
	static ScreenManager& instance() {
		static ScreenManager instance;
		return instance;
	}

	void setScreen( string name );
	void update( sf::RenderWindow* window );
};

