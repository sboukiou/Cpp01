#include "./HumanB.hpp"
#include <iostream>


HumanB::HumanB(std::string var) {
	name = var;
}

void HumanB::setWeapon(Weapon& w) {
	weap = &w;
}

void HumanB::attack(void) {
	if (weap == NULL)
		return ;
	std::cout << name << " attacks with their " << (*weap).getType() << std::endl;
}
