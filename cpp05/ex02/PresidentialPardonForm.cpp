#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("untitled", 25, 5)
{
	isSigned = false;
	target = "untitled_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5)
{
	isSigned = false;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old): Form(old.title, 25, 5)
{
	this->isSigned = old.isSigned;
	this->target = old.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm &old)
{
	if(this != &old)
	{
		this->isSigned = old.isSigned;
		this->target = old.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->Form::beExecuted(executor);
	std::cout << "\"" << this->target << "\" has been pardoned by Zaphod Beeblebrox" << std::endl;
}