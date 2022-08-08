/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:05 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:56:06 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat h("h", 4);
	Form first("first", 3, 1);
	Form second("second", 5, 1);
	Form third("third", 4, 1);

	std::cout << std::endl;

	h.singForm(first);
	std::cout << h << first << std::endl;
	h.singForm(second);
	std::cout << h << second << std::endl;
	h.singForm(third);
	std::cout << h << third << std::endl;
	return 0;
}