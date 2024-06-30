#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) {
	_name = name;
	_hitPoints = HITPOINT;
	_energyPoints = ENERGYPOINT;
	_attackDamage = ATTACKDAMAGE;
	std::cout << "ClapTrap ["<< _name << "] constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap ["<< _name << "] destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap [" << _name << "] is dead💀" << std::endl;
		return ;
	}
	if ( _energyPoints <= 0) {
		std::cout << "ClapTrap [" << _name << "] is out of energy" << std::endl;
		return ;
	}
	std::cout 	<< "ClapTrap [" << _name
				<< "] attacks [" << target
				<< "], causing " << _attackDamage
				<< " points of damage!" << std::endl;
	this->_energyPoints --;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap [" << _name << "] is dead💀" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout 	<< "ClapTrap [" << _name
				<< "] takes " << amount
				<< " points of damage!" << std::endl;
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap [" << _name << "] died💀" << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap [" << _name << "] is dead💀" << std::endl;
		return ;
	}
	if ( _energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is out of energy" << std::endl;
		return ;
	}
	std::cout 	<< "ClapTrap [" << _name
				<< "] repairs itself for " << amount
				<< " hit points!" << std::endl;
}
