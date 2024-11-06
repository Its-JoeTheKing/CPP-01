#pragma once
#include "Weapon.hpp"

class HumanB
{
	Weapon *weap;
	std::string name;
	public:
		HumanB(std::string name);
		HumanB();
		~HumanB();
		void attack();
		void setWeapon(Weapon &weap);
};
