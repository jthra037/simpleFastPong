#pragma once
#include <Book\GameObject.hpp>

class Ball : private GameObject
{
private:
	float xVelocity;
	float yVelocity;

public:
	Ball();

	float getXVelocity();
	bool hitBottom();
	void reboundHorizontal();
	void reboundVertical();
};