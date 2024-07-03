#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	this->_hitPoints = SCAVHP;
	this->_energyPoints = SCAVEP;
	this->_attackDamage = SCAVAD;

	std::cout 	<< "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void	ScavTrap::attack( std::string const& target ) {
	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " is dead💀" << std::endl;
		return ;
	}
	if ( _energyPoints <= 0 ) {
		std::cout << "ScavTrap " << _name << " is out of energy" << std::endl;
			return ;
	}
	std::cout	<< "ScavTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!"
				<< std::endl;
	_energyPoints --;
}

void	ScavTrap::guardGate( void ) {
	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " is dead💀" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}