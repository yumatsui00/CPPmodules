#include "PhoneBook.hpp"

void	PhoneBook::usage(int i) const {
	std::cout << std::endl;
	if (i == 0)
		std::cout << "☎️ Your Awesome PhoneBook 😀" << std::endl;
	std::cout << "----------USAGE----------" << std::endl;
	std::cout << "ADD : To add a contact" << std::endl;
	std::cout << "SEARCH : To search for a contact" << std::endl;
	std::cout << "EXIT : to close your awesome phonebook" << std::endl;
	std::cout << "-------------------------\n" << std::endl;
}

void	PhoneBook::add() {
	static int	i;
	this->_contacts[i].init();
	this->_contacts[i].setIndex(i);
	i++;
	if (i == 8)
		i = 0;
}