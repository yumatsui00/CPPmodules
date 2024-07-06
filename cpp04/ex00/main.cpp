#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	std::cout << "Animals Constructor" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n-----GET TYPE-----" << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

    std::cout << "\n--- makeSound ---" << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();

    std::cout << "\n--- delete ---" << std::endl;
    delete meta;
    delete dog;
    delete cat;

	std::cout << "\n\nWrong Animals Constructor" << std::endl;
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();

	std::cout << "\n-----GET TYPE-----" << std::endl;
	std::cout << w_meta->getType() << std::endl;
	std::cout << w_cat->getType() << std::endl;

	std::cout << "\n--- makeSound ---" << std::endl;
	w_meta->makeSound();
	w_cat->makeSound();

    std::cout << "\n--- delete ---" << std::endl;
    delete w_meta;
    delete w_cat;
	return 0;
}