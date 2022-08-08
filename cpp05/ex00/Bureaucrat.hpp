/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:50 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:55:51 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BEREAUCRAT_HPP
#define BEREAUCRAT_HPP

#include <iostream>
#include <exception>

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