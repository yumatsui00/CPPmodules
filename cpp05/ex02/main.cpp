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

}
