#pragma once
#include "Renderer.h"

class ImageRenderer : public Renderer
{
public:
	ImageRenderer();
	virtual void Load(std::string path) override;
	virtual void Update() override;
	virtual void Render() override;
};

