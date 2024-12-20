/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:55:48 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/16 10:55:51 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl {
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};