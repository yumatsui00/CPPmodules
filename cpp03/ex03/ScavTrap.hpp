#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# define SCAVHP 100
# define SCAVEP 50
# define SCAVAD 20

class	ScavTrap : public ClapTrap {
protected:
	ScavTrap();

public:
	ScavTrap( std::string name );
	~ScavTrap();

	void	attack( std::string const& target );
	void	guardGate();
} ;

#endif