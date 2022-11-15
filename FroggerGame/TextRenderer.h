#pragma once
#include "Renderer.h"
//#include "SDL_ttf.h"

class TextRenderer : public Renderer
{
private:
	std::string text;

public:
	TextRenderer();
	void Load(std::string text, std::string path) override;
	void Update() override;
	void Render() override;
	std::string GetText() { return text; }
	void SetText(std::string text) { this->text = text; }
};

