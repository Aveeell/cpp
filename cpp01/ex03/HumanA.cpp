/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:50 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:51:51 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap)
{
	this->name = name;
	this->weapon = &weap;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << this->name << " attaks with their " << weapon->getType() << std::endl;
}
