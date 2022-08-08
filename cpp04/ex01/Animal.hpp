/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:44 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:54:45 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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