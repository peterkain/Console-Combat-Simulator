#include "Application.h"
#include "../game_objects/Soldier.h"
#include "../logging/Logging.h"


Application::Application()
{
}


Application::~Application()
{
}


void Application::Start()
{
	LoadLevels();
	InitLevels();
	Gameloop();
}


void Application::Gameloop()
{
}


void Application::LoadLevels()
{
	for(uint16_t i = 1; i < _NUM_MAPS_ + 1; i++)
	{
		vMaps.emplace_back("maps/Map" + std::to_string(i) + ".map");
	}
}


void Application::InitLevels()
{

	for(short i = 0; i < vMaps.size(); i++)
	{
		FileContents.push_back(vMaps[i].GetContents());
	}

	std::vector<char> SignsUsed{};
	for(std::vector<std::string> s : FileContents)
	{
		for(int i = 0; i < s.size(); i++)
		{
			for(int j = 0; j < s[i].length(); j++)
			{
				if(std::any_of(SignsUsed.begin(), SignsUsed.end(), [=](char c) { return c != s[i][j]; }))
				{
					if(s[i][j] != ' ' && s[i][j] != '#'
					{
						Soldier General(s[i][j], {i, j}, {});
						Generals.push_back(General);
						SignsUsed.push_back(s[i][j]);
						std::cout << General << std::endl;
					}
				}
			}
		}
	}
}