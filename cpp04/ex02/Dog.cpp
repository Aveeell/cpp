/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:29 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:30 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor Dog" << std::endl;
}

Dog::Dog(const Dog &old)
{
	std::cout << "Copy constructor Dog" << std::endl;
	this->type = old.type;
}

Dog& Dog::operator= (const Dog &old)
{
	if (this != &old)
		this->type = old.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}
