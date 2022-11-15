#pragma once

//#include "SDL_mixer.h"
#include <unordered_map>
#include <queue>

class AudioManager
{
private:
	//std::unordered_map<int, Mix_Chunk*> clips;
	//std::unordered_map<int, Mix_Music*> songs;
	bool muted;
	std::queue<int> availableIDs;
	AudioManager* instance;

	AudioManager();

public:
	AudioManager* GetInstance() { return instance; }
	int LoadClip(std::string path);
	int LoadMusic(std::string path);
	void PlayClip(int ID);
	void PlaySong(int ID);
	void StopClip(int ID);
	void StopSong(int ID);
	void Mute();
	void Unmute();
	bool GetMuted() { return muted; }
};

