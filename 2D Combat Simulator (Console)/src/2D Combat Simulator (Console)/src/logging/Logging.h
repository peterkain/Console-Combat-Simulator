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

	static void Log(conststr_ref msg, Logstream stream = Logstream::PRINT);
};

