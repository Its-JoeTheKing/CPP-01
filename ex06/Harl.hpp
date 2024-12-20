/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:10:47 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/20 15:10:49 by aerrfig          ###   ########.fr       */
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
