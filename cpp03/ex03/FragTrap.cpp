#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	this->_hitPoints = FRAGHP;
	this->_energyPoints = FRAGEP;
	this->_attackDamage = FRAGAD;
	std::cout << "FragTrap ["<< _name << "] constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap [" << _name << "] destructor called" << std::endl;
}

// void	FragTrap::attack( std::string const& target ) {
// 	if ( _energyPoints <= 0 ) {
// 		std::cout << "FragTrap [" << _name << "] is out of energy" << std::endl;
// 			return ;
// 	}
// 	std::cout	<< "FragTrap [" << _name
// 				<< "] attacks [" << target
// 				<< "], causing " << _attackDamage
// 				<< " points of damage!"
// 				<< std::endl;
// 	_energyPoints --;
// }

void	FragTrap::highFive( void ) {
	std::cout << "FragTrap [" << _name << "] >>>HIGH FIVE!<<<" << std::endl;
}