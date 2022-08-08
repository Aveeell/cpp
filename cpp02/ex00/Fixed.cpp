/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:31 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:52:32 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Defaul constructor for " << this << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
	this->value = old.value;
	std::cout << "Copy constructor for " << this <<std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor for " << this << std::endl;
}

Fixed& Fixed::operator= (const Fixed &old)
{
	if (this != &old)
		this->value = old.getRawBits();
	std::cout << "Overload= for " << this << std::endl;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits from " << this << std::endl;
	return this->value;
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits to " << this << std::endl;
	this->value = raw;
}