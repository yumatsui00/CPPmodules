#include <iostream>

int	main() {
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "string = " << &string << std::endl;
	std::cout << "strPTR = " << stringPTR << std::endl;
	std::cout << "strREF = " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "string = " << string << std::endl;
	std::cout << "strPTR = " << *stringPTR << std::endl;
	std::cout << "strREF = " << stringREF << std::endl;
	return 0;
}

//refは基本的にNULLが入らない