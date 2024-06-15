#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	std::string	_index;
	std::string	_getInput(std::string	str) const;
public:
    Contact();
    ~Contact();
	void	init(int i);
	void	printer(std::string str) const;
	void	display(int i) const;
	void	printallinfo(int i);
};

# endif