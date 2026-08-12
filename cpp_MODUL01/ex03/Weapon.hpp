#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	~Weapon();
	void setType(std::string _type);
	const std::string &getType();
};

#endif
