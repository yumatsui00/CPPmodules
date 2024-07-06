#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &rhs );
	virtual ~WrongAnimal( void );

	virtual WrongAnimal	&operator=( const WrongAnimal &rhs );

	std::string	getType( void ) const;
	void		setType( std::string );
	void		makeSound( void ) const;
};

#endif