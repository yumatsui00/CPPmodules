#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "???";
}

AAnimal::AAnimal( const AAnimal &rhs ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &rhs ) {
	if (this != &rhs) {
		std::cout << "Animal assignation oprator called" << std::endl;
		this->type = rhs.type;
	}
	return (*this);
}

std::string	AAnimal::getType( void ) const {
	return this->type;
}

void AAnimal::setType(std::string type) {
	this->type = type;
}

void	AAnimal::makeSound( void ) const {
	std::cout << ">>>🐾ANIMAL SOUND🐾<<<" << std::endl;
	return ;
}
