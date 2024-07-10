#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private :
	RobotomyRequestForm( void );
	const std::string	_target;

public :
//!------------------------Constructors & Operator----------------------------
	RobotomyRequestForm( const std::string& target );
	RobotomyRequestForm( const RobotomyRequestForm &src ) ;
	RobotomyRequestForm	&operator=( const RobotomyRequestForm &rhs ) ;
	~RobotomyRequestForm( void );

//*---------------------------Member Function---------------------------------
	void	execute( const Bureaucrat& executor ) const;
} ;

#endif