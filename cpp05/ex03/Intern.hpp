#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(const Intern &old);
		Intern& operator= (const Intern &old);
		~Intern();

		Form *makeForm(std::string title, std::string target);
};

#endif