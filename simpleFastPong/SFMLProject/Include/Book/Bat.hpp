#pragma once
#include <Book\GameObject.hpp>

class Bat : private GameObject
{
private:
	float speed;

public:
	Bat(float startSpeed = 0.f, float x = 0.f, float y = 0.f);

	void moveLeft();
	void moveRight();
};