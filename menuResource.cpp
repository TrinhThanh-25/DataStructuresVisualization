#include "menuResource.hpp"

menuResource::menuResource()
{
	titleTexture.loadFromFile("test.png");
	NormalTexture.loadFromFile("button.png");
	HoverTexture.loadFromFile("button.png");
	PressedTexture.loadFromFile("buttonPress.png");
	font.openFromFile("Ubuntu-Bold.ttf");
}