#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat: public AAnimal
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