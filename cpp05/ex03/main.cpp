/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:48 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 15:06:54 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat senior("senior", 1);
	Intern intern;

	std::cout << std::endl;
	Form *shrubbery(intern.makeForm("shrubbery creation", "shrubbery"));
	Form *robotomy(intern.makeForm("rObOtOmY REQUest", "robotomy"));
	Form *pardon(intern.makeForm("PRESIDENTIAL PARDON", "pardon"));
	Form *invalid;

	invalid = intern.makeForm("invalid type", "invalid");
	std::cout << std::endl;

	std::cout << "-----------------shrubbery-----------------" << std::endl;
	senior.singForm(*shrubbery);
	senior.executeForm(*shrubbery);
	std::cout << std::endl;

	std::cout << "-----------------robotomy-----------------" << std::endl;
	senior.singForm(*robotomy);
	senior.executeForm(*robotomy);
	std::cout << std::endl;

	std::cout << "-----------------pardon-----------------" << std::endl;
	senior.singForm(*pardon);
	senior.executeForm(*pardon);

	delete shrubbery;
	delete robotomy;
	delete pardon;
	return 0;
}