#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class Intern {
public :
//!------------------------Constructors & Operator----------------------------
	Intern( void );
	Intern( const Intern &src ) ;
	Intern	&operator=( const Intern &rhs ) ;
	~Intern( void );

//*---------------------------Member Function---------------------------------
	AForm*	makeForm( std::string name, std::string target );
} ;

#endif