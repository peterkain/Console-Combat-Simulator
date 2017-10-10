#include "File.h"
#include "../logging/Logging.h"
#include <fstream>
#include <sstream>


File::File(conststr filename)
	:	Filename{filename}
{
	std::ifstream file{Filename};
	if(file.fail())
	{
		std::string input{""};

		Logging::Log("File " + Filename + " does not exist.", Logstream::WARNING);
		std::cout << "Would you like to create it (y/n)? > ";
		std::cin >> input;

		if(input == "y" || input == "Y")
		{
			std::ofstream newFile{Filename};

			if(!newFile)
			{
				Logging::Log("Could not create File! (Maybe invalid Filename?)", Logstream::ERROR);
			}

			newFile << "";
			file.close();
		}
		else
		{
			Logging::Log("Skipping file " + Filename + "...", Logstream::INFORMATION);
			std::cin.get();
		}
	}
	else
	{
		Read();
	}
}


File::~File()
{
}


void File::Read()
{
	std::ifstream file{Filename};

	if(!file)
	{
		Logging::Log("File " + Filename + " does not exist!", Logstream::ERROR);
	}

	std::stringstream ss {};
	ss << file.rdbuf();
	file.close();

	Contents = ss.str();
}


std::string File::GetContents()
{
	return Contents;
}


std::string& File::GetContentsAsRef()
{
	return Contents;
}