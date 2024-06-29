#include "Dog.hpp"

Dog::Dog( void ) : Animal(){
	std::cout << "Dog costructor called" << std::endl;
	this->_type = "Dog";
}


Dog::Dog( const Dog &rhs ) : Animal( rhs ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &rhs ) {
	if (this != &rhs) {
		std::cout << "Dog assignation oprator called" << std::endl;
		this->_type = rhs._type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << ">>>BOWWOW<<<" << std::endl;
}
