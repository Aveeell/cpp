/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:40 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:52:41 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int val)
{
	value = val << bits;
	std::cout << "int Constructor for " << this <<std::endl;

}

Fixed::Fixed(const float val)
{
	value = roundf(val * (1 << bits));
	std::cout << "float Constructor for " << this <<std::endl;

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

int Fixed::toInt() const
{
	return this->value >> this->bits;
}

float Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << this->bits));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}