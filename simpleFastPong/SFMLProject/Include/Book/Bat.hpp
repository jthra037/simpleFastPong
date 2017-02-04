#pragma once
#include <Book\GameObject.hpp>

class Bat : private GameObject
{
private:
	float speed;

public:
	Bat(float speed = 0.f);

	void moveLeft();
	void moveRight();
};