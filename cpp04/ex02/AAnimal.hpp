#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal {
protected:
	std::string	type;
public:
	AAnimal( void );
	AAnimal( const AAnimal &rhs );
	AAnimal	&operator=( const AAnimal &rhs );
	virtual ~AAnimal( void );

	std::string	getType( void ) const;
	void		setType( std::string type );
	virtual void	makeSound( void ) const = 0;
};

// 今回は、Animal class の基底ポインタに、派生クラスのインスタンスを割り当てるためvirutal の使用が必要？

#endif