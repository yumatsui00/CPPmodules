#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template < typename T > //Tが方であることを明示
void	swap( T& a, T&b ) {
	T tmp = a;
	a = b;
	b = tmp;
} ;

template < typename T >
T	min( T& a, T& b ) {
	return (a > b ? b : a);
} ;

template < typename T >
T	max( T& a, T& b ) {
	return (a > b ? a : b);
}

#endif