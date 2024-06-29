#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout 	<< "ScavTrap [" << _name << "] constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap [" << _name << "] destructor called" << std::endl;
}

void	ScavTrap::attack( std::string const& target ) {
	if ( _energyPoints <= 0 ) {
		std::cout << "ScavTrap [" << _name << "] is out of energy" << std::endl;
			return ;
	}
	std::cout	<< "ScavTrap [" << _name
				<< "] attacks [" << target
				<< "], causing " << _attackDamage
				<< " points of damage!"
				<< std::endl;
	_energyPoints --;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap [" << _name << "] is now in Gate keeper mode" << std::endl;
}