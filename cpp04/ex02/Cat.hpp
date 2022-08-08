/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:26 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:27 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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