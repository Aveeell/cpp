#include "Zombie.h"

int main()
{
	Zombie *lebowsky;
	lebowsky = newZombie("lebowsky");
	lebowsky->announce();
	randomChump("sobchak");
	delete(lebowsky);
	return 0;
}