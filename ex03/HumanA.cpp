/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:46:42 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/20 15:18:09 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap_ref) : weap(weap_ref), name(name)
{

}

HumanA::~HumanA()
{

}

HumanA::HumanA()
{

}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weap.getType() << "\n";
}