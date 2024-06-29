#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
protected:
	std::string	_type;
public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &rhs );
	virtual ~WrongAnimal( void );
	virtual WrongAnimal	&operator=( const WrongAnimal &rhs );
	std::string	getType( void ) const;
	virtual void	makeSound( void ) const;
};

#endif