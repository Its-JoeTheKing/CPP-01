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
		std::cerr << "program require 3 arguments";
		return (1);
	}
	std::ifstream readFile(argv[1]);
	std::ofstream writeFile((std::string)argv[1] + ".replace");
	std::string buff;
	if (!readFile.is_open() || !writeFile.is_open())
	{
		std::cerr << "cannot open file\n";
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
