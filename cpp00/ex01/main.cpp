#include "PhoneBook.hpp"

int main(){
	PhoneBook	book;
	std::string	input = "";
	size_t		i = 0;

	std::cout << "        ☎️  Your Awesome PhoneBook 😀" << std::endl;
	while (input != "EXIT") {
		if (input == "ADD") {
			book.add();
		} else if (input == "SEARCH") {
			book.search();
		} else {
			if (i++)
				std::cout << "       Invalid Input. Please try again!" << std::flush;
			book.usage();
		}
		std::cout << " > ";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << "EXIT" << std::endl;
			break ;
		}
	}
	return 0;
}
