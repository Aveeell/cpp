/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:32:26 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/15 13:28:55 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

void convert(char *str)
{
	if(!strcmp(str, "+inf") || !strcmp(str, "+inff"))
	{
		std::cout << "char: not dispayable" << std::endl;
		std::cout << "int: not dispayable" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if(!strcmp(str, "-inf") || !strcmp(str, "-inff"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if(!strcmp(str, "nan") || !strcmp(str, "nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else
	{
		if(atoi(str) >= 32 && atoi(str) <= 126)
			std::cout << "char: " << (char)atoi(str) << std::endl;
		else if(atoi(str) < 0 || atoi(str) > 127)
			std::cout << "char: out of range" << std::endl;
		else
			std::cout << "char: not dispayable" << std::endl;
		if(atoi(str) <= 2147483647 && atoi(str) >= -2147483648)
			std::cout << "int: out of range" << std::endl;
		else
			std::cout << "int: " << atoi(str) << std::endl;
		std::cout << "float: " << atof(str) << "f" << std::endl;
		std::cout << "double: " << (double)atof(str) << std::endl;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout << "try ./convert <value>" << std::endl;
	else
		convert(argv[1]);
	return 0;
}