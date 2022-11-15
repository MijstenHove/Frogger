#pragma once

#include <cmath>

class Vector2
{
public:
	float x;
	float y;

	Vector2() { }
	Vector2(float x, float y);
	Vector2 Normalize();
};

