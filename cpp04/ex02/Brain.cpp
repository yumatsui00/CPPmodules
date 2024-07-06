#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain costructor called" << std::endl;
}


Brain::Brain( const Brain &rhs ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
}


Brain &Brain::operator=( const Brain &rhs ) {
	if (this != &rhs) {
		std::cout << "Brain assignation oprator called" << std::endl;
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}