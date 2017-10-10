#pragma once

#include "../file_handling/File.h"
#include <vector>

const uint16_t _NUM_MAPS_ = 1;

class Application
{
public:
	Application();
	~Application();

	void Start();

private:
	void Gameloop();
	void LoadLevels();
	void InitLevels();

private:
	std::vector<File> vMaps;
};

