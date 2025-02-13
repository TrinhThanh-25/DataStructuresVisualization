#ifndef MENU_RESOURCE_HPP
#define MENU_RESOURCE_HPP

#include <SFML/Graphics.hpp>

class menuResource
{
public:
	menuResource();
	sf::Texture titleTexture;
	sf::Texture NormalTexture;
	sf::Texture HoverTexture;
	sf::Texture PressedTexture;
	sf::Font font;
};

#endif