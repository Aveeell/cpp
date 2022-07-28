#include "ClapTrap.hpp"

int main()
{
	ClapTrap one("CL4P-TP");
	ClapTrap two("FR4G-TP");
	ClapTrap three("SC4V-TP");
	ClapTrap four("CLAP-9000");
	ClapTrap five;

	std::cout << std::endl;

	for(int i = 0; i < 11; i++)
	{
		one.attack("FR4G-TP");
		if(i < 10)
			two.takeDamage(0);
	}

	std::cout << std::endl;
	two.beRepaired(10);

	std::cout << std::endl;
	five = one;
	five.beRepaired(10);
	return 0;
}