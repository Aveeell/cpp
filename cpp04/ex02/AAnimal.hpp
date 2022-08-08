/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:17 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:18 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &old);
		AAnimal &operator= (const AAnimal &old);
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif