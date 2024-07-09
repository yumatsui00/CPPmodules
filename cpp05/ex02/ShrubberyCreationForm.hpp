#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private :
	ShrubberyCreationForm( void );
	const std::string	_target;

public :
//!------------------------Constructors & Operator----------------------------
	ShrubberyCreationForm( const std::string& target );
	ShrubberyCreationForm( const ShrubberyCreationForm &src ) ;
	ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &rhs ) ;
	~ShrubberyCreationForm( void );

//*---------------------------Member Function---------------------------------
	void	execute( const Bureaucrat& executor ) const;
} ;

#endif