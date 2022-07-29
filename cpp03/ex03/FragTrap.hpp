#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap &old);
		FragTrap& operator= (const FragTrap &old);
		~FragTrap();
		void highFivesGuys();
};

#endif
