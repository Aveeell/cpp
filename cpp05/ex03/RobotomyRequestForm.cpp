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

	if((int)rand() % 2)
		std::cout << "Robotomy seccessed" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}