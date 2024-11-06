#pragma once
#include "Weapon.hpp"

class HumanA
{
	Weapon &weap;
	std::string name;
	public:
		HumanA(std::string name, Weapon &weap_ref);
		~HumanA();
		void attack();
};
