#include "Bureaucrat.hpp"

int main () {
	std::cout << "____________case 1_____________" << std::endl;
	try {
		Bureaucrat	a("No1", 1);
		std::cout << "constructer called" << std::endl;
		std::cout << a << std::endl;
		a.upGrade();
		std::cout << "Grade = 0?!?!" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}

	std::cout << "\n\n____________case 2_____________" << std::endl;
	try {
		Bureaucrat	b("No2", 0);
		std::cout << "Grade 0 construct done!?!?!?!" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}

	std::cout << "\n\n____________case 3_____________" << std::endl;
	try {
		Bureaucrat	c("No3", 150);
		std::cout << "constructer called" << std::endl;
		std::cout << c << std::endl;
		c.downGrade();
		std::cout << "Grade = 151?!?!" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	std::cout << "\n\n____________case 4_____________" << std::endl;
	try {
		Bureaucrat	d("No4", 151);
		std::cout << "Grade 151 construct done!?!?!?!" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}

	std::cout << "\n\n____________case 5_____________" << std::endl;
	try {
		Bureaucrat	e("No5", 100);
		std::cout << e << std::endl;
		e.upGrade();
		std::cout << e << std::endl;
		e.downGrade();
		std::cout << e << std:: endl;
		std::cout << "arrived here" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
		std::cout << "Do not come here!" << std::endl;
	}
}
