#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("1");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("DeBuG");
	harl.complain("i n f o");
	return (0);
}