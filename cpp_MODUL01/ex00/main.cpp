#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1 = newZombie("Zombie1");
	randomChump("Zombie2");

	zombie1->announce();
	delete zombie1;
}
