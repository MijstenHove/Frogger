#pragma once
#include <vector>
//#include "Object" 
class Scene
{
protected:
//	std::vector<Object> ui;
//	std::vector<Object> Objecs;
public:
	Scene() = default;
	virtual void OnEnter() = 0;
	virtual void OnExit() = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;

};

