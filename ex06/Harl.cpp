#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n";
};

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << "\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << "\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void	Harl::complain(std::string level)
{
	std::string arr[] = {"debug", "info", "warning", "error"};
	void    	(Harl::*func[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < 4; i++)
	{
		if (level == arr[i])
		{
			while (i < 4)
			{
				(this->*func[i])();
				i++;
			}
		}
	}
}

Harl::Harl()
{

}

Harl::~Harl()
{

}
