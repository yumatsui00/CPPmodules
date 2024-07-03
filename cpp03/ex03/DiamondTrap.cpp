#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap( name + "_clap_name"), FragTrap( name ), ScavTrap( name ) {
		this->_name = name;
		this->_hitPoints = FRAGHP;
		this->_energyPoints = SCAVEP;
		this->_attackDamage = FRAGAD;

		std::cout << "DiamondTrap "<< _name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
		std::cout << "DiamondTrap "<< _name << " destructor called" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "I am ..." << std::endl;
	std::cout << "    DiamondTrap: " << _name << std::endl;
	std::cout << "    ClapTrap   : " << ClapTrap::_name << std::endl;
}