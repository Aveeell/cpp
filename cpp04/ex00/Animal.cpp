/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:14 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:54:15 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Default constructor Animal" << std::endl;
}

Animal::Animal(const Animal &old)
{
	std::cout << "Copy constructor Animal" << std::endl;
	this->type = old.type;
}

Animal& Animal::operator= (const Animal &old)
{
	if (this != &old)
		this->type = old.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Abstact animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}