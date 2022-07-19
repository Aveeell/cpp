#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int index;
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void fill();
		void show(int i);
};

#endif