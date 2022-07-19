#include "Zombie.h"

Zombie *newZombie(std::string name)
{
	Zombie *dude = new(Zombie);
	dude->setName(name);
	return dude;
}