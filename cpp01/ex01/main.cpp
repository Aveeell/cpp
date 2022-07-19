#include "Zombie.h"

int main()
{
	Zombie *horde = zombieHorde(5, "droids");
	Zombie *horde2 = zombieHorde(3, "jedi");
	for(int i = 0; i < 5; i++)
		horde[i].announce();
	for(int i = 0; i < 3; i++)
		horde2[i].announce();
	delete [] horde;
	delete [] horde2;
	return 0;
}