#include "PhoneBook.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

std::string	Contact::_getInput(std::string str) const {
	std::string	input = "";
	bool			isvalid = false;

	while (isvalid == false) {
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			isvalid = true;
		else {
			std::cin.clear();
			std::cout << "Invalid input. Please try again!" << std::endl;
		}
	}
	return (input);
}

void	Contact::init(int i) {
	this->_firstName = _getInput("Enter your first name: ");
	this->_lastName = _getInput("Enter your last name: ");
	this->_nickName = _getInput("Enter your nickname: ");
	this->_phoneNumber = _getInput("Enter your phone number: ");
	this->_darkestSecret = _getInput("Enter your darkest secret: ");
	this->_index = i;
	std::cout << std::endl;
}

void	Contact::printer(std::string str) const {
	int	len, count;

	len = str.size();
	if (len <= 10) {
		for (count = 0; count < 10 - len; count ++) {
			std::cout << " ";
		}	std::cout << str << "|" << std::flush;
	} else {
		for (count = 0; count < 9; count ++) {
			std::cout << str[count];
		} std::cout << ".|" << std::flush;
	}
	return ;
}

void	Contact::display(int i) const {
	int	len;

	std::cout << "||         " << i << "|";
	printer(this->_firstName);
	printer(this->_lastName);
	printer(this->_nickName);
	std::cout << "|" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}

void	Contact::printallinfo(int i) {
	std::cout << " First Name: " << _firstName << std::endl;
	std::cout << " Last Name: " << _lastName << std::endl;
	std::cout << " NickName: " << _nickName << std::endl;
	std::cout << " Phone Number: " << _phoneNumber << std::endl;
	std::cout << " Darkest Secret: " << _darkestSecret << std::endl;
	std::cout << " ID: " << i << "\n" << std::endl;
}