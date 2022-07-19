#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact(){}

int Contact::getIndex()
{
	return this->index;
}

std::string Contact::getFisrstName()
{
	return this->firstName;
}

std::string Contact::getLastName()
{
	return this->lastName;
}

std::string Contact::getNickname()
{
	return this->nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return this->darkestSecret;
}

void Contact::setIndex(int index)
{
	this->index = index;
}

void Contact::setFirstName(std::string str)
{
	this->firstName = str;
}

void Contact::setLastName(std::string str)
{
	this->lastName = str;
}

void Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
}