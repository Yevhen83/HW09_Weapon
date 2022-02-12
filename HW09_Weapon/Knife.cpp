#include "Knife.h"
Knife::Knife() :Weapon()
{
	this->_nameWeapon = "Knife";
	this->_trunkLength = 150;
	this->_damage = 5;

	cout << "Constructor: \t " << typeid(this).name() << endl;
}
Knife::~Knife()
{
	cout << "Destructor: \t " << typeid(this).name() << endl;
}

void Knife::Shoot()
{
	cout << "VGUUH!!" << endl;
}

void Knife::Reloading()
{
	cout << "!!!!!!!!!!! Sharpen: \t " << typeid(this).name() << endl;//Точить
}

string Knife::ShowWeapon()
{
	ss.str("");
	ss << "====================================\n"
		<< " NameWeapon:\t\t" << this->_nameWeapon 
		<< "\n KnifeLength\t\t" << this->_trunkLength
		<< "\n Damage:\t\t" << this->_damage
		<< "\n====================================\n";
	return ss.str();
}

int Knife::GetCortridges()
{
	return this->_cortridges;
}

int Knife::GetNumberOfCortridges()
{
	return this->_numberOfCortridges;
}

