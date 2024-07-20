#include "Form.hpp"

//!------------------------Constructors & Operator----------------------------
Form::Form( void ) : _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {};

Form::Form( const std::string& name, size_t gradeToSign ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(150) {
	if (gradeToSign < 1) {
		throw Form::GradeTooHighException();
	}
	if (gradeToSign > 150) {
		throw Form::GradeTooLowException();
	}
};

Form::Form( const Form &src ) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {} ;

Form&   Form::operator=( const Form& rhs ) {
	if ( this != &rhs )
        _isSigned = rhs.getIsSigned();
    return *this;
} ;

Form::~Form( void ) {};


//*--------------------------Member Function--------------------------------
const std::string	Form::getName( void ) const {
	return _name;
}

bool	Form::getIsSigned( void ) const {
	return _isSigned;
}

size_t	Form::getGradeToSign( void ) const {
	return _gradeToSign;
}

size_t	Form::getGradeToExecute( void ) const {
	return _gradeToExecute;
}

void	Form::beSigned( const Bureaucrat& writer ) {
	if (_gradeToSign < writer.getGrade()) {
		throw Form::GradeTooLowException();
	}
	_isSigned = true;
}


//-------------------------------- Others -----------------------------------
std::ostream& operator<<( std::ostream& o, const Form& rhs) {
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