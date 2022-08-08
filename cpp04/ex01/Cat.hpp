/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:53 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:54:54 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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