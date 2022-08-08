/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:42 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:56:43 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		const std::string title;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		Form();
		Form(const std::string title, int toSign, int toExecute);
		Form(const Form &old);
		Form& operator= (const Form &old);
		virtual ~Form();

		void beSigned(Bureaucrat &bureaucrat);
		void beExecuted(const Bureaucrat &bureaucrat) const;

		bool formIsIsgned() const;
		std::string getTitle() const;
		int getToSign() const;
		int getToExecute() const;
		std::string getTitle();

		virtual void execute(const Bureaucrat &executor) const;

		class GradeTooHighException: public std::exception
		{
			const char *what() const throw() 
			{
				return "Form::Grade Too High Exception";
			}
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw()
			{
				return "Form::Grade Too Low Exception";
			}
		};
		class NotSigned: public std::exception
		{
			const char *what() const throw()
			{
				return "Form is not signed";
			}
		};
};

std::ostream& operator<< (std::ostream &out, const Form &src);

#endif