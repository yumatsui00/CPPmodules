#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	std::cout << "CONSTRUCTOR" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongAnimal();

	std::cout << "\n-----GET TYPE-----" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongi->getType() << " " << std::endl;
    std::cout << wrongmeta->getType() << " " << std::endl;

    std::cout << "--- makeSound ---" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
 
    j->makeSound();
    i->makeSound();
    meta->makeSound();
	wrongi->makeSound();
	wrongmeta->makeSound();

    std::cout << "--- delete ---" << std::endl;
    delete meta;
    delete j;
    delete i;
	delete wrongmeta;
	delete wrongi;
    return 0;

	return 0;
}