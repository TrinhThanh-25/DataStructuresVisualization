#include "MenuState.hpp"

#include <SFML/Graphics.hpp>

MenuState::MenuState()
	: title(menuResource.titleTexture), exitButton(), SLL(), DLL(), SA(), DA(), Stack(), Queue(), CLL()
{
	title.setOrigin({ title.getGlobalBounds().size.x / 2.0f, title.getGlobalBounds().size.y / 2.0f });
	title.setPosition({ 820, 200 });

	exitButton.setPosition({ 800, 800 });
	SA.setPosition({ 350,500 });
	DA.setPosition({ 650,500 });
	SLL.setPosition({ 950,500 });
	DLL.setPosition({ 1250,500 });
	CLL.setPosition({ 500,600 });
	Stack.setPosition({ 800, 600 });
	Queue.setPosition({ 1100,600 });

	exitButton.setString("Exit");
	SA.setString("Static Array");
	DA.setString("Dynamic Array");
	SLL.setString("Singly Linked List");
	DLL.setString("Doubly Linked List");
	CLL.setString("Circular Linked List");
	Stack.setString("Stack");
	Queue.setString("Queue");

	exitButton.setOrigin();
	SA.setOrigin();
	DA.setOrigin();
	SLL.setOrigin();	
	DLL.setOrigin();
	CLL.setOrigin();
	Stack.setOrigin();
	Queue.setOrigin();

	exitButton.setTextColor(sf::Color::Black);
	SLL.setTextColor(sf::Color::Black);
	DLL.setTextColor(sf::Color::Black);
	SA.setTextColor(sf::Color::Black);
	DA.setTextColor(sf::Color::Black);
	Stack.setTextColor(sf::Color::Black);
	Queue.setTextColor(sf::Color::Black);
	CLL.setTextColor(sf::Color::Black);

	exitButton.setFont(menuResource.font);
	SLL.setFont(menuResource.font);
	DLL.setFont(menuResource.font);
	SA.setFont(menuResource.font);
	DA.setFont(menuResource.font);
	Stack.setFont(menuResource.font);
	Queue.setFont(menuResource.font);
	CLL.setFont(menuResource.font);
}

void MenuState::update(sf::RenderWindow& window)
{
	exitButton.update(window);
	SLL.update(window);
	DLL.update(window);
	SA.update(window);
	DA.update(window);
	Stack.update(window);
	Queue.update(window);
	CLL.update(window);
}

void MenuState::draw(sf::RenderWindow& window)
{
	window.draw(title);
	exitButton.draw(window);
	SLL.draw(window);
	DLL.draw(window);
	SA.draw(window);
	DA.draw(window);
	Stack.draw(window);
	Queue.draw(window);
	CLL.draw(window);
}