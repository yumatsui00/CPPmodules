#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <cstdlib>
# include <stdint.h>

class Data {
public:
//!------------------------Constructors & Operator----------------------------
	Data() : _str( "hello world" ) {};
	~Data() {};
	Data( std::string str ) : _str(str) {};
	Data( Data& src ) : _str( src.getStr() ) {};
	Data	operator=( Data& rhs ) {
		if (this != &rhs)
			this->_str = rhs.getStr();
		return *this;
	} ;
//*---------------------------Member Function---------------------------------
	std::string	getStr() const {
		return _str;
	};
	void		setStr( std::string str ) {
		_str = str;
	};
private:
	std::string	_str;

} ;

#endif