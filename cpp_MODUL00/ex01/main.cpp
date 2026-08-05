#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main()
{
	PhoneBook phoneBook;
	std::string command;

	std::cout << "Welcome to the PhoneBook application!:)" << std::endl;
	std::cout << "Useable commands are: ADD, SEARCH, EXIT" << std::endl;
	while(1)
	{
		std::cout << "Enter command: ";
		if(!(std::getline(std::cin, command)))
			break;
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
	}
	return 0;
}
