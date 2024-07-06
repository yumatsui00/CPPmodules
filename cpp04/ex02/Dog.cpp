#include "Dog.hpp"

Dog::Dog( void ) : AAnimal(){
	std::cout << "Dog costructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}


Dog::Dog( const Dog &rhs ) : AAnimal( rhs ) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain();
	*(this->brain) = *(rhs.brain);
}

Dog::~Dog( void ) {
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &rhs ) {
	if (this != &rhs) {
		std::cout << "Dog assignation oprator called" << std::endl;
		this->type = rhs.type;
		delete this->brain;
		this->brain = new Brain();
		*(this->brain) = *(rhs.brain);
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << ">>>🐶BOWWOW🐶<<<" << std::endl;
}
