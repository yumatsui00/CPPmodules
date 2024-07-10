#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

//!------------------------Constructors & Operator----------------------------
RobotmyRequestForm::RobotmyRequestForm( void ) : AForm("RobotmyRequestForm", 72, 45) {};

RobotmyRequestForm::RobotmyRequestForm( const std::string& target ) : AForm("RobotmyRequestForm", 72, 45), _target(target) {};

RobotmyRequestForm::RobotmyRequestForm( const RobotmyRequestForm &src ) : AForm(src), _target(src._target) {};

RobotmyRequestForm& RobotmyRequestForm::operator=( const RobotmyRequestForm &rhs ) {
	(void)rhs;
	return *this;
} ;

RobotmyRequestForm::~RobotmyRequestForm( void ) {};

//*---------------------------Member Function---------------------------------
void	RobotmyRequestForm::execute( const Bureaucrat& executor ) const {
	if ( this->getIsSigned() == false )
		throw AForm::NotSignedException();
	else if ( this->getGradeToExecute() < executor.getGrade() )
		throw AForm::GradeTooLowException();
	std::srand(time(0));
	int p = rand();
	if (p % 2 == 0)
		std::cout << "Drrrrrrrrrrrrrrrrrr " << _target << " has been robotomized😄" << std::endl;
	else
		std::cout << "robotomized failed😢" << std::endl;
};
