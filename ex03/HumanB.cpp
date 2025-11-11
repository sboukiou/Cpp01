#include "./HumanB.hpp"
#include <iostream>


HumanB::HumanB(std::string name) {
	name = name;
}

void HumanB::setWeapon(Weapon w) {
	weap = w;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}
