#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	_contactCount = 0;
}
PhoneBook::~PhoneBook(){};

static std::string validateInput(const std::string fieldName)
{
	std::string input;
	while(1)
	{
		std::cout << "Enter " << fieldName << ": ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << fieldName << " cannot be empty. Please try again." << std::endl;
		}
		else
			return input;
	}
}

void PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	firstName = validateInput("firstname");
	lastName = validateInput("lastname");
	nickName = validateInput("nickname");
	phoneNumber = validateInput("phone number");
	darkestSecret = validateInput("darkest secret");

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
