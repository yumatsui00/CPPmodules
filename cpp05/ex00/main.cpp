#include "ClapTrap.hpp"

int main () {
	std::cout << "---constructor---" << std::endl;
	ClapTrap	clap1("CLAP1");
	ClapTrap	clap2("CLAP2");
	ClapTrap	clap3("CLAP3");

	std::cout << "\n---case1: when clap doesn't die---" << std::endl;
	clap1.attack("The VILLAN");
	clap1.takeDamage(1);
	clap1.beRepaired(1);

	std::cout << "\n---case2: when clap dies---" << std::endl;
	clap2.takeDamage(10);
	clap2.attack("The VILLAN");
	clap2.takeDamage(1);
	clap2.beRepaired(1);

	std::cout << "\n---case3: when clap runs out of thier EP---" << std::endl;
	for (int i = 0; i < 5; i++) {
		clap3.attack("The VILLAN");
		clap3.beRepaired(1);
	}
	std::cout << "---10 energy point are used---" << std::endl;
	clap3.attack("The VILLAN");
	clap3.beRepaired(1);
	clap3.takeDamage(1);

	std::cout << "\n---destructor---" << std::endl;
}