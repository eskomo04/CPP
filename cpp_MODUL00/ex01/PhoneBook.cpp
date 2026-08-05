#include "PhoneBook.hpp"
#include <iomanip>
#include <cctype>
#include <string>

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
void	print_truncatedStr(std::string str)
{
	if(str.length() > 10)
	{
		str = str.substr(0, 9) + ".";
	}
	std::cout << std::right << std::setw(10) << str;
}
void PhoneBook::searchContacts()
{
	if(_contactCount == 0)
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return ;
	}

	std::cout << std::right	<< std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << std::endl;

	for(int i = 0; i < _contactCount && i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		print_truncatedStr(_contacts[i].getFirstName());
		std::cout << "|";
		print_truncatedStr(_contacts[i].getLastName());
		std::cout << "|";
		print_truncatedStr(_contacts[i].getNickName());
		std::cout << std::endl;
	}
/////////////////////////////////////////
	std::string index;
	int i;

	i = 0;
	std::cout << "Which Contact-index to display? : ";
	std::getline(std::cin, index);
	if(index.length() == 1 && index[0] >= '0' && index[0] <= '7')
	{
		i = index[0] - '0';
		if(i < _contactCount)
		{
			std::cout << "First name: " << _contacts[i].getFirstName() << std::endl;
			std::cout << "Last name: " << _contacts[i].getLastName() << std::endl;
			std::cout << "Nickname: " << _contacts[i].getNickName() << std::endl;
			std::cout << "Phonenumber: " << _contacts[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << _contacts[i].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "Invalide Index!" << std::endl;
	}
	else
		std::cout << "Invalide Index!" << std::endl;
}
