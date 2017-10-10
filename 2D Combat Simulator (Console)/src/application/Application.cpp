#include "Application.h"



Application::Application()
{
}


Application::~Application()
{
}


void Application::Start()
{
	LoadLevels();
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