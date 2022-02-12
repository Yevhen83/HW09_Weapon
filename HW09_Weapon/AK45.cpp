#include "AK45.h"

AK45::AK45()
{
	this->_nameWeapon = "AK45";
	this->_cortridges = 45;
	this->_numberOfCortridges = 45;
	this->_trunkLength = 415;
	this->_damage = 25;

	cout << "Constructor: \t " << typeid(this).name() << endl;

}
AK45::~AK45()
{
	cout << "Destructor: \t " << typeid(this).name() << endl;

}
