#include "RobotmyRequestForm.hpp"

//!------------------------Constructors & Operator----------------------------
RobotmyRequestForm::RobotmyRequestForm( void ) : AForm("RobotmyRequestForm", 72, 45) {};

RobotmyRequestForm::RobotmyRequestForm( const std::string& target ) : AForm("RobotmyRequestForm", 72, 45), _target(target) {};

RobotmyRequestForm::RobotmyRequestForm( const RobotmyRequestForm &src ) : AForm(src), _target(src._target) {};

RobotmyRequestForm& RobotmyRequestForm::operator=( const RobotmyRequestForm &rhs ) {
	return *this;
} ;

RobotmyRequestForm::~RobotmyRequestForm( void ) {};

//*---------------------------Member Function---------------------------------
void	RobotmyRequestForm::execute( const Bureaucrat& executor ) const {
	if ( executor.getIsSigned() == false )
		throw Form::NotSignedException();
	else if ( this->getGradeToExecute < executor.getGrade() )
		throw Form::GradeTooLowException();
	static int half;
	if (half % 2 == 0)
		std::cout << "Drrrrrrrrrrrrrrrrrr " << _target << " has been robotomized😄" << std::endl;
	else
		std::cout << "robotomized failed😢" << std::endl;
	half++;
};
