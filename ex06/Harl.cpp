/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:10:54 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/20 15:10:55 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n\n";
};

void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << "\n\n";
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << "\n\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << "\n\n";
}

void	Harl::complain(std::string level)
{
	int indx = -1;
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < arr->length(); i++)
	{
		if (arr[i] == level)
			indx = i;
	}

	switch (indx)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

Harl::Harl()
{

}

Harl::~Harl()
{

}
