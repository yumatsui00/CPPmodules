#include "PhoneBook.hpp"

int main(){
	PhoneBook book;
	std::string input = "";
	book.usage(0);
	while (input.compare("EXIT")) {
		if (input.compare("ADD") == 0) {
			book.add();
		} else if (input.compare("SEARCH") == 0) {
			book.search();
		}
		book.usage(1);
		std::cin >> input;
	}
}