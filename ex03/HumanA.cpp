#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <iostream>


HumanA::HumanA(std::string name, Weapon weap) {
	name = name;
	weap = weap;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}
