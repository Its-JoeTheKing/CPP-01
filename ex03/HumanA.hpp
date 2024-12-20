/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:18 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/15 16:03:51 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
	Weapon &weap;
	std::string name;
	public:
		HumanA(std::string name, Weapon &weap_ref);
		HumanA();
		~HumanA();
		void attack();
};
