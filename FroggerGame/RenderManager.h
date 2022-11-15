#pragma once

//#include "SDL.h"
#include "Renderer.h"

class RenderManager
{
private:
	static RenderManager* instance;
	//SDL_Window* window;
	//SDL_Renderer* renderer;

	RenderManager(int width, int height, int flags);

public:
	static const float windowWidth;
	static const float windowHeight;

	RenderManager* GetInstance() { return instance; }
	//SDL_Renderer* GetRenderer() { return renderer; }

};

