#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"

class Dog : public AAnimal {
private:
	Brain* brain;
public:
	Dog( void );
	Dog( const Dog &rhs );
	~Dog( void );

	Dog	&operator=( const Dog &rhs );

	void	makeSound( void ) const;
};


#endif