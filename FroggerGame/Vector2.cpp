#include "Vector2.h"

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2 Vector2::Normalize()
{
	float vecModule;
	vecModule = sqrt(x * x + y * y);

	Vector2 normalizedVector = Vector2();
	normalizedVector.x = x / vecModule;
	normalizedVector.y = y / vecModule;

	return normalizedVector;
}
