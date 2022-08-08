/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:15 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:16 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	std::cout << "Default constructor AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &old)
{
	std::cout << "Copy constructor AAnimal" << std::endl;
	this->type = old.type;
}

AAnimal& AAnimal::operator= (const AAnimal &old)
{
	if (this != &old)
		this->type = old.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor AAnimal" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "Abstact Aanimal sound" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->type;
}