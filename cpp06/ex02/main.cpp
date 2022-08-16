/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:44:51 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/16 16:02:55 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int randRtn = std::rand();

	if (randRtn % 3 == 0)
	{
		std::cout << "Generate A" << std::endl;
		return new A;
	}
	else if (randRtn % 2 == 0)
	{
		std::cout << "Generate B" << std::endl;
		return new B;
	}
	std::cout << "Generate C" << std::endl;
	return new C;
}

void identify(Base *p)
{
	if (!p)
		return ;
	if (dynamic_cast<A *>(p))
		std::cout << "this is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "this is B" << std::endl;
	else if(dynamic_cast<C *>(p))
		std::cout << "this is C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &temp = dynamic_cast<A &>(p);
		std::cout << "this is A" << std::endl;
		(void)temp;
	}
	catch (std::exception &e) {}

	try
	{
		B &temp = dynamic_cast<B &>(p);
		std::cout << "this is B" << std::endl;
		(void)temp;
	}
	catch (std::exception &e) {}

	try 
	{
		C &temp = dynamic_cast<C &>(p);
		std::cout << "this is C" << std::endl;
		(void)temp;
	}
	catch (std::exception &e) {}
}

int main() {

	std::srand(time(NULL));

	Base *one = generate();
	Base *two = generate();
	Base *three = generate();

	identify(*one);
	identify(one);
	identify(*two);
	identify(two);
	identify(*three);
	identify(three);

	delete one;
	delete two;
	delete three;
}