#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie *dude = newZombie(name);
	dude->announce();
	delete(dude);
}