/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:21 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:51:22 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie *dude = newZombie(name);
	dude->announce();
	delete(dude);
}