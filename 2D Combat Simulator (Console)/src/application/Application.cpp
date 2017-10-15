#include "Application.h"
#include "../game_objects/Soldier.h"
#include "../logging/Logging.h"
#include <iterator>


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

	for(ushort i = 0; i < vMaps.size(); i++)
	{
		FileContents.push_back(vMaps[i].GetContents());
	}

	std::vector<char> SignsUsed{};
	SignsUsed.reserve(sizeof(short) * 8);

	for(std::vector<std::string> s : FileContents)
	{
		for(int32_t i = 0; (uint)i < s.size(); i++)
		{
			for(int32_t j = 0; (uint)j < s[i].length(); j++)
			{
				auto value = std::find(SignsUsed.begin(), SignsUsed.end(), s[i][j]);
				auto position = std::distance(SignsUsed.begin(), value);
				if(value != SignsUsed.end())
				{
					Soldiers.emplace_back(SignsUsed[position], Vector2{i, j}, 
						[&] () -> Army
						{
							for(const Soldier& s : Soldiers)
							{
								if(s.Sign() == SignsUsed[position])
								{
									return s.GetArmy();
								} else continue;
							}
						} ()
					);
				}
				else 
				{
					if(s[i][j] != ' ' && s[i][j] != '#')
					{
						Soldiers.emplace_back(s[i][j], Vector2{i, j}, Army{});
						SignsUsed.push_back(s[i][j]);
					}
				}
			}
		}
	}
}