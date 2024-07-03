#include "ScavTrap.hpp"

int main( void )
{
	std::cout << "---constructor---" << std::endl;
    ScavTrap scav( "Scav" );

	std::cout << "\n---take action---" << std::endl;
    scav.attack( "The VILLAN" );
    scav.takeDamage( 50 );
    scav.beRepaired( 10 );
    scav.guardGate();

	std::cout << "\n---scav dies---" << std::endl;
	scav.takeDamage( 50 );
	scav.attack( "The VILLAN" );
    scav.takeDamage( 50 );
    scav.beRepaired( 10 );
    scav.guardGate();

	std::cout << "\n---destructor---" << std::endl;

	//! // another test for running out of EP

	// std::cout << "\n---test for running out of energy point---" << std::endl;
	// ScavTrap	scav2( "scav" );
	// for (int i = 0; i < 25; i++) {
	// 	scav2.attack("The Strong VILLAN");
	// 	scav2.beRepaired( 10 );
	// }
	// std::cout << "---50 energy point are used---" << std::endl;
	// scav2.attack( "The VILLAN" );
    // scav2.takeDamage( 50 );
    // scav2.beRepaired( 10 );
    // scav2.guardGate();
    return 0;
}