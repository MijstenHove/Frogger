#pragma once
//#include "Renderer.h"

#include<vector>

class GameObject {
protected:
	//std::vector<ImageRenderer> renderer;
public:
	GameObject() = default;

	virtual void Update() = 0;
	virtual void Render() = 0;
	//Renderer* GetRenderer();
};