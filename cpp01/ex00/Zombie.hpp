/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:28 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:51:29 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void announce();
		void setName(std::string name);
		std::string getName();
};

#endif