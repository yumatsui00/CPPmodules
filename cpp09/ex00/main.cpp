#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	try {
		BitcoinExchange bit("data.csv");
		bit.analyze(argv[1]);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}

}