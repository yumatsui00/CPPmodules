#include "Weapon.hpp"

Weapon::Weapon( const std::string& initType ) {
	this->_type = initType;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() {
	return _type;
}

void	Weapon::setType(const std::string& newType ) {
	this->_type = newType;
}
