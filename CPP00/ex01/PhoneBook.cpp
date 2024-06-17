#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::usage(int i) const {
	std::cout << std::endl;
	if (i == 0)
		std::cout << "        ☎️  Your Awesome PhoneBook 😀" << std::endl;
	else {
		std::cout << " ===================USAGE====================" << std::endl;
		std::cout << " ||ADD    : To add a contact               ||" << std::endl;
		std::cout << " ||SEARCH : To search for a contact        ||" << std::endl;
		std::cout << " ||EXIT   : to close your awesome phonebook||" << std::endl;
		std::cout << " ============================================\n" << std::endl;
	}
}

void	PhoneBook::add() {
	static int	i;
	this->_contacts[i].init(i);
	i++;
	if (i == 8)
		i = 0;
}

void	PhoneBook::search() {
	bool	isvalid = false;
	std::string	tmp= "";
	int		input = -1;

	std::cout << "====================CONTACT====================" << std::endl;
	std::cout << "||ID        |First Name| Last Name| NickName ||" << std::endl;
	std::cout << "===============================================" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contacts[i].display(i);
	while (isvalid == false) {
		std::cout << "Please enter the Conact ID: " << std::flush;
		std::getline(std::cin, tmp);
		std::istringstream iss(tmp);
		if (!(iss >> input)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nInvalid ID. Please try again" << std::flush;
		}
		if (std::cin.good() && (input >= 0 && input <= 7)) {
			isvalid = true;
		} else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nInvalid ID. Please try again" << std::flush;
		}
		std::cout << std::endl;
	}
	this->_contacts[input].printallinfo(input);
}