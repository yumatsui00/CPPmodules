#include "Harl.hpp"

int	main(int argc, char **argv){
	if (argc != 2)
	{
		std::cout << "Invalid Args: format: ./ex05 COMPLAIN" << std::endl;
		std::cout << "COMPLAIN can be ... \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\"" << std::endl;
		return 0;
	}
	Harl harl;
	std::string str = argv[1];
	harl.complain(str);
}
