/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:31 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:32 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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