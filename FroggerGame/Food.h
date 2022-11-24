#pragma once
#include"GameObject.h"
#include"Log.h"

class Food : public GameObject {
private:
	Log* log;
	bool attachedToPlayer;
public:
	Food(Log* _log);
	void AttachToPlayer();
	void Update() override;
	void Render() override;
};