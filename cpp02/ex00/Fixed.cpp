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