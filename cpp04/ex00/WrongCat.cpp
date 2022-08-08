/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:35 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:54:36 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default constructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &old)
{
	std::cout << "Copy constructor WrongCat" << std::endl;
	this->type = old.type;
}

WrongCat& WrongCat::operator= (const WrongCat &old)
{
	if (this != &old)
		this->type = old.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "it's a mimic!" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->type;
}