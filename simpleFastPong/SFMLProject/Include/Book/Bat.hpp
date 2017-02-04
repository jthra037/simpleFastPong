#pragma once
#include <Book\GameObject.hpp>

class Bat : private GameObject
{
private:
	float speed;

public:
	Bat();

	void moveLeft();
	void moveRight();
};