#pragma once
#include"GameObject.h"
#include "Log.h"

#include<string>

class Log : public GameObject {
public:
	Log(int length);
	void Update() override;
	void Render() override;
};