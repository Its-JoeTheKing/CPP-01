/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:06:01 by aerrfig           #+#    #+#             */
/*   Updated: 2024/12/16 10:38:50 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string replace_occ(std::string occ, std::string line, std::string rep)
{
	std::string res;
	size_t old_pos = 0;
	size_t pos = 0;

	while ((pos = line.find(occ, old_pos)) != std::string::npos)
	{
		res += line.substr(old_pos, pos - old_pos) + rep;
		old_pos = pos + occ.length();
	}
	res += line.substr(old_pos);
	return res;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "program require 3 arguments\n";
		return (1);
	}
	if (!std::strlen(argv[1]) ||!std::strlen(argv[2]))
	{
		std::cout << "arguments must not be empty";
		return (1);
	}
	std::ifstream readFile(argv[1]);
	if (!readFile.is_open())
	{
		std::cout << "cannot open file " << argv[1];
		return (1);
	}
	std::ofstream writeFile((std::string)argv[1] + ".replace");
	std::string buff;
	if (!writeFile.is_open())
	{
		std::cout << "cannot open file\n";
		return (1);
	}
	while (!readFile.eof())
	{
		getline(readFile, buff);
		writeFile << replace_occ(argv[2], buff, argv[3]) << std::endl;
	}
	readFile.close();
	writeFile.close();
	return (0);
}
