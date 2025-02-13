#ifndef MENUSTATE_HPP
#define MENUSTATE_HPP

#include "Button.hpp"
#include "menuResource.hpp"

class MenuState
{
public:
	MenuState();
	void update(sf::RenderWindow& window);
	void draw(sf::RenderWindow& window);
	
private:
	menuResource menuResource;
	sf::Sprite title;
	Button SLL;
	Button DLL;
	Button SA;
	Button DA;
	Button Stack;
	Button Queue;
	Button CLL;
	Button exitButton;
};

#endif