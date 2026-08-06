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
	void setName(std::string _name);
	void announce(void);
};

// Standalone function prototypes
Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
