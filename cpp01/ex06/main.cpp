/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:25 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/09 11:55:09 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout << "try ./harl <filter>" <<std::endl;
	else
	{
		Harl harl;
		std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int i;

		for (i = 0; i < 4; i++)
			if (level[i] == argv[1])
				break;
		switch (i)
		{
			case (0):
				harl.complain("DEBUG");
			case (1):
				harl.complain("INFO");
			case (2):
				harl.complain("WARNING");
			case (3):
				harl.complain("ERROR");
				break;
			default:
				harl.complain(argv[1]);
		}
	}
	return (0);
}