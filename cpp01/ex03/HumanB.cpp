#include "HumanB.hpp"

HumanB::HumanB( const std::string& name, Weapon* weapon )
	: _name(name), _weapon(weapon) {}

HumanB::~HumanB() {}

void	HumanB::attack() const {
	if (_weapon != nullptr)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with bare hands " << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	_weapon = &weapon;
}