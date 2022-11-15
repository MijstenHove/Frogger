#pragma once

//#include "SDL_image.h"
#include "Renderer.h"
//#include "Vector2.h"
#include <string>


class Renderer
{
protected:
	//SDL_Texture* texture;
	//SDL_Color color;
	float alpha;
	//Vector2 position;
	float rotation;
	//Vector2 scale;
	//SDL_Rect targetRect;
	//SDL_Rect sourceRect;

public:
	Renderer(/*SDL_Color color,*/ float alpha, float rotation/*, SDL_Rect targetRect, SDL_Rect sourceRect*/);
	virtual void Load(std::string path) = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;
	//void SetColor(SDL_Color color) { this->color = color; }
	void SetAlpha(float alpha) { this->alpha = alpha; }
	//void SetPosition(Vector2 position) { this->position = position; }
	void SetRotation(float rotation) { this->rotation = rotation; }
	//void SetScale(Vector2 scale) { this->scale = scale; }
	//SDL_Color GetColor() { return color; }
	float GetAlpha() { return alpha; }
};

