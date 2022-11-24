#pragma once
#include"GameObject.h"
#include"Log.h"

class Crocodile : public Log {
private:
	float openMouthDuration;
	float closedMouthDuration;
	float elapsedTime;
public:
	Crocodile(int length, float _openMouthDuration, float _closedMouthDuration);
	bool mouthIsOpen();
	void Update() override;
	void Render() override;
};