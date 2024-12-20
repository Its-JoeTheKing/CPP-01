/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:46:05 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/15 15:46:06 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
	std::string f = "HI THIS IS BRAIN";
	std::string *stringPTR = &f;
	std::string &stringREF = f;

	std::cout << &f << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << f << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}