/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:23 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/16 16:04:20 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "delete: " << this->name << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << getName();
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return this->name;
}