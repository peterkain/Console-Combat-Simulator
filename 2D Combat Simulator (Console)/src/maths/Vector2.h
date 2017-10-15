#pragma once

#include "../Definitions.h"

class Vector2
{
public:
	Vector2(int_ref xpos, int_ref ypos);
	~Vector2();

	int32_t X() const;
	int32_t Y() const;

	Vector2 Add(const Vector2& other);
	Vector2 Sub(const Vector2& other);

	friend std::ostream& operator<<(std::ostream& stream, const Vector2& vec2);

private:
	int32_t iX;
	int32_t iY;
};
