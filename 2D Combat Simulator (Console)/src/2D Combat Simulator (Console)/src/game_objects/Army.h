#pragma once

#include <array>
#include "../maths/Random.h"

const short _MIN_ = 1;
const short _MAX_ = 1 << 3;

class Army
{
public:
	Army();
	~Army();

	short GetID() const;

private:
	static std::array<short, _MAX_> IDs;
	short ID;
};

