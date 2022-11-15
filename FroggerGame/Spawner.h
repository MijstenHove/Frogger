#pragma once
#include "Vector2.h"

class Spawner
{
private:
	float maxSpawnTime;
	float minSpawnTime;
	float elapsedTime;
	Vector2 startPosition;
	Vector2 startVelocity;

public:
	Spawner<ObjectType>();
	ObjectType* Update();
};

