#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    FragTrap frag( "Frag" );

    frag.attack( "the VILLAN" );
    frag.takeDamage( 50 );
    frag.beRepaired( 10 );
    frag.highFive();

    return 0;
}