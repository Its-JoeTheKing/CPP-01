/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:44:47 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/15 15:44:48 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		void announce();
		void setName(std::string name);
		~Zombie();
};
