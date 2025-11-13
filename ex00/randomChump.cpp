#include <string>
#include "./Zombie.hpp"

void randomChump( std::string name )
{
	Zombie randChp = Zombie(name);
	randChp.announce();
}
