#include "Cat.hpp"

Cat::Cat( void ) : AAnimal(){
	std::cout << "Cat costructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat &rhs ) : AAnimal( rhs ) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain();
	*(this->brain) = *(rhs.brain);
}

Cat::~Cat( void ) {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs) {
		std::cout << "Cat assignation oprator called" << std::endl;
		this->type = rhs.type;
		delete this->brain;
		this->brain = new Brain();
		*(this->brain) = *(rhs.brain);
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << ">>>😽MEOWMEOW😽<<<" << std::endl;
}
