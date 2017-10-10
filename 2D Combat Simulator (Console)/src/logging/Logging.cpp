#include "Logging.h"


Logging::Logging()
{
}


Logging::~Logging()
{
}


void Logging::Log(conststr msg, Logstream stream)
{
	std::string status {""};

	switch(stream)
	{
	case Logstream::INFORMATION:
		status = "INFO: ";
		break;
	case Logstream::WARNING:
		status = "WARNING: ";
		break;
	case Logstream::ERROR:
		status = "ERROR: ";
		break;
	case Logstream::PRINT:
		break;
	}

	if(status == "ERROR: ") 
	{
		std::cout << "Exiting..." << std::endl;
		throw std::runtime_error(msg);
	} 
	else
	{
		std::cout << status << msg << std::endl;
	}
}
