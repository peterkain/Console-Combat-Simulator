#include "Random.h"

#include <random>
#include <chrono>
#include <functional>

Random::Random()
{
}


Random::~Random()
{
}


constint32 Random::Between(constint32 min, constint32 max)
{
	uint seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
	std::mt19937 RandomEngine {seed};

	std::uniform_int_distribution<int> range {min, max};
	return range(RandomEngine);
}
