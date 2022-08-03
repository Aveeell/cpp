#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &old);
		PresidentialPardonForm& operator= (const PresidentialPardonForm &old);
		virtual ~PresidentialPardonForm();

		virtual void execute(const Bureaucrat &executor) const;
};

#endif