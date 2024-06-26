#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	std::string	_name;

public:
	Zombie();
	~Zombie();

	void	announce();
	void	setName( std::string name, size_t i );
};

Zombie	*zombieHorde( std::string name, int i);

#endif