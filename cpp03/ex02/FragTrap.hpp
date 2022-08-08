/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:38 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:53:39 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap &old);
		FragTrap& operator= (const FragTrap &old);
		~FragTrap();
		void highFivesGuys();
};

#endif
