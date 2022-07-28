#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap one("CL4P-TP");
	ClapTrap two("CLAP-9000");

	std::cout << std::endl;
	ScavTrap three("SC4V-TP");
	FragTrap four("FR4G-TP");
	std::cout << std::endl;

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

	std::cout << std::endl;
	three.guardGate();
	three.attack("CL4P-TP");
	four.takeDamage(20);
	four.beRepaired(10);

	std::cout << std::endl;
	four.highFivesGuys();
	four.attack("SC4V-TP");
	three.takeDamage(30);
	std::cout << std::endl;
	return 0;
}