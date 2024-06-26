#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>
#include <iostream>

class PhoneBook{
private:
	Contact	_contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void	usage(int i) const;
	void	add();
	void	search();
};

#endif