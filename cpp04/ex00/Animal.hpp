#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
protected:
	std::string	_type;
public:
	Animal( void );
	Animal( const Animal &rhs );
	virtual ~Animal( void );
	virtual Animal	&operator=( const Animal &rhs );
	std::string	getType( void ) const;
	virtual void	makeSound( void ) const;
};

#endif