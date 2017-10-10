#include "Army.h"

#include <algorithm>
#include "../logging/Logging.h"

std::array<short, _MAX_> Army::IDs {};

Army::Army()
{
	ID = Random::Between(_MIN_, _MAX_);
	 
	if(std::find(IDs.begin(), IDs.end(), 0) == IDs.end())
	{
		throw std::runtime_error("No further armies possible!");
	}

	while(std::any_of(IDs.begin(), IDs.end(), [=] (int i) { return i == ID; }))
	{
		ID = Random::Between(_MIN_, _MAX_);
	}

	for(short i = 0; i < IDs.size(); i++)
	{
		if(IDs[i] == 0)
		{
			IDs[i] = ID;
			break;
		}
	}
}


Army::~Army()
{
}


short Army::GetID() const
{
	return ID;
}
