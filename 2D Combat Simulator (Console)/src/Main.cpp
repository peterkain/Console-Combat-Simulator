#include <iostream>
#include "application/Application.h"
#include "logging/Logging.h"

using namespace std;

class Run
{
public:
	Run()
	{}
	~Run()
	{ 
		cin.get(); 
	}
} run;

int main()
{
	try
	{
		Application Game;
		Game.Start();
	}
	catch(std::exception& e)
	{
		cout << "Exiting because of the following Error: \n\t";
		cout << e.what();

		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}