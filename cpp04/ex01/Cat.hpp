#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &old);
		Cat& operator= (const Cat &old);
		virtual ~Cat();
		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif