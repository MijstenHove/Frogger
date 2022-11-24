#pragma once
#include"GameObject.h"

class Tile : public GameObject {
private:
	bool isLettah;
public:
	Tile(bool _isLethal);
	void Update() override;
	void Render() override;
};