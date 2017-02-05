#pragma once
#include <SFML/Graphics.hpp>

class GameObject
{
private:
	sf::Vector2f position;

public:
	GameObject(float X = 0.f, float Y = 0.f);

	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f newPos);
};