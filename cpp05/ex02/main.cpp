#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat h("h", 4);
	Form first("first", 3, 1);
	Form second("second", 5, 1);
	Form third("third", 4, 1);

	std::cout << std::endl;

	h.singForm(first);
	std::cout << h << first << std::endl;
	h.singForm(second);
	std::cout << h << second << std::endl;
	h.singForm(third);
	std::cout << h << third << std::endl;
	return 0;
}