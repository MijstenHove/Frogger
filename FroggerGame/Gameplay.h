#pragma once
#include <vector>
#include <string>
#include "Scene.h"
//#inclide "Spawner.h"
//#incluce "Frog.h" 
class Gameplay : Scene
{
private:
	void SaveScore();
	void LoadLevelFromFile(std::string);

public:
	// spawner spawners
	//std::vector<GameObject> tiles;
	bool endPositions[5]; 
	//Frog player;
	static int level;
	int score; 

	Gameplay() = default;
	void OnEnter() override;
	void OnExit() override;
	void Update() override;
	void Render() override;
};

