#include "Zombie.hpp"
#include <string>

Zombie::Zombie() {
	std::cout << "unknown zombie appeared" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is destroyed" << std::endl;
}

void	Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}