#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		ScalarConverter::convert( std::string(argv[1]) );
	} else
		std::cout << "Provide ONE argument" << std::endl;
	return 0;
}
