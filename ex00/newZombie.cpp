#include "./Zombie.hpp"


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
