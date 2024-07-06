#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"

class Cat : public AAnimal {
private:
	Brain* brain;
public:
	Cat( void );
	Cat( const Cat &rhs );
	~Cat( void );

	Cat	&operator=( const Cat &rhs );

	void	makeSound( void ) const;
};

#endif