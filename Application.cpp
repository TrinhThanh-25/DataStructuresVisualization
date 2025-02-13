#include "Application.hpp"

Application::Application() : window(sf::VideoMode({ 1600,900 }), "Data Structures Visualization")
{
	window.setFramerateLimit(60);
	
}

void Application::render()
{
	window.clear(sf::Color::White);
	window.setView(window.getDefaultView());
	menuState.update(window);
	menuState.draw(window);
	window.display();
}

void Application::run()
{
	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent()) {
			if (event->is <sf::Event::Closed>()) {
				window.close();
			}
		}
		render();
	}
}