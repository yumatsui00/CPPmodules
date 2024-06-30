#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FRAGHP 100
# define FRAGEP 100
# define FRAGAD 30

class FragTrap : public ClapTrap {
private:
	FragTrap();
public :
	FragTrap( std::string name );
	~FragTrap();

	void	highFive( void );
} ;

#endif