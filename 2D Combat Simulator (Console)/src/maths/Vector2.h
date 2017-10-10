#pragma once

#include "../Definitions.h"

class Vector2
{
public:
	Vector2(constint32 xpos, constint32 ypos);
	~Vector2();

	constint32 X() const;
	constint32 Y() const;

	Vector2 Add(const Vector2& other);
	Vector2 Sub(const Vector2& other);

	friend std::ostream& operator<<(std::ostream& stream, const Vector2& vec2);

private:
	int32_t iX;
	int32_t iY;
};
