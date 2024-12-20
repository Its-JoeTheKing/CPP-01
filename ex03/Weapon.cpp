/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:32 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/15 15:49:32 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->setType(name);
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType()
{
	const std::string &r = this->type;
	return (r);
}
