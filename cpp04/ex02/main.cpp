#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	std::cout << "---Animals Constructor---" << std::endl;
	// const AAnimal* animal = new AAnimal();
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << "\n---Animals destructor---" << std::endl;
	delete dog;
	delete cat;

	std::cout << "\n\n=====OPEN ZOO=====" << std::endl;
	const AAnimal* zoo[10];
	for (int i = 0; i < 5; i ++) {
		zoo[i] = new Dog();
	}
	for (int i = 5; i < 10; i ++) {
		zoo[i] = new Cat();
	}

	std::cout << "\n===CLOSE ZOO=====" << std::endl;
	for (int i = 0; i < 10; i ++) {
		delete zoo[i];
	}
	std::cout << "end" << std::endl;
	Dog basic;
	{
		Dog tmp;
		tmp = basic;
		std::cout << "copy finish" << std::endl;
	}

}
