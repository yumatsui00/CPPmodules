#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point( void ) : _x(0), _y(0) {};
	Point( const float x, const float y ) : _x(x), _y(y) {};
	Point( const Point &rhs ) : _x(rhs._x), _y(rhs._y) {};
	~Point() {};

	Point&	operator=( const Point &rhs ) {
		if (this != &rhs) {
			( Fixed )this->_x = rhs.getX();
			( Fixed )this->_y = rhs.getY();
		}
		return *this;
	}

	Fixed	getX( void ) const {
		return this->_x;
	};
	Fixed	getY( void ) const {
		return this->_y;
	};
} ;

#endif