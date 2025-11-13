#include "Harl.hpp"
#include <iostream>

static bool	isLevelValid(std::string level) {
	if (level == "DEBUG")
		return (true);
	if (level == "INFO")
		return (true);
	if (level == "WARNING")
		return (true);
	if (level == "ERROR")
		return (true);
	return (false);
}

int main ( int ac, char *av[] ) {

	std::string level;
	Harl		harl;

	if (ac != 2) {
		std::cerr << "[Error]: Number of agruments given\
			is wrong\n";
		return (1);
	}
	level = av[1];
	if (isLevelValid(level) == false) {
		std::cerr << "[Erro]: Invalid level given !\n";
		return (1);
	}

	harl.complain(level);
	return (0);
}
