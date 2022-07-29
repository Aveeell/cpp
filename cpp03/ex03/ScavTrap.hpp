#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		unsigned int energy;
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap &old);
		ScavTrap& operator= (const ScavTrap &old);
		~ScavTrap();
		void guardGate();
		void attack(const std::string &target);
};

#endif
