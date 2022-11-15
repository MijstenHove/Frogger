#pragma once
#include <unordered_map>
#include <string>
#include "Scene.h"

class SceneManager
{
private:
	std::unordered_map<std::string, Scene> scene;
	Scene* currentScene;
	static SceneManager* instande;

	SceneManager();
public:
	SceneManager GetInstanse();
	int AddScene(std::string name, Scene* s);
	Scene* GetScene(std::string name);
	Scene* GetCurrenScene();
	void SetScene(std::string name);

};

