#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap_ref) : name(name), weap(weap_ref)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weap.getType() << "\n";
}