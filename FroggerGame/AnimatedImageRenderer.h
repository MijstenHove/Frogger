#pragma once
#include "ImageRenderer.h"

class AnimatedImageRenderer : public ImageRenderer
{
private:
	int frameWidth;
	int frameHeight;
	int fps;
	bool looping;
	float frameTime;
	float currentFrameTime;

public:
	AnimatedImageRenderer(int frameWidth, int frameHeight, int fps, bool looping);
	virtual void Load(std::string path) override;
	virtual void Update() override;
	virtual void Render() override;
};

