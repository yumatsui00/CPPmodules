#include "Bureaucrat.hpp"

//!------------------------Constructors & Operator----------------------------
Bureaucrat::Bureaucrat( void ) {};

Bureaucrat::~Bureaucrat( void ) {} ;

Bureaucrat::Bureaucrat( const Bureaucrat &src ) : _name(src._name), _grade(src._grade) {};

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &rhs ) {
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
};

//add
Bureaucrat::Bureaucrat( const std::string &name, size_t grade ) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
} ;


//*--------------------------Member Function--------------------------------
const std::string	Bureaucrat::getName( void ) const {
	return _name;
};

size_t	Bureaucrat::getGrade( void ) const {
	return _grade;
};

void	Bureaucrat::upGrade( void ) {
	if (_grade -1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade --;
};

void	Bureaucrat::downGrade( void ) {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade ++;
};

void	Bureaucrat::signForm( Form& src ) {
	try {
		src.beSigned( *this );
		std::cout << *this << " signed " << src.getName() << std::endl;
	} catch (Form::GradeTooLowException &exception) {
		std::cout << _name << " couldn't sign " << src.getName() << " because " << exception.what() << std::endl;
	}
};


//-------------------------------- Others -----------------------------------
std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs) {
	o << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return o;
}