#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "Wrong Animal costructor called" << std::endl;
	this->type = "???";
}


WrongAnimal::WrongAnimal( const WrongAnimal &rhs ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &rhs ) {
	if (this != &rhs) {
		std::cout << "WrongAnimal assignation oprator called" << std::endl;
		this->type = rhs.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType( void ) const {
	return this->type;
}

void	WrongAnimal::setType( std::string type ) {
	this->type = type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << ">>>🌚WRONGANIMAL SOUND🌚<<<" << std::endl;
	return ;
}
