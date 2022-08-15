/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:10 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/15 10:24:22 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		unsigned int energy;
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap &old);
		ScavTrap& operator= (const ScavTrap &old);
		~ScavTrap();
		void guardGate();
		void attack(const std::string &target);
};

#endif
