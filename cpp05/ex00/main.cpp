/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:52 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:53 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat createBureaucrat(std::string name, int grade)
{
	try
	{
		Bureaucrat bureaucrat(name, grade);
		return bureaucrat;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return Bureaucrat();
}

void createAndUpgrade()
{
	Bureaucrat h("hasanov", 10);
	std::cout << h;

	for(int i = 0; i < 10; i++)
	{
		try
		{
			h.upgrade();
			std::cout << h;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void createAndDowngrade()
{
	Bureaucrat h("prudnikov", 141);
	std::cout << h;

	for(int i = 0; i < 10; i++)
	{
		try
		{
			h.downgrade();
			std::cout << h;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

int main()
{
	std::cout << std::endl << createBureaucrat("karakaev", -1);
	std::cout << std::endl << createBureaucrat("prudnikov", 1);
	std::cout << std::endl << createBureaucrat("selicaev", 50);
	std::cout << std::endl << createBureaucrat("bubnov", 150);
	std::cout << std::endl << createBureaucrat("kudrin", 151);
	std::cout << "------------------------------------------" << std::endl;

	createAndUpgrade();
	std::cout << "------------------------------------------" << std::endl;

	createAndDowngrade();
	std::cout << "------------------------------------------" << std::endl;
	
	return 0;
}