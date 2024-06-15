#include "PhoneBook.hpp"

int main(){
	PhoneBook	book;
	std::string	input = "";
	size_t			i = 0;

	book.usage(0);
	while (input.compare("EXIT")) {
		if (input.compare("ADD") == 0) {
			book.add();
		} else if (input.compare("SEARCH") == 0) {
			book.search();
		} else {
			if (i++)
				std::cout << "       Invalid Input. Please try again!" << std::flush;
			book.usage(1);
		}
		std::cout << " > "; 
		std::cin >> input;
	}
	return 0;
}