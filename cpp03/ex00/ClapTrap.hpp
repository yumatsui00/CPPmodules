#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define HITPOINT 10
# define ENERGYPOINT 10
# define ATTACKDAMAGE 0

class ClapTrap {
protected :
	ClapTrap() {};
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
public :
	ClapTrap( std::string Name ) ;
	~ClapTrap( void ) ;
	void	attack( const std::string& taarget );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );


	ClapTrap( const ClapTrap &rhs ) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = rhs;
	};

	ClapTrap	&operator=( const ClapTrap &rhs ) {
	if (this != &rhs) {
		std::cout << "ClapTrap assignation oprator called" << std::endl;
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
	};
} ;

#endif