#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private :
	PresidentialPardonForm( void );
	const std::string	_target;

public :
//!------------------------Constructors & Operator----------------------------
	PresidentialPardonForm( const std::string& target );
	PresidentialPardonForm( const PresidentialPardonForm &src ) ;
	PresidentialPardonForm	&operator=( const PresidentialPardonForm &rhs ) ;
	~PresidentialPardonForm( void );

//*---------------------------Member Function---------------------------------
	void	execute( const Bureaucrat& executor ) const;
} ;

#endif