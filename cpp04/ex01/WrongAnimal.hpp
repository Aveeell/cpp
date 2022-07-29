#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &old);
		WrongAnimal& operator= (const WrongAnimal &old);
		virtual ~WrongAnimal();
		virtual void makeSound() const;
		std::string getType() const;
};

#endif