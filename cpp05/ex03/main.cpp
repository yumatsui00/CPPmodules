#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main () {

	Intern Int;

	AForm *a;
	a = Int.makeForm("robotomy request", "target1");

	AForm *b;
	b = Int.makeForm("presidential pardon", "target2");

	AForm *c;
	c = Int.makeForm("shrubbery creation", "target3");

	AForm *d;
	d = Int.makeForm("Invalid", "mistake");

	delete a;
	delete b;
	delete c;
	delete d;
}
