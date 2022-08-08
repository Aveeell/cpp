/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:43 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:53:44 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "SCAVTRAP Constructor for noname" << std::endl;
	name = "noname";
	health = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "SCAVTRAP Constructor for " << str << std::endl;
	name = str;
	health = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old)
{
	std::cout << "SCAVTRAP copy Constructor" << std::endl;
	this->name = old.name;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &old)
{
	std::cout << "SCAVTRAP overload = for " << this->name << std::endl;
	if(this == &old)
		return *this;
	this->name = old.name;
	this->health = old.health;
	this->energy = old.energy;
	this->damage = old.damage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAVTRAP Destructor for " << this->name << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(energy > 0 && health > 0)
	{
		std::cout << name << " BOOOM " << target << " FOR " << damage << " DAMAGE";
		std::cout << std::endl;
		energy--;
	}
	else
		std::cout << name << " can't attack" << std::endl;

}
