#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		~Weapon();
		Weapon(std::string name);
		void setType(std::string type);
		const std::string &getType();
};
