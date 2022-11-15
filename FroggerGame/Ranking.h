#pragma once
#include "Scene.h"
class Ranking : Scene
{
private:
	void LoadScores();

public:
	Ranking() = default;
	void OnEnter() override {};
	void OnExit() override {};
	void Update() override {};
	void Render() override {};
};

