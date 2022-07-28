#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor for noname" << std::endl;
	name = "noname";
	health = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "Constructor for " << str << std::endl;
	name = str;
	health = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	std::cout << "copy Constructor" << std::endl;
	this->name = old.name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &old)
{
	std::cout << "overload = for " << this->name << std::endl;
	if(this == &old)
		return *this;
	this->name = old.name;
	this->health = old.health;
	this->energy = old.energy;
	this->damage = old.damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for " << this->name << std::endl << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(energy > 0 && health > 0)
	{
		std::cout << name << " attacks " << target << ", causing " << damage << " point of damage";
		std::cout << std::endl;
		energy--;
	}
	else
		std::cout << name << " can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " take damage of " << amount << " points" << std::endl;
	health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy > 0 && health > 0)
	{
		health += amount;
		energy--;
		std::cout << name << " be repaired of " << amount << " points" << std::endl;
	}
	else
		std::cout << name << " can't be repaired" << std::endl;
}
