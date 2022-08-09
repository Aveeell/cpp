/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:15 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/09 11:05:32 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

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