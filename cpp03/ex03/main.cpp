#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << "---constructor---" << std::endl;
    DiamondTrap d( "Diamond" );

	std::cout << "\n---take action---" << std::endl;
    d.attack( "the VILLAN" );
    d.takeDamage( 50 );
    d.beRepaired( 10 );
	d.guardGate();
	d.highFive();
    d.whoAmI();

	std::cout << "\n---DiamondTrap dies---" << std::endl;
	d.takeDamage( 50 );
	d.attack( "The VILLAN" );
    d.takeDamage( 50 );
    d.beRepaired( 10 );
	d.guardGate();
    d.highFive();
	d.whoAmI();

	std::cout << "\n---destructor---" << std::endl;

	//! //another test for running out of EP

	// std::cout << "\n---test for running out of energy point---" << std::endl;
	// DiamondTrap	d2( "D2" );
	// for (int i = 0; i < 25; i++) {
	// 	d2.attack("The Strong VILLAN");
	// 	d2.beRepaired( 10 );
	// }
	// std::cout << "---50 energy point are used---" << std::endl;
	// d2.attack( "The VILLAN" );
    // d2.takeDamage( 50 );
    // d2.beRepaired( 10 );
	// d2.guardGate();
    // d2.highFive();
	// d2.whoAmI();

    return 0;
}