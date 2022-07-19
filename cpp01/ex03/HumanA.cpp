#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap)
{
	this->name = name;
	this->weapon = &weap;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << this->name << " attaks with their " << weapon->getType() << std::endl;
}
