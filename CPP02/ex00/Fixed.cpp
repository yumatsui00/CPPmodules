#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointNumber = 0;
}

Fixed::Fixed( const Fixed &rhs ) {
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	//*this = rhs, just in case
}

Fixed&	Fixed::operator=( const Fixed &rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointNumber = rhs.getRawBits();
	return *this;
	//*this = lfs, just in case
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getWawBits member function called" << std::endl;
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointNumber = raw;
}
