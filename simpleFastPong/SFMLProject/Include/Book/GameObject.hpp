#pragma once
#include <SFML/Graphics.hpp>


class GameObject
{
private:
	sf::Vector2f position;
	sf::Sprite shape;

public:
	GameObject();
	void update();

	void getPosition();
	void getShape();
};