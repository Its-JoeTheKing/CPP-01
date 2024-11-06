#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *d = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		d[i].setName(name);
	}
	return (d);
}
