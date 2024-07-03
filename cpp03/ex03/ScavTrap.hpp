#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# define SCAVHP 100
# define SCAVEP 50
# define SCAVAD 20

class	ScavTrap : virtual public ClapTrap {
protected:
	ScavTrap(){};

public:
	ScavTrap( std::string name );
	~ScavTrap();
	void	attack( std::string const& target );
	void	guardGate();


	ScavTrap( const ScavTrap &rhs ) : ClapTrap( rhs ) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = rhs;
	};

	ScavTrap	&operator=( const ScavTrap &rhs ) {
	if (this != &rhs) {
		std::cout << "ScavTrap assignation oprator called" << std::endl;
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = _attackDamage;
	}
	return (*this);
	};
} ;

#endif