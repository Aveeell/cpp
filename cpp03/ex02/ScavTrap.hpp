/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:45 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:53:46 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
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
