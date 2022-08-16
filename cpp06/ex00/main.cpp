/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:32:26 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/16 13:56:49 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>

void	toChar(char c)
{
	std::cout << "*char: '" << c << "'" <<std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void toInt(int input, int flag)
{
	char res = 0;
	if (isprint(input))
		res = input;
	if (!res)
		std::cout << "char: non displayable" << std::endl; 
	else
		std::cout << "char: '" << res << "'" << std::endl;
	if (flag)
		std::cout << "*int: out of range" << std::endl;
	else
		std::cout << "*int: " << input << std::endl;
	std::cout << "float: " << static_cast<float>(input) << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
}

void toFloat(float input)
{
	char res = 0;
	if (isprint(input))
		res = input;
	if (!res)
		std::cout << "char: non displayable" << std::endl; 
	else
		std::cout << "char: '" << res << "'" << std::endl;
	if (input < INT_MIN || input > INT_MAX)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "*float: " << input << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
}

void toDouble(double input)
{
	char res = 0;
	if (isprint(input))
		res = input;
	if (!res)
		std::cout << "char: non displayable" << std::endl; 
	else
		std::cout << "char: '" << res << "'" << std::endl;
	if (input < INT_MIN || input > INT_MAX)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << static_cast<float>(input) << std::endl;
	std::cout << "*double: " << input << std::endl;
}

void toPseudoLiteral(std::string input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (!input.compare("nan") || !input.compare("nanf"))
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (!input.compare("inf") || !input.compare("inff") || \
			!input.compare("+inf") || !input.compare("+inff"))
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (!input.compare("-inf") || !input.compare("-inff"))
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "try ./convert <value>" << std::endl;
	else
	{
		std::string input(argv[1]);
		size_t check = std::string::npos;
		if (!input.compare("nan") || !input.compare("nanf") || \
			!input.compare("-inf") || !input.compare("-inff") || \
			!input.compare("+inf") || !input.compare("+inff") || \
			!input.compare("inf") || !input.compare("inff"))
			toPseudoLiteral(input);
		else if (input.size() == 1 && !isdigit(input[0]))
			toChar(input[0]);
		else if (input.find('.') == check && (isdigit(input[0]) || isdigit(input[1])))
		{
			try
			{
				stoi(input);
			}
			catch(const std::exception& e)
			{
				toInt(stod(input), 1);
				return 0;
			}
			toInt(stoi(input), 0);
		}
		else if (input.back() == 'f' && input.find('.') != check && isdigit(input[input.find('.') + 1]))
			toFloat(stof(input));
		else if (input.find('.') != check && isdigit(input[input.find('.') + 1]))
			toDouble(stod(input));
		else
			std::cout << "invalid input" << std::endl;
	}
	return 0;
}