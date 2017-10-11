#include "Soldier.h"



Soldier::Soldier(constchar sign, Vector2 position, Army army)
	:	cSign{sign}
	,	vec2Position{position}
	,	army{army}
{
	int HealthValue = 500 / army.GetID();
	int AttackValue = army.GetID() * 3;
	int DefenseValue = (army.GetID() * 3) % 2;

	iHealth = HealthValue;
	iAttack = AttackValue;
	iDefense = DefenseValue;
}


Soldier::~Soldier()
{
}


short Soldier::ArmyID() const
{
	return army.GetID();
}


Vector2 Soldier::Position() const
{
	return vec2Position;
}


char Soldier::Sign() const
{
	return cSign;
}


int Soldier::Health() const
{
	return iHealth;
}


int Soldier::Attack() const
{
	return iAttack;
}


int Soldier::Defense() const
{
	return iDefense;
}



std::ostream& operator<<(std::ostream& stream, const Soldier& soldier)
{
	stream << soldier.iHealth << " | " << soldier.iAttack << " | " << soldier.iDefense;
	return stream;
}