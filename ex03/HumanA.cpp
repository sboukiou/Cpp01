#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <iostream>


HumanA::HumanA(std::string name, Weapon& weap): weap(weap) {
	name = name;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}
