#pragma once

//#include "SDL.h"

class TimeManager
{
private:
	float deltaTime;
	TimeManager* instance;

	TimeManager() = default;

public:
	static const float FPS = 60.0f;
	static const float TICK = 1.0f / 60.0f;

	TimeManager* GetInstance() { return instance; }
	void Update();
	float GetCurrentTime();
	float GetDeltaTime() { return deltaTime; }
};

