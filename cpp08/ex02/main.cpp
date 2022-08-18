/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:21:24 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/18 15:05:18 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void subjCheck()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void myCheck()
{
	MutantStack<std::string> myStack;

	myStack.push("cpp");
	std::cout << "top: " << myStack.top() << std::endl;
	
	myStack.push("module");
	std::cout << "top: " << myStack.top() << std::endl;

	myStack.push("08");
	myStack.push("eeeboiii");
	myStack.push("aboba");
	myStack.push("lol");
	std::cout << std::endl;
	MutantStack<std::string>::iterator i = myStack.begin();
	MutantStack<std::string>::iterator j = myStack.end();

	while (i != j)
	{
		std::cout << *i << std::endl;
		i++;
	}
	
	std::cout << "--------------------copy-----------------------" <<std::endl;
	MutantStack<std::string> lol(myStack);
	lol.pop();
	lol.pop();
	lol.pop();
	MutantStack<std::string>::iterator i1 = lol.begin();
	MutantStack<std::string>::iterator j1 = lol.end();

	while (i1 != j1)
	{
		std::cout << *i1 << std::endl;
		i1++;
	}
	std::cout << "-------------------operator=-------------------" <<std::endl;
	MutantStack<std::string> kek = lol;
	MutantStack<std::string>::iterator i2 = kek.begin();
	MutantStack<std::string>::iterator j2 = kek.end();

	while (i2 != j2)
	{
		std::cout << *i2 << std::endl;
		i2++;
	}
}

int main()
{
	std::cout << "------------------subj check----------------" << std::endl;
	subjCheck();
	std::cout << "-------------------my check-----------------" << std::endl;
	myCheck();
	return 0;
}