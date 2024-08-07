#include "Cat.hpp"

Cat::Cat( void ) : Animal(){
	std::cout << "Cat costructor called" << std::endl;
	this->type = "Cat";
}


Cat::Cat( const Cat &rhs ) : Animal( rhs ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs) {
		std::cout << "Cat assignation oprator called" << std::endl;
		this->type = rhs.type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << ">>>😽MEOWMEOW😽<<<" << std::endl;
}
