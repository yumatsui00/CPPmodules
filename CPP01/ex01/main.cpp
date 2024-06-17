#include "Zombie.hpp"

#define N 11
#define NAME "ZOMBIE_"

int	main( void ) {
	Zombie *biohazard = zombieHorde(NAME, N);
	for (int i = 0; i < N; i++) {
		biohazard[i].announce();
	}
	delete[] biohazard;
	return 0;
}