#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "delete: " << this->name << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << getName();
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return this->name;
}