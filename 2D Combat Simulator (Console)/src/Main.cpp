#include <iostream>
#include <limits>
#include "application/Application.h"
#include "logging\Logging.h"

using namespace std;

class Run
{
public:
	Run()
	{
	}
	~Run()
	{
		cin.get();
	}
};

int main()
{
	Run run;
	try
	{
		Application Game;
		Game.Start();
	}
	catch(std::exception& e)
	{
		cout << "Exiting because of the following Error: \n\t";
		cout << e.what();

		//TWO TIMES, BECAUSE OF SPARE NEWLINE, MAKING cin.get() UNABLE TO WORK
		cin.get();

		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
