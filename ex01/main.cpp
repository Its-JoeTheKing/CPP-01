/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:45:42 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/15 15:45:42 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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