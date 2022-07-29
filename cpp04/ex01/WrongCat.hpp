#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &old);
		WrongCat& operator= (const WrongCat &old);
		virtual ~WrongCat();
		virtual void makeSound() const;
		std::string getType() const;
};

#endif