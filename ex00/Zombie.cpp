#include <iostream>
#include "./Zombie.hpp"

Zombie::Zombie(std:: string var) {
	name = var;
	std::cout << "Zombie " << name << "is created\n";
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << "is destroyed\n";
}

void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string str) {
	name = str;
}

std::string Zombie::getName(void) const {
	return (name);
}
