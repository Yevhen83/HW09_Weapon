#include "Gun.h"

Gun::Gun():Weapon()
{
	this->_nameWeapon = "Gun";
	this->_cortridges = 9;
	this->_numberOfCortridges = 9;
	this->_trunkLength = 93;
	this->_damage = 12;

	cout << "Constructor: \t " << typeid(this).name() << endl;
}
Gun::~Gun()
{
	cout << "Destructor: \t " << typeid(this).name() << endl;
}

void Gun::Shoot()
{
	if (this->_numberOfCortridges == 0)this->Reloading();
	cout << "BANG!!" << endl;
	this->_numberOfCortridges--;
}

void Gun::Reloading()
{
	this->_numberOfCortridges = this->_cortridges;
	cout << "!!!!!!!!!!! Reloading: \t " << typeid(this).name() << endl;

}

string Gun::ShowWeapon()
{
	ss.str("");
	ss << "====================================\n"
		<< " NameWeapon:\t\t" << this->_nameWeapon << "\n Cortridges\t\t" << this->_cortridges
		<< "\n NumberOfCortridges\t" << this->_numberOfCortridges
		<< "\n TrunkLength\t\t" << this->_trunkLength
		<< "\n Damage:\t\t" << this->_damage
		<< "\n====================================\n";
	return ss.str();
}

int Gun::GetCortridges()
{
	return this->_cortridges;
}

int Gun::GetNumberOfCortridges()
{
	return this->_numberOfCortridges;
}

