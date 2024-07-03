#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	this->_hitPoints = FRAGHP;
	this->_energyPoints = FRAGEP;
	this->_attackDamage = FRAGAD;
	std::cout << "FragTrap "<< _name << " constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void	FragTrap::highFive( void ) {
	if (_hitPoints <= 0) {
		std::cout << "FragTrap " << _name << " is dead💀" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " >>>HIGH FIVE!<<<" << std::endl;
}