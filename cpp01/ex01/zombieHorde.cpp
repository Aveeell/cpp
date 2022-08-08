/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:41 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:51:42 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];
	for(int i = 0; i < n; i++)
		horde[i].setName(name);
	return horde;
}