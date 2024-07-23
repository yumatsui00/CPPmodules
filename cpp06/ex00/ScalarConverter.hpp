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
private:
//!------------------------Constructors & Operator----------------------------
	ScalarConverter( void );
	~ScalarConverter( void );
	ScalarConverter( const ScalarConverter &src );
	ScalarConverter	&operator=( const ScalarConverter &rhs );
public:
//*---------------------------Member Function---------------------------------
	static void	convert( const std::string& input ) ;
} ;

#endif

//まず整数に変換、→チェックしていく