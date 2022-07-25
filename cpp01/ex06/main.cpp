#include "Harl.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout << "try ./harl <filter>" <<std::endl;
	else
	{
		Harl harl;
		std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int		i;

		for (i = 0; i < 4; i++)
			if (level[i] == argv[1])
				break;
		switch (i)
		{
			case (0):
				harl.complain(argv[1]);
				break;
			case (1):
				harl.complain(argv[1]);
				break;
			case (2):
				harl.complain(argv[1]);
				break;
			case (3):
				harl.complain(argv[1]);
				break;
			default:
				harl.complain(argv[1]);
		}
	}
	return (0);
}