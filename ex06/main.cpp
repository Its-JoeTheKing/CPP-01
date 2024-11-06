#include "Harl.hpp"

int main()
{
	Harl d;

	d.complain("debug");
	std::cout << "\n---------------\n";
	d.complain("info");
	std::cout << "\n---------------\n";
	d.complain("warning");
	std::cout << "\n---------------\n";
	d.complain("error");
	std::cout << "\n---------------\n";
}
