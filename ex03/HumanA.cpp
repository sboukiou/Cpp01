#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <iostream>


HumanA::HumanA(std::string var, Weapon& weap): weap(weap) {
	name = var;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}
