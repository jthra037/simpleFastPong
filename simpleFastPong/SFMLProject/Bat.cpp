#include "Book\Bat.hpp"

Bat::Bat(sf::Vector2f size, float startSpeed, float x, float y) 
	: GameObject(x, y)
	, speed(startSpeed)
	, shape(size)
{
	shape.setFillColor(sf::Color::Black);
	shape.setPosition(sf::Vector2f(x, y));
}

void Bat::update()
{
	shape.setPosition(getPosition());
}

void Bat::moveLeft(sf::Time elapsedTime)
{
	sf::Vector2f currentPos = getPosition();
	currentPos.x -= speed * elapsedTime.asSeconds();
	setPosition(currentPos);
	update();
}

void Bat::moveRight(sf::Time elapsedTime)
{
	sf::Vector2f currentPos = getPosition();
	currentPos.x += speed * elapsedTime.asSeconds();
	setPosition(currentPos);
	update();
}

sf::RectangleShape Bat::getShape()
{
	return shape;
}