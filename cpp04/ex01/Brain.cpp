#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain(const Brain &old)
{
	std::cout << "Copy Brain constructor" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = old.ideas[i];
}

Brain& Brain::operator= (const Brain &old)
{
	std::cout << "Overload Brain =" << std::endl;
	if(this != &old)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = old.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}
