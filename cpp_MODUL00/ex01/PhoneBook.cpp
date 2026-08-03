#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	_contactCount = 0;
}
PhoneBook::~PhoneBook(){};

static int isOnlySpaces(const std::string &input)
{
	size_t i;
	i = 0;
	while (i < input.length())
	{
		if (!isspace(input[i]))
			return 1;
		i++;
	}
	return 0;
}

static std::string validateInput(const std::string fieldName)
{
	std::string input;
	while(1)
	{
		std::cout << "Enter " << fieldName << ": ";
		std::getline(std::cin, input);
		if (input.empty() || !isOnlySpaces(input))
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

	_contacts[_contactCount % 8].setFirstName(firstName);
	_contacts[_contactCount % 8].setLastName(lastName);
	_contacts[_contactCount % 8].setNickName(nickName);
	_contacts[_contactCount % 8].setPhoneNumber(phoneNumber);
	_contacts[_contactCount % 8].setDarkestSecret(darkestSecret);

	_contactCount++;
}

void PhoneBook::searchContacts()
{
	int i;

	i = 0;
	while(i < _contactCount && i < 8)
	{
		std::cout << _contacts[i].getFirstName() << std::endl;
		std::cout << _contacts[i].getLastName() << std::endl;
		std::cout << _contacts[i].getNickName() << std::endl;
		std::cout << _contacts[i].getPhoneNumber() << std::endl;
		std::cout << _contacts[i].getDarkestSecret() << std::endl << std::endl;
		i++;

	}
}
