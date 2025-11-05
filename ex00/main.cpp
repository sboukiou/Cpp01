#include <iostream>
#include "./Zombie.hpp"


int main( void ) {
	Zombie *newZomb = newZombie("Dias01");
	newZomb->announce();
	randomChump("agent-ugi");
	delete newZomb;
	return (0);
}
