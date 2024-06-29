#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
	if (argc > 1) {
		for (size_t i = 1; i < (size_t)argc; ++i) {
			std::string	str = std::string(argv[i]);
			for (std::string::iterator t = str.begin(); t != str.end(); t++) {
				if (islower(*t))
					*t = std::toupper(*t);
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
