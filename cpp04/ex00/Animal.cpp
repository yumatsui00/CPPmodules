#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal constructor called" << std::endl;
}


Animal::Animal( const Animal &rhs ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=( const Animal &rhs ) {
	if (this != &rhs) {
		std::cout << "Animal assignation oprator called" << std::endl;
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	Animal::getType( void ) const {
	return this->_type;
}

void	Animal::makeSound( void ) const {
	std::cout << ">>> ANIMAL SOUND <<<" << std::endl;
	return ;
}
