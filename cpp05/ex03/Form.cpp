/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:40 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:56:41 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): title("untitled"), gradeToSign(150), gradeToExecute(150)
{
	isSigned = false;
}

Form::Form(const std::string title, int toSign, int toExecute): title(title), \
								gradeToSign(toSign),gradeToExecute(toExecute)
{
	isSigned = false;
}

Form::Form(const Form &old): title(old.title), gradeToSign(old.gradeToSign), \
											gradeToExecute(old.gradeToExecute)
{
	this->isSigned = old.isSigned;
}

Form& Form::operator= (const Form &old)
{
	if(this != &old)
		this->isSigned = old.isSigned;
	return *this;
}

Form::~Form() {}


std::ostream& operator<< (std::ostream &out, const Form &src)
{
	std::string isSigned = "false";
	if(src.formIsIsgned())
		isSigned = "true";
	out << "\"" << src.getTitle() << "\" | isSing: " << isSigned << " | toSign: ";
	out << src.getToSign() << " | toExecute: " << src.getToExecute() << std::endl;
	return out;
}


std::string Form::getTitle() const
{
	return this->title;
}

int Form::getToSign() const
{
	return this->gradeToSign;
}

int Form::getToExecute() const
{
	return this->gradeToExecute;
}

bool Form::formIsIsgned() const
{
	return this->isSigned;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrage() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}

void Form::beExecuted(const Bureaucrat &bureaucrat) const
{
	if(!this->formIsIsgned())
		throw Form::NotSigned();
	if(bureaucrat.getGrage() > this->gradeToExecute)
		throw Form::GradeTooLowException();
}

void Form::execute(const Bureaucrat &executor) const
{
	(void)executor;
	return ;
}

std::string Form::getTitle()
{
	return this->title;
}