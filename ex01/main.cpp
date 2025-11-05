#include <iostream>
#include "./Zombie.hpp"



int main( void ) {

	Zombie *group = zombieHorde(9, "memberOfTheCrew");
	if (group == NULL)
		return (0);
	for (int i = 0; i < 9; i += 1)
		group[i].announce();
	delete [] group;
	return (0);
}
