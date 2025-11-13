#include "./Weapon.hpp"


Weapon::Weapon(std::string var): type(var) {
}

std::string&	Weapon::getType() {
	return (type);
}

void Weapon::setType(std::string var) {
	type = var;
}
