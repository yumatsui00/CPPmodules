#include "Zombie.hpp"

Zombie	*zombieHorde( std::string name, int N) {
	if (N <= 0)
		return NULL;
	Zombie	*biohazard = new Zombie[N];
	for (int i = 0; i < N; i++) {
		biohazard[i].setName(name + std::to_string(i));
	}
	return biohazard;
}