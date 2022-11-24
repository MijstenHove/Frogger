#pragma once
#include"GameObject.h"
#include"Turtles.h"

class DivingTurtles : public Turtles {
private:
	float diveDuration;
	float surfaceDuration;
	float elapsedTime;
public:
	DivingTurtles(int length, float _diveDuration, float _surfaceDuration);
	bool isDiving();
	void Update() override;
	void Render() override;
};