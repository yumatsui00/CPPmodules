#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main () {

	std::cout << "___case1___" << std::endl;
	ShrubberyCreationForm A("target1");
	Bureaucrat a("a", 138);
	a.executeForm(A);
	a.signForm(A);
	a.executeForm(A);
	a.upGrade();
	a.executeForm(A);
	std::cout << "___case2___" << std::endl;
	RobotmyRequestForm B("target2");
	Bureaucrat b("b", 46);
	b.executeForm(B);
	b.signForm(B);
	b.executeForm(B);
	b.upGrade();
	b.executeForm(B);
	std::cout << "___case3___" << std::endl;
	PresidentialPardonForm C("target3");
	Bureaucrat c("c", 6);
	c.executeForm(C);
	c.signForm(C);
	c.executeForm(C);
	c.upGrade();
	c.executeForm(C);
}
