#include "Weapon.h"

Weapon::Weapon()
{
	this->_nameWeapon = " Empty ";
	this->_cortridges = 0;
	this->_numberOfCortridges = 0;
	this->_trunkLength = 0;
	this->_damage = 0;
	cout << "Constructor: \t " << typeid(this).name() << endl;

}

Weapon::~Weapon()
{
	cout << "Destructor: \t " << typeid(this).name() << endl;

}
