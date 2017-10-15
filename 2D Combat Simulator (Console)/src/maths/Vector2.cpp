#include "Vector2.h"
#include "../logging/Logging.h"


Vector2::Vector2(int_ref xpos, int_ref ypos)
	:	iX{xpos}
	,	iY{ypos}
{
}


Vector2::~Vector2()
{
}


Vector2 Vector2::Add(const Vector2& other)
{
	iX += other.X();
	iY += other.Y();

	return *this;
}


Vector2 Vector2::Sub(const Vector2& other)
{
	iX -= other.X();
	iY -= other.Y();

	return *this;
}


int32_t Vector2::X() const 
{
	return iX;
}


int32_t Vector2::Y() const 
{
	return iY;
}



std::ostream& operator<<(std::ostream& stream, const Vector2& vec2)
{
	stream << std::to_string(vec2.iX) + ", " + std::to_string(vec2.iY);
	return stream;
}
