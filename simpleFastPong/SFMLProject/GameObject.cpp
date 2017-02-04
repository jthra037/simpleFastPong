#include "Book\GameObject.hpp"

GameObject::GameObject(float X, float Y)
	: position(X, Y)
{}

void GameObject::update(sf::Time elapsedTime)
{
	// I guess something will go here
}

sf::Vector2f GameObject::getPosition()
{
	return position;
}

void GameObject::setPosition(sf::Vector2f newPos)
{
	position = newPos;
}