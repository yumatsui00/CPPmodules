#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

# define BEST 1
# define WORST 150

class AForm;

class Bureaucrat {
private :
	Bureaucrat( void );
	const std::string	_name;
	size_t				_grade;
public :
//!------------------------Constructors & Operator----------------------------
	Bureaucrat( const Bureaucrat &src ) ;
	Bureaucrat	&operator=( const Bureaucrat &rhs ) ;
	Bureaucrat( const std::string& Name, size_t grade );
	~Bureaucrat( void );

//*---------------------------Member Function---------------------------------=
	const std::string	getName( void ) const;
	size_t				getGrade( void ) const;
	void				upGrade( void );
	void				downGrade( void );
	void				signForm( AForm& src );
	void				executeForm( AForm const& src );

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
std::ostream&	operator<<( std::ostream& o, const Bureaucrat& rhs );


// try and catch and throw
// when you use try & catch in your code, you can use throw
// if a condition in try is false, your code throw return value in throw and the catch part catches it.

#endif