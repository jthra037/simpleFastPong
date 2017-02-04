#include "Book\Bat.hpp"

Bat::Bat(sf::Vector2f size, float startSpeed, float x, float y) 
	: GameObject(x, y)
	, speed(startSpeed)
	, shape(size)
{
	shape.setFillColor(sf::Color::Black);
}

void Bat::update()
{
	shape.setPosition(getPosition());
}

void Bat::moveLeft()
{
	sf::Vector2f currentPos = getPosition();
	currentPos.x -= speed;
	setPosition(currentPos);
	update();
}

void Bat::moveRight()
{
	sf::Vector2f currentPos = getPosition();
	currentPos.x += speed;
	setPosition(currentPos);
	update();
}

sf::RectangleShape Bat::getShape()
{
	return shape;
}