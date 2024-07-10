#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

//!------------------------Constructors & Operator----------------------------
RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45) {};

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : AForm("RobotomyRequestForm", 72, 45), _target(target) {};

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src ) : AForm(src), _target(src._target) {};

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs ) {
	(void)rhs;
	return *this;
} ;

RobotomyRequestForm::~RobotomyRequestForm( void ) {};

//*---------------------------Member Function---------------------------------
void	RobotomyRequestForm::execute( const Bureaucrat& executor ) const {
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
