#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <SFML/Graphics.hpp>
#include <string>

#include "menuResource.hpp"

class Button
{
public: 
	Button();
	void update(sf::RenderWindow& window);
	void setPosition(sf::Vector2f position);

	void setString(std::string text);
	void setCharacterSize(unsigned int size);
	void setTextColor(sf::Color color);
	void setOrigin();

	void setFont(sf::Font& font);
	void draw(sf::RenderWindow& window);

	sf::Texture getNormalTexture();
	sf::Texture getHoverTexture();
	sf::Texture getPressedTexture();

private:
	menuResource menuResource;
	sf::Texture normalTexture;
	sf::Texture hoverTexture;
	sf::Texture pressedTexture;
	sf::Sprite buttonSprite;
	sf::Text text;
	bool isPressed;
	bool isHovered;
};

#endif