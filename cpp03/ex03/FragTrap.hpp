#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FRAGHP 100
# define FRAGEP 100
# define FRAGAD 30

class FragTrap : virtual public ClapTrap {
protected :
	FragTrap(){};
public :
	FragTrap( std::string name );
	~FragTrap();
	void	highFive( void );


	FragTrap( const FragTrap &rhs ) : ClapTrap( rhs ) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = rhs;
	};

	FragTrap	&operator=( const FragTrap &rhs ) {
	if (this != &rhs) {
		std::cout << "FragTrap assignation oprator called" << std::endl;
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = _attackDamage;
	}
	return (*this);
	};
} ;

#endif