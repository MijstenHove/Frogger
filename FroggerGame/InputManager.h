#pragma once

//#include "SDL.h"
#include <unordered_map>

enum class KeyState
{
	UNDEFINED = 1,
	DOWN = 2,
	PRESSED = 4,
	UP = 8,
	RELEASED = 16
};

class InputManager
{
private:
	//std::unordered_map<Sint32, KeyState> keys;
	int mouseX;
	int mouseY;
	bool quitEvent;
	InputManager* instance;

	InputManager() = default;

public:
	InputManager* GetInstance() { return instance; }
	void Listen();
	//bool CheckKeyState(Sint32 key, KeyState state);
	int GetMouseX() { return mouseX; }
	int GetMouseY() { return mouseY; }
	bool GetQuitEvent() { return quitEvent; }
};

