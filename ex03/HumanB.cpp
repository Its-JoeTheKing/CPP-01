/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:51:33 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/15 15:51:33 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weap->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weap)
{
	this->weap = &weap;
}
