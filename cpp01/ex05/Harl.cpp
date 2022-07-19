#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "debug_message" << std::endl;
}

void Harl::info()
{
	std::cout << "info_message" << std::endl;
}

void Harl::warning()
{
	std::cout << "warning_message" << std::endl;
}

void Harl::error()
{
	std::cout << "error_message" << std::endl;
}

void Harl::complain(std::string level)
{
	void(Harl::*functions[])() = {&Harl::debug, &Harl::info,
									&Harl::warning, &Harl::error,
	};
	
	std::string	levels[] = {"debug", "info", "warning", "error"};

	for(int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "What does it mean \"" << level  << "\"?"<< std::endl;;
}