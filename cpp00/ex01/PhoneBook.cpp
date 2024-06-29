#include "PhoneBook.hpp"
#include <sstream>
#include <string>
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::usage() const {
	std::cout << std::endl;
	std::cout << " ===================USAGE====================" << std::endl;
	std::cout << " ||ADD    : To add a contact               ||" << std::endl;
	std::cout << " ||SEARCH : To search for a contact        ||" << std::endl;
	std::cout << " ||EXIT   : to close your awesome phonebook||" << std::endl;
	std::cout << " ============================================" << std::endl;
	std::cout << std::endl;
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
	std::cout << "||  Index   |First Name| Last Name| NickName ||" << std::endl;
	std::cout << "===============================================" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contacts[i].display(i);
	while (isvalid == false) {
		std::cout << "Please enter the Conact ID: " << std::flush;
		std::getline(std::cin, tmp);
		if (std::cin.eof()) {
			std::cout << "\nEXIT" << std::endl;
			std::exit(0);
		}
		std::istringstream iss(tmp);
		if (!(iss >> input)) {
			std::cout << "\nInvalid ID. Please try again" << std::flush;
		} else if (std::cin.good() && (input >= 0 && input <= 7) && tmp.size() == 1) {
			isvalid = true;
		} else {
			std::cout << "\nInvalid ID. Please try again" << std::flush;
		}
		std::cout << std::endl;
	}
	this->_contacts[input].printallinfo(input);
}
