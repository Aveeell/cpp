#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &old);
		Animal &operator= (const Animal &old);
		virtual ~Animal();
		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif