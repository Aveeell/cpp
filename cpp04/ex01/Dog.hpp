/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:57 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:54:58 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
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