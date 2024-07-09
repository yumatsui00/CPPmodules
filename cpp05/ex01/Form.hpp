#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private :
	Form( void );
	const std::string	_name;
	bool				_isSigned;
	const size_t		_gradeToSign;
	const size_t		_gradeToExecute;

public :
//!------------------------Constructors & Operator----------------------------
	Form( const Form &src ) ;
	Form	&operator=( const Form &rhs ) ;
	Form( const std::string& name, size_t gradeToSign );
	~Form( void );

//*---------------------------Member Function---------------------------------
	const std::string	getName( void ) const;
	bool				getIsSigned( void ) const;
	size_t				getGradeToSign( void ) const;
	size_t				getGradeToExecute( void ) const;
	void				beSigned( const Bureaucrat& src );

//?------------------------------   Class   -----------------------------------
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw (){ return "Grade too high"; }
	} ;
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw (){ return "Grade too low"; }
	} ;
} ;

//-------------------------------- Others -----------------------------------
std::ostream&	operator<<( std::ostream& o, const Form& rhs );


// try and catch and throw
// when you use try & catch in your code, you can use throw
// if a condition in try is false, your code throw return value in throw and the catch part catches it.

#endif