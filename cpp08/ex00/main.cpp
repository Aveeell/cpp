/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:01:14 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/18 11:33:09 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>


template <typename T>
void test(T& cont, typename T::iterator (*easyfind)(T& cont, int toFind), int toFind)
{
	try
	{
		std::cout << *easyfind(cont, toFind) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::vector<int> vect;
	std::deque<int> deq;
	std::list<int>	lst;

	for (int i = 0; i < 10; i++)
	{	
		vect.push_back(i);
		deq.push_back(i);
		lst.push_back(i);
	}
	vect.push_back(0);
	deq.push_back(0);
	lst.push_back(0);
	std::cout << "--------------------------found--------------------" << std::endl;
	std::cout << "vector: ";
	test(vect, easyfind, 0);
	std::cout << "deque: ";
	test(deq, easyfind, 2);
	std::cout << "list: ";
	test(lst, easyfind, 1);
	std::cout << "------------------------not found-------------------" << std::endl;
	std::cout << "vector: ";
	test(vect, easyfind, 11);
	std::cout << "deque: ";
	test(deq, easyfind, 10);
	std::cout << "list: ";
	test(lst, easyfind, -1);
	return 0;
}