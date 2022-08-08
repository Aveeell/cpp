/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:15 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:51:17 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *lebowsky;
	lebowsky = newZombie("lebowsky");
	lebowsky->announce();
	randomChump("sobchak");
	delete(lebowsky);
	return 0;
}