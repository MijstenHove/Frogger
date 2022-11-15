#pragma once
#include "Scene.h"
class MainMenu : Scene
{
public:
	MainMenu() = default;
	void OnEnter() override;
	void OnExit() override;
	void Update() override;
	void Render() override;

};

