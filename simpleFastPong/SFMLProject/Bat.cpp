#include "Book\Bat.hpp"

Bat::Bat(float startSpeed, float x, float y) 
	: GameObject(x, y)
	, speed(startSpeed)
{
	// Maybe put something in here eventually 
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