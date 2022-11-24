#pragma once
#include"GameObject.h"

#include<string>

class Car : public GameObject {
public:
	Car(std::string spritePath);
	void Update() override;
	void Render() override;
};