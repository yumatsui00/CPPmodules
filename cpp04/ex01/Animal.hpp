#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal {
protected:
	std::string	type;
public:
	Animal( void );
	Animal( const Animal &rhs );
	Animal	&operator=( const Animal &rhs );
	virtual ~Animal( void );

	std::string	getType( void ) const;
	void		setType( std::string type );
	virtual void	makeSound( void ) const;
};

// 今回は、Animal class の基底ポインタに、派生クラスのインスタンスを割り当てるためvirutal の使用が必要？

#endif