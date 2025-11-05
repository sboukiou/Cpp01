#include <iostream>
#include "./Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string str) {
	name = str;
}

std::string Zombie::getName(void) const {
	return (name);
}

Zombie* newZombie( std::string name ) {
	Zombie *newZomb = new Zombie;
	newZomb->setName(name);
	return (newZomb);
}

void randomChump( std::string name )
{
	Zombie *RandomChump = newZombie(name);
	RandomChump->announce();
	delete RandomChump;
}
