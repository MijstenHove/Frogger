#pragma once
#include"GameObject.h"

class Turtles : public GameObject {
public:
	Turtles(int length);
	void Update() override;
	void Render() override;
};