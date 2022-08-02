#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string title;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		Form();
		Form(const std::string title, int toSign, int toExecute);
		Form(const Form &old);
		Form& operator= (const Form &old);
		~Form();

		void beSigned(Bureaucrat &bureaucrat);

		bool formIsIsgned() const;
		std::string getTitle() const;
		int getToSign() const;
		int getToExecute() const;

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
};

std::ostream& operator<< (std::ostream &out, const Form &src);

#endif