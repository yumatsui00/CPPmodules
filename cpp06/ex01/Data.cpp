#include "Data.hpp"

//!------------------------Constructors & Operator----------------------------
Data::Data() : _str( "hello world" ) {};
Data::~Data() {};
Data::Data( std::string str ) : _str(str) {};
Data::Data( Data& src ) : _str( src.getStr() ) {};
Data	Data::operator=( Data& rhs ) {
		if (this != &rhs)
			this->_str = rhs.getStr();
		return *this;
} ;

//*---------------------------Member Function---------------------------------
std::string	Data::getStr() const {
		return _str;
};

void		Data::setStr( std::string str ) {
		_str = str;
	};