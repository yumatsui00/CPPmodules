#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &dgobj);
	~WrongCat();
	WrongCat	&operator=(const WrongCat &wcobj);
	void		makeSound(void) const;
};

#endif