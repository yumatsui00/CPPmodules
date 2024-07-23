#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>
#include <cstdlib>

int main() {
	Data	data;

	data.setStr("HELLO WORLD");
	std::cout << "data info" << std::endl;
	std::cout << "value   = " << data.getStr() << std::endl;
	std::cout << "address = " << &data << std::endl;


	uintptr_t ptr;

	std::cout << std::endl;
	ptr = Serializer::serialize(&data);
	std::cout << "---change done---" << std::endl;
	std::cout << "serialize ptr = " << ptr << std::endl;
	std::cout << std::endl;


	Data	*data2 = new Data;
	Data	*leaks = data2; //for leaks
	std::cout << "data2 before info" << std::endl;
	std::cout << "value   = " << data2->getStr() << std::endl;
	std::cout << "address = " << data2 << std::endl;

	data2 = Serializer::deserialize(ptr);
	std::cout << "data2 after info" << std::endl;
	std::cout << "value   = " << data2->getStr() << std::endl;
	std::cout << "address = " << data2 << std::endl;

	delete leaks;
}
