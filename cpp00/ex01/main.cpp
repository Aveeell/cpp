#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string str;

	while(str != "EXIT")
	{
		std::cout << "Enter command ADD | SERACH | EXIT" << std::endl;
		std::getline(std::cin, str);
		if(std::cin.eof())
			exit(1);
		if(str == "ADD")
			phoneBook.add();
		else if(str == "SEARCH")
			phoneBook.search();
		else if(str == "FILL")
			phoneBook.fill();
		else
			if(str != "EXIT")
				std::cout << "Wrong command, try again" << std::endl;
	}
	return 0;
}