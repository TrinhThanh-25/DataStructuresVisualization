
#include "Button.hpp"
#include <iostream>

Button::Button()
	: normalTexture(getNormalTexture()), hoverTexture(getHoverTexture()), pressedTexture(getPressedTexture()), isPressed(false), isHovered(false), buttonSprite(normalTexture), text(menuResource.font)
{
	text.setOutlineColor(sf::Color::White);
	text.setOutlineThickness(1);
	text.setCharacterSize(30);
}

void Button::update(sf::RenderWindow& window)
{
	sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
	if (buttonSprite.getGlobalBounds().contains(mousePosition))
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
		{
			buttonSprite.setTexture(pressedTexture);
			isPressed = true;
		}
		else
		{
			buttonSprite.setTexture(hoverTexture);
			isPressed = false;
		}
		isHovered = true;
	}
	else
	{
		buttonSprite.setTexture(normalTexture);
		isPressed = false;
		isHovered = false;
	}
}

void Button::setPosition(sf::Vector2f position)
{
	buttonSprite.setPosition(position);
	text.setPosition(position);
	 
}

void Button::setString(std::string text)
{
	this->text.setString(text);
}	

void Button::setCharacterSize(unsigned int size)
{
	this->text.setCharacterSize(size);
}

void Button::setTextColor(sf::Color color)
{
	text.setFillColor(color);
}

void Button::setOrigin()
{
	buttonSprite.setOrigin({ buttonSprite.getGlobalBounds().size.x / 2.0f, buttonSprite.getGlobalBounds().size.y / 2.0f });
	text.setOrigin({ text.getGlobalBounds().size.x / 2.0f + text.getLocalBounds().position.x, text.getGlobalBounds().size.y / 2.0f + text.getLocalBounds().position.y });
	std::cout << text.getGlobalBounds().size.x << std::endl;
	std::cout << text.getGlobalBounds().size.y << std::endl;
	std::cout << text.getLocalBounds().position.x << std::endl;
	std::cout << text.getLocalBounds().position.y << std::endl;
}

void Button::setFont(sf::Font& font)
{
	text.setFont(font);
}

void Button::draw(sf::RenderWindow& window)
{
	window.draw(buttonSprite);
	window.draw(text);
}

sf::Texture Button::getNormalTexture()
{
	return menuResource.NormalTexture;
}

sf::Texture Button::getHoverTexture()
{
	return menuResource.HoverTexture;
}

sf::Texture Button::getPressedTexture()
{
	return menuResource.PressedTexture;
}