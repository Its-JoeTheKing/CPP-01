#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int size = 3;
	
	Zombie *d;
	d = zombieHorde(size, "joe");
	for (int i = 0; i < size; i++)
	{
		d->announce();
	}
	delete[] d;
}