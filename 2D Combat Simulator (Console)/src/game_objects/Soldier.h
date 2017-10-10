#pragma once

#include "../Definitions.h"
#include "../maths/Vector2.h"
#include "Army.h"

class Soldier
{
public:
	Soldier(constchar sign, Vector2 position, Army army);
	~Soldier();

	short ArmyID() const;
	Vector2 Position() const;
	char Sign() const;

	int Health() const;
	int Attack() const;
	int Defense() const;

private:
	char cSign;
	Vector2 vec2Position;
	Army army;

	int iHealth;
	int iAttack;
	int iDefense;
};

