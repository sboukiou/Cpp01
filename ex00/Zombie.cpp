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
