#pragma once
#include <Book\GameObject.hpp>

class Bat : private GameObject
{
private:
	float speed;
	sf::RectangleShape shape;

public:
	Bat(sf::Vector2f size, float startSpeed = 0.f, float x = 0.f, float y = 0.f);

	sf::RectangleShape getShape();
	void update();
	void moveLeft();
	void moveRight();
};