#include "Book\GameObject.hpp"

GameObject::GameObject(float X, float Y)
	: position(X, Y)
{}

sf::Vector2f GameObject::getPosition()
{
	return position;
}

void GameObject::setPosition(sf::Vector2f newPos)
{
	position = newPos;
}