/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:30 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:51:31 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *horde = zombieHorde(5, "droids");
	Zombie *horde2 = zombieHorde(3, "jedi");
	for(int i = 0; i < 5; i++)
		horde[i].announce();
	for(int i = 0; i < 3; i++)
		horde2[i].announce();
	delete [] horde;
	delete [] horde2;
	return 0;
}