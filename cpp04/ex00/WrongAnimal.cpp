/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:30 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:54:31 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "Default constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
	std::cout << "Copy constructor WrongAnimal" << std::endl;
	this->type = old.type;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &old)
{
	if (this != &old)
		this->type = old.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Abstract WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}