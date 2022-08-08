/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:58 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:59 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BEREAUCRAT_HPP
#define BEREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &old);
		Bureaucrat& operator= (const Bureaucrat &old);
		~Bureaucrat();

		std::string getName() const;
		int getGrage() const;

		void upgrade();
		void downgrade();

		void singForm(Form &form);

		class GradeTooHighException: public std::exception
		{
			const char *what() const throw() 
			{
				return "Grade Too High Exception";
			}
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw()
			{
				return "Grade Too Low Exception";
			}
		};
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &src);

#endif