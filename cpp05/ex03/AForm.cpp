#include "AForm.hpp"

//!------------------------Constructors & Operator----------------------------
AForm::AForm( void ) : _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {};

AForm::AForm( const std::string& name, size_t gradeToSign, size_t gradeToExecute ) :\
	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 0 || gradeToExecute < 0) {
		throw AForm::GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150) {
		throw AForm::GradeTooLowException();
	}
};

AForm::AForm( const AForm &src ) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {} ;

AForm&   AForm::operator=( const AForm& rhs ) {
	if ( this != &rhs )
        _isSigned = rhs.getIsSigned();
    return *this;
} ;

AForm::~AForm( void ) {};


//*--------------------------Member Function--------------------------------
const std::string	AForm::getName( void ) const {
	return _name;
}

bool	AForm::getIsSigned( void ) const {
	return _isSigned;
}

size_t	AForm::getGradeToSign( void ) const {
	return _gradeToSign;
}

size_t	AForm::getGradeToExecute( void ) const {
	return _gradeToExecute;
}

void	AForm::beSigned( const Bureaucrat& writer ) {
	if (_gradeToSign < writer.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	_isSigned = true;
}


//-------------------------------- Others -----------------------------------
std::ostream& operator<<( std::ostream& o, const AForm& rhs) {
	o 	<< "--- Form infomation ---" << std::endl
		<< "Form name    : " << rhs.getName() << std::endl
		<< "Grade to Sign: " << rhs.getGradeToSign() << std::endl
		<< "Grade to Exec: " << rhs.getGradeToExecute() << std::endl;
	if (rhs.getIsSigned())
		std::cout << "Sign is written down" << std::endl;
	else
		std::cout << "Sign is not written" << std::endl;
	return o;
}