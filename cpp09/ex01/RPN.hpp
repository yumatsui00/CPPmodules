#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <stack>

class RPN {
private:
	RPN( RPN &src );
	RPN&	operator=( RPN &rhs );
	std::stack<int>	_strage;
public:
	RPN( void );
	~RPN( void );

	void	calc( std::string str );
	class	SyntaxErrorException : public std::exception {
		public: virtual const char* what() const throw (){ return "syntax error"; }
	} ;
} ;

#endif