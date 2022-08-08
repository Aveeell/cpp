/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:55 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:56:56 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("untitled", 72, 45)
{
	isSigned = false;
	target = "untitled_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45)
{
	isSigned = false;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old): Form(old.title, 72, 45)
{
	this->isSigned = old.isSigned;
	this->target = old.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm &old)
{
	if(this != &old)
	{
		this->isSigned = old.isSigned;
		this->target = old.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->Form::beExecuted(executor);
	std::cout << "SOME DRILLING NOISES" << std::endl;

	srand(time(0));
	if((int)rand() % 2)
		std::cout << "Robotomy successed" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}