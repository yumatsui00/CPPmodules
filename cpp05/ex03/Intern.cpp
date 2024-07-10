#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

//!------------------------Constructors & Operator----------------------------
Intern::Intern( void ) {};

Intern::Intern( const Intern &src ) {
	(void)src;
};

Intern& Intern::operator=( const Intern &rhs ) {
	(void)rhs;
	return *this;
} ;

Intern::~Intern( void ) {};

//*--------------------------Member Function--------------------------------

AForm*	Intern::makeForm( std::string name, std::string target ) {
	std::string names[] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	} ;
	AForm*	forms[] = {
		new RobotomyRequestForm( target ),
		new PresidentialPardonForm( target ),
		new ShrubberyCreationForm( target )
	} ;

	for (int i(0); i < 3; i++ ) {
		if (name == names[i]) {
			std::cout << "Intern creats " << name << std::endl;
			return forms[i];
		}
	}
	std::cout << "Intern couldn't creat " << name << " form" << std::endl;
	return NULL;
}