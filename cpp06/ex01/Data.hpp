#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <cstdlib>
# include <stdint.h>

class Data {
public:
//!------------------------Constructors & Operator----------------------------
	Data();
	~Data();
	Data( std::string str );
	Data( Data& src );
	Data	operator=( Data& rhs );
//*---------------------------Member Function---------------------------------
	std::string	getStr() const;
	void		setStr( std::string str ) ;
private:
	std::string	_str;

} ;

#endif