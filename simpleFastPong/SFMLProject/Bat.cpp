#include "Book\Bat.hpp"

Bat::Bat(sf::Vector2f size, float startSpeed, float x, float y) 
	: GameObject(x, y)
	, speed(startSpeed)
	, shape(size)
{
	shape.setFillColor(sf::Color::Black);
}

void Bat::moveLeft()
{
	sf::Vector2f currentPos = getPosition();
	currentPos.x -= speed;
	setPosition(currentPos);
}

void Bat::moveRight()
{
	sf::Vector2f currentPos = getPosition();
	currentPos.x += speed;
	setPosition(currentPos);
}