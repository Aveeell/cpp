/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:07 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:53:08 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		unsigned int health;
		unsigned int energy;
		unsigned int damage;
	public:
		ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap &old);
		ClapTrap& operator= (const ClapTrap &old);
		~ClapTrap();
		
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
