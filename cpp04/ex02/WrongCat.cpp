#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(){
	std::cout << "WrongCat costructor called" << std::endl;
	this->type = "WrongCat";
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
		this->type = rhs.type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << ">>>🥴meowmeow?🥴<<<" << std::endl;
}
