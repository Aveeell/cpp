/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:46 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:56:47 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(const Intern &old);
		Intern& operator= (const Intern &old);
		~Intern();

		Form *makeForm(std::string title, std::string target);
};

#endif