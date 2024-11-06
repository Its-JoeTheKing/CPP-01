#pragma once
#include "iostream"

class Zombie
{
private:
	std::string name;
public:
	void announce();
	void setName(std::string name);
	~Zombie();
};
