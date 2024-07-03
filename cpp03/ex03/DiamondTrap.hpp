#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private :
	DiamondTrap( void ) : FragTrap(), ScavTrap() {};
	std::string _name;
public :
	DiamondTrap( std::string name );
	~DiamondTrap( void );
	void	whoAmI( void );


	DiamondTrap( const DiamondTrap &rhs ) : ClapTrap( rhs ), FragTrap( rhs ), ScavTrap( rhs ) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = rhs;
	};

	DiamondTrap	&operator=( const DiamondTrap &rhs ) {
	if (this != &rhs) {
		std::cout << "DiamondTrap assignation oprator called" << std::endl;
		this->_name = rhs._name;
		ClapTrap::_name = (this->_name + "_clap_name");
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = _attackDamage;
	}
	return (*this);
	};
};

#endif