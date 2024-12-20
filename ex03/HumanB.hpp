/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:51:37 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/15 15:51:37 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	Weapon *weap;
	std::string name;
	public:
		HumanB(std::string name);
		HumanB();
		~HumanB();
		void attack();
		void setWeapon(Weapon &weap);
};
