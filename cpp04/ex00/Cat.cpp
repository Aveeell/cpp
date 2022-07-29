#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor Cat" << std::endl;
}

Cat::Cat(const Cat &old)
{
	std::cout << "Copy constructor Cat" << std::endl;
	this->type = old.type;
}

Cat& Cat::operator= (const Cat &old)
{
	if (this != &old)
		this->type = old.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}