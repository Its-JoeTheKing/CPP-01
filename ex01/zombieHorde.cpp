#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *d = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		d[i].setName(name);
	}
	return (d);
}
