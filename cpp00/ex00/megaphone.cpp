#include <iostream>

void upper(char *str)
{
	for(int i = 0; str[i]; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			std::cout << (char)(str[i] - 32);
		else
			std::cout << str[i];
	}
}

int main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; argv[i]; i++)
		{
			upper(argv[i]);
			if(argv[i + 1])
				std::cout << " ";
		}
	}
	std::cout << std::endl;
}