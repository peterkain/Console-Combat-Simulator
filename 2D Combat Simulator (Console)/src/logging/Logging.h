#pragma once

#include "../Definitions.h"
#include <iostream>

enum class Logstream
{
	INFORMATION,
	WARNING,
	ERROR,
	PRINT
};

class Logging
{
public:
	Logging();
	~Logging();

	static void Log(conststr msg, Logstream stream);
};

