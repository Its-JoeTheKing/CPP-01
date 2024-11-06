#include "Zombie.hpp"

void randomChump(string name);
Zombie* newZombie(string name);

int main()
{
	Zombie  *z;

	z = newZombie("brainz");
	z->announce();
	randomChump("zom");
	delete z;
}
