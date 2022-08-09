/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:06 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/09 11:42:33 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap one("CL4P-TP");
	ClapTrap two("CLAP-9000");
	std::cout << std::endl;
	
	ScavTrap three("SC4V-TP");
	FragTrap four("FR4G-TP");
	std::cout << std::endl;

	DiamondTrap five("D14M0ND-TP");
	five.get();
	std::cout << std::endl;

	five.whoAmI();
	std::cout << std::endl;

	five.attack("CL4P-TP");
	std::cout << std::endl;
	return 0;
}