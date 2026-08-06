#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie{

private:
	std::string name;

public:
	Zombie();
	~Zombie();
	setName(str::string _name);
	void announce(void);
};

#endif
