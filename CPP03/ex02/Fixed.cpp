#include "Fixed.hpp"

Fixed::Fixed( void ) {
	// std::cout << "Default constructor called" << std::endl;
	this->_fixedPointNumber = 0;
}

Fixed::Fixed( const Fixed &rhs ) {
	// std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(rhs.getRawBits());
}

Fixed::Fixed( const int num ) {
	// std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNumber = num << _fractionalBits;
}

Fixed::Fixed( const float num ) {
	// std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNumber = roundf(num * (1 << _fractionalBits));
}

Fixed&	Fixed::operator=( const Fixed &rhs ) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointNumber = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointNumber = raw;
}

int	Fixed::toInt( void ) const {
	return getRawBits() >> _fractionalBits;
}

float	Fixed::toFloat( void ) const {
	return ( (float)getRawBits() / (1 << _fractionalBits));
}

std::ostream& operator<<( std::ostream& o, Fixed const& f ) {
	o << f.toFloat();
	return o;
}

bool	Fixed::operator>( const Fixed &rhs ) const {
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<( const Fixed &rhs ) const {
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=( const Fixed &rhs ) const {
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=( const Fixed &rhs ) const {
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==( const Fixed &rhs ) const {
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=( const Fixed &rhs ) const {
	return this->getRawBits() != rhs.getRawBits();
}

Fixed	Fixed::operator+( const Fixed &rhs ) const {
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &rhs ) const {
	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &rhs ) const {
	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &rhs ) const {
	return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed&	Fixed::operator++( void ) {
	++this->_fixedPointNumber;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	ret( *this );
	ret._fixedPointNumber = this->_fixedPointNumber++;
	return ret;
}

Fixed&	Fixed::operator--( void ) {
	--this->_fixedPointNumber;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	Fixed	ret( *this );
	ret._fixedPointNumber = this->_fixedPointNumber--;
	return ret;
}

Fixed& Fixed::min( Fixed &lhs, Fixed &rhs ) {
	if ( lhs.getRawBits() < rhs.getRawBits() )
		return lhs;
	return rhs;
}

const Fixed&	Fixed::min( const Fixed &lhs, const Fixed &rhs ) {
	if ( lhs.getRawBits() < rhs.getRawBits() )
		return lhs;
	return rhs;
}

Fixed& Fixed::max( Fixed &lhs, Fixed &rhs ) {
	if ( lhs.getRawBits() > rhs.getRawBits() )
		return lhs;
	return rhs;
}

const Fixed&	Fixed::max( const Fixed &lhs, const Fixed &rhs ) {
	if ( lhs.getRawBits() > rhs.getRawBits() )
		return lhs;
	return rhs;
}
