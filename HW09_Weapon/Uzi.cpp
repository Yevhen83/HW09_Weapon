#include "Uzi.h"

Uzi::Uzi() :Weapon()
{
	this->_nameWeapon = "Uzi";
	this->_cortridges = 25;
	this->_numberOfCortridges = 25;
	this->_trunkLength = 115;
	this->_damage = 20;

	cout << "Constructor: \t " << typeid(this).name() << endl;
}
Uzi::~Uzi()
{
	cout << "Destructor: \t " << typeid(this).name() << endl;
}

void Uzi::Shoot()
{
	if (this->_numberOfCortridges == 0)this->Reloading();
	if (this->_numberOfCortridges >= 3) { cout << "BANG!!BANG!!BANG!!" << endl;	this->_numberOfCortridges -= 3; }
	else if (this->_numberOfCortridges == 2) { cout << "BANG!!BANG!!" << endl;	this->_numberOfCortridges -= 2; }
		else  { cout << "BANG!!" << endl;	this->_numberOfCortridges --; }
}

void Uzi::Reloading()
{
	this->_numberOfCortridges = this->_cortridges;
	cout << "!!!!!!!!!!! Reloading: \t " << typeid(this).name() << endl;
}

string Uzi::ShowWeapon()
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

int Uzi::GetCortridges()
{
	return this->_cortridges;
}

int Uzi::GetNumberOfCortridges()
{
	return this->_numberOfCortridges;
}

