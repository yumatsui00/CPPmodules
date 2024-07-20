#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
	std::cout << "____________case 1_____________" << std::endl;
	try {
		Bureaucrat	a("bureau1", 10);
		Form A("form1", 9);
		std::cout << a << std::endl;
		std::cout << A << std::endl;
		a.signForm(A);
		std::cout << "\nsigne done\n" << A << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}

	std::cout << "\n\n____________case 2_____________" << std::endl;
	try {
		Bureaucrat	b("bureau2", 10);
		Form B("form2", 11);
		std::cout << b << std::endl;
		std::cout << B << std::endl;
		b.signForm(B);
		std::cout << "\nsign done\n" << B << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}

	std::cout << "\n\n____________case 3_____________" << std::endl;
	try {
		Bureaucrat	c("bureau3", 1);
		Form C("form3", 0);
		std::cout << c << std::endl;
		std::cout << C << std::endl;
		c.signForm(C);
		std::cout << "\nsign done\n" << C << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}

	std::cout << "\n\n____________case 4_____________" << std::endl;
	try {
		Bureaucrat	d("bureau4", 150);
		Form D("form4", 151);
		std::cout << d << std::endl;
		std::cout << D << std::endl;
		d.signForm(D);
		std::cout << "\nsign done\n" << D << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}

	std::cout << "\n\n____________case 5_____________" << std::endl;
	try {
		Bureaucrat	e("bureau5", 10);
		Form E("form5", 9);
		std::cout << e << std::endl;
		std::cout << E << std::endl;
		e.signForm(E);
		e.upGrade();
		std::cout << "----------upgrade----------" << std::endl;
		e.signForm(E);
		std::cout << "\nsign done\n" << E << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what();
	}
}
