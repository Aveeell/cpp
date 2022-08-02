#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FRAGTRAP Constructor for noname" << std::endl;
	name = "noname";
	health = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "FRAGTRAP Constructor for " << str << std::endl;
	name = str;
	health = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(const FragTrap &old)
{
	std::cout << "FRAGTRAP copy Constructor" << std::endl;
	this->name = old.name;
}

FragTrap& FragTrap::operator=(const FragTrap &old)
{
	std::cout << "FRAGTRAP overload = for " << this->name << std::endl;
	if(this == &old)
		return *this;
	this->name = old.name;
	this->health = old.health;
	this->energy = old.energy;
	this->damage = old.damage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP Destructor for " << this->name << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "/) *clap* (\\" << std::endl;
}