/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:00 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:52:01 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType()
{
	return this->type;
}