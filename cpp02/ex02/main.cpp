/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:56 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 13:02:25 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// 	std::cout << std::endl << std::endl << std::endl;
// 	Fixed		e;
// 	Fixed		f(10);
// 	Fixed		g(2.2f);
// 	std::cout << "f is " << f.toFloat() << " as float" << std::endl;
// 	std::cout << "f is " << g.toFloat() << " as float" << std::endl;
// 	std::cout << "g is " << f.toInt() << " as integer" << std::endl;
// 	std::cout << "g is " << g.toInt() << " as integer" << std::endl;
// 	e = g + f;
// 	std::cout << std::endl << std::endl << std::endl;
// 	std::cout << "e is " << e.toFloat() << " as float" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

// 	e = e + f;
// 	std::cout << std::endl << std::endl << std::endl;
// 	std::cout << "e is " << e.toFloat() << " as float" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl;


// 	e = e - f;
// 	std::cout << std::endl << std::endl << std::endl;
// 	std::cout << "e is " << e.toFloat() << " as float" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

// 	e = f * f;
// 	std::cout << std::endl << std::endl << std::endl;
// 	std::cout << "e is " << e.toFloat() << " as float" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

// 	e = f / f;
// 	std::cout << std::endl << std::endl << std::endl;
// 	std::cout << "e is " << e.toFloat() << " as float" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

// 	std::cout << "10 > 2 = " << (f > g) << std::endl;
// 	std::cout << "2 > 10 = " << (g > f) << std::endl;

// 	std::cout << "10 < 2 = " << (f < g) << std::endl;
// 	std::cout << "2 < 10 = " << (g < f) << std::endl;

// 	std::cout << "10 >= 2 = " << (f >= g) << std::endl;
// 	std::cout << "2 >= 10 = " << (g >= f) << std::endl;

// 	std::cout << "2 >= 10 = " << (g >= f) << std::endl;
// 	std::cout << "2 <= 10 = " << (g <= f) << std::endl;

// 	std::cout << "10 == 2 = " << (f == g) << std::endl;
// 	std::cout << "10 == 2 = " << (f == g) << std::endl;
// 	std::cout << "10 == 10 = " << (f == f) << std::endl;

// 	std::cout << "10 != 2 = " << (f == g) << std::endl;
// 	std::cout << "10 != 2 = " << (f == g) << std::endl;
// 	std::cout << "10 != 10 = " << (f == f) << std::endl;

// 	Fixed	w(42.42f);
// 	std::cout << "w = " << w.toFloat() << std::endl;
// 	std::cout << "w = " << w.toInt() << std::endl;
// 	++w;
// 	std::cout << "w++ = " << w.toFloat() << std::endl;
// 	std::cout << "w++ = " << w.toInt() << std::endl;
// 	++w;
// 	std::cout << "w++ = " << w.toFloat() << std::endl;
// 	std::cout << "w++ = " << w.toInt() << std::endl;
// 	w++;
// 	std::cout << "w++ = " << w.toFloat() << std::endl;
// 	std::cout << "w++ = " << w.toInt() << std::endl;
// 	std::cout << w << std::endl;
// 	std::cout << w++ << std::endl;
// 	std::cout << w << std::endl;
// 	std::cout << ++w << std::endl;
// 	std::cout << w << std::endl;
// 	std::cout << "w++ = " << w.toFloat() << std::endl;
// 	std::cout << "w++ = " << w.toInt() << std::endl;

// 	e = e.min(f, g);
// 	std::cout << "min " << f << " vs " << g << " = " << e << std::endl;
// 	e = e.max(f, g);
// 	std::cout << "max " << f << " vs " << g << " = " << e << std::endl;
	
// 	const Fixed	aa(1);
// 	const Fixed	bb(3.141f);
// 	const Fixed cc = cc.min(aa, bb);
// 	std::cout << "min " << aa << " vs " << bb << " = " << cc << std::endl;
// 	const Fixed dd = dd.max(aa, bb);
// 	std::cout << "max " << aa << " vs " << bb << " = " << dd << std::endl;
// 	return (0);
// }

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