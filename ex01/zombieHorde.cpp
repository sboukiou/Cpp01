#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *collection;

	if ( N == 0 )
		return (NULL);

	collection = new Zombie[N];
	if (collection == NULL)
		return (NULL);
	for (int i = 0 ; i < N; i += 1)
		collection[i].setName(name);

	return (collection);
}
