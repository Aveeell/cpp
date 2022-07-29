#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog: public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &old);
		Dog& operator= (const Dog &old);
		virtual ~Dog();
		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif