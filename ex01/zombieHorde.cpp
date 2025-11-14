#include "./Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *collection;

	if ( N == 0 ) {
		std::cerr << "Number given is Null, No zombies are created!\n";
		return (NULL);
	}

	collection = new Zombie[N];
	if (collection == NULL) {
		std::cerr << "[Error]: Failed to allocate the Zombie group!\n";
		return (NULL);
	}
	for (int i = 0 ; i < N; i += 1)
		collection[i].setName(name);

	return (collection);
}
