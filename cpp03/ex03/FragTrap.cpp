/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:57 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/15 10:25:02 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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