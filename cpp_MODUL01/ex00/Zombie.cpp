#include "Zombie.hpp"

Zombie::Zombie(){
	name = "";
}
Zombie::~Zombie(){
	std::cout << name << " died!" << std::endl;
}

void Zombie::setName(std::string _name)
{
	name = _name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
