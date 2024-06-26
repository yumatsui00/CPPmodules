#include "Zombie.hpp"

int	main( void ) {
	std::string	name;

	Zombie	*heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;
	randomChump("StackZombie");
}