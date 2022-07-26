/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:56 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/15 10:25:49 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


void subject()
{
	std::cout << "-----------subjects check-----------------" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
}

void myCheck()
{
	std::cout << "----------------my check----------------" << std::endl;
	Fixed a(1);
	Fixed b(2);
	Fixed c;

	const Fixed d(4);
	const Fixed e(6);

	std::cout << "a == " << a << "\nb == " << b << "\nc == " << c << std::endl << std::endl;
	std::cout << "const d == " << d << "\nconst e == " << e << std::endl << std::endl;
	c = a;
	std::cout << "OPERATOR= || c = a || c == " << c << std::endl << std::endl;

	std::cout << "OPERATOR== || a == b || " << (a == b) << std::endl;
	std::cout << "OPERATOR== || a == c || " << (a == c) << std::endl << std::endl;

	std::cout << "OPERATOR!= || a != b || " << (a != b) << std::endl;
	std::cout << "OPERATOR!= || a != c || " << (a != c) << std::endl << std::endl;

	std::cout << "OPERATOR< || a < b || " << (a < b) << std::endl;
	std::cout << "OPERATOR< || a < c || " << (a < c) << std::endl << std::endl;

	std::cout << "OPERATOR> || a > b || " << (a > b) << std::endl;
	std::cout << "OPERATOR> || b > c || " << (b > c) << std::endl << std::endl;

	std::cout << "OPERATOR<= || a <= b || " << (a <= b) << std::endl;
	std::cout << "OPERATOR<= || a <= c || " << (a <= c) << std::endl << std::endl;

	std::cout << "OPERATOR!= || a >= b || " << (a >= b) << std::endl;
	std::cout << "OPERATOR!= || a >= c || " << (a >= c) << std::endl << std::endl;

	std::cout << "OPERATOR+ || a + b || " << (a + b) << std::endl;
	std::cout << "OPERATOR+ || a + c || " << (a + c) << std::endl << std::endl;

	std::cout << "OPERATOR- || a - b || " << (a - b) << std::endl;
	std::cout << "OPERATOR- || a - c || " << (a - c) << std::endl << std::endl;

	std::cout << "OPERATOR* || a * b || " << (a * b) << std::endl;
	std::cout << "OPERATOR* || a * c || " << (a * c) << std::endl << std::endl;

	std::cout << "OPERATOR/ || a / b || " << (a / b) << std::endl;
	std::cout << "OPERATOR/ || a / c || " << (a / c) << std::endl << std::endl;

	std::cout << "OPERATOR++ || a++ || " << "a == " << a << " || a++ == " << a++ << " || a == " << a << std::endl;
	std::cout << "OPERATOR-- || a-- || " << "a == " << a << " || a-- == " << a-- << " || a == " << a << std::endl << std::endl;

	std::cout << "++OPERATOR || ++a || " << "a == " << a << " || ++a == " << ++a << std::endl;
	std::cout << "--OPERATOR || --a || " << "a == " << a << " || --a == " << --a << std::endl << std::endl;

	std::cout << "max || max(a, b) || " << Fixed::max(a, b) << std::endl;
	std::cout << "min || min(a, b) || " << Fixed::min(a, b) << std::endl << std::endl;

	std::cout << "const max || max(d, e) || " << Fixed::max(d, e) << std::endl;
	std::cout << "const min || min(d, e) || " << Fixed::min(d, e) << std::endl << std::endl;
}

int main()
{
	subject();
	myCheck();
	return 0;
}