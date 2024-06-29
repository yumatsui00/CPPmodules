#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(){
	std::cout << "WrongCat costructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &rhs ) : WrongAnimal( rhs ) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs ) {
	if (this != &rhs) {
		std::cout << "WrongCat assignation oprator called" << std::endl;
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << ">>>MEOW<<<" << std::endl;
}
