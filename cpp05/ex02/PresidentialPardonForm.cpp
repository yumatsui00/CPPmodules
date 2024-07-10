#include "PresidentialPardonForm.hpp"

//!------------------------Constructors & Operator----------------------------
PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : AForm("PresidentialPardonForm", 25, 5), _target(target) {};

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src ) : AForm(src), _target(src._target) {};

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs ) {
	(void)rhs;
	return *this;
} ;

PresidentialPardonForm::~PresidentialPardonForm( void ) {};

//*---------------------------Member Function---------------------------------
void	PresidentialPardonForm::execute( const Bureaucrat& executor ) const {
	if ( this->getIsSigned() == false )
		throw AForm::NotSignedException();
	else if ( this->getGradeToExecute() < executor.getGrade() )
		throw AForm::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}