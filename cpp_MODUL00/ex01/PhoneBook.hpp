#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private:
	Contact	_contacts[8];
	int		_contactCount;
public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void searchContacts();
};

#endif
