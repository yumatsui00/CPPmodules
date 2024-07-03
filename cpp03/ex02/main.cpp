#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	std::cout << "---constructor---" << std::endl;
    FragTrap frag( "Frag" );

	std::cout << "\n---take action---" << std::endl;
    frag.attack( "The VILLAN" );
    frag.takeDamage( 50 );
    frag.beRepaired( 10 );
    frag.highFive();

	std::cout << "\n---frag dies---" << std::endl;
	frag.takeDamage( 50 );
	frag.attack( "The VILLAN" );
    frag.takeDamage( 50 );
    frag.beRepaired( 10 );
    frag.highFive();

	std::cout << "\n---destructor---" << std::endl;

	//! //another test for running out of EP

	// std::cout << "\n---test for running out of energy point---" << std::endl;
	// FragTrap	frag2( "frag" );
	// for (int i = 0; i < 50; i++) {
	// 	frag2.attack("The Strong VILLAN");
	// 	frag2.beRepaired( 10 );
	// }
	// std::cout << "---100 energy point are used---" << std::endl;
	// frag2.attack( "The VILLAN" );
    // frag2.takeDamage( 50 );
    // frag2.beRepaired( 10 );
    // frag2.highFive();

    return 0;
}