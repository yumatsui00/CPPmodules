#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <sstream>

#define ERROR 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

class ScalarConverter {
public:
//*---------------------------Member Function---------------------------------
	void	convert( const std::string& input ) const ;
//!------------------------Constructors & Operator----------------------------
	ScalarConverter( void ) {};
	~ScalarConverter( void ) {};
private:
	ScalarConverter( const ScalarConverter &src ) {
		(void)src;
	};
	ScalarConverter	&operator=( const ScalarConverter &rhs ) {
		(void)rhs;
	};
} ;

#endif

//まず整数に変換、→チェックしていく