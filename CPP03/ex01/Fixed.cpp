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

Fixed::Fixed( const int num ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNumber = num << _fractionalBits;
}
// 言ってしまえば、int 型*256

Fixed::Fixed( const float num ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNumber = roundf(num * (1 << _fractionalBits));
}
//float 型は、intとは異なるビット表記をしているので、こうすることでfloat型全体に２５６をかけて、それをint型に変換している（仮の値）
//ただ8個動かすだけだと、float型のままで、intの_fixedPointNumberに格納できない

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
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointNumber = raw;
}

int	Fixed::toInt( void ) const {
	return getRawBits() >> _fractionalBits;
}
//返すとき（出力するとき）は８ビット戻す（２５６で割って）出力

float	Fixed::toFloat( void ) const {
	return ( (float)getRawBits() / (1 << _fractionalBits));
}
//同じく、intで受け取ったものを256で割ってfloatがたにな

std::ostream& operator<<( std::ostream& o, Fixed const& f ) {
	o << f.toFloat();
	return o;
}
