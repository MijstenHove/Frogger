#pragma once

#include <map>
#include <string>
class HighScoreManager 
{
private:
	static HighScoreManager* instance; 

	HighScoreManager();
public:
	std::map <int, std::string> score;

	HighScoreManager* GetInstance();
	void LoadScore(std::string path);
	void SaveScore(std::string path);
	void AddScore(int value, std::string name);
	std::map<int, std::string> GetScore();
};

