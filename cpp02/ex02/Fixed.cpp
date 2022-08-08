/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:01:15 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 12:59:51 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed &old)
{
	this->value = old.value;
}

Fixed::Fixed(const int val)
{
	value = val << bits;
}

Fixed::Fixed(const float val)
{
	value = roundf(val * (1 << bits));
}

Fixed::~Fixed() {}
//--------------------------- operator = ---------------------------------------
Fixed& Fixed::operator= (const Fixed &old)
{
	if (this != &old)
		this->value = old.getRawBits();
	return *this;
}
//----------------------------- compare ----------------------------------------
bool Fixed::operator> (Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator< (Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>= (Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<= (Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator== (Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!= (Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}
//------------------------------ arithmetic ------------------------------------
float Fixed::operator+ (Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator- (Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator* (Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/ (Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}
//----------------------- increment/decrement ----------------------------------
Fixed Fixed::operator++ ()
{
	++this->value;
	return *this;
}

Fixed Fixed::operator-- ()
{
	--this->value;
	return *this;
}

Fixed Fixed::operator++ (int)
{
	Fixed temp = *this;
	this->value++;
	return temp;
}

Fixed Fixed::operator-- (int)
{
	Fixed temp = *this;
	this->value--;
	return temp;
}
//------------------------------------------------------------------------------
Fixed& Fixed::min(Fixed &one, Fixed &two)
{
	std::cout << "Fixed& min || ";
	if(one.toFloat() <= two.toFloat())
		return one;
	return two;
}

const Fixed& Fixed::min(const Fixed &one, const Fixed &two)
{
	std::cout << "const Fixed& min || ";
	if(one.toFloat() <= two.toFloat())
		return one;
	return two;
}

Fixed& Fixed::max(Fixed &one, Fixed &two)
{
	std::cout << "Fixed& max || ";
	if(one.toFloat() >= two.toFloat())
		return one;
	return two;
}

const Fixed& Fixed::max(const Fixed &one, const Fixed &two)
{
	std::cout << "const Fixed& max || ";
	if(one.toFloat() >= two.toFloat())
		return one;
	return two;
}
//------------------------------------------------------------------------------
int Fixed::getRawBits() const
{
	return this->value;
}

void Fixed::setRawBits(int raw)
{
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