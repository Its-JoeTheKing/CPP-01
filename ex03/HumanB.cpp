#include "HumanB.hpp"

HumanB::HumanB()
{
	
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weap->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weap)
{
	this->weap = &weap;
}
