#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->setType(name);
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType()
{
	const std::string &r = this->type;
	return (r);
}
