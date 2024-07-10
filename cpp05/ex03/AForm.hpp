#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private :
	AForm( void );
	const std::string	_name;
	bool				_isSigned;
	const size_t		_gradeToSign;
	const size_t		_gradeToExecute;

public :
//!------------------------Constructors & Operator----------------------------
	AForm( const AForm &src ) ;
	AForm	&operator=( const AForm &rhs ) ;
	AForm( const std::string& name, size_t gradeToSign, size_t gradeToExecute );
	virtual	~AForm( void );

//*---------------------------Member Function---------------------------------
	const std::string	getName( void ) const;
	bool				getIsSigned( void ) const;
	size_t				getGradeToSign( void ) const;
	size_t				getGradeToExecute( void ) const;
	void				beSigned( const Bureaucrat& writer );
	virtual void		execute( const Bureaucrat& executor ) const = 0;

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
	class NotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw (){ return "Form not signed";}
	} ;
} ;

//-------------------------------- Others -----------------------------------
std::ostream&	operator<<( std::ostream& o, const AForm& rhs );


// try and catch and throw
// when you use try & catch in your code, you can use throw
// if a condition in try is false, your code throw return value in throw and the catch part catches it.

#endif