#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
	Zombie  *z;

	z = newZombie("brainz");
	z->announce();
	randomChump("zom");
	delete z;
}
