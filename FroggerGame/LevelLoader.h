#pragma once

//#include <rapidxml>
#include <vector>
#include <string>
#include "Spawner.h"

class LevelLoader
{
public:
	LevelLoader();
	std::vector<Spawner> LoadLevel(std::string path);
};

