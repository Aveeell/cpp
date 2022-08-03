#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &old);
		ShrubberyCreationForm& operator= (const ShrubberyCreationForm &old);
		virtual ~ShrubberyCreationForm();

		virtual void execute(const Bureaucrat &executor) const;
};

#endif