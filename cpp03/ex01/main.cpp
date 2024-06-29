#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap scav( "Scav" );

    scav.attack( "the VILLAN" );
    scav.takeDamage( 50 );
    scav.beRepaired( 10 );
    scav.guardGate();

    return 0;
}