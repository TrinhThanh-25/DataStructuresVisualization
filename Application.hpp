#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <SFML/Graphics.hpp>

#include "MenuState.hpp"

class Application
{
public:
	Application();
	void render();
	void run();

private:
	sf::RenderWindow window;
	MenuState menuState;
};

#endif

