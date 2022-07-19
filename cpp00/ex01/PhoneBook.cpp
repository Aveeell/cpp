#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook(){}

static void check_input(std::string str)
{
	while(str.empty())
	{
		std::cout << "Empty prompt" << std::endl;
		std::getline(std::cin, str);
	}
}

void PhoneBook::add()
{
	std::string str;
	static int i = 0;
	
	std::cout << i << std::endl;
	contacts[i].setIndex(i + 1);
	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	check_input(str);
	contacts[i].setFirstName(str);
	
	std::cout << "Enter last name:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setLastName(str);
	
	std::cout << "Enter nickname:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setNickname(str);
	
	std::cout << "Enter phone number:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setPhoneNumber(str);
	
	std::cout << "Enter darkest secret:" << std::endl;
	std::getline(std::cin, str);
	if(std::cin.eof())
		exit(1);
	contacts[i].setDarkestSecret(str);
	std::cout << std::endl;

	i++;
	if(i == 8)
		i = 0;
	else
	{
		if(i == 0)
			for(; contacts[i].getIndex() && i < 8;)
				i++;
	}
}

void PhoneBook::show(int i)
{
	std::cout << "index: " << contacts[i].getIndex() << std::endl;
	std::cout << "first name: " << contacts[i].getFisrstName() << std::endl;
	std::cout << "last name: " << contacts[i].getLastName() << std::endl;
	std::cout << "nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

static void print_str(std::string str)
{
	if(str.size() > 10)
		std::cout << std::setw(9) << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void PhoneBook::search()
{
	int index, max;
	std::string str;

	std::cout << "     index|";
	std::cout << " firstName|";
	std::cout << "  lastName|";
	std::cout << "  nickname|" << std::endl;
	for(int i = 1; i <= 44; i++)
	{
		if(i % 11 == 0 && i)
			std::cout << "|";
		else
			std::cout << "-";
	}
	std::cout << std::endl;
	for(int i = 0; contacts[i].getIndex(); i++)
	{
		std::cout << std::setw(10) << contacts[i].getIndex() << "|";
		str = contacts[i].getFisrstName();
		print_str(str);

		str = contacts[i].getLastName();
		print_str(str);

		str = contacts[i].getNickname();
		print_str(str);
		std::cout << std::endl;

		max = i + 1;
	}
	std::cout << "Enter index" << std::endl;
	std::getline(std::cin, str);
	index = atoi(str.c_str());
	while(index < 1 || index > max)
	{
		if(std::cin.eof())
			exit(1);
		std::cout << "Index out of range, try again" << std::endl;
		std::getline(std::cin, str);
		index = atoi(str.c_str());
	}
	show(index - 1);
}

void PhoneBook::fill()
{
	contacts[0].setIndex(1);
	contacts[1].setIndex(2);
	contacts[2].setIndex(3);
	contacts[3].setIndex(4);
	contacts[4].setIndex(5);
	contacts[5].setIndex(6);
	contacts[6].setIndex(7);
	contacts[7].setIndex(8);

	contacts[0].setFirstName("pavel");
	contacts[1].setFirstName("jimmie");
	contacts[2].setFirstName("dimasik");
	contacts[3].setFirstName("iluwa");
	contacts[4].setFirstName("pavel");
	contacts[5].setFirstName("jimmie");
	contacts[6].setFirstName("dimasik");
	contacts[7].setFirstName("iluwa");

	contacts[0].setLastName("gorbach");
	contacts[1].setLastName("errok");
	contacts[2].setLastName("garbil");
	contacts[3].setLastName("korotkivvvv");
	contacts[4].setLastName("gorbach");
	contacts[5].setLastName("errok");
	contacts[6].setLastName("garbil");
	contacts[7].setLastName("korotkivvvv");

	contacts[0].setNickname("aveeell");
	contacts[1].setNickname("jerrok");
	contacts[2].setNickname("ebaldak");
	contacts[3].setNickname("iluwa_eb");
	contacts[4].setNickname("aveeell");
	contacts[5].setNickname("jerrok");
	contacts[6].setNickname("ebaldak");
	contacts[7].setNickname("iluwa_eb");

	contacts[0].setPhoneNumber("1");
	contacts[1].setPhoneNumber("2");
	contacts[2].setPhoneNumber("3");
	contacts[3].setPhoneNumber("4");
	contacts[4].setPhoneNumber("1");
	contacts[5].setPhoneNumber("2");
	contacts[6].setPhoneNumber("3");
	contacts[7].setPhoneNumber("4");

	contacts[0].setDarkestSecret("bassist");
	contacts[1].setDarkestSecret("pavel");
	contacts[2].setDarkestSecret("pointer");
	contacts[3].setDarkestSecret("guitarist");
	contacts[4].setDarkestSecret("1");
	contacts[5].setDarkestSecret("2");
	contacts[6].setDarkestSecret("3");
	contacts[7].setDarkestSecret("4");
}