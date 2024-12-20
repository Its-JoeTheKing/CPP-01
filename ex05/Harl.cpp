/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:45:00 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/16 11:14:34 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n";
};

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << "\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << "\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void	Harl::complain(std::string level)
{
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void    	(Harl::*func[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < 4; i++)
	{
		if (level == arr[i])
		{
			(this->*func[i])();
			break;
		}
	}
}

Harl::Harl()
{

}

Harl::~Harl()
{

}
