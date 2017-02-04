#pragma once
#include <SFML/Graphics.hpp>


class GameObject
{
private:
	sf::Vector2f position;

public:
	GameObject(float X = 0.f, float Y = 0.f);
	void update(sf::Time elapsedTime);

	sf::Vector2f getPosition();
};