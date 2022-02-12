#include "Revolver.h"
Revolver::Revolver()
{
	this->_nameWeapon = "Revolver";
	this->_cortridges = 7;
	this->_numberOfCortridges = 7;
	this->_trunkLength = 102;
	this->_damage = 14;

	cout << "Constructor: \t " << typeid(this).name() << endl;
}
Revolver::~Revolver()
{
	cout << "Destructor: \t " << typeid(this).name() << endl;
}

