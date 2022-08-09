/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:53 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/09 11:43:12 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DIAMONDTRAP Constructor for noname" << std::endl;
	name = "noname";
	ClapTrap::name = name + "_clap_name";
	health = FragTrap::health; //100
	energy = ScavTrap::energy; //50
	damage = FragTrap::damage; //30
}

DiamondTrap::DiamondTrap(std::string str)
{
	std::cout << "DIAMONDTRAP Constructor for " << str << std::endl;
	name = str;
	ClapTrap::name = name + "_clap_name";
	health = FragTrap::health;
	energy = ScavTrap::energy; //50
	damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &old)
{
	std::cout << "DIAMONDTRAP copy Constructor" << std::endl;
	this->name = old.name;
	this->health = old.health;
	this->energy = old.energy;
	this->damage = old.damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &old)
{
	std::cout << "DIAMONDTRAP overload = for " << this->name << std::endl;
	if(this == &old)
		return *this;
	this->name = old.name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DIAMONDTRAP Destructor for " << this->name << std::endl;
}

void DiamondTrap::get()
{
	std::cout << std::endl << "name: " << this->name << std::endl;
	std::cout << "health: " << this->health << std::endl;
	std::cout << "energy: " << this->energy << std::endl;
	std::cout << "damage: " << this->damage << std::endl;
	std::cout << "cl4p-tp: " << ClapTrap::name << std::endl << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "whoAmI(): " << this->name << " || " << ClapTrap::name << std::endl;
}