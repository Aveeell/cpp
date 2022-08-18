/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:36:45 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/18 15:03:54 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void checkSubj()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	try
	{
		sp.addNumber(13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void myCheck()
{
	Span sp = Span(20000);
	
	for(int i = 0; i < 20000; i++)
		sp.addNumber(std::rand());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span lol(1);
	lol.addNumber(1);
	try
	{
		std::cout << lol.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << lol.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	Span kek(10);
	std::vector<int> tmp;
	for(int i = 0; i < 30; i++)
		tmp.push_back(std::rand() % 100);
	kek.addNumber(tmp);
	for(int i = 0; i < 10; i++)
	{
		std::cout << tmp[i];
		if(i < 9)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	std::cout << kek.shortestSpan() << std::endl;
	std::cout << kek.longestSpan() << std::endl;
}

int main()
{
	std::cout << "-----------------subj check-----------------" << std::endl;
	std::srand(time(NULL));
	checkSubj();
	std::cout << "------------------my check------------------" << std::endl;
	myCheck();
	return 0;
}
