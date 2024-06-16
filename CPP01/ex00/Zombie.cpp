#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	std::cout << name;
	std::cout <<  " is created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << " is destroyed" << std::endl;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}