#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	std::cout << name;
	this->_name = name;
	std::cout <<  " is created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is dead" << std::endl;
}

void	Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}