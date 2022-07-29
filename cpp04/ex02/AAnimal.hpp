#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &old);
		AAnimal &operator= (const AAnimal &old);
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif