#include "Chainsaw.h"
Chainsaw::Chainsaw() 
{
	this->_nameWeapon = "Chainsaw";
	this->_trunkLength = 445;
	this->_damage = 50;

	cout << "Constructor: \t " << typeid(this).name() << endl;
}
Chainsaw::~Chainsaw()
{
	cout << "Destructor: \t " << typeid(this).name() << endl;
}
void Chainsaw::Shoot()
{
	cout << "VGGGGGGGGGUUH!!" << endl;
}
