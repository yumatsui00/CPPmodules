#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

# define BEST 1
# define WORST 150

class Bureaucrat {
private :
	Bureaucrat( void ) {};
	const std::string	_name;
	size_t				_grade;
public :
	Bureaucrat( const std::string& Name, size_t grade );
	~Bureaucrat( void );
	//*-------------------member function-------------------------
	const std::string	getName( void ) const;
	size_t				getGrade( void ) const;
	void				upgrade();
	void				downgrade();
	//?---------------------   Class   --------------------------
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw (){ return "Grade too high"; }
	} ;
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw (){ return "Grade too low" }
	} ;

	//!---------------------unused Constructors-------------------------
	Bureaucrat( const Bureaucrat &src ) : _name(src._name), _grade(src._grade) {};
	Bureaucrat	&operator=( const Bureaucrat &rhs ) {
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
	};
} ;

//throw を用いることで、コンパイラに例外がないということを伝えることができ、コンパイラが最適化される。
//エラーが起こりえない時に使うといい？　

#endif