/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:08 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:56:09 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("unnamed")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(const std::string str, int grade): name(str)
{
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &old)
{
	this->grade = old.grade;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat &old)
{
	if(this == &old)
		this->grade = old.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}


std::ostream& operator<< (std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrage() << std::endl;
	return out;
}


std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrage() const
{
	return this->grade;
}


void Bureaucrat::downgrade()
{
	if(this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::upgrade()
{
	if(this->grade > 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::singForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form;
	}
	catch(const std::exception &e)
	{
		std::cerr << this->name << " couldn't sign \"" << form.getTitle() << "\" because " << e.what() << std::endl;;
	}
}

void Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form;
	}
	catch(const std::exception &e)
	{
		std::cerr << this->name << " cannot execute \"" << form.getTitle() << "\" because " << e.what() << std::endl;;
	}
}
