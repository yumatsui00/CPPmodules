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
} ;

#endif