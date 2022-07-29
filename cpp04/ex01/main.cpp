#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	Animal *arr[10];
	for(int i = 0; i < 10; i++)
	{
		std::cout << "----------------------"<< i <<"------------------------" << std::endl;
		if (i < 5)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl;
	for(int i = 0; i < 10; i++)
	{
		std::cout << i << ") ";
		std::cout << arr[i]->getType() << " goes ";
		arr[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "----------------------"<< i <<"------------------------" << std::endl;
		delete arr[i];
	}
	std::cout << "-----------------------------------------------" << std::endl;
	return 0;
}