#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {
private:
	std::vector<int>	_strage;
	unsigned int		_maxsize;
	Span( void );
public:
	Span( unsigned int n );
	~Span( void );
	Span ( Span &src );
	Span &operator=( Span &rhs );

	void			addNumber( int num );
	void			addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

	class FullStrageException : public std::exception {
		public:
			virtual const char* what() const throw(){ return "strage is full"; };
	} ;
} ;

#endif