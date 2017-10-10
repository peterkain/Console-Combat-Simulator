#pragma once

#include "../Definitions.h"

class Random
{
public:
	Random();
	~Random();

	static constint32 Between(constint32 min, constint32 max);

};

