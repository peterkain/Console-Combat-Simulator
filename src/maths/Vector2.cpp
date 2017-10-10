#include "Vector2.h"
#include "../logging/Logging.h"


Vector2::Vector2(constint32 xpos, constint32 ypos)
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


constint32 Vector2::X() const 
{
	return iX;
}


constint32 Vector2::Y() const 
{
	return iY;
}



std::ostream& operator<<(std::ostream& stream, const Vector2& vec2)
{
	stream << std::to_string(vec2.iX) + ", " + std::to_string(vec2.iY);
	return stream;
}
