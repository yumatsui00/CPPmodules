#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class RobotmyRequestForm : public AForm {
private :
	RobotmyRequestForm( void );
	const std::string	_target;

public :
//!------------------------Constructors & Operator----------------------------
	RobotmyRequestForm( const std::string& target );
	RobotmyRequestForm( const RobotmyRequestForm &src ) ;
	RobotmyRequestForm	&operator=( const RobotmyRequestForm &rhs ) ;
	~RobotmyRequestForm( void );

//*---------------------------Member Function---------------------------------
	void	execute( const Bureaucrat& executor ) const;
} ;

#endif