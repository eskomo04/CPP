#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	_contactCount = 0;
}
PhoneBook::~PhoneBook(){};

void PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);

	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickName);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);

	_contacts[_contactCount % 4].setFirstName(firstName);
	_contacts[_contactCount % 4].setLastName(lastName);
	_contacts[_contactCount % 4].setNickName(nickName);
	_contacts[_contactCount % 4].setPhoneNumber(phoneNumber);
	_contacts[_contactCount % 4].setDarkestSecret(darkestSecret);

	_contactCount++;
}

void PhoneBook::searchContacts()
{
	int i;

	i = 0;
	while(i < _contactCount && i < 4)
	{
		std::cout << _contacts[i].getFirstName() << std::endl;
		std::cout << _contacts[i].getLastName() << std::endl;
		std::cout << _contacts[i].getNickName() << std::endl;
		std::cout << _contacts[i].getPhoneNumber() << std::endl;
		std::cout << _contacts[i].getDarkestSecret() << std::endl << std::endl;
		i++;

	}
}
